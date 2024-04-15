#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 1
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  sym_identifier = 1,
  aux_sym_source_file_token1 = 2,
  aux_sym_header_token1 = 3,
  aux_sym_header_token2 = 4,
  aux_sym_import_token1 = 5,
  aux_sym_varflag_token1 = 6,
  aux_sym_varflag_token2 = 7,
  aux_sym_varflag_token3 = 8,
  aux_sym_scriptflag_token1 = 9,
  aux_sym_scriptflag_token2 = 10,
  aux_sym_scriptflag_token3 = 11,
  aux_sym_scriptflag_token4 = 12,
  aux_sym_functionflag_token1 = 13,
  sym_integer = 14,
  sym_float = 15,
  sym_string = 16,
  aux_sym_boolean_token1 = 17,
  aux_sym_boolean_token2 = 18,
  sym_none = 19,
  anon_sym_LBRACK_RBRACK = 20,
  aux_sym_function_header_token1 = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_COMMA = 24,
  anon_sym_EQ = 25,
  aux_sym_function_token1 = 26,
  aux_sym__expression_token1 = 27,
  aux_sym_new_expression_token1 = 28,
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  anon_sym_DOT = 31,
  aux_sym_cast_expression_token1 = 32,
  anon_sym_DASH = 33,
  anon_sym_BANG = 34,
  anon_sym_PIPE_PIPE = 35,
  anon_sym_AMP_AMP = 36,
  anon_sym_LT = 37,
  anon_sym_GT = 38,
  anon_sym_LT_EQ = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_EQ_EQ = 41,
  anon_sym_BANG_EQ = 42,
  anon_sym_PLUS = 43,
  anon_sym_STAR = 44,
  anon_sym_SLASH = 45,
  anon_sym_PERCENT = 46,
  sym_source_file = 47,
  sym_header = 48,
  sym_import = 49,
  sym_varflag = 50,
  sym_scriptflag = 51,
  sym_functionflag = 52,
  sym_boolean = 53,
  sym_type = 54,
  sym_function_header = 55,
  sym_parameters = 56,
  sym_parameter = 57,
  sym_function = 58,
  sym_statement = 59,
  sym_script_variable = 60,
  sym_constant = 61,
  sym__expression = 62,
  sym_parenthesized_expression = 63,
  sym_new_expression = 64,
  sym_array_expression = 65,
  sym_function_call = 66,
  sym_call_parameters = 67,
  sym_call_parameter = 68,
  sym_dot_expression = 69,
  sym_cast_expression = 70,
  sym_unary_expression = 71,
  sym_binary_expression = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym_source_file_repeat2 = 74,
  aux_sym_header_repeat1 = 75,
  aux_sym_function_header_repeat1 = 76,
  aux_sym_parameters_repeat1 = 77,
  aux_sym_function_repeat1 = 78,
  aux_sym_script_variable_repeat1 = 79,
  aux_sym_call_parameters_repeat1 = 80,
  anon_alias_sym_type = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_header_token1] = "header_token1",
  [aux_sym_header_token2] = "header_token2",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_varflag_token1] = "varflag_token1",
  [aux_sym_varflag_token2] = "varflag_token2",
  [aux_sym_varflag_token3] = "varflag_token3",
  [aux_sym_scriptflag_token1] = "scriptflag_token1",
  [aux_sym_scriptflag_token2] = "scriptflag_token2",
  [aux_sym_scriptflag_token3] = "scriptflag_token3",
  [aux_sym_scriptflag_token4] = "scriptflag_token4",
  [aux_sym_functionflag_token1] = "functionflag_token1",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_string] = "string",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [sym_none] = "none",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [aux_sym_function_header_token1] = "function_header_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [aux_sym_function_token1] = "function_token1",
  [aux_sym__expression_token1] = "_expression_token1",
  [aux_sym_new_expression_token1] = "new_expression_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [aux_sym_cast_expression_token1] = "cast_expression_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_import] = "import",
  [sym_varflag] = "varflag",
  [sym_scriptflag] = "scriptflag",
  [sym_functionflag] = "functionflag",
  [sym_boolean] = "boolean",
  [sym_type] = "type",
  [sym_function_header] = "function_header",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_function] = "function",
  [sym_statement] = "statement",
  [sym_script_variable] = "script_variable",
  [sym_constant] = "constant",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_new_expression] = "new_expression",
  [sym_array_expression] = "array_expression",
  [sym_function_call] = "function_call",
  [sym_call_parameters] = "call_parameters",
  [sym_call_parameter] = "call_parameter",
  [sym_dot_expression] = "dot_expression",
  [sym_cast_expression] = "cast_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_function_header_repeat1] = "function_header_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_script_variable_repeat1] = "script_variable_repeat1",
  [aux_sym_call_parameters_repeat1] = "call_parameters_repeat1",
  [anon_alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [aux_sym_header_token2] = aux_sym_header_token2,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [aux_sym_varflag_token1] = aux_sym_varflag_token1,
  [aux_sym_varflag_token2] = aux_sym_varflag_token2,
  [aux_sym_varflag_token3] = aux_sym_varflag_token3,
  [aux_sym_scriptflag_token1] = aux_sym_scriptflag_token1,
  [aux_sym_scriptflag_token2] = aux_sym_scriptflag_token2,
  [aux_sym_scriptflag_token3] = aux_sym_scriptflag_token3,
  [aux_sym_scriptflag_token4] = aux_sym_scriptflag_token4,
  [aux_sym_functionflag_token1] = aux_sym_functionflag_token1,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [sym_none] = sym_none,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [aux_sym_function_header_token1] = aux_sym_function_header_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_function_token1] = aux_sym_function_token1,
  [aux_sym__expression_token1] = aux_sym__expression_token1,
  [aux_sym_new_expression_token1] = aux_sym_new_expression_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_cast_expression_token1] = aux_sym_cast_expression_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_import] = sym_import,
  [sym_varflag] = sym_varflag,
  [sym_scriptflag] = sym_scriptflag,
  [sym_functionflag] = sym_functionflag,
  [sym_boolean] = sym_boolean,
  [sym_type] = sym_type,
  [sym_function_header] = sym_function_header,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_function] = sym_function,
  [sym_statement] = sym_statement,
  [sym_script_variable] = sym_script_variable,
  [sym_constant] = sym_constant,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_new_expression] = sym_new_expression,
  [sym_array_expression] = sym_array_expression,
  [sym_function_call] = sym_function_call,
  [sym_call_parameters] = sym_call_parameters,
  [sym_call_parameter] = sym_call_parameter,
  [sym_dot_expression] = sym_dot_expression,
  [sym_cast_expression] = sym_cast_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_function_header_repeat1] = aux_sym_function_header_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_script_variable_repeat1] = aux_sym_script_variable_repeat1,
  [aux_sym_call_parameters_repeat1] = aux_sym_call_parameters_repeat1,
  [anon_alias_sym_type] = anon_alias_sym_type,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varflag_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varflag_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varflag_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scriptflag_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scriptflag_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scriptflag_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scriptflag_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functionflag_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_header_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_new_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cast_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_varflag] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptflag] = {
    .visible = true,
    .named = true,
  },
  [sym_functionflag] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_header] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_script_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_new_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_call_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_call_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_type] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_type,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '|') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == '|') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '\\') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 10:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 11:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '|') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(21);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(7);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(8);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(9);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(10);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(12);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 2:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_cast_expression_token1);
      END_STATE();
    case 17:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_new_expression_token1);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 63:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 65:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 67:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_varflag_token2);
      END_STATE();
    case 70:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_functionflag_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_varflag_token3);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_scriptflag_token3);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 95:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_scriptflag_token4);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_header_token2);
      END_STATE();
    case 101:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_scriptflag_token2);
      END_STATE();
    case 104:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 105:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_function_header_token1);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_scriptflag_token1);
      END_STATE();
    case 111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_header_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_varflag_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_function_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [aux_sym_header_token1] = ACTIONS(1),
    [aux_sym_header_token2] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(1),
    [aux_sym_varflag_token1] = ACTIONS(1),
    [aux_sym_varflag_token2] = ACTIONS(1),
    [aux_sym_varflag_token3] = ACTIONS(1),
    [aux_sym_scriptflag_token1] = ACTIONS(1),
    [aux_sym_scriptflag_token2] = ACTIONS(1),
    [aux_sym_scriptflag_token3] = ACTIONS(1),
    [aux_sym_scriptflag_token4] = ACTIONS(1),
    [aux_sym_functionflag_token1] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [aux_sym_function_header_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_function_token1] = ACTIONS(1),
    [aux_sym__expression_token1] = ACTIONS(1),
    [aux_sym_new_expression_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_cast_expression_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(115),
    [sym_header] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(85),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [aux_sym_header_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(9), 9,
      aux_sym_import_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_function_header_token1,
      aux_sym_cast_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(7), 19,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [33] = 2,
    ACTIONS(13), 9,
      aux_sym_import_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_function_header_token1,
      aux_sym_cast_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(11), 19,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [66] = 12,
    ACTIONS(18), 1,
      aux_sym_source_file_token1,
    ACTIONS(24), 1,
      sym_string,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_function_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(15), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(27), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(38), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(4), 2,
      sym_statement,
      aux_sym_function_repeat1,
    ACTIONS(21), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(35), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [118] = 12,
    ACTIONS(43), 1,
      aux_sym_source_file_token1,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      aux_sym_function_token1,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(41), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(6), 2,
      sym_statement,
      aux_sym_function_repeat1,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(35), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [170] = 12,
    ACTIONS(43), 1,
      aux_sym_source_file_token1,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    ACTIONS(59), 1,
      aux_sym_function_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(41), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(4), 2,
      sym_statement,
      aux_sym_function_repeat1,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(35), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [222] = 13,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 1,
      aux_sym__expression_token1,
    STATE(2), 1,
      sym_boolean,
    STATE(87), 1,
      sym_call_parameter,
    STATE(104), 1,
      sym_call_parameters,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(33), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [275] = 3,
    ACTIONS(71), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(67), 6,
      aux_sym_function_header_token1,
      anon_sym_LBRACK,
      aux_sym_cast_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(69), 17,
      aux_sym_source_file_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [306] = 11,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym__expression_token1,
    STATE(2), 1,
      sym_boolean,
    STATE(96), 1,
      sym_call_parameter,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(33), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [353] = 9,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(73), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(31), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [395] = 9,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(75), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(29), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [437] = 9,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(77), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(21), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [479] = 9,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(79), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(30), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [521] = 9,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(81), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(26), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [563] = 9,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(83), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(37), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [605] = 9,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(85), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(27), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [647] = 9,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(87), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(34), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [689] = 2,
    ACTIONS(89), 5,
      aux_sym_function_header_token1,
      aux_sym_cast_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(91), 18,
      aux_sym_source_file_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [717] = 9,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_new_expression_token1,
    STATE(2), 1,
      sym_boolean,
    ACTIONS(49), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(93), 2,
      aux_sym__expression_token1,
      sym_identifier,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_none,
    STATE(36), 10,
      sym_constant,
      sym__expression,
      sym_parenthesized_expression,
      sym_new_expression,
      sym_array_expression,
      sym_function_call,
      sym_dot_expression,
      sym_cast_expression,
      sym_unary_expression,
      sym_binary_expression,
  [759] = 2,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 19,
      aux_sym_source_file_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      aux_sym_cast_expression_token1,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [785] = 9,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(109), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 6,
      aux_sym_source_file_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [825] = 2,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 19,
      aux_sym_source_file_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      aux_sym_cast_expression_token1,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [851] = 2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 19,
      aux_sym_source_file_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      aux_sym_cast_expression_token1,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [877] = 2,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 19,
      aux_sym_source_file_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      aux_sym_cast_expression_token1,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [903] = 2,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 19,
      aux_sym_source_file_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      aux_sym_cast_expression_token1,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [929] = 4,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 17,
      aux_sym_source_file_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
      aux_sym_cast_expression_token1,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [959] = 6,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 15,
      aux_sym_source_file_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [993] = 2,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 19,
      aux_sym_source_file_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      aux_sym_cast_expression_token1,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1019] = 8,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(109), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(99), 10,
      aux_sym_source_file_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1057] = 7,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(99), 12,
      aux_sym_source_file_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
  [1093] = 6,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 15,
      aux_sym_source_file_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1127] = 3,
    ACTIONS(149), 1,
      anon_sym_EQ,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym_cast_expression_token1,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1154] = 10,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(109), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(155), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(115), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1194] = 10,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(109), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(157), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(115), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1234] = 10,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(159), 1,
      aux_sym_source_file_token1,
    ACTIONS(109), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(115), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1273] = 10,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(115), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1312] = 10,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(115), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1351] = 2,
    ACTIONS(167), 5,
      aux_sym_source_file_token1,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(165), 9,
      sym_integer,
      sym_float,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_none,
      aux_sym_function_token1,
      aux_sym__expression_token1,
      aux_sym_new_expression_token1,
      sym_identifier,
  [1370] = 2,
    ACTIONS(171), 5,
      aux_sym_source_file_token1,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(169), 9,
      sym_integer,
      sym_float,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_none,
      aux_sym_function_token1,
      aux_sym__expression_token1,
      aux_sym_new_expression_token1,
      sym_identifier,
  [1389] = 2,
    ACTIONS(175), 5,
      aux_sym_source_file_token1,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(173), 9,
      sym_integer,
      sym_float,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_none,
      aux_sym_function_token1,
      aux_sym__expression_token1,
      aux_sym_new_expression_token1,
      sym_identifier,
  [1408] = 2,
    ACTIONS(179), 5,
      aux_sym_source_file_token1,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(177), 9,
      sym_integer,
      sym_float,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_none,
      aux_sym_function_token1,
      aux_sym__expression_token1,
      aux_sym_new_expression_token1,
      sym_identifier,
  [1427] = 2,
    ACTIONS(183), 5,
      aux_sym_source_file_token1,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(181), 9,
      sym_integer,
      sym_float,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_none,
      aux_sym_function_token1,
      aux_sym__expression_token1,
      aux_sym_new_expression_token1,
      sym_identifier,
  [1446] = 2,
    ACTIONS(187), 5,
      aux_sym_source_file_token1,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(185), 9,
      sym_integer,
      sym_float,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_none,
      aux_sym_function_token1,
      aux_sym__expression_token1,
      aux_sym_new_expression_token1,
      sym_identifier,
  [1465] = 9,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(193), 1,
      aux_sym_source_file_token1,
    ACTIONS(195), 1,
      aux_sym_import_token1,
    ACTIONS(197), 1,
      aux_sym_function_header_token1,
    STATE(5), 1,
      sym_function_header,
    STATE(52), 1,
      aux_sym_source_file_repeat1,
    STATE(99), 1,
      sym_type,
    STATE(47), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [1496] = 9,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(195), 1,
      aux_sym_import_token1,
    ACTIONS(197), 1,
      aux_sym_function_header_token1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      aux_sym_source_file_token1,
    STATE(5), 1,
      sym_function_header,
    STATE(49), 1,
      aux_sym_source_file_repeat1,
    STATE(99), 1,
      sym_type,
    STATE(48), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [1527] = 9,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(208), 1,
      aux_sym_source_file_token1,
    ACTIONS(211), 1,
      aux_sym_import_token1,
    ACTIONS(214), 1,
      aux_sym_function_header_token1,
    STATE(5), 1,
      sym_function_header,
    STATE(61), 1,
      aux_sym_source_file_repeat1,
    STATE(99), 1,
      sym_type,
    STATE(46), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [1558] = 9,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(195), 1,
      aux_sym_import_token1,
    ACTIONS(197), 1,
      aux_sym_function_header_token1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      aux_sym_source_file_token1,
    STATE(5), 1,
      sym_function_header,
    STATE(49), 1,
      aux_sym_source_file_repeat1,
    STATE(99), 1,
      sym_type,
    STATE(46), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [1589] = 9,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(195), 1,
      aux_sym_import_token1,
    ACTIONS(197), 1,
      aux_sym_function_header_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      aux_sym_source_file_token1,
    STATE(5), 1,
      sym_function_header,
    STATE(53), 1,
      aux_sym_source_file_repeat1,
    STATE(99), 1,
      sym_type,
    STATE(46), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [1620] = 9,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(195), 1,
      aux_sym_import_token1,
    ACTIONS(197), 1,
      aux_sym_function_header_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      aux_sym_source_file_token1,
    STATE(5), 1,
      sym_function_header,
    STATE(67), 1,
      aux_sym_source_file_repeat1,
    STATE(99), 1,
      sym_type,
    STATE(69), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [1650] = 4,
    ACTIONS(223), 1,
      aux_sym_source_file_token1,
    ACTIONS(225), 1,
      aux_sym_header_token2,
    STATE(55), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(227), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [1670] = 5,
    ACTIONS(235), 1,
      anon_sym_EQ,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(56), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(231), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
    ACTIONS(233), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
  [1692] = 9,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(195), 1,
      aux_sym_import_token1,
    ACTIONS(197), 1,
      aux_sym_function_header_token1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      aux_sym_source_file_token1,
    STATE(5), 1,
      sym_function_header,
    STATE(67), 1,
      aux_sym_source_file_repeat1,
    STATE(99), 1,
      sym_type,
    STATE(69), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [1722] = 9,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(195), 1,
      aux_sym_import_token1,
    ACTIONS(197), 1,
      aux_sym_function_header_token1,
    ACTIONS(221), 1,
      aux_sym_source_file_token1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_function_header,
    STATE(67), 1,
      aux_sym_source_file_repeat1,
    STATE(99), 1,
      sym_type,
    STATE(69), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [1752] = 3,
    ACTIONS(239), 1,
      aux_sym_source_file_token1,
    STATE(54), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(241), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [1769] = 3,
    ACTIONS(244), 1,
      aux_sym_source_file_token1,
    STATE(54), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(227), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [1786] = 4,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(57), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(233), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
    ACTIONS(248), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [1805] = 4,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(57), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(252), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
    ACTIONS(254), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
  [1824] = 3,
    ACTIONS(257), 1,
      aux_sym_source_file_token1,
    STATE(62), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(227), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [1841] = 4,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(57), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(233), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
    ACTIONS(261), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [1860] = 4,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(59), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(233), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
    ACTIONS(265), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [1879] = 8,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(195), 1,
      aux_sym_import_token1,
    ACTIONS(197), 1,
      aux_sym_function_header_token1,
    ACTIONS(221), 1,
      aux_sym_source_file_token1,
    STATE(5), 1,
      sym_function_header,
    STATE(67), 1,
      aux_sym_source_file_repeat1,
    STATE(99), 1,
      sym_type,
    STATE(69), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [1906] = 3,
    ACTIONS(267), 1,
      aux_sym_source_file_token1,
    STATE(54), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(227), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [1923] = 5,
    STATE(2), 1,
      sym_boolean,
    STATE(60), 1,
      sym_constant,
    ACTIONS(45), 2,
      sym_integer,
      sym_float,
    ACTIONS(47), 2,
      sym_string,
      sym_none,
    ACTIONS(269), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [1942] = 2,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(273), 6,
      aux_sym_import_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_function_header_token1,
      sym_identifier,
  [1955] = 5,
    STATE(2), 1,
      sym_boolean,
    STATE(95), 1,
      sym_constant,
    ACTIONS(45), 2,
      sym_integer,
      sym_float,
    ACTIONS(47), 2,
      sym_string,
      sym_none,
    ACTIONS(269), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [1974] = 1,
    ACTIONS(275), 8,
      aux_sym_source_file_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [1985] = 4,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 1,
      aux_sym_source_file_token1,
    STATE(67), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(279), 4,
      aux_sym_header_token1,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [2001] = 2,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(286), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [2011] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(288), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [2021] = 3,
    ACTIONS(290), 1,
      aux_sym_source_file_token1,
    ACTIONS(292), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(80), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [2033] = 3,
    ACTIONS(294), 1,
      aux_sym_source_file_token1,
    ACTIONS(292), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(75), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [2045] = 3,
    ACTIONS(296), 1,
      aux_sym_source_file_token1,
    ACTIONS(292), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(71), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [2057] = 3,
    ACTIONS(296), 1,
      aux_sym_source_file_token1,
    ACTIONS(292), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(75), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [2069] = 5,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_parameter,
    STATE(105), 1,
      sym_type,
    STATE(111), 1,
      sym_parameters,
  [2085] = 3,
    ACTIONS(302), 1,
      aux_sym_source_file_token1,
    ACTIONS(304), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(75), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [2097] = 2,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(309), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [2107] = 2,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(313), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [2117] = 2,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(317), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [2127] = 3,
    ACTIONS(319), 1,
      aux_sym_source_file_token1,
    ACTIONS(292), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(73), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [2139] = 3,
    ACTIONS(319), 1,
      aux_sym_source_file_token1,
    ACTIONS(292), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(75), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [2151] = 2,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(323), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [2161] = 5,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_parameter,
    STATE(105), 1,
      sym_type,
    STATE(113), 1,
      sym_parameters,
  [2177] = 2,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(329), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [2187] = 2,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(333), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [2197] = 4,
    ACTIONS(5), 1,
      aux_sym_header_token1,
    ACTIONS(221), 1,
      aux_sym_source_file_token1,
    STATE(45), 1,
      sym_header,
    STATE(67), 1,
      aux_sym_source_file_repeat1,
  [2210] = 3,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(98), 1,
      sym_parameter,
    STATE(105), 1,
      sym_type,
  [2220] = 3,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_call_parameters_repeat1,
  [2230] = 3,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_call_parameters_repeat1,
  [2240] = 1,
    ACTIONS(344), 3,
      aux_sym_source_file_token1,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
  [2246] = 2,
    ACTIONS(348), 1,
      anon_sym_EQ,
    ACTIONS(346), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2254] = 3,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_parameters_repeat1,
  [2264] = 3,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_parameters_repeat1,
  [2274] = 3,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_parameters_repeat1,
  [2284] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_call_parameters_repeat1,
  [2294] = 1,
    ACTIONS(363), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2299] = 1,
    ACTIONS(339), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2304] = 2,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(103), 1,
      sym_type,
  [2311] = 1,
    ACTIONS(356), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2316] = 2,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(367), 1,
      aux_sym_function_header_token1,
  [2323] = 2,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(28), 1,
      sym_type,
  [2330] = 1,
    ACTIONS(369), 1,
      sym_identifier,
  [2334] = 1,
    ACTIONS(371), 1,
      sym_identifier,
  [2338] = 1,
    ACTIONS(373), 1,
      anon_sym_LBRACK,
  [2342] = 1,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
  [2346] = 1,
    ACTIONS(377), 1,
      sym_identifier,
  [2350] = 1,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
  [2354] = 1,
    ACTIONS(381), 1,
      sym_identifier,
  [2358] = 1,
    ACTIONS(383), 1,
      sym_identifier,
  [2362] = 1,
    ACTIONS(385), 1,
      sym_identifier,
  [2366] = 1,
    ACTIONS(387), 1,
      anon_sym_RBRACK,
  [2370] = 1,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
  [2374] = 1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [2378] = 1,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
  [2382] = 1,
    ACTIONS(393), 1,
      sym_integer,
  [2386] = 1,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 222,
  [SMALL_STATE(8)] = 275,
  [SMALL_STATE(9)] = 306,
  [SMALL_STATE(10)] = 353,
  [SMALL_STATE(11)] = 395,
  [SMALL_STATE(12)] = 437,
  [SMALL_STATE(13)] = 479,
  [SMALL_STATE(14)] = 521,
  [SMALL_STATE(15)] = 563,
  [SMALL_STATE(16)] = 605,
  [SMALL_STATE(17)] = 647,
  [SMALL_STATE(18)] = 689,
  [SMALL_STATE(19)] = 717,
  [SMALL_STATE(20)] = 759,
  [SMALL_STATE(21)] = 785,
  [SMALL_STATE(22)] = 825,
  [SMALL_STATE(23)] = 851,
  [SMALL_STATE(24)] = 877,
  [SMALL_STATE(25)] = 903,
  [SMALL_STATE(26)] = 929,
  [SMALL_STATE(27)] = 959,
  [SMALL_STATE(28)] = 993,
  [SMALL_STATE(29)] = 1019,
  [SMALL_STATE(30)] = 1057,
  [SMALL_STATE(31)] = 1093,
  [SMALL_STATE(32)] = 1127,
  [SMALL_STATE(33)] = 1154,
  [SMALL_STATE(34)] = 1194,
  [SMALL_STATE(35)] = 1234,
  [SMALL_STATE(36)] = 1273,
  [SMALL_STATE(37)] = 1312,
  [SMALL_STATE(38)] = 1351,
  [SMALL_STATE(39)] = 1370,
  [SMALL_STATE(40)] = 1389,
  [SMALL_STATE(41)] = 1408,
  [SMALL_STATE(42)] = 1427,
  [SMALL_STATE(43)] = 1446,
  [SMALL_STATE(44)] = 1465,
  [SMALL_STATE(45)] = 1496,
  [SMALL_STATE(46)] = 1527,
  [SMALL_STATE(47)] = 1558,
  [SMALL_STATE(48)] = 1589,
  [SMALL_STATE(49)] = 1620,
  [SMALL_STATE(50)] = 1650,
  [SMALL_STATE(51)] = 1670,
  [SMALL_STATE(52)] = 1692,
  [SMALL_STATE(53)] = 1722,
  [SMALL_STATE(54)] = 1752,
  [SMALL_STATE(55)] = 1769,
  [SMALL_STATE(56)] = 1786,
  [SMALL_STATE(57)] = 1805,
  [SMALL_STATE(58)] = 1824,
  [SMALL_STATE(59)] = 1841,
  [SMALL_STATE(60)] = 1860,
  [SMALL_STATE(61)] = 1879,
  [SMALL_STATE(62)] = 1906,
  [SMALL_STATE(63)] = 1923,
  [SMALL_STATE(64)] = 1942,
  [SMALL_STATE(65)] = 1955,
  [SMALL_STATE(66)] = 1974,
  [SMALL_STATE(67)] = 1985,
  [SMALL_STATE(68)] = 2001,
  [SMALL_STATE(69)] = 2011,
  [SMALL_STATE(70)] = 2021,
  [SMALL_STATE(71)] = 2033,
  [SMALL_STATE(72)] = 2045,
  [SMALL_STATE(73)] = 2057,
  [SMALL_STATE(74)] = 2069,
  [SMALL_STATE(75)] = 2085,
  [SMALL_STATE(76)] = 2097,
  [SMALL_STATE(77)] = 2107,
  [SMALL_STATE(78)] = 2117,
  [SMALL_STATE(79)] = 2127,
  [SMALL_STATE(80)] = 2139,
  [SMALL_STATE(81)] = 2151,
  [SMALL_STATE(82)] = 2161,
  [SMALL_STATE(83)] = 2177,
  [SMALL_STATE(84)] = 2187,
  [SMALL_STATE(85)] = 2197,
  [SMALL_STATE(86)] = 2210,
  [SMALL_STATE(87)] = 2220,
  [SMALL_STATE(88)] = 2230,
  [SMALL_STATE(89)] = 2240,
  [SMALL_STATE(90)] = 2246,
  [SMALL_STATE(91)] = 2254,
  [SMALL_STATE(92)] = 2264,
  [SMALL_STATE(93)] = 2274,
  [SMALL_STATE(94)] = 2284,
  [SMALL_STATE(95)] = 2294,
  [SMALL_STATE(96)] = 2299,
  [SMALL_STATE(97)] = 2304,
  [SMALL_STATE(98)] = 2311,
  [SMALL_STATE(99)] = 2316,
  [SMALL_STATE(100)] = 2323,
  [SMALL_STATE(101)] = 2330,
  [SMALL_STATE(102)] = 2334,
  [SMALL_STATE(103)] = 2338,
  [SMALL_STATE(104)] = 2342,
  [SMALL_STATE(105)] = 2346,
  [SMALL_STATE(106)] = 2350,
  [SMALL_STATE(107)] = 2354,
  [SMALL_STATE(108)] = 2358,
  [SMALL_STATE(109)] = 2362,
  [SMALL_STATE(110)] = 2366,
  [SMALL_STATE(111)] = 2370,
  [SMALL_STATE(112)] = 2374,
  [SMALL_STATE(113)] = 2378,
  [SMALL_STATE(114)] = 2382,
  [SMALL_STATE(115)] = 2386,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(35),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(38),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(97),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(16),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_expression, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_expression, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_expression, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_expression, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_parameter, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_parameter, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_header, 8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 8),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_header, 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_header, 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_header, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 5),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(61),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(109),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(108),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(66),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(64),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varflag, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varflag, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptflag, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_header_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_header_repeat1, 2), SHIFT_REPEAT(89),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_parameters, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_parameters_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_parameters_repeat1, 2), SHIFT_REPEAT(9),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionflag, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(86),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_parameters, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [395] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Papyrus(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
