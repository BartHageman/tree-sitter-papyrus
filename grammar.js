/**
 * @file Scripting language for Bethesda games like Skyrim and Fallout
 * @author BartHageman
 * @license MIT
 *
 * Grammar targets a permissive superset of Skyrim and Fallout 4 Papyrus
 * as described at https://falloutck.uesp.net/wiki/Category:Papyrus_Language_Reference
 *
 * Keywords are case-insensitive. Newlines terminate statements.
 * Line continuation: a trailing '\' joins to the next physical line.
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// Case-insensitive keyword token. Higher prec than identifier.
// Aliased to a lowercase anonymous string node so queries can capture it
// by literal name (e.g. `"if" @keyword.conditional`).
function kw(word) {
  const pattern = word
    .split('')
    .map(c => /[a-zA-Z]/.test(c) ? `[${c.toLowerCase()}${c.toUpperCase()}]` : c)
    .join('');
  return alias(token(prec(2, new RegExp(pattern))), word.toLowerCase());
}

// Comma-separated list (>=1)
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

module.exports = grammar({
  name: "papyrus",

  // Whitespace / line-continuation / comments are skipped between tokens.
  // Newlines are NOT extras — they terminate statements.
  extras: $ => [
    /[ \t\r]/,             // \r is folded; \n still terminates statements
    /\\[ \t]*\r?\n/,       // line continuation (tolerates trailing ws after \)
    $.line_comment,
    $.block_comment,
  ],

  word: $ => $.identifier,

  externals: $ => [$._nl],

  conflicts: $ => [
    // Native functions/events have no body — disambiguate via GLR.
    [$.function_definition],
    [$.event_definition],
    // `Foo[…]` can start a type (variable decl with array marker)
    // or an indexed-expression statement. `[]` means type, `[expr]` means index.
    [$._identifier_or_qualified, $._expression],
    [$.type],
    // A docstring after a header/property/struct_member/etc. can attach
    // to that item or be a free-floating top-level docstring.
    [$.script_header],
    [$.struct_member],
    [$.auto_property],
    [$.auto_readonly_property],
    [$.group_definition],
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.script_header,
      $._top_level_item,
      $.docstring,
      $._nl,
    )),

    // ---------- Lexical ----------

    // Line comment: ';' followed by zero or more non-newline chars.
    // Lower prec than block_comment so ';/' starts a block, not a line comment.
    line_comment: _ => token(prec(-1, /;[^\n\r]*/)),
    block_comment: _ => token(seq(';/', /[^/]*\/+([^;/][^/]*\/+)*/, ';')),

    docstring: _ => token(seq('{', /[^}]*/, '}')),

    identifier: _ => /[A-Za-z_][A-Za-z0-9_]*/,

    // namespaced identifier (e.g. MyMod:Utility:MyScript). At least one ':'
    // is required so it doesn't shadow a bare identifier.
    qualified_identifier: $ => prec.right(seq(
      $.identifier,
      repeat1(seq(':', $.identifier)),
    )),

    // Used wherever either form is acceptable (type names, script names).
    _identifier_or_qualified: $ => choice($.identifier, $.qualified_identifier),

    // ---------- Literals ----------

    none_literal:   _ => kw('None'),
    bool_literal:   _ => choice(kw('true'), kw('false')),

    int_literal:    _ => token(choice(
      /0[xX][0-9A-Fa-f]+/,
      /[0-9]+/,
    )),

    float_literal:  _ => token(/[0-9]+\.[0-9]+[fF]?/),

    string_literal: $ => seq(
      '"',
      repeat(choice(
        $.escape_sequence,
        /[^"\\\n\r]/,
      )),
      '"',
    ),

    escape_sequence: _ => token.immediate(/\\[ntr"\\]/),

    _literal: $ => choice(
      $.none_literal,
      $.bool_literal,
      $.float_literal,
      $.int_literal,
      $.string_literal,
    ),

    // ---------- Types ----------

    _builtin_type: _ => choice(
      kw('Bool'), kw('Int'), kw('Float'), kw('String'), kw('Var'),
    ),

    type: $ => seq(
      choice(
        alias($._builtin_type, $.builtin_type),
        $._identifier_or_qualified,
      ),
      optional($.array_marker),
    ),

    array_marker: _ => seq('[', ']'),

    // ---------- Flags (kept permissive; any of these tokens) ----------

    // Note: Auto / AutoReadOnly are property-kind markers, not flags.
    flag: _ => choice(
      kw('Native'), kw('Global'),
      kw('Const'), kw('Hidden'), kw('Conditional'),
      kw('DebugOnly'), kw('BetaOnly'),
      kw('Default'), kw('Mandatory'),
      kw('CollapsedOnRef'), kw('CollapsedOnBase'), kw('Collapsed'),
    ),

    _flags: $ => repeat1($.flag),

    // ---------- Script header ----------

    script_header: $ => seq(
      kw('ScriptName'),
      field('name', $._identifier_or_qualified),
      optional(seq(kw('Extends'), field('parent', $._identifier_or_qualified))),
      optional($._flags),
      $._nl,
      optional(seq($.docstring, $._nl)),
    ),

    // ---------- Top-level items ----------

    _top_level_item: $ => choice(
      $.import_statement,
      $.variable_definition,
      $.struct_definition,
      $.custom_event_definition,
      $.property_definition,
      $.auto_property,
      $.auto_readonly_property,
      $.group_definition,
      $.state_definition,
      $.function_definition,
      $.event_definition,
    ),

    import_statement: $ => seq(
      kw('Import'), field('module', $._identifier_or_qualified), $._nl,
    ),

    // ---------- Variable (script-scope) ----------

    variable_definition: $ => seq(
      field('type', $.type),
      field('name', $.identifier),
      optional(seq('=', field('value', $._literal_expression))),
      optional($._flags),
      $._nl,
    ),

    // A constant expression for initializers (script-scope, struct, params).
    // Permissive: allow signed literals.
    _literal_expression: $ => choice(
      $._literal,
      seq('-', $.int_literal),
      seq('-', $.float_literal),
    ),

    // ---------- Struct ----------

    struct_definition: $ => seq(
      kw('Struct'),
      field('name', $.identifier),
      $._nl,
      repeat(choice($.struct_member, $.docstring, $._nl)),
      kw('EndStruct'),
      $._nl,
    ),

    struct_member: $ => seq(
      field('type', $.type),
      field('name', $.identifier),
      optional(seq('=', field('value', $._literal_expression))),
      optional($._flags),
      $._nl,
      optional(seq($.docstring, $._nl)),
    ),

    // ---------- CustomEvent ----------

    custom_event_definition: $ => seq(
      kw('CustomEvent'), field('name', $.identifier), $._nl,
    ),

    // ---------- Properties ----------

    property_definition: $ => seq(
      field('type', $.type),
      kw('Property'),
      field('name', $.identifier),
      optional($._flags),
      $._nl,
      optional(seq($.docstring, $._nl)),
      repeat(choice($.function_definition, $._nl)),
      kw('EndProperty'),
      $._nl,
    ),

    auto_property: $ => seq(
      field('type', $.type),
      kw('Property'),
      field('name', $.identifier),
      optional(seq('=', field('value', $._literal_expression))),
      optional($._flags),
      kw('Auto'),
      optional($._flags),
      $._nl,
      optional(seq($.docstring, $._nl)),
    ),

    auto_readonly_property: $ => seq(
      field('type', $.type),
      kw('Property'),
      field('name', $.identifier),
      '=',
      field('value', $._literal_expression),
      optional($._flags),
      kw('AutoReadOnly'),
      optional($._flags),
      $._nl,
      optional(seq($.docstring, $._nl)),
    ),

    // ---------- Group ----------

    group_definition: $ => seq(
      kw('Group'),
      field('name', $.identifier),
      optional($._flags),
      $._nl,
      optional(seq($.docstring, $._nl)),
      repeat(choice(
        $.property_definition,
        $.auto_property,
        $.auto_readonly_property,
        $.docstring,
        $._nl,
      )),
      kw('EndGroup'),
      $._nl,
    ),

    // ---------- State ----------

    state_definition: $ => seq(
      optional(kw('Auto')),
      kw('State'),
      field('name', $.identifier),
      $._nl,
      repeat(choice(
        $.function_definition,
        $.event_definition,
        $._nl,
      )),
      kw('EndState'),
      $._nl,
    ),

    // ---------- Function ----------

    function_definition: $ => seq(
      field('return_type', optional($.type)),
      kw('Function'),
      field('name', $.identifier),
      '(', field('parameters', optional($.parameter_list)), ')',
      optional($._flags),
      $._nl,
      optional(seq($.docstring, $._nl)),
      // Native functions have no body; non-native have body + EndFunction.
      // Make body+EndFunction optional to support native.
      optional(seq(
        repeat(choice($._statement, $.docstring, $._nl)),
        kw('EndFunction'),
        $._nl,
      )),
    ),

    parameter_list: $ => commaSep1($.parameter),

    parameter: $ => seq(
      field('type', $.type),
      field('name', $.identifier),
      optional(seq('=', field('default', $._literal_expression))),
    ),

    // ---------- Event ----------

    event_definition: $ => seq(
      kw('Event'),
      // Remote/custom event: <Type> '.' <name>
      choice(
        seq(field('owner', $._identifier_or_qualified), '.', field('name', $.identifier)),
        field('name', $.identifier),
      ),
      '(', field('parameters', optional($.parameter_list)), ')',
      optional($._flags),
      $._nl,
      optional(seq($.docstring, $._nl)),
      optional(seq(
        repeat(choice($._statement, $._nl)),
        kw('EndEvent'),
        $._nl,
      )),
    ),

    // ---------- Statements ----------

    _statement: $ => choice(
      $.if_statement,
      $.while_statement,
      $.return_statement,
      $.variable_declaration,
      $.assignment_statement,
      $.expression_statement,
    ),

    variable_declaration: $ => seq(
      field('type', $.type),
      field('name', $.identifier),
      optional(seq('=', field('value', $._expression))),
      optional($._flags),
      $._nl,
    ),

    assignment_statement: $ => seq(
      field('left', $._lvalue),
      field('operator', choice('=', '+=', '-=', '*=', '/=', '%=')),
      field('right', $._expression),
      $._nl,
    ),

    expression_statement: $ => seq($._expression, $._nl),

    return_statement: $ => seq(
      kw('Return'),
      optional($._expression),
      $._nl,
    ),

    if_statement: $ => seq(
      kw('If'),
      field('condition', $._expression),
      $._nl,
      repeat(choice($._statement, $._nl)),
      repeat($.elseif_clause),
      optional($.else_clause),
      kw('EndIf'),
      $._nl,
    ),

    elseif_clause: $ => seq(
      kw('ElseIf'),
      field('condition', $._expression),
      $._nl,
      repeat(choice($._statement, $._nl)),
    ),

    else_clause: $ => seq(
      kw('Else'),
      $._nl,
      repeat(choice($._statement, $._nl)),
    ),

    while_statement: $ => seq(
      kw('While'),
      field('condition', $._expression),
      $._nl,
      repeat(choice($._statement, $._nl)),
      kw('EndWhile'),
      $._nl,
    ),

    // ---------- L-values ----------
    // Distinguished primarily by appearing on the LHS of an assignment.
    // Permissive: any postfix-chain expression that ends with a member access
    // or an index is an l-value; bare identifier too.
    _lvalue: $ => prec(1, choice(
      $.identifier,
      $.member_access,
      $.index_expression,
    )),

    // ---------- Expressions ----------

    _expression: $ => choice(
      $.binary_expression,
      $.unary_expression,
      $.cast_expression,
      $.is_expression,
      $.call_expression,
      $.member_access,
      $.index_expression,
      $.new_expression,
      $.parenthesized_expression,
      $.identifier,
      $.qualified_identifier,
      $._literal,
      $.self_expression,
      $.parent_expression,
    ),

    self_expression:   _ => kw('Self'),
    parent_expression: _ => kw('Parent'),

    parenthesized_expression: $ => seq('(', $._expression, ')'),

    new_expression: $ => prec.right(seq(
      kw('New'),
      field('type', choice(alias($._builtin_type, $.builtin_type), $._identifier_or_qualified)),
      optional(seq('[', field('size', $._expression), ']')),
    )),

    // Member access: <expr> '.' <identifier>
    member_access: $ => prec.left(8, seq(
      field('object', $._expression),
      '.',
      field('member', choice($.identifier, alias(kw('Length'), $.identifier))),
    )),

    // Index: <expr> '[' <expr> ']'
    index_expression: $ => prec.left(8, seq(
      field('object', $._expression),
      '[', field('index', $._expression), ']',
    )),

    // Call: <expr>(args)   -- left of '(' must be id or member_access
    call_expression: $ => prec.left(8, seq(
      field('callee', choice($.identifier, $.member_access)),
      '(', field('arguments', optional($.argument_list)), ')',
    )),

    argument_list: $ => commaSep1($.argument),
    argument: $ => seq(
      optional(seq(field('name', $.identifier), '=')),
      field('value', $._expression),
    ),

    // Cast: <expr> 'as' <type>
    cast_expression: $ => prec.left(7, seq(
      field('value', $._expression),
      kw('As'),
      field('type', $.type),
    )),

    // Type check: <expr> 'is' <type>
    is_expression: $ => prec.left(7, seq(
      field('value', $._expression),
      kw('Is'),
      field('type', $.type),
    )),

    unary_expression: $ => prec.right(6, seq(
      field('operator', choice('-', '!')),
      field('argument', $._expression),
    )),

    binary_expression: $ => {
      const table = [
        ['||', 1],
        ['&&', 2],
        ['==', 3], ['!=', 3], ['<', 3], ['>', 3], ['<=', 3], ['>=', 3],
        ['+', 4], ['-', 4],
        ['*', 5], ['/', 5], ['%', 5],
      ];
      return choice(...table.map(([op, p]) =>
        prec.left(p, seq(
          field('left', $._expression),
          field('operator', op),
          field('right', $._expression),
        ))
      ));
    },
  }
});
