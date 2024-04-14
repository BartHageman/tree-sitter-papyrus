#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 1
#define TOKEN_COUNT 45
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
  aux_sym_cast_expression_token1 = 31,
  anon_sym_DASH = 32,
  anon_sym_BANG = 33,
  anon_sym_PIPE_PIPE = 34,
  anon_sym_AMP_AMP = 35,
  anon_sym_LT = 36,
  anon_sym_GT = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_PLUS = 40,
  anon_sym_STAR = 41,
  anon_sym_SLASH = 42,
  anon_sym_PERCENT = 43,
  anon_sym_DOT = 44,
  sym_source_file = 45,
  sym_header = 46,
  sym_import = 47,
  sym_varflag = 48,
  sym_scriptflag = 49,
  sym_functionflag = 50,
  sym_boolean = 51,
  sym_type = 52,
  sym_function_header = 53,
  sym_parameters = 54,
  sym_parameter = 55,
  sym_function = 56,
  sym_script_variable = 57,
  sym_constant = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_source_file_repeat2 = 60,
  aux_sym_header_repeat1 = 61,
  aux_sym_function_header_repeat1 = 62,
  aux_sym_parameters_repeat1 = 63,
  aux_sym_script_variable_repeat1 = 64,
  anon_alias_sym_type = 65,
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
  [aux_sym_cast_expression_token1] = "cast_expression_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT] = ".",
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
  [sym_script_variable] = "script_variable",
  [sym_constant] = "constant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_function_header_repeat1] = "function_header_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_script_variable_repeat1] = "script_variable_repeat1",
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
  [aux_sym_cast_expression_token1] = aux_sym_cast_expression_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_script_variable] = sym_script_variable,
  [sym_constant] = sym_constant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_function_header_repeat1] = aux_sym_function_header_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_script_variable_repeat1] = aux_sym_script_variable_repeat1,
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
  [anon_sym_DOT] = {
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
  [sym_script_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
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
  [aux_sym_script_variable_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '|') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == '|') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '\\') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(17);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
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
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 8},
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
    [aux_sym_cast_expression_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym_header] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(40),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [aux_sym_header_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      aux_sym_source_file_token1,
    ACTIONS(13), 1,
      aux_sym_import_token1,
    ACTIONS(15), 1,
      aux_sym_function_header_token1,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_type,
    STATE(61), 1,
      sym_function_header,
    STATE(4), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [31] = 9,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      aux_sym_import_token1,
    ACTIONS(15), 1,
      aux_sym_function_header_token1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_source_file_token1,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_type,
    STATE(61), 1,
      sym_function_header,
    STATE(5), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [62] = 9,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(26), 1,
      aux_sym_source_file_token1,
    ACTIONS(29), 1,
      aux_sym_import_token1,
    ACTIONS(32), 1,
      aux_sym_function_header_token1,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_type,
    STATE(61), 1,
      sym_function_header,
    STATE(4), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [93] = 9,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      aux_sym_import_token1,
    ACTIONS(15), 1,
      aux_sym_function_header_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_source_file_token1,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_type,
    STATE(61), 1,
      sym_function_header,
    STATE(4), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [124] = 9,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      aux_sym_import_token1,
    ACTIONS(15), 1,
      aux_sym_function_header_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_source_file_token1,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_type,
    STATE(61), 1,
      sym_function_header,
    STATE(2), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [155] = 9,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      aux_sym_import_token1,
    ACTIONS(15), 1,
      aux_sym_function_header_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym_source_file_token1,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_type,
    STATE(61), 1,
      sym_function_header,
    STATE(29), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [185] = 9,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      aux_sym_import_token1,
    ACTIONS(15), 1,
      aux_sym_function_header_token1,
    ACTIONS(39), 1,
      aux_sym_source_file_token1,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_type,
    STATE(61), 1,
      sym_function_header,
    STATE(29), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [215] = 4,
    ACTIONS(41), 1,
      aux_sym_source_file_token1,
    ACTIONS(43), 1,
      aux_sym_header_token2,
    STATE(16), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(45), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [235] = 5,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(17), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(49), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
    ACTIONS(51), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
  [257] = 9,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      aux_sym_import_token1,
    ACTIONS(15), 1,
      aux_sym_function_header_token1,
    ACTIONS(39), 1,
      aux_sym_source_file_token1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_type,
    STATE(61), 1,
      sym_function_header,
    STATE(29), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [287] = 4,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(12), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(59), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
    ACTIONS(61), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
  [306] = 2,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(66), 6,
      aux_sym_import_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_function_header_token1,
      sym_identifier,
  [321] = 3,
    ACTIONS(68), 1,
      aux_sym_source_file_token1,
    STATE(18), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(45), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [338] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      aux_sym_import_token1,
    ACTIONS(15), 1,
      aux_sym_function_header_token1,
    ACTIONS(39), 1,
      aux_sym_source_file_token1,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_type,
    STATE(61), 1,
      sym_function_header,
    STATE(29), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [365] = 3,
    ACTIONS(70), 1,
      aux_sym_source_file_token1,
    STATE(18), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(45), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [382] = 4,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(12), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(51), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
    ACTIONS(74), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [401] = 3,
    ACTIONS(76), 1,
      aux_sym_source_file_token1,
    STATE(18), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(78), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [418] = 2,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(83), 6,
      aux_sym_import_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_function_header_token1,
      sym_identifier,
  [433] = 3,
    ACTIONS(85), 1,
      aux_sym_source_file_token1,
    STATE(14), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(45), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [450] = 4,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(22), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(51), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
    ACTIONS(89), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [469] = 4,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(12), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(51), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
    ACTIONS(93), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [488] = 5,
    STATE(13), 1,
      sym_boolean,
    STATE(50), 1,
      sym_constant,
    ACTIONS(95), 2,
      sym_integer,
      sym_float,
    ACTIONS(97), 2,
      sym_string,
      sym_none,
    ACTIONS(99), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [507] = 1,
    ACTIONS(101), 8,
      aux_sym_source_file_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [518] = 5,
    STATE(13), 1,
      sym_boolean,
    STATE(21), 1,
      sym_constant,
    ACTIONS(95), 2,
      sym_integer,
      sym_float,
    ACTIONS(97), 2,
      sym_string,
      sym_none,
    ACTIONS(99), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [537] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(105), 6,
      aux_sym_import_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_function_header_token1,
      sym_identifier,
  [550] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_source_file_token1,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(109), 4,
      aux_sym_header_token1,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [566] = 3,
    ACTIONS(114), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(35), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [578] = 2,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(118), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [588] = 3,
    ACTIONS(120), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(34), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [600] = 2,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(124), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [610] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(128), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [620] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(132), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [630] = 3,
    ACTIONS(134), 1,
      aux_sym_source_file_token1,
    ACTIONS(136), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(34), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [642] = 3,
    ACTIONS(139), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(34), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [654] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(143), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [664] = 3,
    ACTIONS(139), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(30), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [676] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(147), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [686] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(151), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [696] = 4,
    ACTIONS(5), 1,
      aux_sym_header_token1,
    ACTIONS(39), 1,
      aux_sym_source_file_token1,
    STATE(6), 1,
      sym_header,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
  [709] = 4,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(46), 1,
      sym_parameter,
    STATE(55), 1,
      sym_parameters,
    STATE(63), 1,
      sym_type,
  [722] = 4,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(46), 1,
      sym_parameter,
    STATE(62), 1,
      sym_parameters,
    STATE(63), 1,
      sym_type,
  [735] = 3,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(53), 1,
      sym_parameter,
    STATE(63), 1,
      sym_type,
  [745] = 3,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_parameters_repeat1,
  [755] = 3,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_parameters_repeat1,
  [765] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_parameters_repeat1,
  [775] = 1,
    ACTIONS(166), 3,
      aux_sym_source_file_token1,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
  [781] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(168), 2,
      aux_sym_function_header_token1,
      sym_identifier,
  [789] = 2,
    ACTIONS(174), 1,
      anon_sym_EQ,
    ACTIONS(172), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [797] = 1,
    ACTIONS(176), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [802] = 2,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(180), 1,
      aux_sym_function_header_token1,
  [809] = 1,
    ACTIONS(182), 2,
      aux_sym_function_header_token1,
      sym_identifier,
  [814] = 1,
    ACTIONS(155), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [819] = 1,
    ACTIONS(184), 1,
      sym_identifier,
  [823] = 1,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
  [827] = 1,
    ACTIONS(188), 1,
      sym_identifier,
  [831] = 1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
  [835] = 1,
    ACTIONS(192), 1,
      aux_sym_function_token1,
  [839] = 1,
    ACTIONS(194), 1,
      sym_identifier,
  [843] = 1,
    ACTIONS(196), 1,
      sym_identifier,
  [847] = 1,
    ACTIONS(198), 1,
      aux_sym_function_token1,
  [851] = 1,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
  [855] = 1,
    ACTIONS(202), 1,
      sym_identifier,
  [859] = 1,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
  [863] = 1,
    ACTIONS(206), 1,
      aux_sym_function_token1,
  [867] = 1,
    ACTIONS(208), 1,
      sym_identifier,
  [871] = 1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
  [875] = 1,
    ACTIONS(212), 1,
      aux_sym_function_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 155,
  [SMALL_STATE(8)] = 185,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 257,
  [SMALL_STATE(12)] = 287,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 321,
  [SMALL_STATE(15)] = 338,
  [SMALL_STATE(16)] = 365,
  [SMALL_STATE(17)] = 382,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 418,
  [SMALL_STATE(20)] = 433,
  [SMALL_STATE(21)] = 450,
  [SMALL_STATE(22)] = 469,
  [SMALL_STATE(23)] = 488,
  [SMALL_STATE(24)] = 507,
  [SMALL_STATE(25)] = 518,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 550,
  [SMALL_STATE(28)] = 566,
  [SMALL_STATE(29)] = 578,
  [SMALL_STATE(30)] = 588,
  [SMALL_STATE(31)] = 600,
  [SMALL_STATE(32)] = 610,
  [SMALL_STATE(33)] = 620,
  [SMALL_STATE(34)] = 630,
  [SMALL_STATE(35)] = 642,
  [SMALL_STATE(36)] = 654,
  [SMALL_STATE(37)] = 664,
  [SMALL_STATE(38)] = 676,
  [SMALL_STATE(39)] = 686,
  [SMALL_STATE(40)] = 696,
  [SMALL_STATE(41)] = 709,
  [SMALL_STATE(42)] = 722,
  [SMALL_STATE(43)] = 735,
  [SMALL_STATE(44)] = 745,
  [SMALL_STATE(45)] = 755,
  [SMALL_STATE(46)] = 765,
  [SMALL_STATE(47)] = 775,
  [SMALL_STATE(48)] = 781,
  [SMALL_STATE(49)] = 789,
  [SMALL_STATE(50)] = 797,
  [SMALL_STATE(51)] = 802,
  [SMALL_STATE(52)] = 809,
  [SMALL_STATE(53)] = 814,
  [SMALL_STATE(54)] = 819,
  [SMALL_STATE(55)] = 823,
  [SMALL_STATE(56)] = 827,
  [SMALL_STATE(57)] = 831,
  [SMALL_STATE(58)] = 835,
  [SMALL_STATE(59)] = 839,
  [SMALL_STATE(60)] = 843,
  [SMALL_STATE(61)] = 847,
  [SMALL_STATE(62)] = 851,
  [SMALL_STATE(63)] = 855,
  [SMALL_STATE(64)] = 859,
  [SMALL_STATE(65)] = 863,
  [SMALL_STATE(66)] = 867,
  [SMALL_STATE(67)] = 871,
  [SMALL_STATE(68)] = 875,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(48),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(59),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(56),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(24),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptflag, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varflag, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varflag, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_header_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_header_repeat1, 2), SHIFT_REPEAT(47),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionflag, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 8),
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
