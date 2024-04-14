module.exports = grammar({
  name: 'Papyrus',
  "extras": $ => [' ', '\t'],
  rules: {
    "source_file": $ => seq(
      repeat(/\r?\n/),
      $.header,
      repeat(
        seq(
          repeat(/\r?\n/),
          choice(
            $.variable_definition,
            $.import,
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
    "identifier": $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    "scriptflag": $ => choice(
        caseInsensitive("Conditional"),
        caseInsensitive("Const"),
        caseInsensitive("DebugOnly"),
        caseInsensitive("BetaOnly"),
        caseInsensitive("Hidden"),
        caseInsensitive("Native"),
        caseInsensitive("Default"),
    ),
    "type": $ => seq(
      alias($.identifier, "type"),
      optional("[]")
    ),
    "variable_definition": $ => seq(
      $.type,
      $.identifier,
      optional(seq('=', $.constant)),
      //repeat($.varflag)
      ),
    "varflag": $ => choice(
        caseInsensitive("Conditional"),
        caseInsensitive("Const"),
        caseInsensitive("Hidden"),
    ),
      "constant": $ => choice(
        $.number,
        $.string,
        $.boolean,
    )
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
