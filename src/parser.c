#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_word = 1,
  aux_sym__space_token1 = 2,
  sym_line_ending = 3,
  anon_sym_by = 4,
  aux_sym_section_heading_token1 = 5,
  anon_sym_DASH = 6,
  anon_sym_a = 7,
  anon_sym_an = 8,
  sym_definite_article = 9,
  sym_mass_article = 10,
  sym_full_stop = 11,
  anon_sym_Understand = 12,
  anon_sym_as = 13,
  anon_sym_has = 14,
  anon_sym_called = 15,
  anon_sym_canbe = 16,
  anon_sym_of = 17,
  anon_sym_not = 18,
  anon_sym_usually = 19,
  anon_sym_in = 20,
  anon_sym_is = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_literal_token1 = 23,
  sym_number = 24,
  sym_source_file = 25,
  sym__space = 26,
  sym_identifier = 27,
  sym_title = 28,
  sym_section_heading = 29,
  sym_indefinite_article = 30,
  sym__article = 31,
  sym_understand_statement = 32,
  sym_has_statement = 33,
  sym_can_be_statement = 34,
  sym__statement = 35,
  sym_of_expression = 36,
  sym_not_expression = 37,
  sym_usually_expression = 38,
  sym_in_expression = 39,
  sym__expression = 40,
  sym_is_statement = 41,
  sym_string_literal = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_identifier_repeat1 = 44,
  aux_sym_string_literal_repeat1 = 45,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [aux_sym__space_token1] = "_space_token1",
  [sym_line_ending] = "line_ending",
  [anon_sym_by] = "by",
  [aux_sym_section_heading_token1] = "section_heading_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_a] = "a",
  [anon_sym_an] = "an",
  [sym_definite_article] = "definite_article",
  [sym_mass_article] = "mass_article",
  [sym_full_stop] = "full_stop",
  [anon_sym_Understand] = "Understand",
  [anon_sym_as] = "as",
  [anon_sym_has] = "has",
  [anon_sym_called] = "called",
  [anon_sym_canbe] = "can be",
  [anon_sym_of] = "of",
  [anon_sym_not] = "not",
  [anon_sym_usually] = "usually",
  [anon_sym_in] = "in",
  [anon_sym_is] = "is",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__space] = "_space",
  [sym_identifier] = "identifier",
  [sym_title] = "title",
  [sym_section_heading] = "section_heading",
  [sym_indefinite_article] = "indefinite_article",
  [sym__article] = "_article",
  [sym_understand_statement] = "understand_statement",
  [sym_has_statement] = "has_statement",
  [sym_can_be_statement] = "can_be_statement",
  [sym__statement] = "_statement",
  [sym_of_expression] = "of_expression",
  [sym_not_expression] = "not_expression",
  [sym_usually_expression] = "usually_expression",
  [sym_in_expression] = "in_expression",
  [sym__expression] = "_expression",
  [sym_is_statement] = "is_statement",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [aux_sym__space_token1] = aux_sym__space_token1,
  [sym_line_ending] = sym_line_ending,
  [anon_sym_by] = anon_sym_by,
  [aux_sym_section_heading_token1] = aux_sym_section_heading_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_an] = anon_sym_an,
  [sym_definite_article] = sym_definite_article,
  [sym_mass_article] = sym_mass_article,
  [sym_full_stop] = sym_full_stop,
  [anon_sym_Understand] = anon_sym_Understand,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_has] = anon_sym_has,
  [anon_sym_called] = anon_sym_called,
  [anon_sym_canbe] = anon_sym_canbe,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_usually] = anon_sym_usually,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__space] = sym__space,
  [sym_identifier] = sym_identifier,
  [sym_title] = sym_title,
  [sym_section_heading] = sym_section_heading,
  [sym_indefinite_article] = sym_indefinite_article,
  [sym__article] = sym__article,
  [sym_understand_statement] = sym_understand_statement,
  [sym_has_statement] = sym_has_statement,
  [sym_can_be_statement] = sym_can_be_statement,
  [sym__statement] = sym__statement,
  [sym_of_expression] = sym_of_expression,
  [sym_not_expression] = sym_not_expression,
  [sym_usually_expression] = sym_usually_expression,
  [sym_in_expression] = sym_in_expression,
  [sym__expression] = sym__expression,
  [sym_is_statement] = sym_is_statement,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_line_ending] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_heading_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_an] = {
    .visible = true,
    .named = false,
  },
  [sym_definite_article] = {
    .visible = true,
    .named = true,
  },
  [sym_mass_article] = {
    .visible = true,
    .named = true,
  },
  [sym_full_stop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Understand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_called] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_canbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usually] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_section_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_indefinite_article] = {
    .visible = true,
    .named = true,
  },
  [sym__article] = {
    .visible = false,
    .named = true,
  },
  [sym_understand_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_has_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_can_be_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_of_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_not_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_usually_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_in_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_is_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_line_ending);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_line_ending);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_section_heading_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_full_stop);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_canbe);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
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
      if (lookahead == 'U') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_an);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_definite_article);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_mass_article);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_called);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_usually);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Understand);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [aux_sym_section_heading_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_an] = ACTIONS(1),
    [sym_definite_article] = ACTIONS(1),
    [sym_mass_article] = ACTIONS(1),
    [sym_full_stop] = ACTIONS(1),
    [anon_sym_Understand] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_called] = ACTIONS(1),
    [anon_sym_canbe] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_usually] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(79),
    [sym_title] = STATE(4),
    [sym_string_literal] = STATE(78),
    [anon_sym_DQUOTE] = ACTIONS(3),
  },
  [2] = {
    [sym_identifier] = STATE(42),
    [sym_section_heading] = STATE(2),
    [sym_indefinite_article] = STATE(76),
    [sym__article] = STATE(76),
    [sym_understand_statement] = STATE(2),
    [sym_has_statement] = STATE(2),
    [sym_can_be_statement] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_of_expression] = STATE(42),
    [sym_not_expression] = STATE(42),
    [sym_usually_expression] = STATE(42),
    [sym_in_expression] = STATE(42),
    [sym__expression] = STATE(42),
    [sym_is_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_identifier_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [aux_sym_section_heading_token1] = ACTIONS(10),
    [anon_sym_a] = ACTIONS(13),
    [anon_sym_an] = ACTIONS(13),
    [sym_definite_article] = ACTIONS(16),
    [sym_mass_article] = ACTIONS(16),
    [anon_sym_Understand] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(22),
    [anon_sym_usually] = ACTIONS(25),
  },
  [3] = {
    [sym_identifier] = STATE(42),
    [sym_section_heading] = STATE(2),
    [sym_indefinite_article] = STATE(76),
    [sym__article] = STATE(76),
    [sym_understand_statement] = STATE(2),
    [sym_has_statement] = STATE(2),
    [sym_can_be_statement] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_of_expression] = STATE(42),
    [sym_not_expression] = STATE(42),
    [sym_usually_expression] = STATE(42),
    [sym_in_expression] = STATE(42),
    [sym__expression] = STATE(42),
    [sym_is_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_identifier_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_word] = ACTIONS(30),
    [aux_sym_section_heading_token1] = ACTIONS(32),
    [anon_sym_a] = ACTIONS(34),
    [anon_sym_an] = ACTIONS(34),
    [sym_definite_article] = ACTIONS(36),
    [sym_mass_article] = ACTIONS(36),
    [anon_sym_Understand] = ACTIONS(38),
    [anon_sym_not] = ACTIONS(40),
    [anon_sym_usually] = ACTIONS(42),
  },
  [4] = {
    [sym_identifier] = STATE(42),
    [sym_section_heading] = STATE(3),
    [sym_indefinite_article] = STATE(76),
    [sym__article] = STATE(76),
    [sym_understand_statement] = STATE(3),
    [sym_has_statement] = STATE(3),
    [sym_can_be_statement] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_of_expression] = STATE(42),
    [sym_not_expression] = STATE(42),
    [sym_usually_expression] = STATE(42),
    [sym_in_expression] = STATE(42),
    [sym__expression] = STATE(42),
    [sym_is_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_identifier_repeat1] = STATE(32),
    [sym_word] = ACTIONS(30),
    [aux_sym_section_heading_token1] = ACTIONS(32),
    [anon_sym_a] = ACTIONS(34),
    [anon_sym_an] = ACTIONS(34),
    [sym_definite_article] = ACTIONS(36),
    [sym_mass_article] = ACTIONS(36),
    [anon_sym_Understand] = ACTIONS(38),
    [anon_sym_not] = ACTIONS(40),
    [anon_sym_usually] = ACTIONS(42),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_usually,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(46), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(90), 2,
      sym_indefinite_article,
      sym__article,
    STATE(29), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [33] = 8,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_usually,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(46), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(90), 2,
      sym_indefinite_article,
      sym__article,
    STATE(30), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [66] = 8,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_usually,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(46), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(90), 2,
      sym_indefinite_article,
      sym__article,
    STATE(35), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [99] = 8,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_usually,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(46), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(90), 2,
      sym_indefinite_article,
      sym__article,
    STATE(36), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [132] = 8,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_usually,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(46), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(90), 2,
      sym_indefinite_article,
      sym__article,
    STATE(51), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [165] = 8,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_usually,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(46), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(90), 2,
      sym_indefinite_article,
      sym__article,
    STATE(52), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [198] = 8,
    ACTIONS(30), 1,
      sym_word,
    ACTIONS(40), 1,
      anon_sym_not,
    ACTIONS(42), 1,
      anon_sym_usually,
    STATE(32), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(36), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(76), 2,
      sym_indefinite_article,
      sym__article,
    STATE(30), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [231] = 8,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_usually,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(46), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(90), 2,
      sym_indefinite_article,
      sym__article,
    STATE(49), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [264] = 8,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_usually,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(46), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(90), 2,
      sym_indefinite_article,
      sym__article,
    STATE(46), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [297] = 8,
    ACTIONS(30), 1,
      sym_word,
    ACTIONS(40), 1,
      anon_sym_not,
    ACTIONS(42), 1,
      anon_sym_usually,
    STATE(32), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(36), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(76), 2,
      sym_indefinite_article,
      sym__article,
    STATE(29), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [330] = 8,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_usually,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(46), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(90), 2,
      sym_indefinite_article,
      sym__article,
    STATE(54), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [363] = 8,
    ACTIONS(30), 1,
      sym_word,
    ACTIONS(40), 1,
      anon_sym_not,
    ACTIONS(42), 1,
      anon_sym_usually,
    STATE(32), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(36), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(76), 2,
      sym_indefinite_article,
      sym__article,
    STATE(35), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [396] = 8,
    ACTIONS(30), 1,
      sym_word,
    ACTIONS(40), 1,
      anon_sym_not,
    ACTIONS(42), 1,
      anon_sym_usually,
    STATE(32), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(36), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(76), 2,
      sym_indefinite_article,
      sym__article,
    STATE(36), 6,
      sym_identifier,
      sym_of_expression,
      sym_not_expression,
      sym_usually_expression,
      sym_in_expression,
      sym__expression,
  [429] = 2,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    ACTIONS(54), 8,
      sym_word,
      anon_sym_a,
      anon_sym_an,
      sym_definite_article,
      sym_mass_article,
      anon_sym_Understand,
      anon_sym_not,
      anon_sym_usually,
  [444] = 2,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    ACTIONS(58), 8,
      sym_word,
      anon_sym_a,
      anon_sym_an,
      sym_definite_article,
      sym_mass_article,
      anon_sym_Understand,
      anon_sym_not,
      anon_sym_usually,
  [459] = 2,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    ACTIONS(62), 8,
      sym_word,
      anon_sym_a,
      anon_sym_an,
      sym_definite_article,
      sym_mass_article,
      anon_sym_Understand,
      anon_sym_not,
      anon_sym_usually,
  [474] = 2,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    ACTIONS(66), 8,
      sym_word,
      anon_sym_a,
      anon_sym_an,
      sym_definite_article,
      sym_mass_article,
      anon_sym_Understand,
      anon_sym_not,
      anon_sym_usually,
  [489] = 2,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    ACTIONS(70), 8,
      sym_word,
      anon_sym_a,
      anon_sym_an,
      sym_definite_article,
      sym_mass_article,
      anon_sym_Understand,
      anon_sym_not,
      anon_sym_usually,
  [504] = 2,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    ACTIONS(74), 8,
      sym_word,
      anon_sym_a,
      anon_sym_an,
      sym_definite_article,
      sym_mass_article,
      anon_sym_Understand,
      anon_sym_not,
      anon_sym_usually,
  [519] = 6,
    ACTIONS(76), 1,
      sym_word,
    STATE(44), 1,
      aux_sym_identifier_repeat1,
    STATE(65), 1,
      sym_identifier,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(78), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(87), 2,
      sym_indefinite_article,
      sym__article,
  [541] = 6,
    ACTIONS(76), 1,
      sym_word,
    STATE(44), 1,
      aux_sym_identifier_repeat1,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(78), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(87), 2,
      sym_indefinite_article,
      sym__article,
  [563] = 2,
    ACTIONS(82), 1,
      aux_sym_section_heading_token1,
    ACTIONS(80), 8,
      sym_word,
      anon_sym_a,
      anon_sym_an,
      sym_definite_article,
      sym_mass_article,
      anon_sym_Understand,
      anon_sym_not,
      anon_sym_usually,
  [577] = 6,
    ACTIONS(76), 1,
      sym_word,
    STATE(44), 1,
      aux_sym_identifier_repeat1,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(34), 2,
      anon_sym_a,
      anon_sym_an,
    ACTIONS(78), 2,
      sym_definite_article,
      sym_mass_article,
    STATE(87), 2,
      sym_indefinite_article,
      sym__article,
  [599] = 3,
    ACTIONS(86), 1,
      aux_sym__space_token1,
    STATE(37), 1,
      sym__space,
    ACTIONS(84), 6,
      sym_word,
      anon_sym_has,
      anon_sym_canbe,
      anon_sym_of,
      anon_sym_in,
      anon_sym_is,
  [614] = 1,
    ACTIONS(88), 7,
      sym_full_stop,
      anon_sym_has,
      anon_sym_called,
      anon_sym_canbe,
      anon_sym_of,
      anon_sym_in,
      anon_sym_is,
  [624] = 1,
    ACTIONS(90), 7,
      sym_full_stop,
      anon_sym_has,
      anon_sym_called,
      anon_sym_canbe,
      anon_sym_of,
      anon_sym_in,
      anon_sym_is,
  [634] = 3,
    ACTIONS(92), 1,
      aux_sym__space_token1,
    STATE(41), 1,
      sym__space,
    ACTIONS(84), 5,
      sym_word,
      sym_full_stop,
      anon_sym_called,
      anon_sym_of,
      anon_sym_in,
  [648] = 4,
    ACTIONS(30), 1,
      sym_word,
    ACTIONS(96), 1,
      anon_sym_canbe,
    STATE(34), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(94), 4,
      anon_sym_has,
      anon_sym_of,
      anon_sym_in,
      anon_sym_is,
  [664] = 4,
    ACTIONS(30), 1,
      sym_word,
    ACTIONS(100), 1,
      anon_sym_canbe,
    STATE(34), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(98), 4,
      anon_sym_has,
      anon_sym_of,
      anon_sym_in,
      anon_sym_is,
  [680] = 4,
    ACTIONS(102), 1,
      sym_word,
    ACTIONS(107), 1,
      anon_sym_canbe,
    STATE(34), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(105), 4,
      anon_sym_has,
      anon_sym_of,
      anon_sym_in,
      anon_sym_is,
  [696] = 1,
    ACTIONS(109), 7,
      sym_full_stop,
      anon_sym_has,
      anon_sym_called,
      anon_sym_canbe,
      anon_sym_of,
      anon_sym_in,
      anon_sym_is,
  [706] = 1,
    ACTIONS(111), 7,
      sym_full_stop,
      anon_sym_has,
      anon_sym_called,
      anon_sym_canbe,
      anon_sym_of,
      anon_sym_in,
      anon_sym_is,
  [716] = 2,
    ACTIONS(107), 1,
      anon_sym_canbe,
    ACTIONS(105), 5,
      sym_word,
      anon_sym_has,
      anon_sym_of,
      anon_sym_in,
      anon_sym_is,
  [727] = 4,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(100), 1,
      sym_full_stop,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(98), 3,
      anon_sym_called,
      anon_sym_of,
      anon_sym_in,
  [742] = 4,
    ACTIONS(107), 1,
      sym_full_stop,
    ACTIONS(113), 1,
      sym_word,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(105), 3,
      anon_sym_called,
      anon_sym_of,
      anon_sym_in,
  [757] = 4,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(96), 1,
      sym_full_stop,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(94), 3,
      anon_sym_called,
      anon_sym_of,
      anon_sym_in,
  [772] = 2,
    ACTIONS(107), 1,
      sym_full_stop,
    ACTIONS(105), 4,
      sym_word,
      anon_sym_called,
      anon_sym_of,
      anon_sym_in,
  [782] = 5,
    ACTIONS(116), 1,
      anon_sym_has,
    ACTIONS(118), 1,
      anon_sym_canbe,
    ACTIONS(120), 1,
      anon_sym_of,
    ACTIONS(122), 1,
      anon_sym_in,
    ACTIONS(124), 1,
      anon_sym_is,
  [798] = 3,
    ACTIONS(126), 1,
      aux_sym__space_token1,
    STATE(56), 1,
      sym__space,
    ACTIONS(84), 2,
      sym_word,
      sym_line_ending,
  [809] = 3,
    ACTIONS(76), 1,
      sym_word,
    ACTIONS(96), 1,
      sym_line_ending,
    STATE(48), 1,
      aux_sym_identifier_repeat1,
  [819] = 3,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      aux_sym_string_literal_token1,
    STATE(50), 1,
      aux_sym_string_literal_repeat1,
  [829] = 3,
    ACTIONS(132), 1,
      sym_full_stop,
    ACTIONS(134), 1,
      anon_sym_of,
    ACTIONS(136), 1,
      anon_sym_in,
  [839] = 3,
    ACTIONS(76), 1,
      sym_word,
    ACTIONS(100), 1,
      sym_line_ending,
    STATE(48), 1,
      aux_sym_identifier_repeat1,
  [849] = 3,
    ACTIONS(107), 1,
      sym_line_ending,
    ACTIONS(138), 1,
      sym_word,
    STATE(48), 1,
      aux_sym_identifier_repeat1,
  [859] = 3,
    ACTIONS(134), 1,
      anon_sym_of,
    ACTIONS(136), 1,
      anon_sym_in,
    ACTIONS(141), 1,
      sym_full_stop,
  [869] = 3,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      aux_sym_string_literal_token1,
    STATE(53), 1,
      aux_sym_string_literal_repeat1,
  [879] = 3,
    ACTIONS(134), 1,
      anon_sym_of,
    ACTIONS(136), 1,
      anon_sym_in,
    ACTIONS(147), 1,
      anon_sym_called,
  [889] = 3,
    ACTIONS(134), 1,
      anon_sym_of,
    ACTIONS(136), 1,
      anon_sym_in,
    ACTIONS(149), 1,
      sym_full_stop,
  [899] = 3,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym_string_literal_token1,
    STATE(53), 1,
      aux_sym_string_literal_repeat1,
  [909] = 3,
    ACTIONS(134), 1,
      anon_sym_of,
    ACTIONS(136), 1,
      anon_sym_in,
    ACTIONS(156), 1,
      sym_full_stop,
  [919] = 2,
    ACTIONS(3), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_string_literal,
  [926] = 2,
    ACTIONS(105), 1,
      sym_word,
    ACTIONS(107), 1,
      sym_line_ending,
  [933] = 2,
    ACTIONS(158), 1,
      anon_sym_DASH,
    ACTIONS(160), 1,
      sym_number,
  [940] = 2,
    ACTIONS(162), 1,
      sym_word,
    STATE(38), 1,
      aux_sym_identifier_repeat1,
  [947] = 2,
    ACTIONS(164), 1,
      sym_word,
    STATE(47), 1,
      aux_sym_identifier_repeat1,
  [954] = 2,
    ACTIONS(166), 1,
      sym_word,
    STATE(33), 1,
      aux_sym_identifier_repeat1,
  [961] = 1,
    ACTIONS(168), 1,
      aux_sym__space_token1,
  [965] = 1,
    ACTIONS(170), 1,
      aux_sym__space_token1,
  [969] = 1,
    ACTIONS(172), 1,
      aux_sym__space_token1,
  [973] = 1,
    ACTIONS(174), 1,
      aux_sym__space_token1,
  [977] = 1,
    ACTIONS(176), 1,
      sym_line_ending,
  [981] = 1,
    ACTIONS(178), 1,
      anon_sym_by,
  [985] = 1,
    ACTIONS(180), 1,
      aux_sym__space_token1,
  [989] = 1,
    ACTIONS(182), 1,
      aux_sym__space_token1,
  [993] = 1,
    ACTIONS(184), 1,
      aux_sym__space_token1,
  [997] = 1,
    ACTIONS(186), 1,
      aux_sym__space_token1,
  [1001] = 1,
    ACTIONS(188), 1,
      aux_sym__space_token1,
  [1005] = 1,
    ACTIONS(190), 1,
      sym_line_ending,
  [1009] = 1,
    ACTIONS(192), 1,
      anon_sym_DASH,
  [1013] = 1,
    ACTIONS(194), 1,
      anon_sym_as,
  [1017] = 1,
    ACTIONS(196), 1,
      sym_line_ending,
  [1021] = 1,
    ACTIONS(198), 1,
      aux_sym__space_token1,
  [1025] = 1,
    ACTIONS(200), 1,
      aux_sym__space_token1,
  [1029] = 1,
    ACTIONS(202), 1,
      aux_sym__space_token1,
  [1033] = 1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [1037] = 1,
    ACTIONS(206), 1,
      aux_sym__space_token1,
  [1041] = 1,
    ACTIONS(208), 1,
      aux_sym__space_token1,
  [1045] = 1,
    ACTIONS(210), 1,
      aux_sym__space_token1,
  [1049] = 1,
    ACTIONS(212), 1,
      aux_sym__space_token1,
  [1053] = 1,
    ACTIONS(214), 1,
      aux_sym__space_token1,
  [1057] = 1,
    ACTIONS(216), 1,
      aux_sym__space_token1,
  [1061] = 1,
    ACTIONS(218), 1,
      aux_sym__space_token1,
  [1065] = 1,
    ACTIONS(220), 1,
      aux_sym__space_token1,
  [1069] = 1,
    ACTIONS(222), 1,
      aux_sym__space_token1,
  [1073] = 1,
    ACTIONS(224), 1,
      aux_sym__space_token1,
  [1077] = 1,
    ACTIONS(226), 1,
      aux_sym__space_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 231,
  [SMALL_STATE(13)] = 264,
  [SMALL_STATE(14)] = 297,
  [SMALL_STATE(15)] = 330,
  [SMALL_STATE(16)] = 363,
  [SMALL_STATE(17)] = 396,
  [SMALL_STATE(18)] = 429,
  [SMALL_STATE(19)] = 444,
  [SMALL_STATE(20)] = 459,
  [SMALL_STATE(21)] = 474,
  [SMALL_STATE(22)] = 489,
  [SMALL_STATE(23)] = 504,
  [SMALL_STATE(24)] = 519,
  [SMALL_STATE(25)] = 541,
  [SMALL_STATE(26)] = 563,
  [SMALL_STATE(27)] = 577,
  [SMALL_STATE(28)] = 599,
  [SMALL_STATE(29)] = 614,
  [SMALL_STATE(30)] = 624,
  [SMALL_STATE(31)] = 634,
  [SMALL_STATE(32)] = 648,
  [SMALL_STATE(33)] = 664,
  [SMALL_STATE(34)] = 680,
  [SMALL_STATE(35)] = 696,
  [SMALL_STATE(36)] = 706,
  [SMALL_STATE(37)] = 716,
  [SMALL_STATE(38)] = 727,
  [SMALL_STATE(39)] = 742,
  [SMALL_STATE(40)] = 757,
  [SMALL_STATE(41)] = 772,
  [SMALL_STATE(42)] = 782,
  [SMALL_STATE(43)] = 798,
  [SMALL_STATE(44)] = 809,
  [SMALL_STATE(45)] = 819,
  [SMALL_STATE(46)] = 829,
  [SMALL_STATE(47)] = 839,
  [SMALL_STATE(48)] = 849,
  [SMALL_STATE(49)] = 859,
  [SMALL_STATE(50)] = 869,
  [SMALL_STATE(51)] = 879,
  [SMALL_STATE(52)] = 889,
  [SMALL_STATE(53)] = 899,
  [SMALL_STATE(54)] = 909,
  [SMALL_STATE(55)] = 919,
  [SMALL_STATE(56)] = 926,
  [SMALL_STATE(57)] = 933,
  [SMALL_STATE(58)] = 940,
  [SMALL_STATE(59)] = 947,
  [SMALL_STATE(60)] = 954,
  [SMALL_STATE(61)] = 961,
  [SMALL_STATE(62)] = 965,
  [SMALL_STATE(63)] = 969,
  [SMALL_STATE(64)] = 973,
  [SMALL_STATE(65)] = 977,
  [SMALL_STATE(66)] = 981,
  [SMALL_STATE(67)] = 985,
  [SMALL_STATE(68)] = 989,
  [SMALL_STATE(69)] = 993,
  [SMALL_STATE(70)] = 997,
  [SMALL_STATE(71)] = 1001,
  [SMALL_STATE(72)] = 1005,
  [SMALL_STATE(73)] = 1009,
  [SMALL_STATE(74)] = 1013,
  [SMALL_STATE(75)] = 1017,
  [SMALL_STATE(76)] = 1021,
  [SMALL_STATE(77)] = 1025,
  [SMALL_STATE(78)] = 1029,
  [SMALL_STATE(79)] = 1033,
  [SMALL_STATE(80)] = 1037,
  [SMALL_STATE(81)] = 1041,
  [SMALL_STATE(82)] = 1045,
  [SMALL_STATE(83)] = 1049,
  [SMALL_STATE(84)] = 1053,
  [SMALL_STATE(85)] = 1057,
  [SMALL_STATE(86)] = 1061,
  [SMALL_STATE(87)] = 1065,
  [SMALL_STATE(88)] = 1069,
  [SMALL_STATE(89)] = 1073,
  [SMALL_STATE(90)] = 1077,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_statement, 8),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_statement, 8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_can_be_statement, 5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_can_be_statement, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_statement, 5),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_statement, 5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_understand_statement, 8),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_understand_statement, 8),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 6),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 6),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_of_expression, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(28),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usually_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 3),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(43),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(53),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indefinite_article, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_inform7(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_word,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
