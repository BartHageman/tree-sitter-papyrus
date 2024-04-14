#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_source_file_token1 = 1,
  aux_sym_header_token1 = 2,
  aux_sym_header_token2 = 3,
  aux_sym_import_token1 = 4,
  aux_sym_varflag_token1 = 5,
  aux_sym_varflag_token2 = 6,
  aux_sym_varflag_token3 = 7,
  aux_sym_scriptflag_token1 = 8,
  aux_sym_scriptflag_token2 = 9,
  aux_sym_scriptflag_token3 = 10,
  aux_sym_scriptflag_token4 = 11,
  aux_sym_functionflag_token1 = 12,
  sym_int = 13,
  sym_float = 14,
  sym_string = 15,
  aux_sym_bool_token1 = 16,
  aux_sym_bool_token2 = 17,
  anon_sym_LBRACK_RBRACK = 18,
  aux_sym_function_header_token1 = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_COMMA = 22,
  anon_sym_EQ = 23,
  aux_sym_function_token1 = 24,
  sym_identifier = 25,
  sym_source_file = 26,
  sym_header = 27,
  sym_import = 28,
  sym_varflag = 29,
  sym_scriptflag = 30,
  sym_functionflag = 31,
  sym_bool = 32,
  sym_type = 33,
  sym_function_header = 34,
  sym_parameters = 35,
  sym_parameter = 36,
  sym_function = 37,
  sym_script_variable = 38,
  sym_constant = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_source_file_repeat2 = 41,
  aux_sym_header_repeat1 = 42,
  aux_sym_function_header_repeat1 = 43,
  aux_sym_parameters_repeat1 = 44,
  aux_sym_script_variable_repeat1 = 45,
  anon_alias_sym_type = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
  [aux_sym_bool_token1] = "bool_token1",
  [aux_sym_bool_token2] = "bool_token2",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [aux_sym_function_header_token1] = "function_header_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [aux_sym_function_token1] = "function_token1",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_import] = "import",
  [sym_varflag] = "varflag",
  [sym_scriptflag] = "scriptflag",
  [sym_functionflag] = "functionflag",
  [sym_bool] = "bool",
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
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [aux_sym_bool_token1] = aux_sym_bool_token1,
  [aux_sym_bool_token2] = aux_sym_bool_token2,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [aux_sym_function_header_token1] = aux_sym_function_header_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_function_token1] = aux_sym_function_token1,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_import] = sym_import,
  [sym_varflag] = sym_varflag,
  [sym_scriptflag] = sym_scriptflag,
  [sym_functionflag] = sym_functionflag,
  [sym_bool] = sym_bool,
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
  [sym_int] = {
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
  [aux_sym_bool_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_token2] = {
    .visible = false,
    .named = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_bool] = {
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
  [45] = 27,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 44,
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
  [71] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\\') SKIP(0)
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(4);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(42);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(32);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(6);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ']') ADVANCE(118);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 39:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 44:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 56:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 59:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 61:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 74:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 77:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 78:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      END_STATE();
    case 79:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 80:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 82:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 83:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 84:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 85:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 86:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 87:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 88:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 89:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 90:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\\') SKIP(91)
      if (lookahead == '[') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 92:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\\') SKIP(92)
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 94:
      if (eof) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\\') SKIP(94)
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\\') SKIP(95)
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(153);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(132);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_header_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_header_token2);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_varflag_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_varflag_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_varflag_token2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_varflag_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_varflag_token3);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_varflag_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_scriptflag_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_scriptflag_token2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_scriptflag_token3);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_scriptflag_token4);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_functionflag_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_bool_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_bool_token2);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_function_header_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_function_header_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_function_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 94},
  [4] = {.lex_state = 94},
  [5] = {.lex_state = 94},
  [6] = {.lex_state = 94},
  [7] = {.lex_state = 94},
  [8] = {.lex_state = 94},
  [9] = {.lex_state = 95},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 94},
  [12] = {.lex_state = 95},
  [13] = {.lex_state = 95},
  [14] = {.lex_state = 94},
  [15] = {.lex_state = 95},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 95},
  [21] = {.lex_state = 95},
  [22] = {.lex_state = 95},
  [23] = {.lex_state = 95},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 94},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 94},
  [30] = {.lex_state = 94},
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 94},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 94},
  [36] = {.lex_state = 94},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 94},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 91},
  [41] = {.lex_state = 91},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 92},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 91},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 92},
  [52] = {.lex_state = 91},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 92},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 91},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 91},
  [64] = {.lex_state = 91},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 91},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 91},
  [70] = {.lex_state = 91},
  [71] = {.lex_state = 91},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_bool_token1] = ACTIONS(1),
    [aux_sym_bool_token2] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [aux_sym_function_header_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_function_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym_header] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(42),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [aux_sym_header_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      aux_sym_source_file_token1,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_function_header_token1,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_type,
    STATE(59), 1,
      sym_function_header,
    STATE(6), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [31] = 9,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_source_file_token1,
    ACTIONS(22), 1,
      aux_sym_import_token1,
    ACTIONS(25), 1,
      aux_sym_function_header_token1,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_type,
    STATE(59), 1,
      sym_function_header,
    STATE(3), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [62] = 9,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_function_header_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_source_file_token1,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_type,
    STATE(59), 1,
      sym_function_header,
    STATE(3), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [93] = 9,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_function_header_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_source_file_token1,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_type,
    STATE(59), 1,
      sym_function_header,
    STATE(4), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [124] = 9,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_function_header_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_source_file_token1,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_type,
    STATE(59), 1,
      sym_function_header,
    STATE(3), 4,
      sym_import,
      sym_function,
      sym_script_variable,
      aux_sym_source_file_repeat2,
  [155] = 9,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_function_header_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym_source_file_token1,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_type,
    STATE(59), 1,
      sym_function_header,
    STATE(29), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [185] = 9,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_function_header_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym_source_file_token1,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_type,
    STATE(59), 1,
      sym_function_header,
    STATE(29), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [215] = 5,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(15), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(43), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
    ACTIONS(45), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
  [237] = 4,
    ACTIONS(49), 1,
      aux_sym_source_file_token1,
    ACTIONS(51), 1,
      aux_sym_header_token2,
    STATE(19), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(53), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [257] = 9,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_function_header_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_source_file_token1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_type,
    STATE(59), 1,
      sym_function_header,
    STATE(29), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [287] = 4,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(13), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(45), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
    ACTIONS(59), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [306] = 4,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(22), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(45), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
    ACTIONS(63), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [325] = 8,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_function_header_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_source_file_token1,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      sym_type,
    STATE(59), 1,
      sym_function_header,
    STATE(29), 3,
      sym_import,
      sym_function,
      sym_script_variable,
  [352] = 4,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(22), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(45), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
    ACTIONS(67), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [371] = 3,
    ACTIONS(69), 1,
      aux_sym_source_file_token1,
    STATE(17), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(53), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [388] = 3,
    ACTIONS(71), 1,
      aux_sym_source_file_token1,
    STATE(17), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(73), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [405] = 3,
    ACTIONS(76), 1,
      aux_sym_source_file_token1,
    STATE(16), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(53), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [422] = 3,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    STATE(17), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(53), 7,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [439] = 2,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(82), 6,
      aux_sym_import_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_function_header_token1,
      sym_identifier,
  [454] = 2,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(86), 6,
      aux_sym_import_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_function_header_token1,
      sym_identifier,
  [469] = 4,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(22), 2,
      sym_varflag,
      aux_sym_script_variable_repeat1,
    ACTIONS(90), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
    ACTIONS(92), 3,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
  [488] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(97), 6,
      aux_sym_import_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_function_header_token1,
      sym_identifier,
  [501] = 1,
    ACTIONS(99), 8,
      aux_sym_source_file_token1,
      aux_sym_varflag_token1,
      aux_sym_varflag_token2,
      aux_sym_varflag_token3,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
  [512] = 5,
    ACTIONS(103), 1,
      sym_string,
    STATE(20), 1,
      sym_bool,
    STATE(53), 1,
      sym_constant,
    ACTIONS(101), 2,
      sym_int,
      sym_float,
    ACTIONS(105), 2,
      aux_sym_bool_token1,
      aux_sym_bool_token2,
  [530] = 5,
    ACTIONS(103), 1,
      sym_string,
    STATE(12), 1,
      sym_constant,
    STATE(20), 1,
      sym_bool,
    ACTIONS(101), 2,
      sym_int,
      sym_float,
    ACTIONS(105), 2,
      aux_sym_bool_token1,
      aux_sym_bool_token2,
  [548] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      aux_sym_source_file_token1,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(112), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [563] = 3,
    ACTIONS(114), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(33), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [575] = 2,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(118), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [585] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(122), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [595] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(126), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [605] = 2,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(130), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [615] = 3,
    ACTIONS(132), 1,
      aux_sym_source_file_token1,
    ACTIONS(134), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(33), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [627] = 3,
    ACTIONS(114), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(39), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [639] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(139), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [649] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(143), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [659] = 3,
    ACTIONS(145), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(28), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [671] = 2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(149), 3,
      aux_sym_import_token1,
      aux_sym_function_header_token1,
      sym_identifier,
  [681] = 3,
    ACTIONS(151), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 2,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
    STATE(33), 2,
      sym_functionflag,
      aux_sym_function_header_repeat1,
  [693] = 4,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(46), 1,
      sym_parameter,
    STATE(58), 1,
      sym_type,
    STATE(62), 1,
      sym_parameters,
  [706] = 4,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(46), 1,
      sym_parameter,
    STATE(57), 1,
      sym_parameters,
    STATE(58), 1,
      sym_type,
  [719] = 4,
    ACTIONS(5), 1,
      aux_sym_header_token1,
    ACTIONS(155), 1,
      aux_sym_source_file_token1,
    STATE(5), 1,
      sym_header,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
  [732] = 1,
    ACTIONS(157), 3,
      aux_sym_source_file_token1,
      aux_sym_scriptflag_token3,
      aux_sym_functionflag_token1,
  [738] = 2,
    ACTIONS(159), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(161), 2,
      aux_sym_function_header_token1,
      sym_identifier,
  [746] = 3,
    ACTIONS(107), 1,
      aux_sym_header_token1,
    ACTIONS(163), 1,
      aux_sym_source_file_token1,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
  [756] = 3,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_parameters_repeat1,
  [766] = 3,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_parameters_repeat1,
  [776] = 2,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(175), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [784] = 3,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(55), 1,
      sym_parameter,
    STATE(58), 1,
      sym_type,
  [794] = 3,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_parameters_repeat1,
  [804] = 1,
    ACTIONS(181), 2,
      aux_sym_function_header_token1,
      sym_identifier,
  [809] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      sym_identifier,
  [816] = 1,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [821] = 2,
    ACTIONS(189), 1,
      aux_sym_function_header_token1,
    ACTIONS(191), 1,
      sym_identifier,
  [828] = 1,
    ACTIONS(170), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [833] = 1,
    ACTIONS(193), 1,
      aux_sym_function_token1,
  [837] = 1,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
  [841] = 1,
    ACTIONS(197), 1,
      sym_identifier,
  [845] = 1,
    ACTIONS(199), 1,
      aux_sym_function_token1,
  [849] = 1,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
  [853] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [857] = 1,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
  [861] = 1,
    ACTIONS(207), 1,
      sym_identifier,
  [865] = 1,
    ACTIONS(209), 1,
      sym_identifier,
  [869] = 1,
    ACTIONS(211), 1,
      aux_sym_function_token1,
  [873] = 1,
    ACTIONS(213), 1,
      sym_identifier,
  [877] = 1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
  [881] = 1,
    ACTIONS(217), 1,
      aux_sym_function_token1,
  [885] = 1,
    ACTIONS(219), 1,
      sym_identifier,
  [889] = 1,
    ACTIONS(221), 1,
      sym_identifier,
  [893] = 1,
    ACTIONS(223), 1,
      sym_identifier,
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
  [SMALL_STATE(10)] = 237,
  [SMALL_STATE(11)] = 257,
  [SMALL_STATE(12)] = 287,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 325,
  [SMALL_STATE(15)] = 352,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 388,
  [SMALL_STATE(18)] = 405,
  [SMALL_STATE(19)] = 422,
  [SMALL_STATE(20)] = 439,
  [SMALL_STATE(21)] = 454,
  [SMALL_STATE(22)] = 469,
  [SMALL_STATE(23)] = 488,
  [SMALL_STATE(24)] = 501,
  [SMALL_STATE(25)] = 512,
  [SMALL_STATE(26)] = 530,
  [SMALL_STATE(27)] = 548,
  [SMALL_STATE(28)] = 563,
  [SMALL_STATE(29)] = 575,
  [SMALL_STATE(30)] = 585,
  [SMALL_STATE(31)] = 595,
  [SMALL_STATE(32)] = 605,
  [SMALL_STATE(33)] = 615,
  [SMALL_STATE(34)] = 627,
  [SMALL_STATE(35)] = 639,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 659,
  [SMALL_STATE(38)] = 671,
  [SMALL_STATE(39)] = 681,
  [SMALL_STATE(40)] = 693,
  [SMALL_STATE(41)] = 706,
  [SMALL_STATE(42)] = 719,
  [SMALL_STATE(43)] = 732,
  [SMALL_STATE(44)] = 738,
  [SMALL_STATE(45)] = 746,
  [SMALL_STATE(46)] = 756,
  [SMALL_STATE(47)] = 766,
  [SMALL_STATE(48)] = 776,
  [SMALL_STATE(49)] = 784,
  [SMALL_STATE(50)] = 794,
  [SMALL_STATE(51)] = 804,
  [SMALL_STATE(52)] = 809,
  [SMALL_STATE(53)] = 816,
  [SMALL_STATE(54)] = 821,
  [SMALL_STATE(55)] = 828,
  [SMALL_STATE(56)] = 833,
  [SMALL_STATE(57)] = 837,
  [SMALL_STATE(58)] = 841,
  [SMALL_STATE(59)] = 845,
  [SMALL_STATE(60)] = 849,
  [SMALL_STATE(61)] = 853,
  [SMALL_STATE(62)] = 857,
  [SMALL_STATE(63)] = 861,
  [SMALL_STATE(64)] = 865,
  [SMALL_STATE(65)] = 869,
  [SMALL_STATE(66)] = 873,
  [SMALL_STATE(67)] = 877,
  [SMALL_STATE(68)] = 881,
  [SMALL_STATE(69)] = 885,
  [SMALL_STATE(70)] = 889,
  [SMALL_STATE(71)] = 893,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(63),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(69),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(44),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(24),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varflag, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varflag, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptflag, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_header_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_header_repeat1, 2), SHIFT_REPEAT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionflag, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, .production_id = 1),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(49),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 6),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 8),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, .production_id = 1),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
