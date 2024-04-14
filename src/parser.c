#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  aux_sym_header_token1 = 2,
  aux_sym_header_token2 = 3,
  aux_sym_import_token1 = 4,
  sym_identifier = 5,
  aux_sym_scriptflag_token1 = 6,
  aux_sym_scriptflag_token2 = 7,
  aux_sym_scriptflag_token3 = 8,
  aux_sym_scriptflag_token4 = 9,
  aux_sym_scriptflag_token5 = 10,
  aux_sym_scriptflag_token6 = 11,
  aux_sym_scriptflag_token7 = 12,
  anon_sym_LBRACK_RBRACK = 13,
  sym_source_file = 14,
  sym_header = 15,
  sym_import = 16,
  sym_scriptflag = 17,
  sym_type = 18,
  sym_variable_definition = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_source_file_repeat2 = 21,
  aux_sym_header_repeat1 = 22,
  anon_alias_sym_type = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_header_token1] = "header_token1",
  [aux_sym_header_token2] = "header_token2",
  [aux_sym_import_token1] = "import_token1",
  [sym_identifier] = "identifier",
  [aux_sym_scriptflag_token1] = "scriptflag_token1",
  [aux_sym_scriptflag_token2] = "scriptflag_token2",
  [aux_sym_scriptflag_token3] = "scriptflag_token3",
  [aux_sym_scriptflag_token4] = "scriptflag_token4",
  [aux_sym_scriptflag_token5] = "scriptflag_token5",
  [aux_sym_scriptflag_token6] = "scriptflag_token6",
  [aux_sym_scriptflag_token7] = "scriptflag_token7",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_import] = "import",
  [sym_scriptflag] = "scriptflag",
  [sym_type] = "type",
  [sym_variable_definition] = "variable_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_header_repeat1] = "header_repeat1",
  [anon_alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [aux_sym_header_token2] = aux_sym_header_token2,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [sym_identifier] = sym_identifier,
  [aux_sym_scriptflag_token1] = aux_sym_scriptflag_token1,
  [aux_sym_scriptflag_token2] = aux_sym_scriptflag_token2,
  [aux_sym_scriptflag_token3] = aux_sym_scriptflag_token3,
  [aux_sym_scriptflag_token4] = aux_sym_scriptflag_token4,
  [aux_sym_scriptflag_token5] = aux_sym_scriptflag_token5,
  [aux_sym_scriptflag_token6] = aux_sym_scriptflag_token6,
  [aux_sym_scriptflag_token7] = aux_sym_scriptflag_token7,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_import] = sym_import,
  [sym_scriptflag] = sym_scriptflag,
  [sym_type] = sym_type,
  [sym_variable_definition] = sym_variable_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [aux_sym_scriptflag_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scriptflag_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scriptflag_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
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
  [sym_scriptflag] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
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
  [26] = 17,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(40);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(22);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(6);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == ']') ADVANCE(84);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(58);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(25);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 40:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 55:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 57:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 61:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_header_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_header_token2);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_scriptflag_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_scriptflag_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_scriptflag_token3);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_scriptflag_token4);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_scriptflag_token5);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_scriptflag_token6);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_scriptflag_token7);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
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
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 64},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 64},
  [11] = {.lex_state = 64},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 64},
  [14] = {.lex_state = 64},
  [15] = {.lex_state = 64},
  [16] = {.lex_state = 64},
  [17] = {.lex_state = 64},
  [18] = {.lex_state = 64},
  [19] = {.lex_state = 64},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 64},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [aux_sym_header_token1] = ACTIONS(1),
    [aux_sym_header_token2] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(1),
    [aux_sym_scriptflag_token1] = ACTIONS(1),
    [aux_sym_scriptflag_token2] = ACTIONS(1),
    [aux_sym_scriptflag_token3] = ACTIONS(1),
    [aux_sym_scriptflag_token4] = ACTIONS(1),
    [aux_sym_scriptflag_token5] = ACTIONS(1),
    [aux_sym_scriptflag_token6] = ACTIONS(1),
    [aux_sym_scriptflag_token7] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_header] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(22),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [aux_sym_header_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      aux_sym_source_file_token1,
    ACTIONS(9), 1,
      aux_sym_header_token2,
    STATE(6), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(11), 7,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
      aux_sym_scriptflag_token5,
      aux_sym_scriptflag_token6,
      aux_sym_scriptflag_token7,
  [20] = 3,
    ACTIONS(13), 1,
      aux_sym_source_file_token1,
    STATE(4), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(11), 7,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
      aux_sym_scriptflag_token5,
      aux_sym_scriptflag_token6,
      aux_sym_scriptflag_token7,
  [37] = 3,
    ACTIONS(15), 1,
      aux_sym_source_file_token1,
    STATE(4), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(17), 7,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
      aux_sym_scriptflag_token5,
      aux_sym_scriptflag_token6,
      aux_sym_scriptflag_token7,
  [54] = 3,
    ACTIONS(20), 1,
      aux_sym_source_file_token1,
    STATE(3), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(11), 7,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
      aux_sym_scriptflag_token5,
      aux_sym_scriptflag_token6,
      aux_sym_scriptflag_token7,
  [71] = 3,
    ACTIONS(22), 1,
      aux_sym_source_file_token1,
    STATE(4), 2,
      sym_scriptflag,
      aux_sym_header_repeat1,
    ACTIONS(11), 7,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
      aux_sym_scriptflag_token5,
      aux_sym_scriptflag_token6,
      aux_sym_scriptflag_token7,
  [88] = 7,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      aux_sym_source_file_token1,
    ACTIONS(28), 1,
      aux_sym_import_token1,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_type,
    STATE(9), 3,
      sym_import,
      sym_variable_definition,
      aux_sym_source_file_repeat2,
  [112] = 7,
    ACTIONS(28), 1,
      aux_sym_import_token1,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      aux_sym_source_file_token1,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_type,
    STATE(11), 3,
      sym_import,
      sym_variable_definition,
      aux_sym_source_file_repeat2,
  [136] = 7,
    ACTIONS(28), 1,
      aux_sym_import_token1,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      aux_sym_source_file_token1,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_type,
    STATE(10), 3,
      sym_import,
      sym_variable_definition,
      aux_sym_source_file_repeat2,
  [160] = 7,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      aux_sym_source_file_token1,
    ACTIONS(45), 1,
      aux_sym_import_token1,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_type,
    STATE(10), 3,
      sym_import,
      sym_variable_definition,
      aux_sym_source_file_repeat2,
  [184] = 7,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      aux_sym_source_file_token1,
    ACTIONS(28), 1,
      aux_sym_import_token1,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_type,
    STATE(10), 3,
      sym_import,
      sym_variable_definition,
      aux_sym_source_file_repeat2,
  [208] = 1,
    ACTIONS(51), 8,
      aux_sym_source_file_token1,
      aux_sym_scriptflag_token1,
      aux_sym_scriptflag_token2,
      aux_sym_scriptflag_token3,
      aux_sym_scriptflag_token4,
      aux_sym_scriptflag_token5,
      aux_sym_scriptflag_token6,
      aux_sym_scriptflag_token7,
  [219] = 7,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      aux_sym_import_token1,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(53), 1,
      aux_sym_source_file_token1,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_type,
    STATE(20), 2,
      sym_import,
      sym_variable_definition,
  [242] = 7,
    ACTIONS(28), 1,
      aux_sym_import_token1,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(53), 1,
      aux_sym_source_file_token1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_type,
    STATE(20), 2,
      sym_import,
      sym_variable_definition,
  [265] = 7,
    ACTIONS(28), 1,
      aux_sym_import_token1,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_source_file_token1,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_type,
    STATE(20), 2,
      sym_import,
      sym_variable_definition,
  [288] = 6,
    ACTIONS(28), 1,
      aux_sym_import_token1,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(53), 1,
      aux_sym_source_file_token1,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_type,
    STATE(20), 2,
      sym_import,
      sym_variable_definition,
  [308] = 4,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym_source_file_token1,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(62), 2,
      aux_sym_import_token1,
      sym_identifier,
  [322] = 2,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(66), 2,
      aux_sym_import_token1,
      sym_identifier,
  [331] = 2,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(70), 2,
      aux_sym_import_token1,
      sym_identifier,
  [340] = 2,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(72), 2,
      aux_sym_import_token1,
      sym_identifier,
  [349] = 2,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(76), 2,
      aux_sym_import_token1,
      sym_identifier,
  [358] = 4,
    ACTIONS(5), 1,
      aux_sym_header_token1,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    STATE(7), 1,
      sym_header,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
  [371] = 2,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(82), 2,
      aux_sym_import_token1,
      sym_identifier,
  [380] = 2,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(86), 2,
      aux_sym_import_token1,
      sym_identifier,
  [389] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(90), 2,
      aux_sym_import_token1,
      sym_identifier,
  [398] = 3,
    ACTIONS(57), 1,
      aux_sym_header_token1,
    ACTIONS(92), 1,
      aux_sym_source_file_token1,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
  [408] = 2,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_LBRACK_RBRACK,
  [415] = 1,
    ACTIONS(99), 1,
      sym_identifier,
  [419] = 1,
    ACTIONS(101), 1,
      sym_identifier,
  [423] = 1,
    ACTIONS(103), 1,
      sym_identifier,
  [427] = 1,
    ACTIONS(105), 1,
      sym_identifier,
  [431] = 1,
    ACTIONS(107), 1,
      sym_identifier,
  [435] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 37,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 219,
  [SMALL_STATE(14)] = 242,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 288,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 322,
  [SMALL_STATE(19)] = 331,
  [SMALL_STATE(20)] = 340,
  [SMALL_STATE(21)] = 349,
  [SMALL_STATE(22)] = 358,
  [SMALL_STATE(23)] = 371,
  [SMALL_STATE(24)] = 380,
  [SMALL_STATE(25)] = 389,
  [SMALL_STATE(26)] = 398,
  [SMALL_STATE(27)] = 408,
  [SMALL_STATE(28)] = 415,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 423,
  [SMALL_STATE(31)] = 427,
  [SMALL_STATE(32)] = 431,
  [SMALL_STATE(33)] = 435,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(31),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(27),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptflag, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_Papyrus(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
