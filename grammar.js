module.exports = grammar({
  name: 'Papyrus',
  "extras": $ => [' ', '\t', '\\'],
  rules: {
    "source_file": $ => seq(
      repeat(/\r?\n/),
      $.header,
      repeat(
        seq(
          repeat(/\r?\n/),
          choice(
            $.script_variable,
            $.import,
            $.function,
            // TODO: Add more
          ),
          )
      ),
      repeat(/\r?\n/),
    ),
    "header": $ => seq(
      caseInsensitive("ScriptName"),
      $.identifier,
      optional(
        seq(
          caseInsensitive("extends"),
          $.identifier
        )
      ),
      repeat($.scriptflag),
      /\r?\n/
    ),
    "import": $ => seq(caseInsensitive("import"), $.identifier),
    "varflag": $ => choice(
        caseInsensitive("Conditional"),
        caseInsensitive("Const"),
        caseInsensitive("Hidden"),
    ),
    "scriptflag": $ => choice(
        caseInsensitive("Conditional"),
        caseInsensitive("Const"),
        caseInsensitive("DebugOnly"),
        caseInsensitive("BetaOnly"),
        caseInsensitive("Hidden"),
        caseInsensitive("Native"),
        caseInsensitive("Default"),
    ),
    "functionflag": $ => choice(
        caseInsensitive("Native"),
        caseInsensitive("Global"),
    ),
    "int": $ => /[0-9]+/,
    "float": $ => /[0-9]+(\.[0-9]+)?/,
    "string": $ => /".*"/,
    "bool": $ => choice(caseInsensitive("true"), caseInsensitive("false")),
    "type": $ => seq(
      alias($.identifier, "type"),
      optional("[]")
    ),
    "function_header": $ => seq(
      optional($.type),
      caseInsensitive("function"),
      $.identifier,
      "(",
      $.parameters,
      ")",
      repeat($.functionflag),
      /\r?\n/
    ),
    "parameters": $ => seq(
      $.parameter,
      repeat(
        seq(
          ",",
          $.parameter
        )
      )
    ),
    "parameter": $ => seq(
        $.type,
        $.identifier,
        optional(seq("=", $.constant))
    ),
    "function": $ => seq(
      $.function_header,
      //repeat($.statement), // TODO: statements
      caseInsensitive("endfunction")
    ),
    "statement": $ => seq("", /\r?\n/), // TODO: Write statement parser
    "script_variable": $ => seq(
      $.type,
      $.identifier,
      optional(seq('=', $.constant)),
      repeat($.varflag),
      ),
      "constant": $ => choice(
        $.int,
        $.float,
        $.string,
        $.bool,
    ),
    "identifier": $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
  }
});
function toCaseInsensitive(a) {
  var ca = a.charCodeAt(0);
  if (ca>=97 && ca<=122) return `[${a}${a.toUpperCase()}]`;
  if (ca>=65 && ca<= 90) return `[${a.toLowerCase()}${a}]`;
  return a;
}

function caseInsensitive (keyword) {
  return new RegExp(keyword
    .split('')
    .map(toCaseInsensitive)
    .join('')
  )
}
