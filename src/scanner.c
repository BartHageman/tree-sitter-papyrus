#include "tree_sitter/parser.h"
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

enum TokenType {
  NEWLINE,
};

typedef struct {
  bool eof_emitted;
} State;

void *tree_sitter_papyrus_external_scanner_create(void) {
  State *s = (State *)malloc(sizeof(State));
  if (s) s->eof_emitted = false;
  return s;
}

void tree_sitter_papyrus_external_scanner_destroy(void *payload) {
  if (payload) free(payload);
}

void tree_sitter_papyrus_external_scanner_reset(void *payload) {
  if (payload) ((State *)payload)->eof_emitted = false;
}

unsigned tree_sitter_papyrus_external_scanner_serialize(void *payload, char *buffer) {
  if (!payload) return 0;
  buffer[0] = ((State *)payload)->eof_emitted ? 1 : 0;
  return 1;
}

void tree_sitter_papyrus_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  if (!payload) return;
  State *s = (State *)payload;
  s->eof_emitted = (length > 0) && (buffer[0] != 0);
}

bool tree_sitter_papyrus_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (!valid_symbols[NEWLINE]) return false;
  State *s = (State *)payload;

  /* Tree-sitter does not re-invoke the external scanner after extras are
     skipped, so the scanner must skip its own leading whitespace (mirroring
     the grammar's extras: [ \t\r]). Marked as extras via advance(true). */
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r') {
    lexer->advance(lexer, true);
  }

  bool saw_nl = false;
  while (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
    saw_nl = true;
    lexer->advance(lexer, false);
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r') {
      lexer->advance(lexer, true);
    }
  }
  if (saw_nl) {
    s->eof_emitted = false;
    lexer->result_symbol = NEWLINE;
    return true;
  }

  /* At EOF, emit a virtual newline exactly once. */
  if (lexer->eof(lexer)) {
    if (s->eof_emitted) return false;
    s->eof_emitted = true;
    lexer->result_symbol = NEWLINE;
    return true;
  }
  return false;
}
