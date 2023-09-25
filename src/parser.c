#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 673
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 183
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  sym_lowercase_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_ = 4,
  anon_sym_priv = 5,
  anon_sym_pub = 6,
  anon_sym_LPAREN = 7,
  anon_sym_readonly = 8,
  anon_sym_RPAREN = 9,
  anon_sym_type = 10,
  anon_sym_struct = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  anon_sym_enum = 15,
  anon_sym_COMMA = 16,
  anon_sym_let = 17,
  anon_sym_EQ = 18,
  anon_sym_func = 19,
  anon_sym_interface = 20,
  anon_sym__ = 21,
  anon_sym_DQUOTE = 22,
  anon_sym_BSLASH_LPAREN = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym_integer_literal = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_char_literal_token1 = 28,
  sym_unescaped_string_fragment = 29,
  sym_escape_seqence = 30,
  anon_sym_DASH = 31,
  anon_sym_PLUS = 32,
  anon_sym_STAR_STAR = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  anon_sym_STAR_EQ = 36,
  anon_sym_SLASH_EQ = 37,
  anon_sym_PERCENT = 38,
  anon_sym_PLUS_EQ = 39,
  anon_sym_DASH_EQ = 40,
  anon_sym_GT = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_LT_EQ = 43,
  anon_sym_LT = 44,
  anon_sym_EQ_EQ = 45,
  anon_sym_BANG_EQ = 46,
  anon_sym_AMP_AMP = 47,
  anon_sym_PIPE_PIPE = 48,
  anon_sym_DOT_DOT = 49,
  anon_sym_fn = 50,
  anon_sym_LBRACK = 51,
  anon_sym_RBRACK = 52,
  aux_sym_accessor_token1 = 53,
  anon_sym_match = 54,
  anon_sym_EQ_GT = 55,
  anon_sym_if = 56,
  anon_sym_else = 57,
  anon_sym_break = 58,
  anon_sym_continue = 59,
  anon_sym_COLON_EQ = 60,
  anon_sym_var = 61,
  anon_sym_while = 62,
  anon_sym_return = 63,
  anon_sym_as = 64,
  anon_sym_PIPE = 65,
  anon_sym_DASH_GT = 66,
  sym_mutability = 67,
  sym_uppercase_identifier = 68,
  sym_colon_colon_uppercase_identifier = 69,
  sym_colon_colon_lowercase_identifier = 70,
  sym_identifier = 71,
  sym_dot_identifier = 72,
  sym_package_identifier = 73,
  sym_comment = 74,
  sym_float_literal = 75,
  sym_structure = 76,
  sym_structure_item = 77,
  sym_visibility = 78,
  sym_pub_attribute = 79,
  sym_type_definition = 80,
  sym_struct_definition = 81,
  sym_struct_filed_declaration = 82,
  sym_enum_definition = 83,
  sym_enum_constructor = 84,
  sym_value_definition = 85,
  sym_function_definition = 86,
  sym_interface_definition = 87,
  sym_interface_method_declaration = 88,
  sym_expression = 89,
  sym_simple_expression = 90,
  sym_atomic_expression = 91,
  sym_string_interpolation = 92,
  sym_interpolator = 93,
  sym_literal = 94,
  sym_boolean_literal = 95,
  sym_char_literal = 96,
  sym_string_literal = 97,
  sym_string_fragement = 98,
  sym_unary_expression = 99,
  sym_binary_expression = 100,
  sym_struct_expression = 101,
  sym_struct_field_expression = 102,
  sym_struct_filed_expression = 103,
  sym_labeled_expression = 104,
  sym_labeled_expression_pun = 105,
  sym_block_expression = 106,
  sym_nonempty_block_expression = 107,
  sym_anonymous_lambda_expression = 108,
  sym_constructor_expression = 109,
  sym_apply_expression = 110,
  sym_array_access_expression = 111,
  sym_dot_apply_expression = 112,
  sym_access_expression = 113,
  sym_accessor = 114,
  sym_method_expression = 115,
  sym_unit_expression = 116,
  sym_tuple_expression = 117,
  sym_constraint_expression = 118,
  sym_array_expression = 119,
  sym_match_expression = 120,
  sym_case_clause = 121,
  sym_if_expression = 122,
  sym_else_clause = 123,
  sym_statement_expression = 124,
  sym_let_expression = 125,
  sym_shorthand_let_expression = 126,
  sym_shorthand_let_pattern = 127,
  sym_var_expression = 128,
  sym_assign_expression = 129,
  sym_left_value = 130,
  sym_named_lambda_expression = 131,
  sym_while_expression = 132,
  sym_return_expression = 133,
  sym_pattern = 134,
  sym_as_pattern = 135,
  sym_or_pattern = 136,
  sym_simple_pattern = 137,
  sym_constructor_pattern = 138,
  sym_tuple_pattern = 139,
  sym_constraint_pattern = 140,
  sym_array_pattern = 141,
  sym_array_sub_pattern = 142,
  sym_dotdot_pattern = 143,
  sym_struct_pattern = 144,
  sym_struct_filed_pattern = 145,
  sym_filed_single_pattern = 146,
  sym_labeled_pattern = 147,
  sym_labeled_pattern_pun = 148,
  sym_type = 149,
  sym_tuple_type = 150,
  sym_function_type = 151,
  sym_apply_type = 152,
  sym_type_arguments = 153,
  sym_type_parameters = 154,
  sym_type_annotation = 155,
  sym_return_type = 156,
  sym_parameter = 157,
  sym_parameters = 158,
  sym_any = 159,
  sym_pub = 160,
  sym_qualified_identifier = 161,
  sym_qualified_type_identifier = 162,
  sym_function_identifier = 163,
  sym_type_identifier = 164,
  sym_constraints = 165,
  sym_constraint = 166,
  aux_sym_structure_repeat1 = 167,
  aux_sym_struct_definition_repeat1 = 168,
  aux_sym_enum_definition_repeat1 = 169,
  aux_sym_enum_constructor_repeat1 = 170,
  aux_sym_interface_definition_repeat1 = 171,
  aux_sym_string_interpolation_repeat1 = 172,
  aux_sym_string_interpolation_repeat2 = 173,
  aux_sym_struct_field_expression_repeat1 = 174,
  aux_sym_block_expression_repeat1 = 175,
  aux_sym_apply_expression_repeat1 = 176,
  aux_sym_match_expression_repeat1 = 177,
  aux_sym_constructor_pattern_repeat1 = 178,
  aux_sym_struct_filed_pattern_repeat1 = 179,
  aux_sym_type_parameters_repeat1 = 180,
  aux_sym_parameters_repeat1 = 181,
  aux_sym_constraints_repeat1 = 182,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_lowercase_identifier] = "lowercase_identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_] = " ",
  [anon_sym_priv] = "priv",
  [anon_sym_pub] = "pub",
  [anon_sym_LPAREN] = "(",
  [anon_sym_readonly] = "readonly",
  [anon_sym_RPAREN] = ")",
  [anon_sym_type] = "type",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_func] = "func",
  [anon_sym_interface] = "interface",
  [anon_sym__] = "_",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_LPAREN] = "\\(",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [sym_unescaped_string_fragment] = "unescaped_string_fragment",
  [sym_escape_seqence] = "escape_seqence",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_fn] = "fn",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_accessor_token1] = "accessor_token1",
  [anon_sym_match] = "match",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_var] = "var",
  [anon_sym_while] = "while",
  [anon_sym_return] = "return",
  [anon_sym_as] = "as",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [sym_mutability] = "mutability",
  [sym_uppercase_identifier] = "uppercase_identifier",
  [sym_colon_colon_uppercase_identifier] = "colon_colon_uppercase_identifier",
  [sym_colon_colon_lowercase_identifier] = "colon_colon_lowercase_identifier",
  [sym_identifier] = "identifier",
  [sym_dot_identifier] = "dot_identifier",
  [sym_package_identifier] = "package_identifier",
  [sym_comment] = "comment",
  [sym_float_literal] = "float_literal",
  [sym_structure] = "structure",
  [sym_structure_item] = "structure_item",
  [sym_visibility] = "visibility",
  [sym_pub_attribute] = "pub_attribute",
  [sym_type_definition] = "type_definition",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_filed_declaration] = "struct_filed_declaration",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_constructor] = "enum_constructor",
  [sym_value_definition] = "value_definition",
  [sym_function_definition] = "function_definition",
  [sym_interface_definition] = "interface_definition",
  [sym_interface_method_declaration] = "interface_method_declaration",
  [sym_expression] = "expression",
  [sym_simple_expression] = "simple_expression",
  [sym_atomic_expression] = "atomic_expression",
  [sym_string_interpolation] = "string_interpolation",
  [sym_interpolator] = "interpolator",
  [sym_literal] = "literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_fragement] = "string_fragement",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_struct_expression] = "struct_expression",
  [sym_struct_field_expression] = "struct_field_expression",
  [sym_struct_filed_expression] = "struct_filed_expression",
  [sym_labeled_expression] = "labeled_expression",
  [sym_labeled_expression_pun] = "labeled_expression_pun",
  [sym_block_expression] = "block_expression",
  [sym_nonempty_block_expression] = "nonempty_block_expression",
  [sym_anonymous_lambda_expression] = "anonymous_lambda_expression",
  [sym_constructor_expression] = "constructor_expression",
  [sym_apply_expression] = "apply_expression",
  [sym_array_access_expression] = "array_access_expression",
  [sym_dot_apply_expression] = "dot_apply_expression",
  [sym_access_expression] = "access_expression",
  [sym_accessor] = "accessor",
  [sym_method_expression] = "method_expression",
  [sym_unit_expression] = "unit_expression",
  [sym_tuple_expression] = "tuple_expression",
  [sym_constraint_expression] = "constraint_expression",
  [sym_array_expression] = "array_expression",
  [sym_match_expression] = "match_expression",
  [sym_case_clause] = "case_clause",
  [sym_if_expression] = "if_expression",
  [sym_else_clause] = "else_clause",
  [sym_statement_expression] = "statement_expression",
  [sym_let_expression] = "let_expression",
  [sym_shorthand_let_expression] = "shorthand_let_expression",
  [sym_shorthand_let_pattern] = "shorthand_let_pattern",
  [sym_var_expression] = "var_expression",
  [sym_assign_expression] = "assign_expression",
  [sym_left_value] = "left_value",
  [sym_named_lambda_expression] = "named_lambda_expression",
  [sym_while_expression] = "while_expression",
  [sym_return_expression] = "return_expression",
  [sym_pattern] = "pattern",
  [sym_as_pattern] = "as_pattern",
  [sym_or_pattern] = "or_pattern",
  [sym_simple_pattern] = "simple_pattern",
  [sym_constructor_pattern] = "constructor_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym_constraint_pattern] = "constraint_pattern",
  [sym_array_pattern] = "array_pattern",
  [sym_array_sub_pattern] = "array_sub_pattern",
  [sym_dotdot_pattern] = "dotdot_pattern",
  [sym_struct_pattern] = "struct_pattern",
  [sym_struct_filed_pattern] = "struct_filed_pattern",
  [sym_filed_single_pattern] = "filed_single_pattern",
  [sym_labeled_pattern] = "labeled_pattern",
  [sym_labeled_pattern_pun] = "labeled_pattern_pun",
  [sym_type] = "type",
  [sym_tuple_type] = "tuple_type",
  [sym_function_type] = "function_type",
  [sym_apply_type] = "apply_type",
  [sym_type_arguments] = "type_arguments",
  [sym_type_parameters] = "type_parameters",
  [sym_type_annotation] = "type_annotation",
  [sym_return_type] = "return_type",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_any] = "any",
  [sym_pub] = "pub",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_qualified_type_identifier] = "qualified_type_identifier",
  [sym_function_identifier] = "function_identifier",
  [sym_type_identifier] = "type_identifier",
  [sym_constraints] = "constraints",
  [sym_constraint] = "constraint",
  [aux_sym_structure_repeat1] = "structure_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_enum_constructor_repeat1] = "enum_constructor_repeat1",
  [aux_sym_interface_definition_repeat1] = "interface_definition_repeat1",
  [aux_sym_string_interpolation_repeat1] = "string_interpolation_repeat1",
  [aux_sym_string_interpolation_repeat2] = "string_interpolation_repeat2",
  [aux_sym_struct_field_expression_repeat1] = "struct_field_expression_repeat1",
  [aux_sym_block_expression_repeat1] = "block_expression_repeat1",
  [aux_sym_apply_expression_repeat1] = "apply_expression_repeat1",
  [aux_sym_match_expression_repeat1] = "match_expression_repeat1",
  [aux_sym_constructor_pattern_repeat1] = "constructor_pattern_repeat1",
  [aux_sym_struct_filed_pattern_repeat1] = "struct_filed_pattern_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_constraints_repeat1] = "constraints_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_lowercase_identifier] = sym_lowercase_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_] = anon_sym_,
  [anon_sym_priv] = anon_sym_priv,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym__] = anon_sym__,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_LPAREN] = anon_sym_BSLASH_LPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [sym_unescaped_string_fragment] = sym_unescaped_string_fragment,
  [sym_escape_seqence] = sym_escape_seqence,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_accessor_token1] = aux_sym_accessor_token1,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_mutability] = sym_mutability,
  [sym_uppercase_identifier] = sym_uppercase_identifier,
  [sym_colon_colon_uppercase_identifier] = sym_colon_colon_uppercase_identifier,
  [sym_colon_colon_lowercase_identifier] = sym_colon_colon_lowercase_identifier,
  [sym_identifier] = sym_identifier,
  [sym_dot_identifier] = sym_dot_identifier,
  [sym_package_identifier] = sym_package_identifier,
  [sym_comment] = sym_comment,
  [sym_float_literal] = sym_float_literal,
  [sym_structure] = sym_structure,
  [sym_structure_item] = sym_structure_item,
  [sym_visibility] = sym_visibility,
  [sym_pub_attribute] = sym_pub_attribute,
  [sym_type_definition] = sym_type_definition,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_filed_declaration] = sym_struct_filed_declaration,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_constructor] = sym_enum_constructor,
  [sym_value_definition] = sym_value_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym_interface_method_declaration] = sym_interface_method_declaration,
  [sym_expression] = sym_expression,
  [sym_simple_expression] = sym_simple_expression,
  [sym_atomic_expression] = sym_atomic_expression,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_interpolator] = sym_interpolator,
  [sym_literal] = sym_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_fragement] = sym_string_fragement,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_struct_expression] = sym_struct_expression,
  [sym_struct_field_expression] = sym_struct_field_expression,
  [sym_struct_filed_expression] = sym_struct_filed_expression,
  [sym_labeled_expression] = sym_labeled_expression,
  [sym_labeled_expression_pun] = sym_labeled_expression_pun,
  [sym_block_expression] = sym_block_expression,
  [sym_nonempty_block_expression] = sym_nonempty_block_expression,
  [sym_anonymous_lambda_expression] = sym_anonymous_lambda_expression,
  [sym_constructor_expression] = sym_constructor_expression,
  [sym_apply_expression] = sym_apply_expression,
  [sym_array_access_expression] = sym_array_access_expression,
  [sym_dot_apply_expression] = sym_dot_apply_expression,
  [sym_access_expression] = sym_access_expression,
  [sym_accessor] = sym_accessor,
  [sym_method_expression] = sym_method_expression,
  [sym_unit_expression] = sym_unit_expression,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_constraint_expression] = sym_constraint_expression,
  [sym_array_expression] = sym_array_expression,
  [sym_match_expression] = sym_match_expression,
  [sym_case_clause] = sym_case_clause,
  [sym_if_expression] = sym_if_expression,
  [sym_else_clause] = sym_else_clause,
  [sym_statement_expression] = sym_statement_expression,
  [sym_let_expression] = sym_let_expression,
  [sym_shorthand_let_expression] = sym_shorthand_let_expression,
  [sym_shorthand_let_pattern] = sym_shorthand_let_pattern,
  [sym_var_expression] = sym_var_expression,
  [sym_assign_expression] = sym_assign_expression,
  [sym_left_value] = sym_left_value,
  [sym_named_lambda_expression] = sym_named_lambda_expression,
  [sym_while_expression] = sym_while_expression,
  [sym_return_expression] = sym_return_expression,
  [sym_pattern] = sym_pattern,
  [sym_as_pattern] = sym_as_pattern,
  [sym_or_pattern] = sym_or_pattern,
  [sym_simple_pattern] = sym_simple_pattern,
  [sym_constructor_pattern] = sym_constructor_pattern,
  [sym_tuple_pattern] = sym_tuple_pattern,
  [sym_constraint_pattern] = sym_constraint_pattern,
  [sym_array_pattern] = sym_array_pattern,
  [sym_array_sub_pattern] = sym_array_sub_pattern,
  [sym_dotdot_pattern] = sym_dotdot_pattern,
  [sym_struct_pattern] = sym_struct_pattern,
  [sym_struct_filed_pattern] = sym_struct_filed_pattern,
  [sym_filed_single_pattern] = sym_filed_single_pattern,
  [sym_labeled_pattern] = sym_labeled_pattern,
  [sym_labeled_pattern_pun] = sym_labeled_pattern_pun,
  [sym_type] = sym_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_function_type] = sym_function_type,
  [sym_apply_type] = sym_apply_type,
  [sym_type_arguments] = sym_type_arguments,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_annotation] = sym_type_annotation,
  [sym_return_type] = sym_return_type,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_any] = sym_any,
  [sym_pub] = sym_pub,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_qualified_type_identifier] = sym_qualified_type_identifier,
  [sym_function_identifier] = sym_function_identifier,
  [sym_type_identifier] = sym_type_identifier,
  [sym_constraints] = sym_constraints,
  [sym_constraint] = sym_constraint,
  [aux_sym_structure_repeat1] = aux_sym_structure_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_enum_constructor_repeat1] = aux_sym_enum_constructor_repeat1,
  [aux_sym_interface_definition_repeat1] = aux_sym_interface_definition_repeat1,
  [aux_sym_string_interpolation_repeat1] = aux_sym_string_interpolation_repeat1,
  [aux_sym_string_interpolation_repeat2] = aux_sym_string_interpolation_repeat2,
  [aux_sym_struct_field_expression_repeat1] = aux_sym_struct_field_expression_repeat1,
  [aux_sym_block_expression_repeat1] = aux_sym_block_expression_repeat1,
  [aux_sym_apply_expression_repeat1] = aux_sym_apply_expression_repeat1,
  [aux_sym_match_expression_repeat1] = aux_sym_match_expression_repeat1,
  [aux_sym_constructor_pattern_repeat1] = aux_sym_constructor_pattern_repeat1,
  [aux_sym_struct_filed_pattern_repeat1] = aux_sym_struct_filed_pattern_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_constraints_repeat1] = aux_sym_constraints_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unescaped_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_seqence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
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
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
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
  [aux_sym_accessor_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_mutability] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_colon_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_colon_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_item] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_pub_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_value_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolator] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_fragement] = {
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
  [sym_struct_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_expression_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_nonempty_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_method_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_match_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_case_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_let_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_var_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_left_value] = {
    .visible = true,
    .named = true,
  },
  [sym_named_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_as_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_or_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_sub_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_dotdot_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_filed_single_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_pattern_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [sym_pub] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_structure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_field_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apply_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_filed_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 15,
  [27] = 25,
  [28] = 23,
  [29] = 19,
  [30] = 17,
  [31] = 21,
  [32] = 16,
  [33] = 33,
  [34] = 33,
  [35] = 14,
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
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 40,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 57,
  [62] = 56,
  [63] = 59,
  [64] = 64,
  [65] = 50,
  [66] = 38,
  [67] = 67,
  [68] = 45,
  [69] = 43,
  [70] = 42,
  [71] = 58,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 82,
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
  [104] = 88,
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
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 89,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 96,
  [161] = 92,
  [162] = 91,
  [163] = 163,
  [164] = 164,
  [165] = 122,
  [166] = 93,
  [167] = 123,
  [168] = 110,
  [169] = 130,
  [170] = 143,
  [171] = 73,
  [172] = 106,
  [173] = 144,
  [174] = 154,
  [175] = 146,
  [176] = 134,
  [177] = 141,
  [178] = 137,
  [179] = 152,
  [180] = 116,
  [181] = 78,
  [182] = 101,
  [183] = 136,
  [184] = 72,
  [185] = 145,
  [186] = 128,
  [187] = 157,
  [188] = 127,
  [189] = 126,
  [190] = 139,
  [191] = 159,
  [192] = 125,
  [193] = 140,
  [194] = 147,
  [195] = 148,
  [196] = 75,
  [197] = 115,
  [198] = 74,
  [199] = 158,
  [200] = 149,
  [201] = 77,
  [202] = 156,
  [203] = 120,
  [204] = 111,
  [205] = 103,
  [206] = 114,
  [207] = 117,
  [208] = 151,
  [209] = 76,
  [210] = 131,
  [211] = 112,
  [212] = 155,
  [213] = 132,
  [214] = 109,
  [215] = 108,
  [216] = 124,
  [217] = 119,
  [218] = 142,
  [219] = 135,
  [220] = 121,
  [221] = 153,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 222,
  [226] = 226,
  [227] = 226,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 230,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 242,
  [244] = 244,
  [245] = 240,
  [246] = 246,
  [247] = 238,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 249,
  [252] = 252,
  [253] = 253,
  [254] = 253,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 263,
  [268] = 268,
  [269] = 262,
  [270] = 268,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 266,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 264,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 282,
  [285] = 285,
  [286] = 280,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 289,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 288,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 290,
  [313] = 283,
  [314] = 314,
  [315] = 300,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 337,
  [344] = 344,
  [345] = 334,
  [346] = 335,
  [347] = 347,
  [348] = 348,
  [349] = 339,
  [350] = 350,
  [351] = 344,
  [352] = 348,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 365,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 372,
  [393] = 393,
  [394] = 347,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 384,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 410,
  [416] = 416,
  [417] = 417,
  [418] = 409,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 413,
  [426] = 426,
  [427] = 355,
  [428] = 420,
  [429] = 358,
  [430] = 430,
  [431] = 431,
  [432] = 411,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 356,
  [437] = 437,
  [438] = 416,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 357,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 319,
  [454] = 320,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 430,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 464,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 492,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 501,
  [508] = 508,
  [509] = 504,
  [510] = 395,
  [511] = 364,
  [512] = 506,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 519,
  [521] = 437,
  [522] = 522,
  [523] = 379,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 477,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 544,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 550,
  [555] = 446,
  [556] = 552,
  [557] = 557,
  [558] = 258,
  [559] = 559,
  [560] = 488,
  [561] = 374,
  [562] = 562,
  [563] = 563,
  [564] = 368,
  [565] = 543,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 407,
  [573] = 573,
  [574] = 360,
  [575] = 378,
  [576] = 576,
  [577] = 406,
  [578] = 578,
  [579] = 579,
  [580] = 404,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 259,
  [587] = 587,
  [588] = 588,
  [589] = 583,
  [590] = 590,
  [591] = 584,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 522,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 587,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 601,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 621,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 620,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 653,
  [657] = 657,
  [658] = 657,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 629,
  [663] = 626,
  [664] = 664,
  [665] = 665,
  [666] = 646,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
};

static inline bool sym_lowercase_identifier_character_set_1(int32_t c) {
  return (c < 43646
    ? (c < 4238
      ? (c < 2741
        ? (c < 2042
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1765
              ? (c < 1519
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)))
                : (c <= 1522 || (c < 1649
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1610)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c < 1786
                    ? (c >= 1774 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2493
            ? (c < 2365
              ? (c < 2144
                ? (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || (c < 2112
                    ? c == 2088
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))))
              : (c <= 2365 || (c < 2447
                ? (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))))
            : (c <= 2493 || (c < 2613
              ? (c < 2565
                ? (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3296
          ? (c < 2974
            ? (c < 2877
              ? (c < 2831
                ? (c < 2784
                  ? (c < 2768
                    ? c == 2749
                    : c <= 2768)
                  : (c <= 2785 || (c < 2821
                    ? c == 2809
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))
              : (c <= 2877 || (c < 2949
                ? (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))))))
            : (c <= 2975 || (c < 3165
              ? (c < 3086
                ? (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3077
                    ? c == 3024
                    : c <= 3084)))
                : (c <= 3088 || (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3218
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))))))))
          : (c <= 3297 || (c < 3724
            ? (c < 3482
              ? (c < 3406
                ? (c < 3342
                  ? (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)))
                : (c <= 3406 || (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))))
              : (c <= 3505 || (c < 3634
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3634 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))))
            : (c <= 3747 || (c < 3913
              ? (c < 3776
                ? (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))
                : (c <= 3780 || (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))))
              : (c <= 3948 || (c < 4186
                ? (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))))))))))
      : (c <= 4238 || (c < 8182
        ? (c < 6480
          ? (c < 4992
            ? (c < 4746
              ? (c < 4682
                ? (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))
                : (c <= 4685 || (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))
              : (c <= 4749 || (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))
            : (c <= 5007 || (c < 5984
              ? (c < 5792
                ? (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))
                : (c <= 5866 || (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))))
              : (c <= 5996 || (c < 6176
                ? (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))))))))
          : (c <= 6509 || (c < 7418
            ? (c < 7098
              ? (c < 6823
                ? (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)))
                : (c <= 6823 || (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))))
              : (c <= 7141 || (c < 7312
                ? (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))))))
            : (c <= 7418 || (c < 8031
              ? (c < 8008
                ? (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12549
          ? (c < 11559
            ? (c < 8488
              ? (c < 8458
                ? (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))
                : (c <= 8467 || (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))))
              : (c <= 8488 || (c < 8544
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8584 || (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))))))
            : (c <= 11559 || (c < 11728
              ? (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))))
          : (c <= 12591 || (c < 43015
            ? (c < 42623
              ? (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))))
            : (c <= 43018 || (c < 43396
              ? (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))))))))))))
    : (c <= 43695 || (c < 71236
      ? (c < 67424
        ? (c < 65149
          ? (c < 64112
            ? (c < 43793
              ? (c < 43739
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))
            : (c <= 64217 || (c < 64467
              ? (c < 64312
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65137
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65017)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || c == 65147))))))))
          : (c <= 65149 || (c < 66349
            ? (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))))
            : (c <= 66378 || (c < 66928
              ? (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69635
          ? (c < 68121
            ? (c < 67712
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))
              : (c <= 67742 || (c < 67968
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69687 || (c < 70303
            ? (c < 70081
              ? (c < 69956
                ? (c < 69763
                  ? (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)
                  : (c <= 69807 || (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70207
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70208 || (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))))))
            : (c <= 70312 || (c < 70493
              ? (c < 70442
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70320 && c <= 70366)
                    : c <= 70412)
                  : (c <= 70416 || (c >= 70419 && c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || c == 70480))))
              : (c <= 70497 || (c < 70852
                ? (c < 70751
                  ? (c < 70727
                    ? (c >= 70656 && c <= 70708)
                    : c <= 70730)
                  : (c <= 70753 || (c >= 70784 && c <= 70831)))
                : (c <= 70853 || (c < 71128
                  ? (c < 71040
                    ? c == 70855
                    : c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119973
        ? (c < 73728
          ? (c < 72272
            ? (c < 71960
              ? (c < 71840
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)))
                : (c <= 71903 || (c < 71948
                  ? (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)
                  : (c <= 71955 || (c >= 71957 && c <= 71958)))))
              : (c <= 71983 || (c < 72161
                ? (c < 72096
                  ? (c < 72001
                    ? c == 71999
                    : c <= 72001)
                  : (c <= 72103 || (c >= 72106 && c <= 72144)))
                : (c <= 72161 || (c < 72203
                  ? (c < 72192
                    ? c == 72163
                    : c <= 72192)
                  : (c <= 72242 || c == 72250))))))
            : (c <= 72272 || (c < 73030
              ? (c < 72768
                ? (c < 72368
                  ? (c < 72349
                    ? (c >= 72284 && c <= 72329)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)))
                : (c <= 72768 || (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))))
              : (c <= 73030 || (c < 73440
                ? (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))
                : (c <= 73458 || (c < 73490
                  ? (c < 73476
                    ? c == 73474
                    : c <= 73488)
                  : (c <= 73523 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 78913
                    ? (c >= 77824 && c <= 78895)
                    : c <= 78918)))
                : (c <= 83526 || (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))))
              : (c <= 92975 || (c < 93952
                ? (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))
                : (c <= 94026 || (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))))))
            : (c <= 100343 || (c < 110948
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110928
                  ? (c < 110898
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110898)
                  : (c <= 110930 || c == 110933))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126464
          ? (c < 120656
            ? (c < 120128
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c >= 120123 && c <= 120126)))))
              : (c <= 120132 || (c < 120514
                ? (c < 120146
                  ? (c < 120138
                    ? c == 120134
                    : c <= 120144)
                  : (c <= 120485 || (c >= 120488 && c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123536
              ? (c < 122661
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122666 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122928 && c <= 122989)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124909
                ? (c < 124896
                  ? (c < 124112
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124139)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || (c < 126505
                    ? c == 126503
                    : c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177977 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 201552 && c <= 205743)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_2(int32_t c) {
  return (c < 110898
    ? (c < 73490
      ? (c < 73474
        ? (c >= 70207 && c <= 70208)
        : (c <= 73474 || (c >= 73476 && c <= 73488)))
      : (c <= 73523 || (c < 78913
        ? c == 78895
        : c <= 78918)))
    : (c <= 110898 || (c < 124112
      ? (c < 122661
        ? c == 110933
        : (c <= 122666 || (c >= 122928 && c <= 122989)))
      : (c <= 124139 || (c < 201552
        ? c == 177977
        : c <= 205743)))));
}

static inline bool sym_lowercase_identifier_character_set_3(int32_t c) {
  return (c < 43520
    ? (c < 4197
      ? (c < 2730
        ? (c < 2036
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1749
              ? (c < 1488
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2602
              ? (c < 2544
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2654
                ? (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3253
          ? (c < 2969
            ? (c < 2866
              ? (c < 2809
                ? (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || (c < 2784
                    ? c == 2768
                    : c <= 2785)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2929
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))))
            : (c <= 2970 || (c < 3114
              ? (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3200
                ? (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))
          : (c <= 3257 || (c < 3713
            ? (c < 3423
              ? (c < 3342
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))))
              : (c <= 3425 || (c < 3517
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))))))
            : (c <= 3714 || (c < 3804
              ? (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3807 || (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))))))))))
      : (c <= 4198 || (c < 8144
        ? (c < 6272
          ? (c < 4824
            ? (c < 4696
              ? (c < 4301
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
            : (c <= 4880 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))))))))
          : (c <= 6312 || (c < 7357
            ? (c < 6917
              ? (c < 6528
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))))
              : (c <= 6963 || (c < 7168
                ? (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))))))
        : (c <= 8147 || (c < 12344
          ? (c < 11264
            ? (c < 8469
              ? (c < 8319
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))
                : (c <= 8319 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))
            : (c <= 11492 || (c < 11688
              ? (c < 11565
                ? (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))
              : (c <= 11694 || (c < 11728
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))))))
          : (c <= 12348 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_4(int32_t c) {
  return (c < 43646
    ? (c < 4213
      ? (c < 2738
        ? (c < 2036
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1749
              ? (c < 1488
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2610
              ? (c < 2556
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)))
                : (c <= 2556 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2674
                ? (c < 2649
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3293
          ? (c < 2972
            ? (c < 2869
              ? (c < 2821
                ? (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))
              : (c <= 2873 || (c < 2947
                ? (c < 2911
                  ? (c < 2908
                    ? c == 2877
                    : c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))))
            : (c <= 2972 || (c < 3160
              ? (c < 3077
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)))
                : (c <= 3084 || (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))))))))
          : (c <= 3294 || (c < 3718
            ? (c < 3461
              ? (c < 3389
                ? (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)))
                : (c <= 3389 || (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))))
              : (c <= 3478 || (c < 3585
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3713
                  ? (c < 3648
                    ? c == 3634
                    : c <= 3654)
                  : (c <= 3714 || c == 3716))))))
            : (c <= 3722 || (c < 3904
              ? (c < 3773
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3760 || c == 3762))
                : (c <= 3773 || (c < 3804
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3807 || c == 3840))))
              : (c <= 3911 || (c < 4176
                ? (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))))))))))
      : (c <= 4225 || (c < 8182
        ? (c < 6400
          ? (c < 4888
            ? (c < 4704
              ? (c < 4348
                ? (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))
                : (c <= 4680 || (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4800
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
            : (c <= 4954 || (c < 5952
              ? (c < 5761
                ? (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6108
                ? (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))))
          : (c <= 6430 || (c < 7413
            ? (c < 7086
              ? (c < 6688
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)))
                : (c <= 6740 || (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))))
              : (c <= 7087 || (c < 7296
                ? (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))))))
            : (c <= 7414 || (c < 8031
              ? (c < 8008
                ? (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12549
          ? (c < 11559
            ? (c < 8488
              ? (c < 8458
                ? (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))
                : (c <= 8467 || (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))))
              : (c <= 8488 || (c < 8544
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8584 || (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))))))
            : (c <= 11559 || (c < 11728
              ? (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))))
          : (c <= 12591 || (c < 43015
            ? (c < 42623
              ? (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))))
            : (c <= 43018 || (c < 43396
              ? (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))))))))))))
    : (c <= 43695 || (c < 71236
      ? (c < 67424
        ? (c < 65149
          ? (c < 64112
            ? (c < 43793
              ? (c < 43739
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))
            : (c <= 64217 || (c < 64467
              ? (c < 64312
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65137
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65017)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || c == 65147))))))))
          : (c <= 65149 || (c < 66349
            ? (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))))
            : (c <= 66378 || (c < 66928
              ? (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69635
          ? (c < 68121
            ? (c < 67712
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))
              : (c <= 67742 || (c < 67968
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69687 || (c < 70303
            ? (c < 70081
              ? (c < 69956
                ? (c < 69763
                  ? (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)
                  : (c <= 69807 || (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70207
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70208 || (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))))))
            : (c <= 70312 || (c < 70493
              ? (c < 70442
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70320 && c <= 70366)
                    : c <= 70412)
                  : (c <= 70416 || (c >= 70419 && c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || c == 70480))))
              : (c <= 70497 || (c < 70852
                ? (c < 70751
                  ? (c < 70727
                    ? (c >= 70656 && c <= 70708)
                    : c <= 70730)
                  : (c <= 70753 || (c >= 70784 && c <= 70831)))
                : (c <= 70853 || (c < 71128
                  ? (c < 71040
                    ? c == 70855
                    : c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119973
        ? (c < 73728
          ? (c < 72272
            ? (c < 71960
              ? (c < 71840
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)))
                : (c <= 71903 || (c < 71948
                  ? (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)
                  : (c <= 71955 || (c >= 71957 && c <= 71958)))))
              : (c <= 71983 || (c < 72161
                ? (c < 72096
                  ? (c < 72001
                    ? c == 71999
                    : c <= 72001)
                  : (c <= 72103 || (c >= 72106 && c <= 72144)))
                : (c <= 72161 || (c < 72203
                  ? (c < 72192
                    ? c == 72163
                    : c <= 72192)
                  : (c <= 72242 || c == 72250))))))
            : (c <= 72272 || (c < 73030
              ? (c < 72768
                ? (c < 72368
                  ? (c < 72349
                    ? (c >= 72284 && c <= 72329)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)))
                : (c <= 72768 || (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))))
              : (c <= 73030 || (c < 73440
                ? (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))
                : (c <= 73458 || (c < 73490
                  ? (c < 73476
                    ? c == 73474
                    : c <= 73488)
                  : (c <= 73523 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 78913
                    ? (c >= 77824 && c <= 78895)
                    : c <= 78918)))
                : (c <= 83526 || (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))))
              : (c <= 92975 || (c < 93952
                ? (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))
                : (c <= 94026 || (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))))))
            : (c <= 100343 || (c < 110948
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110928
                  ? (c < 110898
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110898)
                  : (c <= 110930 || c == 110933))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126464
          ? (c < 120656
            ? (c < 120128
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c >= 120123 && c <= 120126)))))
              : (c <= 120132 || (c < 120514
                ? (c < 120146
                  ? (c < 120138
                    ? c == 120134
                    : c <= 120144)
                  : (c <= 120485 || (c >= 120488 && c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123536
              ? (c < 122661
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122666 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122928 && c <= 122989)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124909
                ? (c < 124896
                  ? (c < 124112
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124139)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || (c < 126505
                    ? c == 126503
                    : c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177977 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 201552 && c <= 205743)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_5(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_6(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_dot_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(97);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(97);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 29:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(98);
      END_STATE();
    case 30:
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(101);
      END_STATE();
    case 31:
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(98);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(97);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(97);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(31);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(97);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(99);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_escape_seqence);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_accessor_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_colon_colon_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_colon_colon_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_dot_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_package_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_mutability);
      END_STATE();
    case 46:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_priv);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 4, .external_lex_state = 1},
  [3] = {.lex_state = 4, .external_lex_state = 1},
  [4] = {.lex_state = 4, .external_lex_state = 1},
  [5] = {.lex_state = 4, .external_lex_state = 1},
  [6] = {.lex_state = 4, .external_lex_state = 1},
  [7] = {.lex_state = 4, .external_lex_state = 1},
  [8] = {.lex_state = 4, .external_lex_state = 1},
  [9] = {.lex_state = 4, .external_lex_state = 1},
  [10] = {.lex_state = 4, .external_lex_state = 1},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 4, .external_lex_state = 1},
  [13] = {.lex_state = 4, .external_lex_state = 1},
  [14] = {.lex_state = 4, .external_lex_state = 1},
  [15] = {.lex_state = 4, .external_lex_state = 1},
  [16] = {.lex_state = 4, .external_lex_state = 1},
  [17] = {.lex_state = 4, .external_lex_state = 1},
  [18] = {.lex_state = 4, .external_lex_state = 1},
  [19] = {.lex_state = 4, .external_lex_state = 1},
  [20] = {.lex_state = 4, .external_lex_state = 1},
  [21] = {.lex_state = 4, .external_lex_state = 1},
  [22] = {.lex_state = 4, .external_lex_state = 1},
  [23] = {.lex_state = 4, .external_lex_state = 1},
  [24] = {.lex_state = 4, .external_lex_state = 1},
  [25] = {.lex_state = 4, .external_lex_state = 1},
  [26] = {.lex_state = 4, .external_lex_state = 1},
  [27] = {.lex_state = 4, .external_lex_state = 1},
  [28] = {.lex_state = 4, .external_lex_state = 1},
  [29] = {.lex_state = 4, .external_lex_state = 1},
  [30] = {.lex_state = 4, .external_lex_state = 1},
  [31] = {.lex_state = 4, .external_lex_state = 1},
  [32] = {.lex_state = 4, .external_lex_state = 1},
  [33] = {.lex_state = 4, .external_lex_state = 1},
  [34] = {.lex_state = 4, .external_lex_state = 1},
  [35] = {.lex_state = 4, .external_lex_state = 1},
  [36] = {.lex_state = 4, .external_lex_state = 1},
  [37] = {.lex_state = 4, .external_lex_state = 1},
  [38] = {.lex_state = 4, .external_lex_state = 1},
  [39] = {.lex_state = 4, .external_lex_state = 1},
  [40] = {.lex_state = 4, .external_lex_state = 1},
  [41] = {.lex_state = 4, .external_lex_state = 1},
  [42] = {.lex_state = 4, .external_lex_state = 1},
  [43] = {.lex_state = 4, .external_lex_state = 1},
  [44] = {.lex_state = 4, .external_lex_state = 1},
  [45] = {.lex_state = 4, .external_lex_state = 1},
  [46] = {.lex_state = 4, .external_lex_state = 1},
  [47] = {.lex_state = 4, .external_lex_state = 1},
  [48] = {.lex_state = 4, .external_lex_state = 1},
  [49] = {.lex_state = 4, .external_lex_state = 1},
  [50] = {.lex_state = 4, .external_lex_state = 1},
  [51] = {.lex_state = 4, .external_lex_state = 1},
  [52] = {.lex_state = 4, .external_lex_state = 1},
  [53] = {.lex_state = 4, .external_lex_state = 1},
  [54] = {.lex_state = 4, .external_lex_state = 1},
  [55] = {.lex_state = 4, .external_lex_state = 1},
  [56] = {.lex_state = 4, .external_lex_state = 1},
  [57] = {.lex_state = 4, .external_lex_state = 1},
  [58] = {.lex_state = 4, .external_lex_state = 1},
  [59] = {.lex_state = 4, .external_lex_state = 1},
  [60] = {.lex_state = 4, .external_lex_state = 1},
  [61] = {.lex_state = 4, .external_lex_state = 1},
  [62] = {.lex_state = 4, .external_lex_state = 1},
  [63] = {.lex_state = 4, .external_lex_state = 1},
  [64] = {.lex_state = 4, .external_lex_state = 1},
  [65] = {.lex_state = 4, .external_lex_state = 1},
  [66] = {.lex_state = 4, .external_lex_state = 1},
  [67] = {.lex_state = 4, .external_lex_state = 1},
  [68] = {.lex_state = 4, .external_lex_state = 1},
  [69] = {.lex_state = 4, .external_lex_state = 1},
  [70] = {.lex_state = 4, .external_lex_state = 1},
  [71] = {.lex_state = 4, .external_lex_state = 1},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 4, .external_lex_state = 1},
  [80] = {.lex_state = 4, .external_lex_state = 1},
  [81] = {.lex_state = 4, .external_lex_state = 1},
  [82] = {.lex_state = 4, .external_lex_state = 1},
  [83] = {.lex_state = 4, .external_lex_state = 1},
  [84] = {.lex_state = 4, .external_lex_state = 1},
  [85] = {.lex_state = 4, .external_lex_state = 1},
  [86] = {.lex_state = 4, .external_lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4, .external_lex_state = 1},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 4, .external_lex_state = 1},
  [95] = {.lex_state = 4, .external_lex_state = 1},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 4, .external_lex_state = 1},
  [98] = {.lex_state = 4, .external_lex_state = 1},
  [99] = {.lex_state = 4, .external_lex_state = 1},
  [100] = {.lex_state = 4, .external_lex_state = 1},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4, .external_lex_state = 1},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 4, .external_lex_state = 1},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4, .external_lex_state = 1},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4, .external_lex_state = 1},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4, .external_lex_state = 1},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4, .external_lex_state = 1},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4, .external_lex_state = 1},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4, .external_lex_state = 1},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 33},
  [257] = {.lex_state = 33},
  [258] = {.lex_state = 4, .external_lex_state = 1},
  [259] = {.lex_state = 4, .external_lex_state = 1},
  [260] = {.lex_state = 4, .external_lex_state = 1},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 8},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 8},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 8},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 9},
  [312] = {.lex_state = 8},
  [313] = {.lex_state = 8},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 8},
  [316] = {.lex_state = 33},
  [317] = {.lex_state = 8},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 33},
  [322] = {.lex_state = 33},
  [323] = {.lex_state = 33},
  [324] = {.lex_state = 33},
  [325] = {.lex_state = 33},
  [326] = {.lex_state = 33},
  [327] = {.lex_state = 33},
  [328] = {.lex_state = 33},
  [329] = {.lex_state = 33},
  [330] = {.lex_state = 33},
  [331] = {.lex_state = 33},
  [332] = {.lex_state = 33},
  [333] = {.lex_state = 33},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 8},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 6},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 33},
  [342] = {.lex_state = 33},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 6},
  [347] = {.lex_state = 4},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 6},
  [351] = {.lex_state = 6},
  [352] = {.lex_state = 6},
  [353] = {.lex_state = 33},
  [354] = {.lex_state = 9},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 8},
  [357] = {.lex_state = 8},
  [358] = {.lex_state = 8},
  [359] = {.lex_state = 6},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 33},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 9},
  [364] = {.lex_state = 4},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 33},
  [367] = {.lex_state = 9},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 6},
  [373] = {.lex_state = 8},
  [374] = {.lex_state = 4},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 33},
  [377] = {.lex_state = 3},
  [378] = {.lex_state = 4},
  [379] = {.lex_state = 4},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 3},
  [382] = {.lex_state = 33},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 33},
  [385] = {.lex_state = 33},
  [386] = {.lex_state = 33},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 33},
  [389] = {.lex_state = 9},
  [390] = {.lex_state = 9},
  [391] = {.lex_state = 15},
  [392] = {.lex_state = 6},
  [393] = {.lex_state = 8},
  [394] = {.lex_state = 1},
  [395] = {.lex_state = 4},
  [396] = {.lex_state = 8},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 33},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 33},
  [401] = {.lex_state = 9},
  [402] = {.lex_state = 3},
  [403] = {.lex_state = 3},
  [404] = {.lex_state = 4},
  [405] = {.lex_state = 3},
  [406] = {.lex_state = 4},
  [407] = {.lex_state = 4},
  [408] = {.lex_state = 33},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 1},
  [411] = {.lex_state = 33},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 1},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 8},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 33},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 1},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 1},
  [426] = {.lex_state = 1},
  [427] = {.lex_state = 3},
  [428] = {.lex_state = 1},
  [429] = {.lex_state = 3},
  [430] = {.lex_state = 8},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 33},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 6},
  [435] = {.lex_state = 6},
  [436] = {.lex_state = 3},
  [437] = {.lex_state = 8},
  [438] = {.lex_state = 8},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 17},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 8},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 8},
  [447] = {.lex_state = 3},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 33},
  [452] = {.lex_state = 33},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 33},
  [456] = {.lex_state = 1},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 1},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 1},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 33},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 33},
  [473] = {.lex_state = 1},
  [474] = {.lex_state = 1},
  [475] = {.lex_state = 1},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 1},
  [480] = {.lex_state = 4},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 4},
  [486] = {.lex_state = 1},
  [487] = {.lex_state = 1},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 1},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 33},
  [497] = {.lex_state = 1},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 33},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 8},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 1},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 1},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 1},
  [511] = {.lex_state = 1},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 1},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 1},
  [516] = {.lex_state = 1},
  [517] = {.lex_state = 1},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 17},
  [520] = {.lex_state = 17},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 1},
  [523] = {.lex_state = 1},
  [524] = {.lex_state = 4},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 1},
  [528] = {.lex_state = 4},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 1},
  [532] = {.lex_state = 4},
  [533] = {.lex_state = 4},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 33},
  [536] = {.lex_state = 8},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 1},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 16},
  [549] = {.lex_state = 1},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 1},
  [552] = {.lex_state = 17},
  [553] = {.lex_state = 1},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 1},
  [556] = {.lex_state = 17},
  [557] = {.lex_state = 1},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 1},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 1},
  [563] = {.lex_state = 8},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 1},
  [567] = {.lex_state = 1},
  [568] = {.lex_state = 1},
  [569] = {.lex_state = 4},
  [570] = {.lex_state = 1},
  [571] = {.lex_state = 1},
  [572] = {.lex_state = 1},
  [573] = {.lex_state = 4},
  [574] = {.lex_state = 1},
  [575] = {.lex_state = 1},
  [576] = {.lex_state = 8},
  [577] = {.lex_state = 1},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 33},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 18},
  [585] = {.lex_state = 33},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 17},
  [588] = {.lex_state = 17},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 18},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 4},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 17},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 33},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 33},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 33},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 33},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 33},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 4},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 33},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 17},
  [644] = {.lex_state = 4},
  [645] = {.lex_state = 4},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 17},
  [648] = {.lex_state = 17},
  [649] = {.lex_state = 17},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 4},
  [655] = {.lex_state = 17},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 33},
  [660] = {.lex_state = 4},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 17},
  [670] = {.lex_state = 33},
  [671] = {.lex_state = 17},
  [672] = {.lex_state = 17},
};

enum {
  ts_external_token_float_literal = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_float_literal] = sym_float_literal,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_float_literal] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_lowercase_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_priv] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_seqence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_accessor_token1] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_mutability] = ACTIONS(1),
    [sym_uppercase_identifier] = ACTIONS(1),
    [sym_colon_colon_uppercase_identifier] = ACTIONS(1),
    [sym_colon_colon_lowercase_identifier] = ACTIONS(1),
    [sym_dot_identifier] = ACTIONS(1),
    [sym_package_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_structure] = STATE(668),
    [sym_structure_item] = STATE(461),
    [sym_visibility] = STATE(463),
    [sym_type_definition] = STATE(465),
    [sym_struct_definition] = STATE(465),
    [sym_enum_definition] = STATE(465),
    [sym_value_definition] = STATE(465),
    [sym_function_definition] = STATE(465),
    [sym_interface_definition] = STATE(465),
    [sym_pub] = STATE(472),
    [aux_sym_structure_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_priv] = ACTIONS(7),
    [anon_sym_pub] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_func] = ACTIONS(19),
    [anon_sym_interface] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(172),
    [sym_string_interpolation] = STATE(206),
    [sym_literal] = STATE(206),
    [sym_boolean_literal] = STATE(209),
    [sym_char_literal] = STATE(209),
    [sym_string_literal] = STATE(209),
    [sym_unary_expression] = STATE(172),
    [sym_binary_expression] = STATE(172),
    [sym_struct_expression] = STATE(172),
    [sym_struct_field_expression] = STATE(628),
    [sym_labeled_expression] = STATE(613),
    [sym_labeled_expression_pun] = STATE(619),
    [sym_nonempty_block_expression] = STATE(172),
    [sym_anonymous_lambda_expression] = STATE(172),
    [sym_constructor_expression] = STATE(172),
    [sym_apply_expression] = STATE(172),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(172),
    [sym_access_expression] = STATE(172),
    [sym_method_expression] = STATE(172),
    [sym_unit_expression] = STATE(172),
    [sym_tuple_expression] = STATE(172),
    [sym_constraint_expression] = STATE(172),
    [sym_array_expression] = STATE(172),
    [sym_match_expression] = STATE(207),
    [sym_if_expression] = STATE(207),
    [sym_statement_expression] = STATE(409),
    [sym_let_expression] = STATE(426),
    [sym_shorthand_let_expression] = STATE(426),
    [sym_shorthand_let_pattern] = STATE(661),
    [sym_var_expression] = STATE(426),
    [sym_assign_expression] = STATE(426),
    [sym_left_value] = STATE(660),
    [sym_named_lambda_expression] = STATE(426),
    [sym_while_expression] = STATE(426),
    [sym_return_expression] = STATE(426),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(663),
    [aux_sym_block_expression_repeat1] = STATE(10),
    [sym_lowercase_identifier] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DOT_DOT] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_package_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
  [3] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(172),
    [sym_string_interpolation] = STATE(206),
    [sym_literal] = STATE(206),
    [sym_boolean_literal] = STATE(209),
    [sym_char_literal] = STATE(209),
    [sym_string_literal] = STATE(209),
    [sym_unary_expression] = STATE(172),
    [sym_binary_expression] = STATE(172),
    [sym_struct_expression] = STATE(172),
    [sym_struct_field_expression] = STATE(620),
    [sym_labeled_expression] = STATE(613),
    [sym_labeled_expression_pun] = STATE(619),
    [sym_nonempty_block_expression] = STATE(172),
    [sym_anonymous_lambda_expression] = STATE(172),
    [sym_constructor_expression] = STATE(172),
    [sym_apply_expression] = STATE(172),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(172),
    [sym_access_expression] = STATE(172),
    [sym_method_expression] = STATE(172),
    [sym_unit_expression] = STATE(172),
    [sym_tuple_expression] = STATE(172),
    [sym_constraint_expression] = STATE(172),
    [sym_array_expression] = STATE(172),
    [sym_match_expression] = STATE(207),
    [sym_if_expression] = STATE(207),
    [sym_statement_expression] = STATE(418),
    [sym_let_expression] = STATE(426),
    [sym_shorthand_let_expression] = STATE(426),
    [sym_shorthand_let_pattern] = STATE(661),
    [sym_var_expression] = STATE(426),
    [sym_assign_expression] = STATE(426),
    [sym_left_value] = STATE(660),
    [sym_named_lambda_expression] = STATE(426),
    [sym_while_expression] = STATE(426),
    [sym_return_expression] = STATE(426),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(663),
    [aux_sym_block_expression_repeat1] = STATE(9),
    [sym_lowercase_identifier] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DOT_DOT] = ACTIONS(71),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_package_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
  [4] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(172),
    [sym_string_interpolation] = STATE(206),
    [sym_literal] = STATE(206),
    [sym_boolean_literal] = STATE(209),
    [sym_char_literal] = STATE(209),
    [sym_string_literal] = STATE(209),
    [sym_unary_expression] = STATE(172),
    [sym_binary_expression] = STATE(172),
    [sym_struct_expression] = STATE(172),
    [sym_nonempty_block_expression] = STATE(172),
    [sym_anonymous_lambda_expression] = STATE(172),
    [sym_constructor_expression] = STATE(172),
    [sym_apply_expression] = STATE(172),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(172),
    [sym_access_expression] = STATE(172),
    [sym_method_expression] = STATE(172),
    [sym_unit_expression] = STATE(172),
    [sym_tuple_expression] = STATE(172),
    [sym_constraint_expression] = STATE(172),
    [sym_array_expression] = STATE(172),
    [sym_match_expression] = STATE(207),
    [sym_if_expression] = STATE(207),
    [sym_statement_expression] = STATE(458),
    [sym_let_expression] = STATE(426),
    [sym_shorthand_let_expression] = STATE(426),
    [sym_shorthand_let_pattern] = STATE(661),
    [sym_var_expression] = STATE(426),
    [sym_assign_expression] = STATE(426),
    [sym_left_value] = STATE(660),
    [sym_named_lambda_expression] = STATE(426),
    [sym_while_expression] = STATE(426),
    [sym_return_expression] = STATE(426),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(663),
    [aux_sym_block_expression_repeat1] = STATE(4),
    [sym_lowercase_identifier] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_let] = ACTIONS(84),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [sym_integer_literal] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_fn] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_match] = ACTIONS(111),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_break] = ACTIONS(117),
    [anon_sym_continue] = ACTIONS(117),
    [anon_sym_var] = ACTIONS(120),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_return] = ACTIONS(126),
    [sym_uppercase_identifier] = ACTIONS(129),
    [sym_identifier] = ACTIONS(132),
    [sym_package_identifier] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(96),
  },
  [5] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(172),
    [sym_string_interpolation] = STATE(206),
    [sym_literal] = STATE(206),
    [sym_boolean_literal] = STATE(209),
    [sym_char_literal] = STATE(209),
    [sym_string_literal] = STATE(209),
    [sym_unary_expression] = STATE(172),
    [sym_binary_expression] = STATE(172),
    [sym_struct_expression] = STATE(172),
    [sym_nonempty_block_expression] = STATE(172),
    [sym_anonymous_lambda_expression] = STATE(172),
    [sym_constructor_expression] = STATE(172),
    [sym_apply_expression] = STATE(172),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(172),
    [sym_access_expression] = STATE(172),
    [sym_method_expression] = STATE(172),
    [sym_unit_expression] = STATE(172),
    [sym_tuple_expression] = STATE(172),
    [sym_constraint_expression] = STATE(172),
    [sym_array_expression] = STATE(172),
    [sym_match_expression] = STATE(207),
    [sym_if_expression] = STATE(207),
    [sym_statement_expression] = STATE(428),
    [sym_let_expression] = STATE(426),
    [sym_shorthand_let_expression] = STATE(426),
    [sym_shorthand_let_pattern] = STATE(661),
    [sym_var_expression] = STATE(426),
    [sym_assign_expression] = STATE(426),
    [sym_left_value] = STATE(660),
    [sym_named_lambda_expression] = STATE(426),
    [sym_while_expression] = STATE(426),
    [sym_return_expression] = STATE(426),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(663),
    [aux_sym_block_expression_repeat1] = STATE(7),
    [sym_lowercase_identifier] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_package_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
  [6] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(172),
    [sym_string_interpolation] = STATE(206),
    [sym_literal] = STATE(206),
    [sym_boolean_literal] = STATE(209),
    [sym_char_literal] = STATE(209),
    [sym_string_literal] = STATE(209),
    [sym_unary_expression] = STATE(172),
    [sym_binary_expression] = STATE(172),
    [sym_struct_expression] = STATE(172),
    [sym_nonempty_block_expression] = STATE(172),
    [sym_anonymous_lambda_expression] = STATE(172),
    [sym_constructor_expression] = STATE(172),
    [sym_apply_expression] = STATE(172),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(172),
    [sym_access_expression] = STATE(172),
    [sym_method_expression] = STATE(172),
    [sym_unit_expression] = STATE(172),
    [sym_tuple_expression] = STATE(172),
    [sym_constraint_expression] = STATE(172),
    [sym_array_expression] = STATE(172),
    [sym_match_expression] = STATE(207),
    [sym_if_expression] = STATE(207),
    [sym_statement_expression] = STATE(420),
    [sym_let_expression] = STATE(426),
    [sym_shorthand_let_expression] = STATE(426),
    [sym_shorthand_let_pattern] = STATE(661),
    [sym_var_expression] = STATE(426),
    [sym_assign_expression] = STATE(426),
    [sym_left_value] = STATE(660),
    [sym_named_lambda_expression] = STATE(426),
    [sym_while_expression] = STATE(426),
    [sym_return_expression] = STATE(426),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(663),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_package_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
  [7] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(172),
    [sym_string_interpolation] = STATE(206),
    [sym_literal] = STATE(206),
    [sym_boolean_literal] = STATE(209),
    [sym_char_literal] = STATE(209),
    [sym_string_literal] = STATE(209),
    [sym_unary_expression] = STATE(172),
    [sym_binary_expression] = STATE(172),
    [sym_struct_expression] = STATE(172),
    [sym_nonempty_block_expression] = STATE(172),
    [sym_anonymous_lambda_expression] = STATE(172),
    [sym_constructor_expression] = STATE(172),
    [sym_apply_expression] = STATE(172),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(172),
    [sym_access_expression] = STATE(172),
    [sym_method_expression] = STATE(172),
    [sym_unit_expression] = STATE(172),
    [sym_tuple_expression] = STATE(172),
    [sym_constraint_expression] = STATE(172),
    [sym_array_expression] = STATE(172),
    [sym_match_expression] = STATE(207),
    [sym_if_expression] = STATE(207),
    [sym_statement_expression] = STATE(410),
    [sym_let_expression] = STATE(426),
    [sym_shorthand_let_expression] = STATE(426),
    [sym_shorthand_let_pattern] = STATE(661),
    [sym_var_expression] = STATE(426),
    [sym_assign_expression] = STATE(426),
    [sym_left_value] = STATE(660),
    [sym_named_lambda_expression] = STATE(426),
    [sym_while_expression] = STATE(426),
    [sym_return_expression] = STATE(426),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(663),
    [aux_sym_block_expression_repeat1] = STATE(4),
    [sym_lowercase_identifier] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_package_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
  [8] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(172),
    [sym_string_interpolation] = STATE(206),
    [sym_literal] = STATE(206),
    [sym_boolean_literal] = STATE(209),
    [sym_char_literal] = STATE(209),
    [sym_string_literal] = STATE(209),
    [sym_unary_expression] = STATE(172),
    [sym_binary_expression] = STATE(172),
    [sym_struct_expression] = STATE(172),
    [sym_nonempty_block_expression] = STATE(172),
    [sym_anonymous_lambda_expression] = STATE(172),
    [sym_constructor_expression] = STATE(172),
    [sym_apply_expression] = STATE(172),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(172),
    [sym_access_expression] = STATE(172),
    [sym_method_expression] = STATE(172),
    [sym_unit_expression] = STATE(172),
    [sym_tuple_expression] = STATE(172),
    [sym_constraint_expression] = STATE(172),
    [sym_array_expression] = STATE(172),
    [sym_match_expression] = STATE(207),
    [sym_if_expression] = STATE(207),
    [sym_statement_expression] = STATE(415),
    [sym_let_expression] = STATE(426),
    [sym_shorthand_let_expression] = STATE(426),
    [sym_shorthand_let_pattern] = STATE(661),
    [sym_var_expression] = STATE(426),
    [sym_assign_expression] = STATE(426),
    [sym_left_value] = STATE(660),
    [sym_named_lambda_expression] = STATE(426),
    [sym_while_expression] = STATE(426),
    [sym_return_expression] = STATE(426),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(663),
    [aux_sym_block_expression_repeat1] = STATE(4),
    [sym_lowercase_identifier] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_package_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_var,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(138), 1,
      sym_lowercase_identifier,
    STATE(4), 1,
      aux_sym_block_expression_repeat1,
    STATE(161), 1,
      sym_simple_expression,
    STATE(236), 1,
      sym_expression,
    STATE(413), 1,
      sym_statement_expression,
    STATE(660), 1,
      sym_left_value,
    STATE(661), 1,
      sym_shorthand_let_pattern,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(164), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(426), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(172), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [135] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_var,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(138), 1,
      sym_lowercase_identifier,
    STATE(4), 1,
      aux_sym_block_expression_repeat1,
    STATE(161), 1,
      sym_simple_expression,
    STATE(236), 1,
      sym_expression,
    STATE(425), 1,
      sym_statement_expression,
    STATE(660), 1,
      sym_left_value,
    STATE(661), 1,
      sym_shorthand_let_pattern,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(164), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(426), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(172), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [270] = 27,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_fn,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      sym_uppercase_identifier,
    ACTIONS(174), 1,
      sym_package_identifier,
    ACTIONS(176), 1,
      sym_comment,
    STATE(161), 1,
      sym_simple_expression,
    STATE(232), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(166), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    ACTIONS(152), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [376] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [475] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [574] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [673] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [772] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [871] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [970] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(238), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1069] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_simple_expression,
    STATE(240), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1168] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(247), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1267] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1366] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1465] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1564] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1663] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1762] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1861] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1960] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2059] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_simple_expression,
    STATE(245), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2158] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2257] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(230), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2356] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2455] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2554] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2653] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2752] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(248), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2848] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(229), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2944] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(251), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3040] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3136] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(226), 1,
      sym_simple_expression,
    STATE(255), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3232] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(228), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3328] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(146), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3424] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(144), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3520] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(244), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3616] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(143), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3712] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(252), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3808] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(134), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3904] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(176), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4000] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(224), 1,
      sym_simple_expression,
    STATE(255), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4096] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(142), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4192] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(241), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4288] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(231), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4384] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(237), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4480] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(227), 1,
      sym_simple_expression,
    STATE(255), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4576] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(235), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4672] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(141), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4768] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(101), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4864] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(254), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4960] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(222), 1,
      sym_simple_expression,
    STATE(255), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5056] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5152] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(182), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5248] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(177), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5344] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(225), 1,
      sym_simple_expression,
    STATE(255), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5440] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(234), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5536] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(218), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5632] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(249), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5728] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(250), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5824] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(170), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5920] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(173), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6016] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(148), 1,
      sym_lowercase_identifier,
    ACTIONS(158), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(175), 1,
      sym_expression,
    STATE(663), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(206), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(207), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(209), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(172), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6112] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_lowercase_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_fn,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_match,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(208), 1,
      sym_package_identifier,
    STATE(92), 1,
      sym_simple_expression,
    STATE(253), 1,
      sym_expression,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(117), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(256), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(260), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(264), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(268), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(272), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(276), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(280), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6504] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_DOT_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    STATE(97), 1,
      sym_dotdot_pattern,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(338), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    STATE(633), 1,
      sym_array_sub_pattern,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6583] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_match_expression_repeat1,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(547), 1,
      sym_case_clause,
    STATE(548), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6659] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_match_expression_repeat1,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(547), 1,
      sym_case_clause,
    STATE(548), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6735] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_match_expression_repeat1,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(547), 1,
      sym_case_clause,
    STATE(548), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6811] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT_DOT,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(354), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    STATE(638), 1,
      sym_dotdot_pattern,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6887] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT_DOT,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(354), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    STATE(665), 1,
      sym_dotdot_pattern,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6963] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_match_expression_repeat1,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(547), 1,
      sym_case_clause,
    STATE(548), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7039] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      sym_uppercase_identifier,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(346), 1,
      sym_package_identifier,
    STATE(86), 1,
      aux_sym_match_expression_repeat1,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(547), 1,
      sym_case_clause,
    STATE(548), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(314), 2,
      anon_sym__,
      sym_lowercase_identifier,
    ACTIONS(328), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(331), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7115] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      anon_sym_COLON,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_COLON_EQ,
    ACTIONS(351), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_else,
    STATE(124), 1,
      sym_else_clause,
    ACTIONS(361), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(367), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7243] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(354), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7351] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      aux_sym_accessor_token1,
    ACTIONS(387), 1,
      sym_dot_identifier,
    STATE(148), 1,
      sym_accessor,
    ACTIONS(381), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 18,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      sym_colon_colon_lowercase_identifier,
  [7399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(389), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7437] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(354), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7507] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(354), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(395), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7615] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(389), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7685] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(354), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7755] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(354), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7825] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(354), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7895] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(407), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7948] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(367), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(427), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8052] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(431), 1,
      anon_sym_else,
    STATE(216), 1,
      sym_else_clause,
    ACTIONS(361), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8093] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(354), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(433), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8197] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(390), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(437), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(441), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8449] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(391), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(457), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(461), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8664] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(357), 1,
      anon_sym_COLON_EQ,
    ACTIONS(351), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(465), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(469), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(477), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(481), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(485), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(489), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(493), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(497), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(501), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9073] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(301), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(505), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(509), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(513), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9251] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(363), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(519), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(517), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(521), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(525), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(529), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9468] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_uppercase_identifier,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym_package_identifier,
    STATE(275), 1,
      sym_constructor_expression,
    STATE(401), 1,
      sym_pattern,
    STATE(626), 1,
      sym_qualified_type_identifier,
    ACTIONS(190), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(284), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(310), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(279), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(533), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(537), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9609] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(407), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9660] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(409), 3,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(407), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(407), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(541), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(409), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(407), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(539), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(537), 21,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(547), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(551), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9978] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(367), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(557), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(561), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(565), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(569), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(573), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(577), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(581), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(585), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(589), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10350] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10386] = 8,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      aux_sym_accessor_token1,
    ACTIONS(599), 1,
      sym_dot_identifier,
    STATE(195), 1,
      sym_accessor,
    ACTIONS(381), 22,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [10432] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10468] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COLON_EQ,
    ACTIONS(433), 1,
      anon_sym_LF,
    ACTIONS(435), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10506] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LF,
    ACTIONS(601), 1,
      anon_sym_EQ,
    ACTIONS(435), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10544] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(479), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10580] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LF,
    ACTIONS(391), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10616] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LF,
    ACTIONS(483), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10651] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LF,
    ACTIONS(447), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10686] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10721] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10758] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(262), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10793] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LF,
    ACTIONS(435), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10828] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10865] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10900] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(409), 20,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10939] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(519), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10976] = 7,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(409), 10,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11019] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11054] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11089] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(463), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11124] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11159] = 8,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(409), 9,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11204] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11239] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11274] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(543), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11309] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_LF,
    ACTIONS(503), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11344] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11379] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LF,
    ACTIONS(499), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11414] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(495), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11449] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11484] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(591), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11519] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(491), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11554] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(539), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11589] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(539), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11626] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11661] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(270), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11696] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LF,
    ACTIONS(459), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11731] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(266), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11766] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(587), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11801] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11836] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11871] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11906] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(471), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11941] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(451), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11976] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(429), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12011] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(455), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12046] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(381), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12081] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12116] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(274), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12151] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(511), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12186] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(351), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12221] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12256] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12291] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(443), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12326] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(439), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12361] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(487), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12396] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12431] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(409), 16,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12472] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12507] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_LF,
    ACTIONS(475), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12542] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(567), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12577] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      aux_sym_accessor_token1,
    ACTIONS(387), 1,
      sym_dot_identifier,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_block_expression,
    STATE(148), 1,
      sym_accessor,
    ACTIONS(381), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 12,
      sym_float_literal,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
    ACTIONS(617), 14,
      anon_sym_let,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      anon_sym_fn,
      anon_sym_match,
      anon_sym_if,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_var,
      anon_sym_while,
      anon_sym_return,
      sym_lowercase_identifier,
      sym_identifier,
  [12659] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      aux_sym_accessor_token1,
    ACTIONS(387), 1,
      sym_dot_identifier,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_accessor,
    STATE(439), 1,
      sym_block_expression,
    ACTIONS(381), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12707] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      aux_sym_accessor_token1,
    ACTIONS(387), 1,
      sym_dot_identifier,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block_expression,
    STATE(148), 1,
      sym_accessor,
    ACTIONS(381), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12755] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      aux_sym_accessor_token1,
    ACTIONS(387), 1,
      sym_dot_identifier,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_accessor,
    ACTIONS(381), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12800] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      aux_sym_accessor_token1,
    ACTIONS(387), 1,
      sym_dot_identifier,
    ACTIONS(623), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_accessor,
    ACTIONS(381), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12845] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(627), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12890] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12935] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    ACTIONS(639), 1,
      anon_sym_COLON,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    STATE(507), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12990] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(649), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13035] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(653), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13080] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(657), 1,
      anon_sym_COLON,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(501), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13135] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(663), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13180] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(667), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13225] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(669), 1,
      anon_sym_LF,
    ACTIONS(671), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13270] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(673), 1,
      anon_sym_LF,
    ACTIONS(675), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13315] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(560), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13367] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(681), 1,
      anon_sym_LF,
    ACTIONS(683), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13411] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(492), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13463] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(689), 1,
      anon_sym_LF,
    ACTIONS(691), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13507] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    STATE(477), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13559] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(539), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13611] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(703), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13655] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RBRACK,
    STATE(503), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13707] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(709), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13755] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13807] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_STAR_STAR,
    ACTIONS(611), 1,
      anon_sym_AMP_AMP,
    ACTIONS(629), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(717), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(607), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(605), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(609), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13851] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13900] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(723), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13947] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13996] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14042] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14088] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(733), 1,
      anon_sym_RBRACK,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14134] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR_STAR,
    ACTIONS(425), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(421), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(423), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14177] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
    ACTIONS(737), 1,
      anon_sym_priv,
    ACTIONS(740), 1,
      anon_sym_pub,
    ACTIONS(743), 1,
      anon_sym_type,
    ACTIONS(746), 1,
      anon_sym_struct,
    ACTIONS(749), 1,
      anon_sym_enum,
    ACTIONS(752), 1,
      anon_sym_let,
    ACTIONS(755), 1,
      anon_sym_func,
    ACTIONS(758), 1,
      anon_sym_interface,
    STATE(256), 1,
      aux_sym_structure_repeat1,
    STATE(461), 1,
      sym_structure_item,
    STATE(463), 1,
      sym_visibility,
    STATE(472), 1,
      sym_pub,
    STATE(465), 6,
      sym_type_definition,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [14228] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_priv,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_struct,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_func,
    ACTIONS(21), 1,
      anon_sym_interface,
    ACTIONS(761), 1,
      ts_builtin_sym_end,
    STATE(256), 1,
      aux_sym_structure_repeat1,
    STATE(461), 1,
      sym_structure_item,
    STATE(463), 1,
      sym_visibility,
    STATE(472), 1,
      sym_pub,
    STATE(465), 6,
      sym_type_definition,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [14279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    ACTIONS(763), 5,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(765), 10,
      sym_float_literal,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 5,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(771), 10,
      sym_float_literal,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 5,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(323), 10,
      sym_float_literal,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14351] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14382] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14413] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14444] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(544), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14475] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(481), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14506] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14537] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14568] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14599] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14630] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14661] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14692] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14723] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14754] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_EQ,
    ACTIONS(809), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14806] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(537), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14837] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14868] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(546), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_EQ,
    ACTIONS(819), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14917] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(406), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_EQ,
    ACTIONS(823), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14963] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(378), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14991] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      anon_sym__,
    ACTIONS(831), 1,
      sym_identifier,
    ACTIONS(833), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(572), 1,
      sym_type,
    STATE(511), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15019] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      anon_sym__,
    ACTIONS(831), 1,
      sym_identifier,
    ACTIONS(833), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(575), 1,
      sym_type,
    STATE(511), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(835), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15065] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      anon_sym__,
    ACTIONS(831), 1,
      sym_identifier,
    ACTIONS(833), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(577), 1,
      sym_type,
    STATE(511), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15093] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(466), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15121] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(596), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15149] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(646), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15177] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(504), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_EQ,
    ACTIONS(839), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15223] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(666), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_EQ,
    ACTIONS(843), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15269] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      anon_sym__,
    ACTIONS(831), 1,
      sym_identifier,
    ACTIONS(833), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(517), 1,
      sym_type,
    STATE(511), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_EQ,
    ACTIONS(847), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15315] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      anon_sym__,
    ACTIONS(831), 1,
      sym_identifier,
    ACTIONS(833), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(511), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_EQ,
    ACTIONS(851), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15361] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(573), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15389] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      anon_sym__,
    ACTIONS(831), 1,
      sym_identifier,
    ACTIONS(833), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(494), 1,
      sym_type,
    STATE(511), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15417] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(374), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_EQ,
    ACTIONS(859), 1,
      anon_sym_PIPE,
    ACTIONS(855), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
  [15465] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      anon_sym__,
    ACTIONS(831), 1,
      sym_identifier,
    ACTIONS(833), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(470), 1,
      sym_type,
    STATE(511), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_EQ,
    ACTIONS(861), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_EQ,
    ACTIONS(865), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_EQ,
    ACTIONS(869), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_EQ,
    ACTIONS(873), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15565] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(514), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_EQ,
    ACTIONS(877), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15611] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(652), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_EQ,
    ACTIONS(881), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_EQ,
    ACTIONS(885), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15675] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(509), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15703] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym__,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(407), 1,
      sym_type,
    STATE(364), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_EQ,
    ACTIONS(889), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15749] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      anon_sym__,
    ACTIONS(831), 1,
      sym_identifier,
    ACTIONS(833), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(561), 1,
      sym_type,
    STATE(511), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 9,
      ts_builtin_sym_end,
      anon_sym_priv,
      anon_sym_pub,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [15792] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      anon_sym_EQ,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    ACTIONS(899), 1,
      anon_sym_DASH_GT,
    STATE(340), 1,
      sym_type_parameters,
    STATE(362), 1,
      sym_parameters,
    STATE(569), 1,
      sym_return_type,
    STATE(570), 1,
      sym_block_expression,
  [15823] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    ACTIONS(899), 1,
      anon_sym_DASH_GT,
    ACTIONS(901), 1,
      anon_sym_EQ,
    STATE(336), 1,
      sym_type_parameters,
    STATE(370), 1,
      sym_parameters,
    STATE(516), 1,
      sym_block_expression,
    STATE(524), 1,
      sym_return_type,
  [15854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [15869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [15884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(398), 1,
      sym_pub_attribute,
    ACTIONS(907), 3,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
    ACTIONS(909), 3,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [15904] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_lowercase_identifier,
    ACTIONS(913), 1,
      anon_sym_priv,
    ACTIONS(915), 1,
      anon_sym_pub,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    ACTIONS(919), 1,
      sym_mutability,
    STATE(331), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(603), 1,
      sym_visibility,
  [15932] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_lowercase_identifier,
    ACTIONS(913), 1,
      anon_sym_priv,
    ACTIONS(915), 1,
      anon_sym_pub,
    ACTIONS(919), 1,
      sym_mutability,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(603), 1,
      sym_visibility,
  [15960] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_lowercase_identifier,
    ACTIONS(913), 1,
      anon_sym_priv,
    ACTIONS(915), 1,
      anon_sym_pub,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    ACTIONS(919), 1,
      sym_mutability,
    STATE(330), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(603), 1,
      sym_visibility,
  [15988] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_lowercase_identifier,
    ACTIONS(913), 1,
      anon_sym_priv,
    ACTIONS(915), 1,
      anon_sym_pub,
    ACTIONS(919), 1,
      sym_mutability,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
    STATE(331), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(603), 1,
      sym_visibility,
  [16016] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(925), 1,
      sym_lowercase_identifier,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      aux_sym_interface_definition_repeat1,
    STATE(545), 1,
      sym_function_identifier,
    STATE(567), 1,
      sym_interface_method_declaration,
    STATE(651), 1,
      sym_qualified_type_identifier,
  [16044] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym_lowercase_identifier,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    ACTIONS(934), 1,
      sym_identifier,
    ACTIONS(937), 1,
      sym_package_identifier,
    STATE(327), 1,
      aux_sym_interface_definition_repeat1,
    STATE(545), 1,
      sym_function_identifier,
    STATE(567), 1,
      sym_interface_method_declaration,
    STATE(651), 1,
      sym_qualified_type_identifier,
  [16072] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(925), 1,
      sym_lowercase_identifier,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      aux_sym_interface_definition_repeat1,
    STATE(545), 1,
      sym_function_identifier,
    STATE(567), 1,
      sym_interface_method_declaration,
    STATE(651), 1,
      sym_qualified_type_identifier,
  [16100] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_lowercase_identifier,
    ACTIONS(913), 1,
      anon_sym_priv,
    ACTIONS(915), 1,
      anon_sym_pub,
    ACTIONS(919), 1,
      sym_mutability,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(603), 1,
      sym_visibility,
  [16128] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_lowercase_identifier,
    ACTIONS(913), 1,
      anon_sym_priv,
    ACTIONS(915), 1,
      anon_sym_pub,
    ACTIONS(919), 1,
      sym_mutability,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
    STATE(331), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(603), 1,
      sym_visibility,
  [16156] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_lowercase_identifier,
    ACTIONS(945), 1,
      anon_sym_priv,
    ACTIONS(948), 1,
      anon_sym_pub,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
    ACTIONS(953), 1,
      sym_mutability,
    STATE(331), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(603), 1,
      sym_visibility,
  [16184] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(925), 1,
      sym_lowercase_identifier,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      aux_sym_interface_definition_repeat1,
    STATE(545), 1,
      sym_function_identifier,
    STATE(567), 1,
      sym_interface_method_declaration,
    STATE(651), 1,
      sym_qualified_type_identifier,
  [16212] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(925), 1,
      sym_lowercase_identifier,
    ACTIONS(958), 1,
      anon_sym_RBRACE,
    STATE(326), 1,
      aux_sym_interface_definition_repeat1,
    STATE(545), 1,
      sym_function_identifier,
    STATE(567), 1,
      sym_interface_method_declaration,
    STATE(651), 1,
      sym_qualified_type_identifier,
  [16240] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_DQUOTE,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    STATE(350), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16261] = 7,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    STATE(343), 1,
      sym_interpolator,
    STATE(339), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16284] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      anon_sym_EQ,
    ACTIONS(899), 1,
      anon_sym_DASH_GT,
    STATE(362), 1,
      sym_parameters,
    STATE(569), 1,
      sym_return_type,
    STATE(570), 1,
      sym_block_expression,
  [16309] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(970), 1,
      anon_sym_DQUOTE,
    STATE(345), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16330] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOT_DOT,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    ACTIONS(859), 1,
      anon_sym_PIPE,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    ACTIONS(974), 1,
      anon_sym_as,
    STATE(387), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(631), 1,
      sym_dotdot_pattern,
  [16355] = 7,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(976), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      sym_interpolator,
    STATE(359), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16378] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    ACTIONS(899), 1,
      anon_sym_DASH_GT,
    ACTIONS(978), 1,
      anon_sym_EQ,
    STATE(393), 1,
      sym_parameters,
    STATE(528), 1,
      sym_return_type,
    STATE(531), 1,
      sym_block_expression,
  [16403] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOT_DOT,
    ACTIONS(980), 1,
      sym_lowercase_identifier,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
    STATE(462), 1,
      sym_filed_single_pattern,
    STATE(667), 1,
      sym_dotdot_pattern,
    STATE(495), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16426] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOT_DOT,
    ACTIONS(980), 1,
      sym_lowercase_identifier,
    ACTIONS(984), 1,
      anon_sym_RBRACE,
    STATE(462), 1,
      sym_filed_single_pattern,
    STATE(640), 1,
      sym_dotdot_pattern,
    STATE(495), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16449] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    STATE(334), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16470] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(988), 1,
      anon_sym_DQUOTE,
    STATE(350), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16491] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    STATE(350), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16512] = 7,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(992), 1,
      anon_sym_DQUOTE,
    STATE(337), 1,
      sym_interpolator,
    STATE(349), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_LBRACK,
    STATE(379), 1,
      sym_type_arguments,
    ACTIONS(994), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16552] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    STATE(351), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16573] = 7,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(998), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_interpolator,
    STATE(359), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16596] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(1005), 1,
      sym_unescaped_string_fragment,
    ACTIONS(1008), 1,
      sym_escape_seqence,
    STATE(350), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16617] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(1011), 1,
      anon_sym_DQUOTE,
    STATE(350), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16638] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_DQUOTE,
    ACTIONS(962), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    STATE(344), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16659] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      sym_lowercase_identifier,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    STATE(399), 1,
      sym_filed_single_pattern,
    STATE(632), 1,
      sym_struct_filed_pattern,
    STATE(495), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_PIPE,
    ACTIONS(974), 1,
      anon_sym_as,
    ACTIONS(1015), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [16695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_DASH_GT,
    ACTIONS(1017), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_DASH_GT,
    ACTIONS(1021), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_DASH_GT,
    ACTIONS(1025), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_DASH_GT,
    ACTIONS(1029), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16751] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym_unescaped_string_fragment,
    ACTIONS(1038), 1,
      sym_escape_seqence,
    ACTIONS(1033), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    STATE(359), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    ACTIONS(1045), 1,
      anon_sym_RBRACE,
    STATE(592), 1,
      sym_struct_filed_expression,
    STATE(609), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [16797] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      anon_sym_DASH_GT,
    ACTIONS(978), 1,
      anon_sym_EQ,
    STATE(528), 1,
      sym_return_type,
    STATE(531), 1,
      sym_block_expression,
  [16816] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_PIPE,
    ACTIONS(974), 1,
      anon_sym_as,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    STATE(490), 1,
      aux_sym_constructor_pattern_repeat1,
  [16835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16846] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(992), 1,
      anon_sym_DQUOTE,
    STATE(372), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [16874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_PIPE,
    ACTIONS(974), 1,
      anon_sym_as,
    ACTIONS(1055), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [16889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16900] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_LF,
    ACTIONS(1063), 1,
      anon_sym_LBRACK,
    STATE(459), 1,
      sym_type_parameters,
    ACTIONS(1061), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16917] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(895), 1,
      anon_sym_EQ,
    ACTIONS(899), 1,
      anon_sym_DASH_GT,
    STATE(569), 1,
      sym_return_type,
    STATE(570), 1,
      sym_block_expression,
  [16936] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(1065), 1,
      sym_identifier,
    STATE(457), 1,
      sym_constraint,
    STATE(525), 1,
      sym_qualified_type_identifier,
    STATE(607), 1,
      sym_constraints,
  [16955] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(998), 1,
      anon_sym_DQUOTE,
    STATE(359), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [16983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_constructor_pattern_repeat1,
    ACTIONS(1015), 3,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [17009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
    ACTIONS(1074), 4,
      anon_sym_priv,
      anon_sym_pub,
      sym_mutability,
      sym_lowercase_identifier,
  [17022] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LF,
    ACTIONS(1080), 1,
      anon_sym_DASH_GT,
    STATE(497), 1,
      sym_return_type,
    ACTIONS(1078), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17061] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    STATE(392), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [17078] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_DASH_GT,
    ACTIONS(1086), 1,
      anon_sym_LF,
    STATE(553), 1,
      sym_return_type,
    ACTIONS(1088), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17095] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(925), 1,
      sym_lowercase_identifier,
    STATE(317), 1,
      sym_function_identifier,
    STATE(651), 1,
      sym_qualified_type_identifier,
  [17114] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOT_DOT,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(667), 1,
      sym_dotdot_pattern,
  [17133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    ACTIONS(1092), 1,
      anon_sym_RBRACE,
    STATE(613), 1,
      sym_labeled_expression,
    STATE(619), 1,
      sym_labeled_expression_pun,
    STATE(657), 1,
      sym_struct_field_expression,
  [17152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [17163] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    ACTIONS(1096), 1,
      anon_sym_RBRACE,
    STATE(592), 1,
      sym_struct_filed_expression,
    STATE(609), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17180] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOT_DOT,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(665), 1,
      sym_dotdot_pattern,
  [17199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    ACTIONS(1100), 1,
      anon_sym_RBRACE,
    STATE(541), 1,
      sym_struct_filed_expression,
    STATE(609), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    ACTIONS(859), 1,
      anon_sym_PIPE,
    ACTIONS(974), 1,
      anon_sym_as,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_constructor_pattern_repeat1,
  [17235] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_PIPE,
    ACTIONS(974), 1,
      anon_sym_as,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(471), 1,
      aux_sym_constructor_pattern_repeat1,
  [17254] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_PIPE,
    ACTIONS(974), 1,
      anon_sym_as,
    ACTIONS(1108), 1,
      anon_sym_COLON,
    ACTIONS(1110), 1,
      anon_sym_EQ,
    STATE(645), 1,
      sym_type_annotation,
  [17273] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_unescaped_string_fragment,
    ACTIONS(966), 1,
      sym_escape_seqence,
    ACTIONS(976), 1,
      anon_sym_DQUOTE,
    STATE(359), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [17290] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      anon_sym_DASH_GT,
    ACTIONS(1112), 1,
      anon_sym_EQ,
    STATE(480), 1,
      sym_return_type,
    STATE(486), 1,
      sym_block_expression,
  [17309] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LF,
    ACTIONS(1116), 1,
      anon_sym_LBRACK,
    STATE(523), 1,
      sym_type_arguments,
    ACTIONS(1114), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [17348] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_LBRACK,
    ACTIONS(1122), 1,
      anon_sym_LF,
    STATE(491), 1,
      sym_type_parameters,
    ACTIONS(1124), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [17376] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1128), 1,
      anon_sym_RBRACE,
    ACTIONS(1130), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(664), 1,
      sym_dotdot_pattern,
  [17395] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(925), 1,
      sym_lowercase_identifier,
    STATE(318), 1,
      sym_function_identifier,
    STATE(651), 1,
      sym_qualified_type_identifier,
  [17414] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_PIPE,
    ACTIONS(974), 1,
      anon_sym_as,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    ACTIONS(1134), 1,
      anon_sym_COLON,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
  [17433] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_DASH_GT,
    ACTIONS(1138), 1,
      anon_sym_LF,
    STATE(475), 1,
      sym_return_type,
    ACTIONS(1140), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17450] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_DASH_GT,
    ACTIONS(1142), 1,
      anon_sym_LF,
    STATE(505), 1,
      sym_return_type,
    ACTIONS(1144), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17478] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_DASH_GT,
    ACTIONS(1148), 1,
      anon_sym_LF,
    STATE(508), 1,
      sym_return_type,
    ACTIONS(1150), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    ACTIONS(1156), 1,
      anon_sym_RBRACE,
    STATE(613), 1,
      sym_labeled_expression,
    STATE(619), 1,
      sym_labeled_expression_pun,
    STATE(658), 1,
      sym_struct_field_expression,
  [17536] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1162), 1,
      anon_sym_RBRACE,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17550] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1164), 1,
      anon_sym_RBRACE,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
    ACTIONS(1166), 1,
      anon_sym_if,
    STATE(103), 2,
      sym_block_expression,
      sym_if_expression,
  [17578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_RBRACE,
    ACTIONS(1170), 1,
      sym_uppercase_identifier,
    STATE(422), 1,
      aux_sym_enum_definition_repeat1,
    STATE(571), 1,
      sym_enum_constructor,
  [17594] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1172), 1,
      anon_sym_RBRACE,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    STATE(414), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1174), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17622] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1179), 1,
      anon_sym_RBRACE,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      anon_sym_DASH_GT,
    STATE(153), 1,
      sym_block_expression,
    STATE(601), 1,
      sym_return_type,
  [17652] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_LF,
    ACTIONS(1183), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
  [17664] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(398), 1,
      sym_pub_attribute,
    ACTIONS(1094), 2,
      sym_mutability,
      sym_lowercase_identifier,
  [17692] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1187), 1,
      anon_sym_RBRACE,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17706] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_LF,
    ACTIONS(1193), 1,
      anon_sym_LPAREN,
    ACTIONS(1191), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_uppercase_identifier,
    ACTIONS(1195), 1,
      anon_sym_RBRACE,
    STATE(431), 1,
      aux_sym_enum_definition_repeat1,
    STATE(571), 1,
      sym_enum_constructor,
  [17736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_uppercase_identifier,
    ACTIONS(1195), 1,
      anon_sym_RBRACE,
    STATE(433), 1,
      aux_sym_enum_definition_repeat1,
    STATE(571), 1,
      sym_enum_constructor,
  [17752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_COLON,
    STATE(582), 1,
      sym_type_annotation,
    ACTIONS(1197), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17766] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1199), 1,
      anon_sym_RBRACE,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17780] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_LF,
    ACTIONS(671), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
  [17792] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_LF,
    ACTIONS(1203), 1,
      anon_sym_DASH_GT,
    ACTIONS(1201), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17806] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1205), 1,
      anon_sym_RBRACE,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17820] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LF,
    ACTIONS(1209), 1,
      anon_sym_DASH_GT,
    ACTIONS(1207), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_RBRACE,
    ACTIONS(1215), 1,
      sym_uppercase_identifier,
    STATE(431), 1,
      aux_sym_enum_definition_repeat1,
    STATE(571), 1,
      sym_enum_constructor,
  [17860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(1218), 1,
      anon_sym_if,
    STATE(205), 2,
      sym_block_expression,
      sym_if_expression,
  [17874] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_uppercase_identifier,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
    STATE(431), 1,
      aux_sym_enum_definition_repeat1,
    STATE(571), 1,
      sym_enum_constructor,
  [17890] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym_escape_seqence,
    ACTIONS(1222), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
      sym_unescaped_string_fragment,
  [17902] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1228), 1,
      sym_escape_seqence,
    ACTIONS(1226), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
      sym_unescaped_string_fragment,
  [17914] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_LF,
    ACTIONS(1232), 1,
      anon_sym_DASH_GT,
    ACTIONS(1230), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      anon_sym_DASH_GT,
    STATE(221), 1,
      sym_block_expression,
    STATE(605), 1,
      sym_return_type,
  [17954] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_LF,
    ACTIONS(1238), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
  [17966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_PLUS,
    STATE(414), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1240), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(709), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [17994] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_package_identifier,
    ACTIONS(1065), 1,
      sym_identifier,
    STATE(493), 1,
      sym_constraint,
    STATE(525), 1,
      sym_qualified_type_identifier,
  [18010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_COLON,
    ACTIONS(1247), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [18022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      anon_sym_DASH_GT,
    STATE(417), 1,
      sym_block_expression,
    STATE(595), 1,
      sym_return_type,
  [18038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      aux_sym_struct_filed_pattern_repeat1,
    ACTIONS(1251), 2,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [18052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18062] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_LF,
    ACTIONS(1260), 1,
      anon_sym_DASH_GT,
    ACTIONS(1258), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_enum_constructor_repeat1,
    ACTIONS(1262), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [18090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_uppercase_identifier,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
    STATE(450), 1,
      aux_sym_enum_definition_repeat1,
    STATE(571), 1,
      sym_enum_constructor,
  [18106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_uppercase_identifier,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    STATE(431), 1,
      aux_sym_enum_definition_repeat1,
    STATE(571), 1,
      sym_enum_constructor,
  [18122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      sym_lowercase_identifier,
    STATE(462), 1,
      sym_filed_single_pattern,
    STATE(495), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [18136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    STATE(592), 1,
      sym_struct_filed_expression,
    STATE(609), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [18150] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LF,
    ACTIONS(1269), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [18162] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(555), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [18174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      sym_identifier,
    ACTIONS(932), 3,
      anon_sym_RBRACE,
      sym_lowercase_identifier,
      sym_package_identifier,
  [18186] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_LF,
    ACTIONS(1275), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
  [18198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_PLUS,
    STATE(440), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1277), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18212] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18223] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_LF,
    ACTIONS(1281), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_COLON,
    ACTIONS(1283), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [18245] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_LF,
    ACTIONS(1289), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [18265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_type,
    ACTIONS(1293), 1,
      anon_sym_struct,
    ACTIONS(1295), 1,
      anon_sym_enum,
  [18278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_enum_constructor_repeat1,
  [18291] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1299), 1,
      anon_sym_LF,
    ACTIONS(1301), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_enum_constructor_repeat1,
  [18324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    ACTIONS(1305), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_constructor_pattern_repeat1,
  [18337] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_LF,
    ACTIONS(1309), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18348] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_LF,
    ACTIONS(1313), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_constructor_pattern_repeat1,
  [18372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_let,
    ACTIONS(1319), 1,
      anon_sym_func,
    ACTIONS(1321), 1,
      anon_sym_interface,
  [18385] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_LF,
    ACTIONS(1323), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18396] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_LF,
    ACTIONS(1327), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18407] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LF,
    ACTIONS(1078), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    ACTIONS(1329), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_enum_constructor_repeat1,
  [18431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(1331), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_apply_expression_repeat1,
  [18444] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1333), 1,
      anon_sym_LF,
    ACTIONS(1335), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18455] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1337), 1,
      anon_sym_LF,
    ACTIONS(1339), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(1341), 1,
      anon_sym_EQ,
    STATE(566), 1,
      sym_block_expression,
  [18479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    STATE(542), 1,
      aux_sym_enum_constructor_repeat1,
  [18492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    ACTIONS(1345), 1,
      anon_sym_LBRACE,
    STATE(639), 1,
      sym_type_parameters,
  [18505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    ACTIONS(1347), 1,
      anon_sym_LBRACE,
    STATE(635), 1,
      sym_type_parameters,
  [18518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      anon_sym_RBRACE,
    ACTIONS(1351), 1,
      anon_sym_COMMA,
    STATE(484), 1,
      aux_sym_struct_field_expression_repeat1,
  [18531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_COLON,
    ACTIONS(1354), 1,
      anon_sym_EQ,
    STATE(634), 1,
      sym_type_annotation,
  [18544] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_LF,
    ACTIONS(1358), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18555] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1360), 1,
      anon_sym_LF,
    ACTIONS(1362), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_apply_expression_repeat1,
  [18579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_enum_constructor_repeat1,
  [18592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(1368), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_constructor_pattern_repeat1,
  [18605] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_LF,
    ACTIONS(1061), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    ACTIONS(1370), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_apply_expression_repeat1,
  [18629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [18638] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1372), 1,
      anon_sym_LF,
    ACTIONS(1374), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [18658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      sym_lowercase_identifier,
    ACTIONS(1380), 1,
      anon_sym_RPAREN,
    STATE(579), 1,
      sym_parameter,
  [18671] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_LF,
    ACTIONS(1144), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
    ACTIONS(1384), 1,
      anon_sym_COMMA,
    STATE(498), 1,
      aux_sym_parameters_repeat1,
  [18695] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_LF,
    ACTIONS(1389), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      sym_lowercase_identifier,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      sym_parameter,
  [18719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    ACTIONS(1393), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_apply_expression_repeat1,
  [18732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_apply_expression_repeat1,
  [18754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_RBRACK,
    STATE(489), 1,
      aux_sym_enum_constructor_repeat1,
  [18767] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_LF,
    ACTIONS(1150), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_enum_constructor_repeat1,
  [18791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(1405), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_apply_expression_repeat1,
  [18804] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1407), 1,
      anon_sym_LF,
    ACTIONS(1409), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1413), 1,
      anon_sym_RBRACK,
    STATE(464), 1,
      aux_sym_enum_constructor_repeat1,
  [18828] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_LF,
    ACTIONS(1415), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18839] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_LF,
    ACTIONS(1417), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(1419), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_enum_constructor_repeat1,
  [18863] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_LF,
    ACTIONS(1423), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    STATE(467), 1,
      aux_sym_enum_constructor_repeat1,
  [18887] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_LF,
    ACTIONS(1431), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18898] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    ACTIONS(1435), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18909] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    ACTIONS(1439), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_COMMA,
    ACTIONS(1444), 1,
      anon_sym_RBRACK,
    STATE(518), 1,
      aux_sym_type_parameters_repeat1,
  [18933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 1,
      anon_sym_RBRACK,
    ACTIONS(1448), 1,
      sym_identifier,
    STATE(606), 1,
      sym_type_identifier,
  [18946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      sym_identifier,
    ACTIONS(1450), 1,
      anon_sym_RBRACK,
    STATE(606), 1,
      sym_type_identifier,
  [18959] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_LF,
    ACTIONS(1452), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18970] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_LF,
    ACTIONS(1456), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18981] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_LF,
    ACTIONS(1458), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(895), 1,
      anon_sym_EQ,
    STATE(570), 1,
      sym_block_expression,
  [19005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [19014] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1462), 1,
      anon_sym_LF,
    ACTIONS(1464), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19025] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1466), 1,
      anon_sym_LF,
    ACTIONS(1468), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(1112), 1,
      anon_sym_EQ,
    STATE(486), 1,
      sym_block_expression,
  [19049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    ACTIONS(1470), 1,
      anon_sym_LBRACE,
    STATE(641), 1,
      sym_type_parameters,
  [19062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    ACTIONS(1472), 1,
      anon_sym_LBRACE,
    STATE(636), 1,
      sym_type_parameters,
  [19075] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_LF,
    ACTIONS(1476), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_COLON,
    ACTIONS(1478), 1,
      anon_sym_EQ,
    STATE(654), 1,
      sym_type_annotation,
  [19099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_COLON,
    ACTIONS(1480), 1,
      anon_sym_EQ,
    STATE(644), 1,
      sym_type_annotation,
  [19112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    ACTIONS(1484), 1,
      anon_sym_COMMA,
    STATE(498), 1,
      aux_sym_parameters_repeat1,
  [19125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      sym_lowercase_identifier,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      sym_parameter,
  [19138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [19147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    STATE(476), 1,
      aux_sym_enum_constructor_repeat1,
  [19160] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_LF,
    ACTIONS(1492), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(1494), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_apply_expression_repeat1,
  [19184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      anon_sym_COLON,
    ACTIONS(1498), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 1,
      anon_sym_RBRACE,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    STATE(578), 1,
      aux_sym_struct_field_expression_repeat1,
  [19208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_enum_constructor_repeat1,
  [19221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RBRACK,
    STATE(554), 1,
      aux_sym_type_parameters_repeat1,
  [19234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1508), 1,
      anon_sym_RPAREN,
    ACTIONS(1510), 1,
      anon_sym_COMMA,
    STATE(506), 1,
      aux_sym_enum_constructor_repeat1,
  [19247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    ACTIONS(1512), 1,
      anon_sym_LPAREN,
    STATE(624), 1,
      sym_type_parameters,
  [19260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 1,
      anon_sym_RPAREN,
    ACTIONS(1516), 1,
      anon_sym_COMMA,
    STATE(512), 1,
      aux_sym_enum_constructor_repeat1,
  [19273] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1518), 1,
      anon_sym_LF,
    ACTIONS(1520), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_PIPE,
    ACTIONS(974), 1,
      anon_sym_as,
    ACTIONS(1522), 1,
      anon_sym_EQ_GT,
  [19297] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1524), 1,
      anon_sym_LF,
    ACTIONS(1526), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 1,
      anon_sym_COMMA,
    ACTIONS(1530), 1,
      anon_sym_RBRACK,
    STATE(518), 1,
      aux_sym_type_parameters_repeat1,
  [19321] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1532), 1,
      anon_sym_LF,
    ACTIONS(1534), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      sym_identifier,
    ACTIONS(1530), 1,
      anon_sym_RBRACK,
    STATE(606), 1,
      sym_type_identifier,
  [19345] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_LF,
    ACTIONS(1140), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_COMMA,
    ACTIONS(1538), 1,
      anon_sym_RBRACK,
    STATE(518), 1,
      aux_sym_type_parameters_repeat1,
  [19369] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_LF,
    ACTIONS(1540), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      sym_identifier,
    ACTIONS(1538), 1,
      anon_sym_RBRACK,
    STATE(606), 1,
      sym_type_identifier,
  [19393] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1544), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_COMMA,
    ACTIONS(765), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [19415] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_LF,
    ACTIONS(1550), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(1552), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_apply_expression_repeat1,
  [19439] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_LF,
    ACTIONS(1554), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19450] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_LF,
    ACTIONS(1558), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [19470] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_LF,
    ACTIONS(1562), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_COMMA,
    ACTIONS(1566), 1,
      anon_sym_RBRACK,
    STATE(550), 1,
      aux_sym_type_parameters_repeat1,
  [19494] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_LF,
    ACTIONS(1570), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19505] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_LF,
    ACTIONS(1574), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19516] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_LF,
    ACTIONS(1578), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(978), 1,
      anon_sym_EQ,
    STATE(531), 1,
      sym_block_expression,
  [19540] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_LF,
    ACTIONS(1582), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19551] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_LF,
    ACTIONS(1586), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19562] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_LF,
    ACTIONS(1588), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [19582] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_LF,
    ACTIONS(1592), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19593] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_LF,
    ACTIONS(1594), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [19613] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LF,
    ACTIONS(1598), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_RBRACE,
    ACTIONS(1600), 1,
      anon_sym_COMMA,
    STATE(484), 1,
      aux_sym_struct_field_expression_repeat1,
  [19637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_RPAREN,
    ACTIONS(1604), 1,
      anon_sym_COMMA,
    STATE(534), 1,
      aux_sym_parameters_repeat1,
  [19650] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_LF,
    ACTIONS(1606), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    ACTIONS(1608), 1,
      sym_lowercase_identifier,
    STATE(438), 1,
      sym_parameters,
  [19674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    STATE(416), 1,
      sym_parameters,
  [19692] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1612), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1614), 1,
      sym_escape_seqence,
  [19702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      sym_lowercase_identifier,
    STATE(602), 1,
      sym_parameter,
  [19712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [19720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      sym_identifier,
    STATE(565), 1,
      sym_type_identifier,
  [19730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      sym_identifier,
    STATE(606), 1,
      sym_type_identifier,
  [19740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    STATE(438), 1,
      sym_parameters,
  [19750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    STATE(499), 1,
      sym_string_literal,
  [19760] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1618), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1620), 1,
      sym_escape_seqence,
  [19770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [19778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    STATE(531), 1,
      sym_string_literal,
  [19788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(608), 1,
      sym_string_literal,
  [19798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    STATE(456), 1,
      sym_block_expression,
  [19808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [19816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(611), 1,
      sym_string_literal,
  [19826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    STATE(566), 1,
      sym_string_literal,
  [19836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(590), 1,
      sym_string_literal,
  [19846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      sym_identifier,
    STATE(543), 1,
      sym_type_identifier,
  [19856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_block_expression,
  [19866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      sym_lowercase_identifier,
    ACTIONS(1624), 1,
      sym_mutability,
  [19884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(593), 1,
      sym_string_literal,
  [19894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_block_expression,
  [19904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    STATE(474), 1,
      sym_string_literal,
  [19930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [19938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    STATE(444), 1,
      sym_parameters,
  [19948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    STATE(486), 1,
      sym_string_literal,
  [19958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_RBRACE,
      sym_uppercase_identifier,
  [19966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_RBRACE,
    ACTIONS(1632), 1,
      anon_sym_COMMA,
  [19976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(598), 1,
      sym_string_literal,
  [19986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_COLON,
  [19993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      sym_lowercase_identifier,
  [20000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_COLON,
  [20007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      sym_lowercase_identifier,
  [20014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_COMMA,
  [20021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_RBRACE,
  [20028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_SQUOTE,
  [20035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_LBRACE,
  [20042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_SQUOTE,
  [20049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_LPAREN,
  [20056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      sym_lowercase_identifier,
  [20063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      sym_colon_colon_uppercase_identifier,
  [20070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_COLON,
  [20077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1658), 1,
      anon_sym_RBRACE,
  [20084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      sym_dot_identifier,
  [20091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      sym_lowercase_identifier,
  [20098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
  [20105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_RBRACE,
  [20112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_RBRACK,
  [20119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      anon_sym_EQ,
  [20126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 1,
      anon_sym_LBRACE,
  [20133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      anon_sym_LBRACE,
  [20140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      sym_lowercase_identifier,
  [20147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
  [20154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      anon_sym_LBRACE,
  [20161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      anon_sym_RBRACE,
  [20168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1674), 1,
      anon_sym_LBRACE,
  [20175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_RPAREN,
  [20182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      sym_identifier,
  [20189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      anon_sym_EQ,
  [20196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      anon_sym_EQ,
  [20203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_RPAREN,
  [20210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      sym_identifier,
  [20217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      sym_identifier,
  [20224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      sym_identifier,
  [20231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      anon_sym_LBRACE,
  [20238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      sym_colon_colon_lowercase_identifier,
  [20245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_RPAREN,
  [20252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1698), 1,
      sym_dot_identifier,
  [20259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 1,
      anon_sym_EQ,
  [20266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      sym_identifier,
  [20273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1704), 1,
      sym_dot_identifier,
  [20280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1706), 1,
      anon_sym_RBRACE,
  [20287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 1,
      anon_sym_RBRACE,
  [20294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1710), 1,
      anon_sym_readonly,
  [20301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1712), 1,
      anon_sym_EQ,
  [20308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      anon_sym_COLON_EQ,
  [20315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1716), 1,
      sym_dot_identifier,
  [20322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      sym_colon_colon_uppercase_identifier,
  [20329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
  [20336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
  [20343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1720), 1,
      anon_sym_RPAREN,
  [20350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_RBRACE,
  [20357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1722), 1,
      ts_builtin_sym_end,
  [20364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1724), 1,
      sym_identifier,
  [20371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1726), 1,
      sym_lowercase_identifier,
  [20378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1728), 1,
      sym_identifier,
  [20385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1730), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 270,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 475,
  [SMALL_STATE(14)] = 574,
  [SMALL_STATE(15)] = 673,
  [SMALL_STATE(16)] = 772,
  [SMALL_STATE(17)] = 871,
  [SMALL_STATE(18)] = 970,
  [SMALL_STATE(19)] = 1069,
  [SMALL_STATE(20)] = 1168,
  [SMALL_STATE(21)] = 1267,
  [SMALL_STATE(22)] = 1366,
  [SMALL_STATE(23)] = 1465,
  [SMALL_STATE(24)] = 1564,
  [SMALL_STATE(25)] = 1663,
  [SMALL_STATE(26)] = 1762,
  [SMALL_STATE(27)] = 1861,
  [SMALL_STATE(28)] = 1960,
  [SMALL_STATE(29)] = 2059,
  [SMALL_STATE(30)] = 2158,
  [SMALL_STATE(31)] = 2257,
  [SMALL_STATE(32)] = 2356,
  [SMALL_STATE(33)] = 2455,
  [SMALL_STATE(34)] = 2554,
  [SMALL_STATE(35)] = 2653,
  [SMALL_STATE(36)] = 2752,
  [SMALL_STATE(37)] = 2848,
  [SMALL_STATE(38)] = 2944,
  [SMALL_STATE(39)] = 3040,
  [SMALL_STATE(40)] = 3136,
  [SMALL_STATE(41)] = 3232,
  [SMALL_STATE(42)] = 3328,
  [SMALL_STATE(43)] = 3424,
  [SMALL_STATE(44)] = 3520,
  [SMALL_STATE(45)] = 3616,
  [SMALL_STATE(46)] = 3712,
  [SMALL_STATE(47)] = 3808,
  [SMALL_STATE(48)] = 3904,
  [SMALL_STATE(49)] = 4000,
  [SMALL_STATE(50)] = 4096,
  [SMALL_STATE(51)] = 4192,
  [SMALL_STATE(52)] = 4288,
  [SMALL_STATE(53)] = 4384,
  [SMALL_STATE(54)] = 4480,
  [SMALL_STATE(55)] = 4576,
  [SMALL_STATE(56)] = 4672,
  [SMALL_STATE(57)] = 4768,
  [SMALL_STATE(58)] = 4864,
  [SMALL_STATE(59)] = 4960,
  [SMALL_STATE(60)] = 5056,
  [SMALL_STATE(61)] = 5152,
  [SMALL_STATE(62)] = 5248,
  [SMALL_STATE(63)] = 5344,
  [SMALL_STATE(64)] = 5440,
  [SMALL_STATE(65)] = 5536,
  [SMALL_STATE(66)] = 5632,
  [SMALL_STATE(67)] = 5728,
  [SMALL_STATE(68)] = 5824,
  [SMALL_STATE(69)] = 5920,
  [SMALL_STATE(70)] = 6016,
  [SMALL_STATE(71)] = 6112,
  [SMALL_STATE(72)] = 6208,
  [SMALL_STATE(73)] = 6251,
  [SMALL_STATE(74)] = 6294,
  [SMALL_STATE(75)] = 6336,
  [SMALL_STATE(76)] = 6378,
  [SMALL_STATE(77)] = 6420,
  [SMALL_STATE(78)] = 6462,
  [SMALL_STATE(79)] = 6504,
  [SMALL_STATE(80)] = 6583,
  [SMALL_STATE(81)] = 6659,
  [SMALL_STATE(82)] = 6735,
  [SMALL_STATE(83)] = 6811,
  [SMALL_STATE(84)] = 6887,
  [SMALL_STATE(85)] = 6963,
  [SMALL_STATE(86)] = 7039,
  [SMALL_STATE(87)] = 7115,
  [SMALL_STATE(88)] = 7160,
  [SMALL_STATE(89)] = 7203,
  [SMALL_STATE(90)] = 7243,
  [SMALL_STATE(91)] = 7313,
  [SMALL_STATE(92)] = 7351,
  [SMALL_STATE(93)] = 7399,
  [SMALL_STATE(94)] = 7437,
  [SMALL_STATE(95)] = 7507,
  [SMALL_STATE(96)] = 7577,
  [SMALL_STATE(97)] = 7615,
  [SMALL_STATE(98)] = 7685,
  [SMALL_STATE(99)] = 7755,
  [SMALL_STATE(100)] = 7825,
  [SMALL_STATE(101)] = 7895,
  [SMALL_STATE(102)] = 7948,
  [SMALL_STATE(103)] = 8015,
  [SMALL_STATE(104)] = 8052,
  [SMALL_STATE(105)] = 8093,
  [SMALL_STATE(106)] = 8160,
  [SMALL_STATE(107)] = 8197,
  [SMALL_STATE(108)] = 8264,
  [SMALL_STATE(109)] = 8301,
  [SMALL_STATE(110)] = 8338,
  [SMALL_STATE(111)] = 8375,
  [SMALL_STATE(112)] = 8412,
  [SMALL_STATE(113)] = 8449,
  [SMALL_STATE(114)] = 8516,
  [SMALL_STATE(115)] = 8553,
  [SMALL_STATE(116)] = 8590,
  [SMALL_STATE(117)] = 8627,
  [SMALL_STATE(118)] = 8664,
  [SMALL_STATE(119)] = 8703,
  [SMALL_STATE(120)] = 8740,
  [SMALL_STATE(121)] = 8777,
  [SMALL_STATE(122)] = 8814,
  [SMALL_STATE(123)] = 8851,
  [SMALL_STATE(124)] = 8888,
  [SMALL_STATE(125)] = 8925,
  [SMALL_STATE(126)] = 8962,
  [SMALL_STATE(127)] = 8999,
  [SMALL_STATE(128)] = 9036,
  [SMALL_STATE(129)] = 9073,
  [SMALL_STATE(130)] = 9140,
  [SMALL_STATE(131)] = 9177,
  [SMALL_STATE(132)] = 9214,
  [SMALL_STATE(133)] = 9251,
  [SMALL_STATE(134)] = 9318,
  [SMALL_STATE(135)] = 9357,
  [SMALL_STATE(136)] = 9394,
  [SMALL_STATE(137)] = 9431,
  [SMALL_STATE(138)] = 9468,
  [SMALL_STATE(139)] = 9535,
  [SMALL_STATE(140)] = 9572,
  [SMALL_STATE(141)] = 9609,
  [SMALL_STATE(142)] = 9660,
  [SMALL_STATE(143)] = 9707,
  [SMALL_STATE(144)] = 9746,
  [SMALL_STATE(145)] = 9785,
  [SMALL_STATE(146)] = 9822,
  [SMALL_STATE(147)] = 9865,
  [SMALL_STATE(148)] = 9904,
  [SMALL_STATE(149)] = 9941,
  [SMALL_STATE(150)] = 9978,
  [SMALL_STATE(151)] = 10017,
  [SMALL_STATE(152)] = 10054,
  [SMALL_STATE(153)] = 10091,
  [SMALL_STATE(154)] = 10128,
  [SMALL_STATE(155)] = 10165,
  [SMALL_STATE(156)] = 10202,
  [SMALL_STATE(157)] = 10239,
  [SMALL_STATE(158)] = 10276,
  [SMALL_STATE(159)] = 10313,
  [SMALL_STATE(160)] = 10350,
  [SMALL_STATE(161)] = 10386,
  [SMALL_STATE(162)] = 10432,
  [SMALL_STATE(163)] = 10468,
  [SMALL_STATE(164)] = 10506,
  [SMALL_STATE(165)] = 10544,
  [SMALL_STATE(166)] = 10580,
  [SMALL_STATE(167)] = 10616,
  [SMALL_STATE(168)] = 10651,
  [SMALL_STATE(169)] = 10686,
  [SMALL_STATE(170)] = 10721,
  [SMALL_STATE(171)] = 10758,
  [SMALL_STATE(172)] = 10793,
  [SMALL_STATE(173)] = 10828,
  [SMALL_STATE(174)] = 10865,
  [SMALL_STATE(175)] = 10900,
  [SMALL_STATE(176)] = 10939,
  [SMALL_STATE(177)] = 10976,
  [SMALL_STATE(178)] = 11019,
  [SMALL_STATE(179)] = 11054,
  [SMALL_STATE(180)] = 11089,
  [SMALL_STATE(181)] = 11124,
  [SMALL_STATE(182)] = 11159,
  [SMALL_STATE(183)] = 11204,
  [SMALL_STATE(184)] = 11239,
  [SMALL_STATE(185)] = 11274,
  [SMALL_STATE(186)] = 11309,
  [SMALL_STATE(187)] = 11344,
  [SMALL_STATE(188)] = 11379,
  [SMALL_STATE(189)] = 11414,
  [SMALL_STATE(190)] = 11449,
  [SMALL_STATE(191)] = 11484,
  [SMALL_STATE(192)] = 11519,
  [SMALL_STATE(193)] = 11554,
  [SMALL_STATE(194)] = 11589,
  [SMALL_STATE(195)] = 11626,
  [SMALL_STATE(196)] = 11661,
  [SMALL_STATE(197)] = 11696,
  [SMALL_STATE(198)] = 11731,
  [SMALL_STATE(199)] = 11766,
  [SMALL_STATE(200)] = 11801,
  [SMALL_STATE(201)] = 11836,
  [SMALL_STATE(202)] = 11871,
  [SMALL_STATE(203)] = 11906,
  [SMALL_STATE(204)] = 11941,
  [SMALL_STATE(205)] = 11976,
  [SMALL_STATE(206)] = 12011,
  [SMALL_STATE(207)] = 12046,
  [SMALL_STATE(208)] = 12081,
  [SMALL_STATE(209)] = 12116,
  [SMALL_STATE(210)] = 12151,
  [SMALL_STATE(211)] = 12186,
  [SMALL_STATE(212)] = 12221,
  [SMALL_STATE(213)] = 12256,
  [SMALL_STATE(214)] = 12291,
  [SMALL_STATE(215)] = 12326,
  [SMALL_STATE(216)] = 12361,
  [SMALL_STATE(217)] = 12396,
  [SMALL_STATE(218)] = 12431,
  [SMALL_STATE(219)] = 12472,
  [SMALL_STATE(220)] = 12507,
  [SMALL_STATE(221)] = 12542,
  [SMALL_STATE(222)] = 12577,
  [SMALL_STATE(223)] = 12625,
  [SMALL_STATE(224)] = 12659,
  [SMALL_STATE(225)] = 12707,
  [SMALL_STATE(226)] = 12755,
  [SMALL_STATE(227)] = 12800,
  [SMALL_STATE(228)] = 12845,
  [SMALL_STATE(229)] = 12890,
  [SMALL_STATE(230)] = 12935,
  [SMALL_STATE(231)] = 12990,
  [SMALL_STATE(232)] = 13035,
  [SMALL_STATE(233)] = 13080,
  [SMALL_STATE(234)] = 13135,
  [SMALL_STATE(235)] = 13180,
  [SMALL_STATE(236)] = 13225,
  [SMALL_STATE(237)] = 13270,
  [SMALL_STATE(238)] = 13315,
  [SMALL_STATE(239)] = 13367,
  [SMALL_STATE(240)] = 13411,
  [SMALL_STATE(241)] = 13463,
  [SMALL_STATE(242)] = 13507,
  [SMALL_STATE(243)] = 13559,
  [SMALL_STATE(244)] = 13611,
  [SMALL_STATE(245)] = 13655,
  [SMALL_STATE(246)] = 13707,
  [SMALL_STATE(247)] = 13755,
  [SMALL_STATE(248)] = 13807,
  [SMALL_STATE(249)] = 13851,
  [SMALL_STATE(250)] = 13900,
  [SMALL_STATE(251)] = 13947,
  [SMALL_STATE(252)] = 13996,
  [SMALL_STATE(253)] = 14042,
  [SMALL_STATE(254)] = 14088,
  [SMALL_STATE(255)] = 14134,
  [SMALL_STATE(256)] = 14177,
  [SMALL_STATE(257)] = 14228,
  [SMALL_STATE(258)] = 14279,
  [SMALL_STATE(259)] = 14305,
  [SMALL_STATE(260)] = 14328,
  [SMALL_STATE(261)] = 14351,
  [SMALL_STATE(262)] = 14382,
  [SMALL_STATE(263)] = 14413,
  [SMALL_STATE(264)] = 14444,
  [SMALL_STATE(265)] = 14475,
  [SMALL_STATE(266)] = 14506,
  [SMALL_STATE(267)] = 14537,
  [SMALL_STATE(268)] = 14568,
  [SMALL_STATE(269)] = 14599,
  [SMALL_STATE(270)] = 14630,
  [SMALL_STATE(271)] = 14661,
  [SMALL_STATE(272)] = 14692,
  [SMALL_STATE(273)] = 14723,
  [SMALL_STATE(274)] = 14754,
  [SMALL_STATE(275)] = 14785,
  [SMALL_STATE(276)] = 14806,
  [SMALL_STATE(277)] = 14837,
  [SMALL_STATE(278)] = 14868,
  [SMALL_STATE(279)] = 14899,
  [SMALL_STATE(280)] = 14917,
  [SMALL_STATE(281)] = 14945,
  [SMALL_STATE(282)] = 14963,
  [SMALL_STATE(283)] = 14991,
  [SMALL_STATE(284)] = 15019,
  [SMALL_STATE(285)] = 15047,
  [SMALL_STATE(286)] = 15065,
  [SMALL_STATE(287)] = 15093,
  [SMALL_STATE(288)] = 15121,
  [SMALL_STATE(289)] = 15149,
  [SMALL_STATE(290)] = 15177,
  [SMALL_STATE(291)] = 15205,
  [SMALL_STATE(292)] = 15223,
  [SMALL_STATE(293)] = 15251,
  [SMALL_STATE(294)] = 15269,
  [SMALL_STATE(295)] = 15297,
  [SMALL_STATE(296)] = 15315,
  [SMALL_STATE(297)] = 15343,
  [SMALL_STATE(298)] = 15361,
  [SMALL_STATE(299)] = 15389,
  [SMALL_STATE(300)] = 15417,
  [SMALL_STATE(301)] = 15445,
  [SMALL_STATE(302)] = 15465,
  [SMALL_STATE(303)] = 15493,
  [SMALL_STATE(304)] = 15511,
  [SMALL_STATE(305)] = 15529,
  [SMALL_STATE(306)] = 15547,
  [SMALL_STATE(307)] = 15565,
  [SMALL_STATE(308)] = 15593,
  [SMALL_STATE(309)] = 15611,
  [SMALL_STATE(310)] = 15639,
  [SMALL_STATE(311)] = 15657,
  [SMALL_STATE(312)] = 15675,
  [SMALL_STATE(313)] = 15703,
  [SMALL_STATE(314)] = 15731,
  [SMALL_STATE(315)] = 15749,
  [SMALL_STATE(316)] = 15777,
  [SMALL_STATE(317)] = 15792,
  [SMALL_STATE(318)] = 15823,
  [SMALL_STATE(319)] = 15854,
  [SMALL_STATE(320)] = 15869,
  [SMALL_STATE(321)] = 15884,
  [SMALL_STATE(322)] = 15904,
  [SMALL_STATE(323)] = 15932,
  [SMALL_STATE(324)] = 15960,
  [SMALL_STATE(325)] = 15988,
  [SMALL_STATE(326)] = 16016,
  [SMALL_STATE(327)] = 16044,
  [SMALL_STATE(328)] = 16072,
  [SMALL_STATE(329)] = 16100,
  [SMALL_STATE(330)] = 16128,
  [SMALL_STATE(331)] = 16156,
  [SMALL_STATE(332)] = 16184,
  [SMALL_STATE(333)] = 16212,
  [SMALL_STATE(334)] = 16240,
  [SMALL_STATE(335)] = 16261,
  [SMALL_STATE(336)] = 16284,
  [SMALL_STATE(337)] = 16309,
  [SMALL_STATE(338)] = 16330,
  [SMALL_STATE(339)] = 16355,
  [SMALL_STATE(340)] = 16378,
  [SMALL_STATE(341)] = 16403,
  [SMALL_STATE(342)] = 16426,
  [SMALL_STATE(343)] = 16449,
  [SMALL_STATE(344)] = 16470,
  [SMALL_STATE(345)] = 16491,
  [SMALL_STATE(346)] = 16512,
  [SMALL_STATE(347)] = 16535,
  [SMALL_STATE(348)] = 16552,
  [SMALL_STATE(349)] = 16573,
  [SMALL_STATE(350)] = 16596,
  [SMALL_STATE(351)] = 16617,
  [SMALL_STATE(352)] = 16638,
  [SMALL_STATE(353)] = 16659,
  [SMALL_STATE(354)] = 16679,
  [SMALL_STATE(355)] = 16695,
  [SMALL_STATE(356)] = 16709,
  [SMALL_STATE(357)] = 16723,
  [SMALL_STATE(358)] = 16737,
  [SMALL_STATE(359)] = 16751,
  [SMALL_STATE(360)] = 16769,
  [SMALL_STATE(361)] = 16780,
  [SMALL_STATE(362)] = 16797,
  [SMALL_STATE(363)] = 16816,
  [SMALL_STATE(364)] = 16835,
  [SMALL_STATE(365)] = 16846,
  [SMALL_STATE(366)] = 16863,
  [SMALL_STATE(367)] = 16874,
  [SMALL_STATE(368)] = 16889,
  [SMALL_STATE(369)] = 16900,
  [SMALL_STATE(370)] = 16917,
  [SMALL_STATE(371)] = 16936,
  [SMALL_STATE(372)] = 16955,
  [SMALL_STATE(373)] = 16972,
  [SMALL_STATE(374)] = 16983,
  [SMALL_STATE(375)] = 16994,
  [SMALL_STATE(376)] = 17009,
  [SMALL_STATE(377)] = 17022,
  [SMALL_STATE(378)] = 17039,
  [SMALL_STATE(379)] = 17050,
  [SMALL_STATE(380)] = 17061,
  [SMALL_STATE(381)] = 17078,
  [SMALL_STATE(382)] = 17095,
  [SMALL_STATE(383)] = 17114,
  [SMALL_STATE(384)] = 17133,
  [SMALL_STATE(385)] = 17152,
  [SMALL_STATE(386)] = 17163,
  [SMALL_STATE(387)] = 17180,
  [SMALL_STATE(388)] = 17199,
  [SMALL_STATE(389)] = 17216,
  [SMALL_STATE(390)] = 17235,
  [SMALL_STATE(391)] = 17254,
  [SMALL_STATE(392)] = 17273,
  [SMALL_STATE(393)] = 17290,
  [SMALL_STATE(394)] = 17309,
  [SMALL_STATE(395)] = 17326,
  [SMALL_STATE(396)] = 17337,
  [SMALL_STATE(397)] = 17348,
  [SMALL_STATE(398)] = 17365,
  [SMALL_STATE(399)] = 17376,
  [SMALL_STATE(400)] = 17395,
  [SMALL_STATE(401)] = 17414,
  [SMALL_STATE(402)] = 17433,
  [SMALL_STATE(403)] = 17450,
  [SMALL_STATE(404)] = 17467,
  [SMALL_STATE(405)] = 17478,
  [SMALL_STATE(406)] = 17495,
  [SMALL_STATE(407)] = 17506,
  [SMALL_STATE(408)] = 17517,
  [SMALL_STATE(409)] = 17536,
  [SMALL_STATE(410)] = 17550,
  [SMALL_STATE(411)] = 17564,
  [SMALL_STATE(412)] = 17578,
  [SMALL_STATE(413)] = 17594,
  [SMALL_STATE(414)] = 17608,
  [SMALL_STATE(415)] = 17622,
  [SMALL_STATE(416)] = 17636,
  [SMALL_STATE(417)] = 17652,
  [SMALL_STATE(418)] = 17664,
  [SMALL_STATE(419)] = 17678,
  [SMALL_STATE(420)] = 17692,
  [SMALL_STATE(421)] = 17706,
  [SMALL_STATE(422)] = 17720,
  [SMALL_STATE(423)] = 17736,
  [SMALL_STATE(424)] = 17752,
  [SMALL_STATE(425)] = 17766,
  [SMALL_STATE(426)] = 17780,
  [SMALL_STATE(427)] = 17792,
  [SMALL_STATE(428)] = 17806,
  [SMALL_STATE(429)] = 17820,
  [SMALL_STATE(430)] = 17834,
  [SMALL_STATE(431)] = 17844,
  [SMALL_STATE(432)] = 17860,
  [SMALL_STATE(433)] = 17874,
  [SMALL_STATE(434)] = 17890,
  [SMALL_STATE(435)] = 17902,
  [SMALL_STATE(436)] = 17914,
  [SMALL_STATE(437)] = 17928,
  [SMALL_STATE(438)] = 17938,
  [SMALL_STATE(439)] = 17954,
  [SMALL_STATE(440)] = 17966,
  [SMALL_STATE(441)] = 17980,
  [SMALL_STATE(442)] = 17994,
  [SMALL_STATE(443)] = 18010,
  [SMALL_STATE(444)] = 18022,
  [SMALL_STATE(445)] = 18038,
  [SMALL_STATE(446)] = 18052,
  [SMALL_STATE(447)] = 18062,
  [SMALL_STATE(448)] = 18076,
  [SMALL_STATE(449)] = 18090,
  [SMALL_STATE(450)] = 18106,
  [SMALL_STATE(451)] = 18122,
  [SMALL_STATE(452)] = 18136,
  [SMALL_STATE(453)] = 18150,
  [SMALL_STATE(454)] = 18162,
  [SMALL_STATE(455)] = 18174,
  [SMALL_STATE(456)] = 18186,
  [SMALL_STATE(457)] = 18198,
  [SMALL_STATE(458)] = 18212,
  [SMALL_STATE(459)] = 18223,
  [SMALL_STATE(460)] = 18234,
  [SMALL_STATE(461)] = 18245,
  [SMALL_STATE(462)] = 18256,
  [SMALL_STATE(463)] = 18265,
  [SMALL_STATE(464)] = 18278,
  [SMALL_STATE(465)] = 18291,
  [SMALL_STATE(466)] = 18302,
  [SMALL_STATE(467)] = 18311,
  [SMALL_STATE(468)] = 18324,
  [SMALL_STATE(469)] = 18337,
  [SMALL_STATE(470)] = 18348,
  [SMALL_STATE(471)] = 18359,
  [SMALL_STATE(472)] = 18372,
  [SMALL_STATE(473)] = 18385,
  [SMALL_STATE(474)] = 18396,
  [SMALL_STATE(475)] = 18407,
  [SMALL_STATE(476)] = 18418,
  [SMALL_STATE(477)] = 18431,
  [SMALL_STATE(478)] = 18444,
  [SMALL_STATE(479)] = 18455,
  [SMALL_STATE(480)] = 18466,
  [SMALL_STATE(481)] = 18479,
  [SMALL_STATE(482)] = 18492,
  [SMALL_STATE(483)] = 18505,
  [SMALL_STATE(484)] = 18518,
  [SMALL_STATE(485)] = 18531,
  [SMALL_STATE(486)] = 18544,
  [SMALL_STATE(487)] = 18555,
  [SMALL_STATE(488)] = 18566,
  [SMALL_STATE(489)] = 18579,
  [SMALL_STATE(490)] = 18592,
  [SMALL_STATE(491)] = 18605,
  [SMALL_STATE(492)] = 18616,
  [SMALL_STATE(493)] = 18629,
  [SMALL_STATE(494)] = 18638,
  [SMALL_STATE(495)] = 18649,
  [SMALL_STATE(496)] = 18658,
  [SMALL_STATE(497)] = 18671,
  [SMALL_STATE(498)] = 18682,
  [SMALL_STATE(499)] = 18695,
  [SMALL_STATE(500)] = 18706,
  [SMALL_STATE(501)] = 18719,
  [SMALL_STATE(502)] = 18732,
  [SMALL_STATE(503)] = 18741,
  [SMALL_STATE(504)] = 18754,
  [SMALL_STATE(505)] = 18767,
  [SMALL_STATE(506)] = 18778,
  [SMALL_STATE(507)] = 18791,
  [SMALL_STATE(508)] = 18804,
  [SMALL_STATE(509)] = 18815,
  [SMALL_STATE(510)] = 18828,
  [SMALL_STATE(511)] = 18839,
  [SMALL_STATE(512)] = 18850,
  [SMALL_STATE(513)] = 18863,
  [SMALL_STATE(514)] = 18874,
  [SMALL_STATE(515)] = 18887,
  [SMALL_STATE(516)] = 18898,
  [SMALL_STATE(517)] = 18909,
  [SMALL_STATE(518)] = 18920,
  [SMALL_STATE(519)] = 18933,
  [SMALL_STATE(520)] = 18946,
  [SMALL_STATE(521)] = 18959,
  [SMALL_STATE(522)] = 18970,
  [SMALL_STATE(523)] = 18981,
  [SMALL_STATE(524)] = 18992,
  [SMALL_STATE(525)] = 19005,
  [SMALL_STATE(526)] = 19014,
  [SMALL_STATE(527)] = 19025,
  [SMALL_STATE(528)] = 19036,
  [SMALL_STATE(529)] = 19049,
  [SMALL_STATE(530)] = 19062,
  [SMALL_STATE(531)] = 19075,
  [SMALL_STATE(532)] = 19086,
  [SMALL_STATE(533)] = 19099,
  [SMALL_STATE(534)] = 19112,
  [SMALL_STATE(535)] = 19125,
  [SMALL_STATE(536)] = 19138,
  [SMALL_STATE(537)] = 19147,
  [SMALL_STATE(538)] = 19160,
  [SMALL_STATE(539)] = 19171,
  [SMALL_STATE(540)] = 19184,
  [SMALL_STATE(541)] = 19195,
  [SMALL_STATE(542)] = 19208,
  [SMALL_STATE(543)] = 19221,
  [SMALL_STATE(544)] = 19234,
  [SMALL_STATE(545)] = 19247,
  [SMALL_STATE(546)] = 19260,
  [SMALL_STATE(547)] = 19273,
  [SMALL_STATE(548)] = 19284,
  [SMALL_STATE(549)] = 19297,
  [SMALL_STATE(550)] = 19308,
  [SMALL_STATE(551)] = 19321,
  [SMALL_STATE(552)] = 19332,
  [SMALL_STATE(553)] = 19345,
  [SMALL_STATE(554)] = 19356,
  [SMALL_STATE(555)] = 19369,
  [SMALL_STATE(556)] = 19380,
  [SMALL_STATE(557)] = 19393,
  [SMALL_STATE(558)] = 19404,
  [SMALL_STATE(559)] = 19415,
  [SMALL_STATE(560)] = 19426,
  [SMALL_STATE(561)] = 19439,
  [SMALL_STATE(562)] = 19450,
  [SMALL_STATE(563)] = 19461,
  [SMALL_STATE(564)] = 19470,
  [SMALL_STATE(565)] = 19481,
  [SMALL_STATE(566)] = 19494,
  [SMALL_STATE(567)] = 19505,
  [SMALL_STATE(568)] = 19516,
  [SMALL_STATE(569)] = 19527,
  [SMALL_STATE(570)] = 19540,
  [SMALL_STATE(571)] = 19551,
  [SMALL_STATE(572)] = 19562,
  [SMALL_STATE(573)] = 19573,
  [SMALL_STATE(574)] = 19582,
  [SMALL_STATE(575)] = 19593,
  [SMALL_STATE(576)] = 19604,
  [SMALL_STATE(577)] = 19613,
  [SMALL_STATE(578)] = 19624,
  [SMALL_STATE(579)] = 19637,
  [SMALL_STATE(580)] = 19650,
  [SMALL_STATE(581)] = 19661,
  [SMALL_STATE(582)] = 19674,
  [SMALL_STATE(583)] = 19682,
  [SMALL_STATE(584)] = 19692,
  [SMALL_STATE(585)] = 19702,
  [SMALL_STATE(586)] = 19712,
  [SMALL_STATE(587)] = 19720,
  [SMALL_STATE(588)] = 19730,
  [SMALL_STATE(589)] = 19740,
  [SMALL_STATE(590)] = 19750,
  [SMALL_STATE(591)] = 19760,
  [SMALL_STATE(592)] = 19770,
  [SMALL_STATE(593)] = 19778,
  [SMALL_STATE(594)] = 19788,
  [SMALL_STATE(595)] = 19798,
  [SMALL_STATE(596)] = 19808,
  [SMALL_STATE(597)] = 19816,
  [SMALL_STATE(598)] = 19826,
  [SMALL_STATE(599)] = 19836,
  [SMALL_STATE(600)] = 19846,
  [SMALL_STATE(601)] = 19856,
  [SMALL_STATE(602)] = 19866,
  [SMALL_STATE(603)] = 19874,
  [SMALL_STATE(604)] = 19884,
  [SMALL_STATE(605)] = 19894,
  [SMALL_STATE(606)] = 19904,
  [SMALL_STATE(607)] = 19912,
  [SMALL_STATE(608)] = 19920,
  [SMALL_STATE(609)] = 19930,
  [SMALL_STATE(610)] = 19938,
  [SMALL_STATE(611)] = 19948,
  [SMALL_STATE(612)] = 19958,
  [SMALL_STATE(613)] = 19966,
  [SMALL_STATE(614)] = 19976,
  [SMALL_STATE(615)] = 19986,
  [SMALL_STATE(616)] = 19993,
  [SMALL_STATE(617)] = 20000,
  [SMALL_STATE(618)] = 20007,
  [SMALL_STATE(619)] = 20014,
  [SMALL_STATE(620)] = 20021,
  [SMALL_STATE(621)] = 20028,
  [SMALL_STATE(622)] = 20035,
  [SMALL_STATE(623)] = 20042,
  [SMALL_STATE(624)] = 20049,
  [SMALL_STATE(625)] = 20056,
  [SMALL_STATE(626)] = 20063,
  [SMALL_STATE(627)] = 20070,
  [SMALL_STATE(628)] = 20077,
  [SMALL_STATE(629)] = 20084,
  [SMALL_STATE(630)] = 20091,
  [SMALL_STATE(631)] = 20098,
  [SMALL_STATE(632)] = 20105,
  [SMALL_STATE(633)] = 20112,
  [SMALL_STATE(634)] = 20119,
  [SMALL_STATE(635)] = 20126,
  [SMALL_STATE(636)] = 20133,
  [SMALL_STATE(637)] = 20140,
  [SMALL_STATE(638)] = 20147,
  [SMALL_STATE(639)] = 20154,
  [SMALL_STATE(640)] = 20161,
  [SMALL_STATE(641)] = 20168,
  [SMALL_STATE(642)] = 20175,
  [SMALL_STATE(643)] = 20182,
  [SMALL_STATE(644)] = 20189,
  [SMALL_STATE(645)] = 20196,
  [SMALL_STATE(646)] = 20203,
  [SMALL_STATE(647)] = 20210,
  [SMALL_STATE(648)] = 20217,
  [SMALL_STATE(649)] = 20224,
  [SMALL_STATE(650)] = 20231,
  [SMALL_STATE(651)] = 20238,
  [SMALL_STATE(652)] = 20245,
  [SMALL_STATE(653)] = 20252,
  [SMALL_STATE(654)] = 20259,
  [SMALL_STATE(655)] = 20266,
  [SMALL_STATE(656)] = 20273,
  [SMALL_STATE(657)] = 20280,
  [SMALL_STATE(658)] = 20287,
  [SMALL_STATE(659)] = 20294,
  [SMALL_STATE(660)] = 20301,
  [SMALL_STATE(661)] = 20308,
  [SMALL_STATE(662)] = 20315,
  [SMALL_STATE(663)] = 20322,
  [SMALL_STATE(664)] = 20329,
  [SMALL_STATE(665)] = 20336,
  [SMALL_STATE(666)] = 20343,
  [SMALL_STATE(667)] = 20350,
  [SMALL_STATE(668)] = 20357,
  [SMALL_STATE(669)] = 20364,
  [SMALL_STATE(670)] = 20371,
  [SMALL_STATE(671)] = 20378,
  [SMALL_STATE(672)] = 20385,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(118),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(31),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(113),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(163),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(346),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(198),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(209),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(591),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(48),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(581),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(29),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(54),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(59),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(426),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(625),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(49),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(11),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(201),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(319),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(662),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(279),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(138),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(353),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(380),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(74),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(76),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(584),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(79),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(77),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(319),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(653),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_expression_pun, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_pattern, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 5),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 5),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 5),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 5),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_expression, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_expression, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_expression, 5),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_expression, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_expression, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_expression, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access_expression, 4),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access_expression, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 4),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 4),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 4),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonempty_block_expression, 4),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonempty_block_expression, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 4),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 5),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_expression, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_expression, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 5),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expression, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expression, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 7),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 7),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 6),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 6),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 6),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 6),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 6),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 6),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonempty_block_expression, 3),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonempty_block_expression, 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_value, 1),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 4),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 5),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 5),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 5),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 4),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_let_expression, 3),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_expression, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 1),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 5),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_clause, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 4),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 6),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 6),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(385),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(321),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(655),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(672),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(671),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(670),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(400),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(669),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 1),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 2),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 1),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 1),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 6),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 6),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 6),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 6),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 2),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 2),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 5),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 5),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 7),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 7),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_pattern, 3),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_pattern, 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 4),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 4),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_pattern, 3),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_pattern, 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 5),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 5),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_pattern, 5),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_pattern, 5),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 3),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 3),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 3),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pub, 1),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(396),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(319),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(653),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [942] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(615),
  [945] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(385),
  [948] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(419),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [953] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(630),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 2),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 3),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 1),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2),
  [1002] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(46),
  [1005] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(434),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(434),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(434),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(434),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 5),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pub_attribute, 3),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern, 3),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 3),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 3),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2), SHIFT_REPEAT(105),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 5),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 5),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 2),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 3),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 3),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 4),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 2),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 1),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any, 1),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 2),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 2),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 1),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 4),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 4),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 6),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 6),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 7),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 7),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(442),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 4),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 4),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 1),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 1),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [1215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(421),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_fragement, 1),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_fragement, 1),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolator, 3),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolator, 3),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 3),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2), SHIFT_REPEAT(60),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern_pun, 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2),
  [1253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2), SHIFT_REPEAT(451),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [1258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2), SHIFT_REPEAT(287),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 1),
  [1271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 5),
  [1275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 5),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 1),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 4),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression_pun, 1),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item, 1),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item, 1),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 4),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 4),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 4),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 4),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 6),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 6),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 6),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2),
  [1351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2), SHIFT_REPEAT(452),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 5),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 5),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filed_single_pattern, 1),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(585),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [1389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 8),
  [1409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 8),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any, 1),
  [1417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 6),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [1431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [1435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 3),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 3),
  [1441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(588),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [1456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_type, 2),
  [1458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 2),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5),
  [1464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 5),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 5),
  [1468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 5),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [1476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7),
  [1492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 7),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 3),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5),
  [1526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 5),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [1534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [1544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4),
  [1558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 4),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [1562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [1570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4),
  [1578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 4),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [1582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [1592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 5),
  [1594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [1598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 3),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_expression, 1),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 1),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 4),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1722] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_moonbit_external_scanner_create(void);
void tree_sitter_moonbit_external_scanner_destroy(void *);
bool tree_sitter_moonbit_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_moonbit_external_scanner_serialize(void *, char *);
void tree_sitter_moonbit_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_moonbit(void) {
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
    .keyword_capture_token = sym_lowercase_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_moonbit_external_scanner_create,
      tree_sitter_moonbit_external_scanner_destroy,
      tree_sitter_moonbit_external_scanner_scan,
      tree_sitter_moonbit_external_scanner_serialize,
      tree_sitter_moonbit_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
