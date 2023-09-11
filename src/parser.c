#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 495
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 183
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
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
  sym_float_literal = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_char_literal_token1 = 29,
  sym_unescaped_string_fragment = 30,
  sym_escape_seqence = 31,
  anon_sym_DASH = 32,
  anon_sym_PLUS = 33,
  anon_sym_STAR_STAR = 34,
  anon_sym_STAR = 35,
  anon_sym_SLASH = 36,
  anon_sym_STAR_EQ = 37,
  anon_sym_SLASH_EQ = 38,
  anon_sym_PERCENT = 39,
  anon_sym_PLUS_EQ = 40,
  anon_sym_DASH_EQ = 41,
  anon_sym_GT = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_LT_EQ = 44,
  anon_sym_LT = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_AMP_AMP = 48,
  anon_sym_PIPE_PIPE = 49,
  anon_sym_DOT_DOT = 50,
  anon_sym_fn = 51,
  anon_sym_LBRACK = 52,
  anon_sym_RBRACK = 53,
  aux_sym_accessor_token1 = 54,
  anon_sym_match = 55,
  anon_sym_EQ_GT = 56,
  anon_sym_if = 57,
  anon_sym_else = 58,
  anon_sym_break = 59,
  anon_sym_continue = 60,
  anon_sym_COLON_EQ = 61,
  anon_sym_var = 62,
  anon_sym_while = 63,
  anon_sym_return = 64,
  anon_sym_as = 65,
  anon_sym_PIPE = 66,
  anon_sym_DASH_GT = 67,
  sym_mutability = 68,
  sym_uppercase_identifier = 69,
  sym_colon_colon_uppercase_identifier = 70,
  sym_colon_colon_lowercase_identifier = 71,
  sym_identifier = 72,
  sym_dot_identifier = 73,
  sym_package_identifier = 74,
  sym_comment = 75,
  sym_structure = 76,
  sym_structure_item = 77,
  sym_visibility = 78,
  sym_pub_attribute = 79,
  sym_type_defintion = 80,
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
  sym_retuern_type = 156,
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
  [sym_float_literal] = "float_literal",
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
  [sym_structure] = "structure",
  [sym_structure_item] = "structure_item",
  [sym_visibility] = "visibility",
  [sym_pub_attribute] = "pub_attribute",
  [sym_type_defintion] = "type_defintion",
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
  [sym_retuern_type] = "retuern_type",
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
  [sym_float_literal] = sym_float_literal,
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
  [sym_structure] = sym_structure,
  [sym_structure_item] = sym_structure_item,
  [sym_visibility] = sym_visibility,
  [sym_pub_attribute] = sym_pub_attribute,
  [sym_type_defintion] = sym_type_defintion,
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
  [sym_retuern_type] = sym_retuern_type,
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
  [sym_float_literal] = {
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
  [sym_type_defintion] = {
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
  [sym_retuern_type] = {
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
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
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
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
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
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
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
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
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
  [380] = 380,
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
  [392] = 392,
  [393] = 393,
  [394] = 394,
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
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
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
  [473] = 473,
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
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
};

static inline bool aux_sym_char_literal_token1_character_set_1(int32_t c) {
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

static inline bool sym_lowercase_identifier_character_set_1(int32_t c) {
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

static inline bool sym_lowercase_identifier_character_set_2(int32_t c) {
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

static inline bool sym_lowercase_identifier_character_set_3(int32_t c) {
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

static inline bool sym_lowercase_identifier_character_set_4(int32_t c) {
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

static inline bool sym_lowercase_identifier_character_set_5(int32_t c) {
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
      if (eof) ADVANCE(29);
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(36);
      if (aux_sym_char_literal_token1_character_set_1(lookahead)) ADVANCE(61);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(100);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(36);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(36);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == '{') ADVANCE(35);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(87);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(103);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '|') ADVANCE(95);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '|') ADVANCE(95);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == ']') ADVANCE(91);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == '|') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(103);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 25:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(101);
      END_STATE();
    case 26:
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 27:
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(101);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(100);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(102);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(20);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_seqence);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_accessor_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(88);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_colon_colon_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_colon_colon_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_dot_identifier);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_package_identifier);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
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
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 28},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 28},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 28},
  [216] = {.lex_state = 28},
  [217] = {.lex_state = 28},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 28},
  [220] = {.lex_state = 28},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 28},
  [223] = {.lex_state = 28},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 28},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 28},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 28},
  [232] = {.lex_state = 28},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 28},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 28},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 28},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 28},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 28},
  [257] = {.lex_state = 28},
  [258] = {.lex_state = 13},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 3},
  [261] = {.lex_state = 28},
  [262] = {.lex_state = 28},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 28},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 28},
  [267] = {.lex_state = 28},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 28},
  [274] = {.lex_state = 28},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 28},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 28},
  [279] = {.lex_state = 28},
  [280] = {.lex_state = 28},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 28},
  [283] = {.lex_state = 28},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 28},
  [289] = {.lex_state = 28},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 28},
  [293] = {.lex_state = 28},
  [294] = {.lex_state = 28},
  [295] = {.lex_state = 28},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 28},
  [298] = {.lex_state = 28},
  [299] = {.lex_state = 28},
  [300] = {.lex_state = 13},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 28},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 28},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 28},
  [311] = {.lex_state = 28},
  [312] = {.lex_state = 28},
  [313] = {.lex_state = 28},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 28},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 28},
  [319] = {.lex_state = 28},
  [320] = {.lex_state = 28},
  [321] = {.lex_state = 28},
  [322] = {.lex_state = 28},
  [323] = {.lex_state = 28},
  [324] = {.lex_state = 28},
  [325] = {.lex_state = 28},
  [326] = {.lex_state = 28},
  [327] = {.lex_state = 28},
  [328] = {.lex_state = 28},
  [329] = {.lex_state = 28},
  [330] = {.lex_state = 28},
  [331] = {.lex_state = 28},
  [332] = {.lex_state = 28},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 28},
  [335] = {.lex_state = 28},
  [336] = {.lex_state = 28},
  [337] = {.lex_state = 28},
  [338] = {.lex_state = 28},
  [339] = {.lex_state = 28},
  [340] = {.lex_state = 28},
  [341] = {.lex_state = 28},
  [342] = {.lex_state = 28},
  [343] = {.lex_state = 28},
  [344] = {.lex_state = 28},
  [345] = {.lex_state = 28},
  [346] = {.lex_state = 28},
  [347] = {.lex_state = 28},
  [348] = {.lex_state = 13},
  [349] = {.lex_state = 28},
  [350] = {.lex_state = 1},
  [351] = {.lex_state = 28},
  [352] = {.lex_state = 28},
  [353] = {.lex_state = 28},
  [354] = {.lex_state = 28},
  [355] = {.lex_state = 28},
  [356] = {.lex_state = 28},
  [357] = {.lex_state = 28},
  [358] = {.lex_state = 13},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 28},
  [361] = {.lex_state = 28},
  [362] = {.lex_state = 12},
  [363] = {.lex_state = 28},
  [364] = {.lex_state = 28},
  [365] = {.lex_state = 28},
  [366] = {.lex_state = 28},
  [367] = {.lex_state = 28},
  [368] = {.lex_state = 28},
  [369] = {.lex_state = 4},
  [370] = {.lex_state = 28},
  [371] = {.lex_state = 28},
  [372] = {.lex_state = 28},
  [373] = {.lex_state = 28},
  [374] = {.lex_state = 28},
  [375] = {.lex_state = 28},
  [376] = {.lex_state = 28},
  [377] = {.lex_state = 28},
  [378] = {.lex_state = 28},
  [379] = {.lex_state = 28},
  [380] = {.lex_state = 28},
  [381] = {.lex_state = 28},
  [382] = {.lex_state = 28},
  [383] = {.lex_state = 28},
  [384] = {.lex_state = 28},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 28},
  [387] = {.lex_state = 28},
  [388] = {.lex_state = 28},
  [389] = {.lex_state = 28},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 28},
  [392] = {.lex_state = 28},
  [393] = {.lex_state = 28},
  [394] = {.lex_state = 28},
  [395] = {.lex_state = 28},
  [396] = {.lex_state = 28},
  [397] = {.lex_state = 28},
  [398] = {.lex_state = 28},
  [399] = {.lex_state = 28},
  [400] = {.lex_state = 28},
  [401] = {.lex_state = 28},
  [402] = {.lex_state = 28},
  [403] = {.lex_state = 28},
  [404] = {.lex_state = 1},
  [405] = {.lex_state = 28},
  [406] = {.lex_state = 28},
  [407] = {.lex_state = 28},
  [408] = {.lex_state = 28},
  [409] = {.lex_state = 28},
  [410] = {.lex_state = 28},
  [411] = {.lex_state = 4},
  [412] = {.lex_state = 28},
  [413] = {.lex_state = 28},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 28},
  [417] = {.lex_state = 28},
  [418] = {.lex_state = 28},
  [419] = {.lex_state = 28},
  [420] = {.lex_state = 28},
  [421] = {.lex_state = 28},
  [422] = {.lex_state = 28},
  [423] = {.lex_state = 28},
  [424] = {.lex_state = 28},
  [425] = {.lex_state = 28},
  [426] = {.lex_state = 28},
  [427] = {.lex_state = 28},
  [428] = {.lex_state = 28},
  [429] = {.lex_state = 13},
  [430] = {.lex_state = 28},
  [431] = {.lex_state = 1},
  [432] = {.lex_state = 28},
  [433] = {.lex_state = 28},
  [434] = {.lex_state = 28},
  [435] = {.lex_state = 14},
  [436] = {.lex_state = 28},
  [437] = {.lex_state = 28},
  [438] = {.lex_state = 28},
  [439] = {.lex_state = 28},
  [440] = {.lex_state = 28},
  [441] = {.lex_state = 28},
  [442] = {.lex_state = 13},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 1},
  [445] = {.lex_state = 28},
  [446] = {.lex_state = 28},
  [447] = {.lex_state = 28},
  [448] = {.lex_state = 28},
  [449] = {.lex_state = 13},
  [450] = {.lex_state = 28},
  [451] = {.lex_state = 28},
  [452] = {.lex_state = 13},
  [453] = {.lex_state = 28},
  [454] = {.lex_state = 28},
  [455] = {.lex_state = 13},
  [456] = {.lex_state = 28},
  [457] = {.lex_state = 28},
  [458] = {.lex_state = 28},
  [459] = {.lex_state = 13},
  [460] = {.lex_state = 28},
  [461] = {.lex_state = 28},
  [462] = {.lex_state = 28},
  [463] = {.lex_state = 28},
  [464] = {.lex_state = 28},
  [465] = {.lex_state = 28},
  [466] = {.lex_state = 28},
  [467] = {.lex_state = 28},
  [468] = {.lex_state = 28},
  [469] = {.lex_state = 28},
  [470] = {.lex_state = 28},
  [471] = {.lex_state = 28},
  [472] = {.lex_state = 28},
  [473] = {.lex_state = 28},
  [474] = {.lex_state = 28},
  [475] = {.lex_state = 28},
  [476] = {.lex_state = 28},
  [477] = {.lex_state = 28},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 28},
  [480] = {.lex_state = 28},
  [481] = {.lex_state = 28},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 28},
  [485] = {.lex_state = 13},
  [486] = {.lex_state = 1},
  [487] = {.lex_state = 28},
  [488] = {.lex_state = 28},
  [489] = {.lex_state = 13},
  [490] = {.lex_state = 13},
  [491] = {.lex_state = 28},
  [492] = {.lex_state = 28},
  [493] = {.lex_state = 13},
  [494] = {.lex_state = 28},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_lowercase_identifier] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_char_literal_token1] = ACTIONS(1),
    [sym_unescaped_string_fragment] = ACTIONS(1),
    [sym_escape_seqence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_mutability] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_structure] = STATE(483),
    [sym_structure_item] = STATE(327),
    [sym_visibility] = STATE(328),
    [sym_type_defintion] = STATE(330),
    [sym_struct_definition] = STATE(330),
    [sym_enum_definition] = STATE(330),
    [sym_value_definition] = STATE(330),
    [sym_function_definition] = STATE(330),
    [sym_interface_definition] = STATE(330),
    [sym_pub] = STATE(331),
    [aux_sym_structure_repeat1] = STATE(154),
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
    [sym_expression] = STATE(135),
    [sym_simple_expression] = STATE(57),
    [sym_atomic_expression] = STATE(102),
    [sym_string_interpolation] = STATE(109),
    [sym_literal] = STATE(109),
    [sym_boolean_literal] = STATE(47),
    [sym_char_literal] = STATE(47),
    [sym_string_literal] = STATE(47),
    [sym_unary_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_struct_expression] = STATE(102),
    [sym_struct_field_expression] = STATE(477),
    [sym_labeled_expression] = STATE(421),
    [sym_labeled_expression_pun] = STATE(481),
    [sym_nonempty_block_expression] = STATE(102),
    [sym_anonymous_lambda_expression] = STATE(102),
    [sym_constructor_expression] = STATE(102),
    [sym_apply_expression] = STATE(102),
    [sym_array_access_expression] = STATE(126),
    [sym_dot_apply_expression] = STATE(102),
    [sym_access_expression] = STATE(102),
    [sym_method_expression] = STATE(102),
    [sym_unit_expression] = STATE(102),
    [sym_tuple_expression] = STATE(102),
    [sym_constraint_expression] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_match_expression] = STATE(60),
    [sym_if_expression] = STATE(60),
    [sym_statement_expression] = STATE(367),
    [sym_let_expression] = STATE(371),
    [sym_shorthand_let_expression] = STATE(371),
    [sym_shorthand_let_pattern] = STATE(453),
    [sym_var_expression] = STATE(371),
    [sym_assign_expression] = STATE(371),
    [sym_left_value] = STATE(443),
    [sym_named_lambda_expression] = STATE(371),
    [sym_while_expression] = STATE(371),
    [sym_return_expression] = STATE(371),
    [sym_qualified_identifier] = STATE(126),
    [sym_qualified_type_identifier] = STATE(450),
    [aux_sym_block_expression_repeat1] = STATE(3),
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
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(135),
    [sym_simple_expression] = STATE(57),
    [sym_atomic_expression] = STATE(102),
    [sym_string_interpolation] = STATE(109),
    [sym_literal] = STATE(109),
    [sym_boolean_literal] = STATE(47),
    [sym_char_literal] = STATE(47),
    [sym_string_literal] = STATE(47),
    [sym_unary_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_struct_expression] = STATE(102),
    [sym_nonempty_block_expression] = STATE(102),
    [sym_anonymous_lambda_expression] = STATE(102),
    [sym_constructor_expression] = STATE(102),
    [sym_apply_expression] = STATE(102),
    [sym_array_access_expression] = STATE(126),
    [sym_dot_apply_expression] = STATE(102),
    [sym_access_expression] = STATE(102),
    [sym_method_expression] = STATE(102),
    [sym_unit_expression] = STATE(102),
    [sym_tuple_expression] = STATE(102),
    [sym_constraint_expression] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_match_expression] = STATE(60),
    [sym_if_expression] = STATE(60),
    [sym_statement_expression] = STATE(367),
    [sym_let_expression] = STATE(371),
    [sym_shorthand_let_expression] = STATE(371),
    [sym_shorthand_let_pattern] = STATE(453),
    [sym_var_expression] = STATE(371),
    [sym_assign_expression] = STATE(371),
    [sym_left_value] = STATE(443),
    [sym_named_lambda_expression] = STATE(371),
    [sym_while_expression] = STATE(371),
    [sym_return_expression] = STATE(371),
    [sym_qualified_identifier] = STATE(126),
    [sym_qualified_type_identifier] = STATE(450),
    [aux_sym_block_expression_repeat1] = STATE(5),
    [sym_lowercase_identifier] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(135),
    [sym_simple_expression] = STATE(57),
    [sym_atomic_expression] = STATE(102),
    [sym_string_interpolation] = STATE(109),
    [sym_literal] = STATE(109),
    [sym_boolean_literal] = STATE(47),
    [sym_char_literal] = STATE(47),
    [sym_string_literal] = STATE(47),
    [sym_unary_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_struct_expression] = STATE(102),
    [sym_nonempty_block_expression] = STATE(102),
    [sym_anonymous_lambda_expression] = STATE(102),
    [sym_constructor_expression] = STATE(102),
    [sym_apply_expression] = STATE(102),
    [sym_array_access_expression] = STATE(126),
    [sym_dot_apply_expression] = STATE(102),
    [sym_access_expression] = STATE(102),
    [sym_method_expression] = STATE(102),
    [sym_unit_expression] = STATE(102),
    [sym_tuple_expression] = STATE(102),
    [sym_constraint_expression] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_match_expression] = STATE(60),
    [sym_if_expression] = STATE(60),
    [sym_statement_expression] = STATE(367),
    [sym_let_expression] = STATE(371),
    [sym_shorthand_let_expression] = STATE(371),
    [sym_shorthand_let_pattern] = STATE(453),
    [sym_var_expression] = STATE(371),
    [sym_assign_expression] = STATE(371),
    [sym_left_value] = STATE(443),
    [sym_named_lambda_expression] = STATE(371),
    [sym_while_expression] = STATE(371),
    [sym_return_expression] = STATE(371),
    [sym_qualified_identifier] = STATE(126),
    [sym_qualified_type_identifier] = STATE(450),
    [aux_sym_block_expression_repeat1] = STATE(6),
    [sym_lowercase_identifier] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(135),
    [sym_simple_expression] = STATE(57),
    [sym_atomic_expression] = STATE(102),
    [sym_string_interpolation] = STATE(109),
    [sym_literal] = STATE(109),
    [sym_boolean_literal] = STATE(47),
    [sym_char_literal] = STATE(47),
    [sym_string_literal] = STATE(47),
    [sym_unary_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_struct_expression] = STATE(102),
    [sym_nonempty_block_expression] = STATE(102),
    [sym_anonymous_lambda_expression] = STATE(102),
    [sym_constructor_expression] = STATE(102),
    [sym_apply_expression] = STATE(102),
    [sym_array_access_expression] = STATE(126),
    [sym_dot_apply_expression] = STATE(102),
    [sym_access_expression] = STATE(102),
    [sym_method_expression] = STATE(102),
    [sym_unit_expression] = STATE(102),
    [sym_tuple_expression] = STATE(102),
    [sym_constraint_expression] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_match_expression] = STATE(60),
    [sym_if_expression] = STATE(60),
    [sym_statement_expression] = STATE(367),
    [sym_let_expression] = STATE(371),
    [sym_shorthand_let_expression] = STATE(371),
    [sym_shorthand_let_pattern] = STATE(453),
    [sym_var_expression] = STATE(371),
    [sym_assign_expression] = STATE(371),
    [sym_left_value] = STATE(443),
    [sym_named_lambda_expression] = STATE(371),
    [sym_while_expression] = STATE(371),
    [sym_return_expression] = STATE(371),
    [sym_qualified_identifier] = STATE(126),
    [sym_qualified_type_identifier] = STATE(450),
    [aux_sym_block_expression_repeat1] = STATE(5),
    [sym_lowercase_identifier] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_let] = ACTIONS(88),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [sym_integer_literal] = ACTIONS(100),
    [sym_float_literal] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_fn] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_match] = ACTIONS(118),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_break] = ACTIONS(124),
    [anon_sym_continue] = ACTIONS(124),
    [anon_sym_var] = ACTIONS(127),
    [anon_sym_while] = ACTIONS(130),
    [anon_sym_return] = ACTIONS(133),
    [sym_uppercase_identifier] = ACTIONS(136),
    [sym_identifier] = ACTIONS(139),
    [sym_package_identifier] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(135),
    [sym_simple_expression] = STATE(57),
    [sym_atomic_expression] = STATE(102),
    [sym_string_interpolation] = STATE(109),
    [sym_literal] = STATE(109),
    [sym_boolean_literal] = STATE(47),
    [sym_char_literal] = STATE(47),
    [sym_string_literal] = STATE(47),
    [sym_unary_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_struct_expression] = STATE(102),
    [sym_nonempty_block_expression] = STATE(102),
    [sym_anonymous_lambda_expression] = STATE(102),
    [sym_constructor_expression] = STATE(102),
    [sym_apply_expression] = STATE(102),
    [sym_array_access_expression] = STATE(126),
    [sym_dot_apply_expression] = STATE(102),
    [sym_access_expression] = STATE(102),
    [sym_method_expression] = STATE(102),
    [sym_unit_expression] = STATE(102),
    [sym_tuple_expression] = STATE(102),
    [sym_constraint_expression] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_match_expression] = STATE(60),
    [sym_if_expression] = STATE(60),
    [sym_statement_expression] = STATE(367),
    [sym_let_expression] = STATE(371),
    [sym_shorthand_let_expression] = STATE(371),
    [sym_shorthand_let_pattern] = STATE(453),
    [sym_var_expression] = STATE(371),
    [sym_assign_expression] = STATE(371),
    [sym_left_value] = STATE(443),
    [sym_named_lambda_expression] = STATE(371),
    [sym_while_expression] = STATE(371),
    [sym_return_expression] = STATE(371),
    [sym_qualified_identifier] = STATE(126),
    [sym_qualified_type_identifier] = STATE(450),
    [aux_sym_block_expression_repeat1] = STATE(5),
    [sym_lowercase_identifier] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(140), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    ACTIONS(149), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [103] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_simple_expression,
    STATE(137), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [204] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      sym_simple_expression,
    STATE(148), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [305] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_simple_expression,
    STATE(137), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [406] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      sym_simple_expression,
    STATE(137), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [507] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_simple_expression,
    STATE(137), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [608] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_simple_expression,
    STATE(133), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [709] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_simple_expression,
    STATE(137), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [810] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_simple_expression,
    STATE(132), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [911] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      sym_simple_expression,
    STATE(137), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [1012] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_simple_expression,
    STATE(145), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [1113] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_simple_expression,
    STATE(137), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [1214] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_simple_expression,
    STATE(137), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [1315] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(152), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [1413] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(91), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [1511] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(88), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [1609] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(87), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [1707] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(86), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [1805] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(150), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [1903] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(136), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2001] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(138), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2099] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(137), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2197] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(128), 1,
      sym_simple_expression,
    STATE(153), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2295] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(89), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2393] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(149), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2491] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(90), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2589] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(143), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2687] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(129), 1,
      sym_simple_expression,
    STATE(153), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2785] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(131), 1,
      sym_simple_expression,
    STATE(153), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2883] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(146), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [2981] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(151), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [3079] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(142), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [3177] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(69), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [3275] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(144), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [3373] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(141), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [3471] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(139), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [3569] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(147), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [3667] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(147), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(153), 1,
      anon_sym_fn,
    STATE(57), 1,
      sym_simple_expression,
    STATE(134), 1,
      sym_expression,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(60), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(109), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(102), 17,
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
  [3765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(179), 29,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [3811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(183), 29,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [3857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(187), 28,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(191), 28,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [3947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(195), 28,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [3992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(199), 28,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(203), 28,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_else,
    STATE(105), 1,
      sym_else_clause,
    ACTIONS(209), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(207), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(215), 8,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(219), 26,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 8,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(223), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4254] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_DOT_DOT,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    STATE(115), 1,
      sym_dotdot_pattern,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(240), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_array_sub_pattern,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [4335] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    STATE(97), 1,
      sym_accessor,
    ACTIONS(251), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(247), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(243), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 26,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(243), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(261), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4545] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_DOT_DOT,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(251), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_dotdot_pattern,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [4623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(267), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(271), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(279), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(283), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(287), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(293), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(291), 24,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(297), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [4945] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      sym_integer_literal,
    ACTIONS(321), 1,
      sym_float_literal,
    ACTIONS(324), 1,
      anon_sym_SQUOTE,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      sym_uppercase_identifier,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(336), 1,
      sym_package_identifier,
    STATE(71), 1,
      aux_sym_match_expression_repeat1,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(361), 1,
      sym_case_clause,
    STATE(362), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(301), 2,
      anon_sym__,
      sym_lowercase_identifier,
    ACTIONS(315), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [5023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(339), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(355), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(363), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(367), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5423] = 3,
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
    ACTIONS(379), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(383), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(387), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5543] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_match_expression_repeat1,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(361), 1,
      sym_case_clause,
    STATE(362), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [5621] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(395), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(395), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 24,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(395), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 24,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5751] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(395), 3,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(393), 19,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5801] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(393), 15,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5855] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(393), 14,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(415), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [5991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(419), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(423), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6071] = 3,
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
    ACTIONS(427), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(431), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(439), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(443), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(451), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6351] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_match_expression_repeat1,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(361), 1,
      sym_case_clause,
    STATE(362), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6429] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_DOT_DOT,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(251), 1,
      sym_pattern,
    STATE(446), 1,
      sym_dotdot_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(459), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(463), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(467), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(471), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(475), 25,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
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
  [6707] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COLON,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      anon_sym_COLON_EQ,
    ACTIONS(465), 7,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(463), 20,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6751] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(251), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6823] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(251), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6895] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(251), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6967] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(251), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7039] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(270), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7111] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(251), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7183] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(251), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7255] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(285), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7324] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(203), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7393] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(254), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7462] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(286), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7531] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(287), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7600] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(251), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7669] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_package_identifier,
    STATE(161), 1,
      sym_constructor_expression,
    STATE(271), 1,
      sym_pattern,
    STATE(450), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(47), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(204), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(200), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COLON_EQ,
    ACTIONS(465), 7,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(463), 20,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_EQ,
    ACTIONS(453), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(451), 20,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COLON_EQ,
    ACTIONS(453), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(451), 20,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7850] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block_expression,
    STATE(97), 1,
      sym_accessor,
    ACTIONS(251), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(247), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(243), 13,
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
  [7896] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_accessor,
    STATE(324), 1,
      sym_block_expression,
    ACTIONS(251), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(247), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(243), 13,
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
  [7942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
    ACTIONS(501), 15,
      anon_sym_let,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
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
  [7976] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_accessor,
    ACTIONS(251), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(247), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(243), 13,
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
  [8019] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    STATE(344), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8077] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8132] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(521), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8183] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(523), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8234] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(525), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8285] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(527), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8336] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(529), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8387] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(531), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8438] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(533), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8489] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(535), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8540] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(537), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8591] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(539), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8642] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(541), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8693] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8748] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(547), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8799] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(549), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8850] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8905] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8957] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(559), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9007] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9056] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9105] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_AMP_AMP,
    ACTIONS(511), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(515), 1,
      sym_dot_identifier,
    ACTIONS(397), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(403), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(405), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9151] = 15,
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
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      aux_sym_structure_repeat1,
    STATE(327), 1,
      sym_structure_item,
    STATE(328), 1,
      sym_visibility,
    STATE(331), 1,
      sym_pub,
    STATE(330), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [9202] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
    ACTIONS(569), 1,
      anon_sym_priv,
    ACTIONS(572), 1,
      anon_sym_pub,
    ACTIONS(575), 1,
      anon_sym_type,
    ACTIONS(578), 1,
      anon_sym_struct,
    ACTIONS(581), 1,
      anon_sym_enum,
    ACTIONS(584), 1,
      anon_sym_let,
    ACTIONS(587), 1,
      anon_sym_func,
    ACTIONS(590), 1,
      anon_sym_interface,
    STATE(155), 1,
      aux_sym_structure_repeat1,
    STATE(327), 1,
      sym_structure_item,
    STATE(328), 1,
      sym_visibility,
    STATE(331), 1,
      sym_pub,
    STATE(330), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [9253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(593), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(595), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [9280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(601), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [9304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(310), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [9327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 12,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [9345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 12,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [9363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(611), 1,
      anon_sym_EQ,
    ACTIONS(609), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [9384] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(342), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9415] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(342), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9446] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(621), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(342), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9477] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(399), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9508] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(342), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9539] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(329), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9570] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(342), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9601] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(342), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9632] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(342), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9663] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(332), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9694] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(342), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9725] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(342), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_EQ,
    ACTIONS(641), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [9774] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(213), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9802] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(385), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9830] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(335), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9858] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(269), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_EQ,
    ACTIONS(645), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [9904] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(469), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LBRACK,
    STATE(221), 1,
      sym_type_arguments,
    ACTIONS(649), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [9952] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(224), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [9980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_EQ,
    ACTIONS(653), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [9998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_EQ,
    ACTIONS(657), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10016] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(229), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [10044] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(321), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [10072] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(377), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [10100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_EQ,
    ACTIONS(661), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_EQ,
    ACTIONS(665), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10136] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(336), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [10164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_EQ,
    ACTIONS(669), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_EQ,
    ACTIONS(673), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10200] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(342), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [10228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_EQ,
    ACTIONS(677), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_EQ,
    ACTIONS(681), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10264] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(218), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [10292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_EQ,
    ACTIONS(685), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10310] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(316), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [10338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_EQ,
    ACTIONS(689), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_EQ,
    ACTIONS(693), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_EQ,
    ACTIONS(697), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10392] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym__,
    STATE(181), 1,
      sym_qualified_type_identifier,
    STATE(465), 1,
      sym_type,
    STATE(212), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [10420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_EQ,
    ACTIONS(705), 1,
      anon_sym_PIPE,
    ACTIONS(701), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
  [10440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_EQ,
    ACTIONS(707), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [10458] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    ACTIONS(713), 1,
      anon_sym_EQ,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    STATE(243), 1,
      sym_type_parameters,
    STATE(277), 1,
      sym_parameters,
    STATE(402), 1,
      sym_block_expression,
    STATE(404), 1,
      sym_retuern_type,
  [10489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_DASH_GT,
    ACTIONS(719), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_DASH_GT,
    ACTIONS(723), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 9,
      ts_builtin_sym_end,
      anon_sym_priv,
      anon_sym_pub,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [10538] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    ACTIONS(727), 1,
      anon_sym_EQ,
    STATE(236), 1,
      sym_type_parameters,
    STATE(268), 1,
      sym_parameters,
    STATE(359), 1,
      sym_retuern_type,
    STATE(360), 1,
      sym_block_expression,
  [10569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_DASH_GT,
    ACTIONS(729), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_DASH_GT,
    ACTIONS(733), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10645] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_lowercase_identifier,
    ACTIONS(745), 1,
      anon_sym_priv,
    ACTIONS(747), 1,
      anon_sym_pub,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    ACTIONS(751), 1,
      sym_mutability,
    STATE(223), 1,
      aux_sym_struct_definition_repeat1,
    STATE(397), 1,
      sym_struct_filed_declaration,
    STATE(420), 1,
      sym_visibility,
  [10673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_pub_attribute,
    ACTIONS(755), 3,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
    ACTIONS(757), 3,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [10693] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_lowercase_identifier,
    ACTIONS(745), 1,
      anon_sym_priv,
    ACTIONS(747), 1,
      anon_sym_pub,
    ACTIONS(751), 1,
      sym_mutability,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      aux_sym_struct_definition_repeat1,
    STATE(397), 1,
      sym_struct_filed_declaration,
    STATE(420), 1,
      sym_visibility,
  [10721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10735] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_lowercase_identifier,
    ACTIONS(745), 1,
      anon_sym_priv,
    ACTIONS(747), 1,
      anon_sym_pub,
    ACTIONS(751), 1,
      sym_mutability,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      aux_sym_struct_definition_repeat1,
    STATE(397), 1,
      sym_struct_filed_declaration,
    STATE(420), 1,
      sym_visibility,
  [10763] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_lowercase_identifier,
    ACTIONS(745), 1,
      anon_sym_priv,
    ACTIONS(747), 1,
      anon_sym_pub,
    ACTIONS(751), 1,
      sym_mutability,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      aux_sym_struct_definition_repeat1,
    STATE(397), 1,
      sym_struct_filed_declaration,
    STATE(420), 1,
      sym_visibility,
  [10791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10805] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_lowercase_identifier,
    ACTIONS(745), 1,
      anon_sym_priv,
    ACTIONS(747), 1,
      anon_sym_pub,
    ACTIONS(751), 1,
      sym_mutability,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      aux_sym_struct_definition_repeat1,
    STATE(397), 1,
      sym_struct_filed_declaration,
    STATE(420), 1,
      sym_visibility,
  [10833] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_lowercase_identifier,
    ACTIONS(772), 1,
      anon_sym_priv,
    ACTIONS(775), 1,
      anon_sym_pub,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    ACTIONS(780), 1,
      sym_mutability,
    STATE(223), 1,
      aux_sym_struct_definition_repeat1,
    STATE(397), 1,
      sym_struct_filed_declaration,
    STATE(420), 1,
      sym_visibility,
  [10861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10875] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(785), 1,
      sym_lowercase_identifier,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      aux_sym_interface_definition_repeat1,
    STATE(356), 1,
      sym_function_identifier,
    STATE(357), 1,
      sym_interface_method_declaration,
    STATE(461), 1,
      sym_qualified_type_identifier,
  [10903] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym_lowercase_identifier,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
    ACTIONS(794), 1,
      sym_identifier,
    ACTIONS(797), 1,
      sym_package_identifier,
    STATE(226), 1,
      aux_sym_interface_definition_repeat1,
    STATE(356), 1,
      sym_function_identifier,
    STATE(357), 1,
      sym_interface_method_declaration,
    STATE(461), 1,
      sym_qualified_type_identifier,
  [10931] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_lowercase_identifier,
    ACTIONS(745), 1,
      anon_sym_priv,
    ACTIONS(747), 1,
      anon_sym_pub,
    ACTIONS(751), 1,
      sym_mutability,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_struct_definition_repeat1,
    STATE(397), 1,
      sym_struct_filed_declaration,
    STATE(420), 1,
      sym_visibility,
  [10959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [10987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [11001] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(785), 1,
      sym_lowercase_identifier,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      aux_sym_interface_definition_repeat1,
    STATE(356), 1,
      sym_function_identifier,
    STATE(357), 1,
      sym_interface_method_declaration,
    STATE(461), 1,
      sym_qualified_type_identifier,
  [11029] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(785), 1,
      sym_lowercase_identifier,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      aux_sym_interface_definition_repeat1,
    STATE(356), 1,
      sym_function_identifier,
    STATE(357), 1,
      sym_interface_method_declaration,
    STATE(461), 1,
      sym_qualified_type_identifier,
  [11057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [11071] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(785), 1,
      sym_lowercase_identifier,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      aux_sym_interface_definition_repeat1,
    STATE(356), 1,
      sym_function_identifier,
    STATE(357), 1,
      sym_interface_method_declaration,
    STATE(461), 1,
      sym_qualified_type_identifier,
  [11099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [11112] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    ACTIONS(814), 1,
      anon_sym_EQ,
    STATE(272), 1,
      sym_parameters,
    STATE(390), 1,
      sym_retuern_type,
    STATE(408), 1,
      sym_block_expression,
  [11137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_DQUOTE,
    ACTIONS(818), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(821), 1,
      sym_unescaped_string_fragment,
    ACTIONS(824), 1,
      sym_escape_seqence,
    STATE(237), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [11158] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(829), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(831), 1,
      sym_unescaped_string_fragment,
    ACTIONS(833), 1,
      sym_escape_seqence,
    STATE(242), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [11179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [11192] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT_DOT,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
    ACTIONS(705), 1,
      anon_sym_PIPE,
    ACTIONS(837), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_as,
    STATE(282), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(457), 1,
      sym_dotdot_pattern,
  [11217] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(831), 1,
      sym_unescaped_string_fragment,
    ACTIONS(833), 1,
      sym_escape_seqence,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    STATE(248), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [11238] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(831), 1,
      sym_unescaped_string_fragment,
    ACTIONS(833), 1,
      sym_escape_seqence,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    STATE(237), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [11259] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    ACTIONS(727), 1,
      anon_sym_EQ,
    STATE(268), 1,
      sym_parameters,
    STATE(359), 1,
      sym_retuern_type,
    STATE(360), 1,
      sym_block_expression,
  [11284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [11297] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT_DOT,
    ACTIONS(847), 1,
      sym_lowercase_identifier,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      sym_filed_single_pattern,
    STATE(458), 1,
      sym_dotdot_pattern,
    STATE(384), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [11320] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(831), 1,
      sym_unescaped_string_fragment,
    ACTIONS(833), 1,
      sym_escape_seqence,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    STATE(241), 1,
      sym_interpolator,
    STATE(249), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [11343] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT_DOT,
    ACTIONS(847), 1,
      sym_lowercase_identifier,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      sym_filed_single_pattern,
    STATE(474), 1,
      sym_dotdot_pattern,
    STATE(384), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [11366] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(829), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(831), 1,
      sym_unescaped_string_fragment,
    ACTIONS(833), 1,
      sym_escape_seqence,
    STATE(237), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [11387] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(831), 1,
      sym_unescaped_string_fragment,
    ACTIONS(833), 1,
      sym_escape_seqence,
    ACTIONS(855), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      sym_interpolator,
    STATE(250), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [11410] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym_unescaped_string_fragment,
    ACTIONS(862), 1,
      sym_escape_seqence,
    ACTIONS(857), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    STATE(250), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [11428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_PIPE,
    ACTIONS(839), 1,
      anon_sym_as,
    ACTIONS(865), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [11444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym_lowercase_identifier,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    STATE(288), 1,
      sym_filed_single_pattern,
    STATE(463), 1,
      sym_struct_filed_pattern,
    STATE(384), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [11464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym_unescaped_string_fragment,
    ACTIONS(833), 1,
      sym_escape_seqence,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    STATE(281), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [11481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_PIPE,
    ACTIONS(839), 1,
      anon_sym_as,
    ACTIONS(869), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [11496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    STATE(318), 1,
      sym_retuern_type,
    ACTIONS(871), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [11511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(785), 1,
      sym_lowercase_identifier,
    STATE(205), 1,
      sym_function_identifier,
    STATE(461), 1,
      sym_qualified_type_identifier,
  [11530] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_lowercase_identifier,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      sym_struct_filed_expression,
    STATE(432), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [11547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(877), 1,
      sym_identifier,
    STATE(312), 1,
      sym_constraint,
    STATE(382), 1,
      sym_qualified_type_identifier,
    STATE(416), 1,
      sym_constraints,
  [11566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    STATE(319), 1,
      sym_retuern_type,
    ACTIONS(879), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [11581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    STATE(395), 1,
      sym_retuern_type,
    ACTIONS(881), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [11596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [11607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    STATE(378), 1,
      sym_type_parameters,
    ACTIONS(885), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [11622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [11633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_lowercase_identifier,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    STATE(433), 1,
      sym_struct_filed_expression,
    STATE(432), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [11650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    STATE(325), 1,
      sym_retuern_type,
    ACTIONS(891), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [11665] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(785), 1,
      sym_lowercase_identifier,
    STATE(209), 1,
      sym_function_identifier,
    STATE(461), 1,
      sym_qualified_type_identifier,
  [11684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_constructor_pattern_repeat1,
    ACTIONS(865), 3,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [11699] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    ACTIONS(814), 1,
      anon_sym_EQ,
    STATE(390), 1,
      sym_retuern_type,
    STATE(408), 1,
      sym_block_expression,
  [11718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [11729] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    ACTIONS(705), 1,
      anon_sym_PIPE,
    ACTIONS(839), 1,
      anon_sym_as,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_constructor_pattern_repeat1,
  [11748] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_PIPE,
    ACTIONS(839), 1,
      anon_sym_as,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_constructor_pattern_repeat1,
  [11767] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    ACTIONS(904), 1,
      anon_sym_EQ,
    STATE(326), 1,
      sym_block_expression,
    STATE(333), 1,
      sym_retuern_type,
  [11786] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_lowercase_identifier,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
    STATE(421), 1,
      sym_labeled_expression,
    STATE(481), 1,
      sym_labeled_expression_pun,
    STATE(494), 1,
      sym_struct_field_expression,
  [11805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [11816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [11827] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT_DOT,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(458), 1,
      sym_dotdot_pattern,
  [11846] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    ACTIONS(727), 1,
      anon_sym_EQ,
    STATE(359), 1,
      sym_retuern_type,
    STATE(360), 1,
      sym_block_expression,
  [11865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    STATE(355), 1,
      sym_type_parameters,
    ACTIONS(914), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [11880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_lowercase_identifier,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
    STATE(433), 1,
      sym_struct_filed_expression,
    STATE(432), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [11897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [11908] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym_unescaped_string_fragment,
    ACTIONS(833), 1,
      sym_escape_seqence,
    ACTIONS(855), 1,
      anon_sym_DQUOTE,
    STATE(250), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [11925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT_DOT,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(446), 1,
      sym_dotdot_pattern,
  [11944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    ACTIONS(922), 4,
      anon_sym_priv,
      anon_sym_pub,
      sym_mutability,
      sym_lowercase_identifier,
  [11957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    STATE(365), 1,
      sym_retuern_type,
    ACTIONS(924), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [11972] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_PIPE,
    ACTIONS(839), 1,
      anon_sym_as,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(928), 1,
      anon_sym_EQ,
    STATE(486), 1,
      sym_type_annotation,
  [11991] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_PIPE,
    ACTIONS(839), 1,
      anon_sym_as,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    ACTIONS(932), 1,
      anon_sym_COLON,
    ACTIONS(934), 1,
      anon_sym_COMMA,
  [12010] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_PIPE,
    ACTIONS(839), 1,
      anon_sym_as,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_constructor_pattern_repeat1,
  [12029] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT_DOT,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(448), 1,
      sym_dotdot_pattern,
  [12048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_PLUS,
    STATE(289), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(944), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
    ACTIONS(951), 1,
      sym_uppercase_identifier,
    STATE(308), 1,
      aux_sym_enum_definition_repeat1,
    STATE(388), 1,
      sym_enum_constructor,
  [12078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
    ACTIONS(951), 1,
      sym_uppercase_identifier,
    STATE(304), 1,
      aux_sym_enum_definition_repeat1,
    STATE(388), 1,
      sym_enum_constructor,
  [12094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_COLON,
    ACTIONS(953), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [12106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_lowercase_identifier,
    STATE(433), 1,
      sym_struct_filed_expression,
    STATE(432), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [12120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_pub_attribute,
    ACTIONS(908), 2,
      sym_mutability,
      sym_lowercase_identifier,
  [12146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym_uppercase_identifier,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      aux_sym_enum_definition_repeat1,
    STATE(388), 1,
      sym_enum_constructor,
  [12162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(527), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_identifier,
    ACTIONS(792), 3,
      anon_sym_RBRACE,
      sym_lowercase_identifier,
      sym_package_identifier,
  [12188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_enum_constructor_repeat1,
    ACTIONS(968), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12202] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_package_identifier,
    ACTIONS(877), 1,
      sym_identifier,
    STATE(382), 1,
      sym_qualified_type_identifier,
    STATE(403), 1,
      sym_constraint,
  [12218] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    STATE(81), 1,
      sym_block_expression,
    STATE(438), 1,
      sym_retuern_type,
  [12234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_PLUS,
    STATE(289), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(973), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    STATE(389), 1,
      sym_block_expression,
    STATE(428), 1,
      sym_retuern_type,
  [12264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym_uppercase_identifier,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      aux_sym_enum_definition_repeat1,
    STATE(388), 1,
      sym_enum_constructor,
  [12280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym_uppercase_identifier,
    ACTIONS(979), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      aux_sym_enum_definition_repeat1,
    STATE(388), 1,
      sym_enum_constructor,
  [12296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(981), 1,
      anon_sym_if,
    STATE(70), 2,
      sym_block_expression,
      sym_if_expression,
  [12310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_unescaped_string_fragment,
    ACTIONS(983), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
      sym_escape_seqence,
  [12322] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
    ACTIONS(989), 1,
      sym_uppercase_identifier,
    STATE(308), 1,
      aux_sym_enum_definition_repeat1,
    STATE(388), 1,
      sym_enum_constructor,
  [12338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym_uppercase_identifier,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(296), 1,
      aux_sym_enum_definition_repeat1,
    STATE(388), 1,
      sym_enum_constructor,
  [12354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COLON,
    STATE(417), 1,
      sym_type_annotation,
    ACTIONS(992), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_struct_filed_pattern_repeat1,
    ACTIONS(994), 2,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [12382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_PLUS,
    STATE(302), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(999), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym_lowercase_identifier,
    STATE(380), 1,
      sym_filed_single_pattern,
    STATE(384), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [12410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym_unescaped_string_fragment,
    ACTIONS(1001), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
      sym_escape_seqence,
  [12422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [12431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [12449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_enum_constructor_repeat1,
  [12480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1017), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      aux_sym_enum_constructor_repeat1,
  [12493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_type,
    ACTIONS(1031), 1,
      anon_sym_struct,
    ACTIONS(1033), 1,
      anon_sym_enum,
  [12560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
    STATE(398), 1,
      aux_sym_enum_constructor_repeat1,
  [12573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_let,
    ACTIONS(1041), 1,
      anon_sym_func,
    ACTIONS(1043), 1,
      anon_sym_interface,
  [12595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    ACTIONS(1047), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym_enum_constructor_repeat1,
  [12608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(1049), 1,
      anon_sym_EQ,
    STATE(393), 1,
      sym_block_expression,
  [12621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_enum_constructor_repeat1,
  [12643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_enum_constructor_repeat1,
  [12683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_constructor_pattern_repeat1,
  [12696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_apply_expression_repeat1,
  [12736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      aux_sym_type_parameters_repeat1,
  [12749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_enum_constructor_repeat1,
  [12762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    ACTIONS(1079), 1,
      anon_sym_LBRACE,
    STATE(468), 1,
      sym_type_parameters,
  [12775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_RBRACK,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(441), 1,
      sym_type_identifier,
  [12788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    ACTIONS(1083), 1,
      anon_sym_LBRACE,
    STATE(475), 1,
      sym_type_parameters,
  [12801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(1085), 1,
      anon_sym_EQ,
    STATE(478), 1,
      sym_type_annotation,
  [12814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_COLON,
    ACTIONS(481), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      aux_sym_struct_field_expression_repeat1,
  [12847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_RBRACE,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_struct_field_expression_repeat1,
  [12860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    ACTIONS(1102), 1,
      anon_sym_LPAREN,
    STATE(473), 1,
      sym_type_parameters,
  [12882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1106), 1,
      anon_sym_RBRACK,
    STATE(441), 1,
      sym_type_identifier,
  [12904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(814), 1,
      anon_sym_EQ,
    STATE(408), 1,
      sym_block_expression,
  [12917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_PIPE,
    ACTIONS(839), 1,
      anon_sym_as,
    ACTIONS(1112), 1,
      anon_sym_EQ_GT,
  [12948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_enum_constructor_repeat1,
  [12970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [12997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_apply_expression_repeat1,
  [13010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [13019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      sym_lowercase_identifier,
    STATE(301), 1,
      sym_parameters,
  [13050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_parameters_repeat1,
  [13063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      aux_sym_type_parameters_repeat1,
  [13076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_constructor_pattern_repeat1,
  [13089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_constructor_pattern_repeat1,
  [13102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_apply_expression_repeat1,
  [13133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [13142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym_lowercase_identifier,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      sym_parameter,
  [13155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [13164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_parameters_repeat1,
  [13177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [13186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [13195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_apply_expression_repeat1,
  [13217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(904), 1,
      anon_sym_EQ,
    STATE(326), 1,
      sym_block_expression,
  [13248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_parameters_repeat1,
  [13261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym_lowercase_identifier,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      sym_parameter,
  [13292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym_lowercase_identifier,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      sym_parameter,
  [13314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_enum_constructor_repeat1,
  [13336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_enum_constructor_repeat1,
  [13349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [13385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(727), 1,
      anon_sym_EQ,
    STATE(360), 1,
      sym_block_expression,
  [13398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    ACTIONS(1190), 1,
      anon_sym_LBRACE,
    STATE(466), 1,
      sym_type_parameters,
  [13411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_struct_field_expression_repeat1,
  [13433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    ACTIONS(1198), 1,
      anon_sym_LBRACE,
    STATE(467), 1,
      sym_type_parameters,
  [13455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
  [13464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [13473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      aux_sym_type_parameters_repeat1,
  [13486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_COLON,
    ACTIONS(1210), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(1212), 1,
      anon_sym_EQ,
    STATE(482), 1,
      sym_type_annotation,
  [13510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(1214), 1,
      anon_sym_EQ,
    STATE(444), 1,
      sym_type_annotation,
  [13523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(393), 1,
      sym_string_literal,
  [13549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(427), 1,
      sym_string_literal,
  [13559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      sym_lowercase_identifier,
    ACTIONS(1222), 1,
      sym_mutability,
  [13569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      anon_sym_RBRACE,
    ACTIONS(1226), 1,
      anon_sym_COMMA,
  [13579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      sym_string_literal,
  [13589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(418), 1,
      sym_string_literal,
  [13599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      sym_string_literal,
  [13617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(437), 1,
      sym_string_literal,
  [13627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(366), 1,
      sym_string_literal,
  [13637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    STATE(370), 1,
      sym_block_expression,
  [13647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(441), 1,
      sym_type_identifier,
  [13657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_parameters,
  [13667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 2,
      anon_sym_RBRACE,
      sym_uppercase_identifier,
  [13675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      sym_string_literal,
  [13701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1232), 1,
      sym_escape_seqence,
  [13711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      sym_string_literal,
  [13721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(408), 1,
      sym_string_literal,
  [13731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_block_expression,
  [13741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      sym_parameters,
  [13751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym_lowercase_identifier,
    STATE(424), 1,
      sym_parameter,
  [13761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(412), 1,
      sym_type_identifier,
  [13779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_EQ,
  [13786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_EQ,
  [13793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      sym_dot_identifier,
  [13800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
  [13807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
  [13814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
  [13821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      sym_identifier,
  [13828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      sym_colon_colon_uppercase_identifier,
  [13835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      sym_lowercase_identifier,
  [13842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      sym_identifier,
  [13849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_COLON_EQ,
  [13856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
  [13863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      sym_identifier,
  [13870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      sym_lowercase_identifier,
  [13877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
  [13884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
  [13891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      sym_identifier,
  [13898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      anon_sym_LBRACE,
  [13905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      sym_colon_colon_lowercase_identifier,
  [13912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      sym_dot_identifier,
  [13919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_RBRACE,
  [13926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      sym_lowercase_identifier,
  [13933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
  [13940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_LBRACE,
  [13947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_LBRACE,
  [13954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_LBRACE,
  [13961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
  [13968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_COLON,
  [13975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      sym_lowercase_identifier,
  [13982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_readonly,
  [13989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_LPAREN,
  [13996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_RBRACE,
  [14003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_LBRACE,
  [14010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
  [14017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_RBRACE,
  [14024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_EQ,
  [14031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_RBRACK,
  [14038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_COLON,
  [14045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_COMMA,
  [14052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_EQ,
  [14059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      ts_builtin_sym_end,
  [14066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_SQUOTE,
  [14073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      sym_identifier,
  [14080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_EQ,
  [14087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      sym_lowercase_identifier,
  [14094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym_lowercase_identifier,
  [14101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      sym_identifier,
  [14108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      sym_identifier,
  [14115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_LPAREN,
  [14122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_COLON,
  [14129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      sym_identifier,
  [14136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 204,
  [SMALL_STATE(10)] = 305,
  [SMALL_STATE(11)] = 406,
  [SMALL_STATE(12)] = 507,
  [SMALL_STATE(13)] = 608,
  [SMALL_STATE(14)] = 709,
  [SMALL_STATE(15)] = 810,
  [SMALL_STATE(16)] = 911,
  [SMALL_STATE(17)] = 1012,
  [SMALL_STATE(18)] = 1113,
  [SMALL_STATE(19)] = 1214,
  [SMALL_STATE(20)] = 1315,
  [SMALL_STATE(21)] = 1413,
  [SMALL_STATE(22)] = 1511,
  [SMALL_STATE(23)] = 1609,
  [SMALL_STATE(24)] = 1707,
  [SMALL_STATE(25)] = 1805,
  [SMALL_STATE(26)] = 1903,
  [SMALL_STATE(27)] = 2001,
  [SMALL_STATE(28)] = 2099,
  [SMALL_STATE(29)] = 2197,
  [SMALL_STATE(30)] = 2295,
  [SMALL_STATE(31)] = 2393,
  [SMALL_STATE(32)] = 2491,
  [SMALL_STATE(33)] = 2589,
  [SMALL_STATE(34)] = 2687,
  [SMALL_STATE(35)] = 2785,
  [SMALL_STATE(36)] = 2883,
  [SMALL_STATE(37)] = 2981,
  [SMALL_STATE(38)] = 3079,
  [SMALL_STATE(39)] = 3177,
  [SMALL_STATE(40)] = 3275,
  [SMALL_STATE(41)] = 3373,
  [SMALL_STATE(42)] = 3471,
  [SMALL_STATE(43)] = 3569,
  [SMALL_STATE(44)] = 3667,
  [SMALL_STATE(45)] = 3765,
  [SMALL_STATE(46)] = 3811,
  [SMALL_STATE(47)] = 3857,
  [SMALL_STATE(48)] = 3902,
  [SMALL_STATE(49)] = 3947,
  [SMALL_STATE(50)] = 3992,
  [SMALL_STATE(51)] = 4037,
  [SMALL_STATE(52)] = 4082,
  [SMALL_STATE(53)] = 4128,
  [SMALL_STATE(54)] = 4172,
  [SMALL_STATE(55)] = 4213,
  [SMALL_STATE(56)] = 4254,
  [SMALL_STATE(57)] = 4335,
  [SMALL_STATE(58)] = 4384,
  [SMALL_STATE(59)] = 4425,
  [SMALL_STATE(60)] = 4465,
  [SMALL_STATE(61)] = 4505,
  [SMALL_STATE(62)] = 4545,
  [SMALL_STATE(63)] = 4623,
  [SMALL_STATE(64)] = 4663,
  [SMALL_STATE(65)] = 4703,
  [SMALL_STATE(66)] = 4743,
  [SMALL_STATE(67)] = 4783,
  [SMALL_STATE(68)] = 4823,
  [SMALL_STATE(69)] = 4863,
  [SMALL_STATE(70)] = 4905,
  [SMALL_STATE(71)] = 4945,
  [SMALL_STATE(72)] = 5023,
  [SMALL_STATE(73)] = 5063,
  [SMALL_STATE(74)] = 5103,
  [SMALL_STATE(75)] = 5143,
  [SMALL_STATE(76)] = 5183,
  [SMALL_STATE(77)] = 5223,
  [SMALL_STATE(78)] = 5263,
  [SMALL_STATE(79)] = 5303,
  [SMALL_STATE(80)] = 5343,
  [SMALL_STATE(81)] = 5383,
  [SMALL_STATE(82)] = 5423,
  [SMALL_STATE(83)] = 5463,
  [SMALL_STATE(84)] = 5503,
  [SMALL_STATE(85)] = 5543,
  [SMALL_STATE(86)] = 5621,
  [SMALL_STATE(87)] = 5667,
  [SMALL_STATE(88)] = 5709,
  [SMALL_STATE(89)] = 5751,
  [SMALL_STATE(90)] = 5801,
  [SMALL_STATE(91)] = 5855,
  [SMALL_STATE(92)] = 5911,
  [SMALL_STATE(93)] = 5951,
  [SMALL_STATE(94)] = 5991,
  [SMALL_STATE(95)] = 6031,
  [SMALL_STATE(96)] = 6071,
  [SMALL_STATE(97)] = 6111,
  [SMALL_STATE(98)] = 6151,
  [SMALL_STATE(99)] = 6191,
  [SMALL_STATE(100)] = 6231,
  [SMALL_STATE(101)] = 6271,
  [SMALL_STATE(102)] = 6311,
  [SMALL_STATE(103)] = 6351,
  [SMALL_STATE(104)] = 6429,
  [SMALL_STATE(105)] = 6507,
  [SMALL_STATE(106)] = 6547,
  [SMALL_STATE(107)] = 6587,
  [SMALL_STATE(108)] = 6627,
  [SMALL_STATE(109)] = 6667,
  [SMALL_STATE(110)] = 6707,
  [SMALL_STATE(111)] = 6751,
  [SMALL_STATE(112)] = 6823,
  [SMALL_STATE(113)] = 6895,
  [SMALL_STATE(114)] = 6967,
  [SMALL_STATE(115)] = 7039,
  [SMALL_STATE(116)] = 7111,
  [SMALL_STATE(117)] = 7183,
  [SMALL_STATE(118)] = 7255,
  [SMALL_STATE(119)] = 7324,
  [SMALL_STATE(120)] = 7393,
  [SMALL_STATE(121)] = 7462,
  [SMALL_STATE(122)] = 7531,
  [SMALL_STATE(123)] = 7600,
  [SMALL_STATE(124)] = 7669,
  [SMALL_STATE(125)] = 7738,
  [SMALL_STATE(126)] = 7776,
  [SMALL_STATE(127)] = 7813,
  [SMALL_STATE(128)] = 7850,
  [SMALL_STATE(129)] = 7896,
  [SMALL_STATE(130)] = 7942,
  [SMALL_STATE(131)] = 7976,
  [SMALL_STATE(132)] = 8019,
  [SMALL_STATE(133)] = 8077,
  [SMALL_STATE(134)] = 8132,
  [SMALL_STATE(135)] = 8183,
  [SMALL_STATE(136)] = 8234,
  [SMALL_STATE(137)] = 8285,
  [SMALL_STATE(138)] = 8336,
  [SMALL_STATE(139)] = 8387,
  [SMALL_STATE(140)] = 8438,
  [SMALL_STATE(141)] = 8489,
  [SMALL_STATE(142)] = 8540,
  [SMALL_STATE(143)] = 8591,
  [SMALL_STATE(144)] = 8642,
  [SMALL_STATE(145)] = 8693,
  [SMALL_STATE(146)] = 8748,
  [SMALL_STATE(147)] = 8799,
  [SMALL_STATE(148)] = 8850,
  [SMALL_STATE(149)] = 8905,
  [SMALL_STATE(150)] = 8957,
  [SMALL_STATE(151)] = 9007,
  [SMALL_STATE(152)] = 9056,
  [SMALL_STATE(153)] = 9105,
  [SMALL_STATE(154)] = 9151,
  [SMALL_STATE(155)] = 9202,
  [SMALL_STATE(156)] = 9253,
  [SMALL_STATE(157)] = 9280,
  [SMALL_STATE(158)] = 9304,
  [SMALL_STATE(159)] = 9327,
  [SMALL_STATE(160)] = 9345,
  [SMALL_STATE(161)] = 9363,
  [SMALL_STATE(162)] = 9384,
  [SMALL_STATE(163)] = 9415,
  [SMALL_STATE(164)] = 9446,
  [SMALL_STATE(165)] = 9477,
  [SMALL_STATE(166)] = 9508,
  [SMALL_STATE(167)] = 9539,
  [SMALL_STATE(168)] = 9570,
  [SMALL_STATE(169)] = 9601,
  [SMALL_STATE(170)] = 9632,
  [SMALL_STATE(171)] = 9663,
  [SMALL_STATE(172)] = 9694,
  [SMALL_STATE(173)] = 9725,
  [SMALL_STATE(174)] = 9756,
  [SMALL_STATE(175)] = 9774,
  [SMALL_STATE(176)] = 9802,
  [SMALL_STATE(177)] = 9830,
  [SMALL_STATE(178)] = 9858,
  [SMALL_STATE(179)] = 9886,
  [SMALL_STATE(180)] = 9904,
  [SMALL_STATE(181)] = 9932,
  [SMALL_STATE(182)] = 9952,
  [SMALL_STATE(183)] = 9980,
  [SMALL_STATE(184)] = 9998,
  [SMALL_STATE(185)] = 10016,
  [SMALL_STATE(186)] = 10044,
  [SMALL_STATE(187)] = 10072,
  [SMALL_STATE(188)] = 10100,
  [SMALL_STATE(189)] = 10118,
  [SMALL_STATE(190)] = 10136,
  [SMALL_STATE(191)] = 10164,
  [SMALL_STATE(192)] = 10182,
  [SMALL_STATE(193)] = 10200,
  [SMALL_STATE(194)] = 10228,
  [SMALL_STATE(195)] = 10246,
  [SMALL_STATE(196)] = 10264,
  [SMALL_STATE(197)] = 10292,
  [SMALL_STATE(198)] = 10310,
  [SMALL_STATE(199)] = 10338,
  [SMALL_STATE(200)] = 10356,
  [SMALL_STATE(201)] = 10374,
  [SMALL_STATE(202)] = 10392,
  [SMALL_STATE(203)] = 10420,
  [SMALL_STATE(204)] = 10440,
  [SMALL_STATE(205)] = 10458,
  [SMALL_STATE(206)] = 10489,
  [SMALL_STATE(207)] = 10506,
  [SMALL_STATE(208)] = 10523,
  [SMALL_STATE(209)] = 10538,
  [SMALL_STATE(210)] = 10569,
  [SMALL_STATE(211)] = 10586,
  [SMALL_STATE(212)] = 10603,
  [SMALL_STATE(213)] = 10617,
  [SMALL_STATE(214)] = 10631,
  [SMALL_STATE(215)] = 10645,
  [SMALL_STATE(216)] = 10673,
  [SMALL_STATE(217)] = 10693,
  [SMALL_STATE(218)] = 10721,
  [SMALL_STATE(219)] = 10735,
  [SMALL_STATE(220)] = 10763,
  [SMALL_STATE(221)] = 10791,
  [SMALL_STATE(222)] = 10805,
  [SMALL_STATE(223)] = 10833,
  [SMALL_STATE(224)] = 10861,
  [SMALL_STATE(225)] = 10875,
  [SMALL_STATE(226)] = 10903,
  [SMALL_STATE(227)] = 10931,
  [SMALL_STATE(228)] = 10959,
  [SMALL_STATE(229)] = 10973,
  [SMALL_STATE(230)] = 10987,
  [SMALL_STATE(231)] = 11001,
  [SMALL_STATE(232)] = 11029,
  [SMALL_STATE(233)] = 11057,
  [SMALL_STATE(234)] = 11071,
  [SMALL_STATE(235)] = 11099,
  [SMALL_STATE(236)] = 11112,
  [SMALL_STATE(237)] = 11137,
  [SMALL_STATE(238)] = 11158,
  [SMALL_STATE(239)] = 11179,
  [SMALL_STATE(240)] = 11192,
  [SMALL_STATE(241)] = 11217,
  [SMALL_STATE(242)] = 11238,
  [SMALL_STATE(243)] = 11259,
  [SMALL_STATE(244)] = 11284,
  [SMALL_STATE(245)] = 11297,
  [SMALL_STATE(246)] = 11320,
  [SMALL_STATE(247)] = 11343,
  [SMALL_STATE(248)] = 11366,
  [SMALL_STATE(249)] = 11387,
  [SMALL_STATE(250)] = 11410,
  [SMALL_STATE(251)] = 11428,
  [SMALL_STATE(252)] = 11444,
  [SMALL_STATE(253)] = 11464,
  [SMALL_STATE(254)] = 11481,
  [SMALL_STATE(255)] = 11496,
  [SMALL_STATE(256)] = 11511,
  [SMALL_STATE(257)] = 11530,
  [SMALL_STATE(258)] = 11547,
  [SMALL_STATE(259)] = 11566,
  [SMALL_STATE(260)] = 11581,
  [SMALL_STATE(261)] = 11596,
  [SMALL_STATE(262)] = 11607,
  [SMALL_STATE(263)] = 11622,
  [SMALL_STATE(264)] = 11633,
  [SMALL_STATE(265)] = 11650,
  [SMALL_STATE(266)] = 11665,
  [SMALL_STATE(267)] = 11684,
  [SMALL_STATE(268)] = 11699,
  [SMALL_STATE(269)] = 11718,
  [SMALL_STATE(270)] = 11729,
  [SMALL_STATE(271)] = 11748,
  [SMALL_STATE(272)] = 11767,
  [SMALL_STATE(273)] = 11786,
  [SMALL_STATE(274)] = 11805,
  [SMALL_STATE(275)] = 11816,
  [SMALL_STATE(276)] = 11827,
  [SMALL_STATE(277)] = 11846,
  [SMALL_STATE(278)] = 11865,
  [SMALL_STATE(279)] = 11880,
  [SMALL_STATE(280)] = 11897,
  [SMALL_STATE(281)] = 11908,
  [SMALL_STATE(282)] = 11925,
  [SMALL_STATE(283)] = 11944,
  [SMALL_STATE(284)] = 11957,
  [SMALL_STATE(285)] = 11972,
  [SMALL_STATE(286)] = 11991,
  [SMALL_STATE(287)] = 12010,
  [SMALL_STATE(288)] = 12029,
  [SMALL_STATE(289)] = 12048,
  [SMALL_STATE(290)] = 12062,
  [SMALL_STATE(291)] = 12078,
  [SMALL_STATE(292)] = 12094,
  [SMALL_STATE(293)] = 12106,
  [SMALL_STATE(294)] = 12120,
  [SMALL_STATE(295)] = 12132,
  [SMALL_STATE(296)] = 12146,
  [SMALL_STATE(297)] = 12162,
  [SMALL_STATE(298)] = 12176,
  [SMALL_STATE(299)] = 12188,
  [SMALL_STATE(300)] = 12202,
  [SMALL_STATE(301)] = 12218,
  [SMALL_STATE(302)] = 12234,
  [SMALL_STATE(303)] = 12248,
  [SMALL_STATE(304)] = 12264,
  [SMALL_STATE(305)] = 12280,
  [SMALL_STATE(306)] = 12296,
  [SMALL_STATE(307)] = 12310,
  [SMALL_STATE(308)] = 12322,
  [SMALL_STATE(309)] = 12338,
  [SMALL_STATE(310)] = 12354,
  [SMALL_STATE(311)] = 12368,
  [SMALL_STATE(312)] = 12382,
  [SMALL_STATE(313)] = 12396,
  [SMALL_STATE(314)] = 12410,
  [SMALL_STATE(315)] = 12422,
  [SMALL_STATE(316)] = 12431,
  [SMALL_STATE(317)] = 12440,
  [SMALL_STATE(318)] = 12449,
  [SMALL_STATE(319)] = 12458,
  [SMALL_STATE(320)] = 12467,
  [SMALL_STATE(321)] = 12480,
  [SMALL_STATE(322)] = 12493,
  [SMALL_STATE(323)] = 12502,
  [SMALL_STATE(324)] = 12511,
  [SMALL_STATE(325)] = 12520,
  [SMALL_STATE(326)] = 12529,
  [SMALL_STATE(327)] = 12538,
  [SMALL_STATE(328)] = 12547,
  [SMALL_STATE(329)] = 12560,
  [SMALL_STATE(330)] = 12573,
  [SMALL_STATE(331)] = 12582,
  [SMALL_STATE(332)] = 12595,
  [SMALL_STATE(333)] = 12608,
  [SMALL_STATE(334)] = 12621,
  [SMALL_STATE(335)] = 12630,
  [SMALL_STATE(336)] = 12643,
  [SMALL_STATE(337)] = 12652,
  [SMALL_STATE(338)] = 12661,
  [SMALL_STATE(339)] = 12670,
  [SMALL_STATE(340)] = 12683,
  [SMALL_STATE(341)] = 12696,
  [SMALL_STATE(342)] = 12705,
  [SMALL_STATE(343)] = 12714,
  [SMALL_STATE(344)] = 12723,
  [SMALL_STATE(345)] = 12736,
  [SMALL_STATE(346)] = 12749,
  [SMALL_STATE(347)] = 12762,
  [SMALL_STATE(348)] = 12775,
  [SMALL_STATE(349)] = 12788,
  [SMALL_STATE(350)] = 12801,
  [SMALL_STATE(351)] = 12814,
  [SMALL_STATE(352)] = 12823,
  [SMALL_STATE(353)] = 12834,
  [SMALL_STATE(354)] = 12847,
  [SMALL_STATE(355)] = 12860,
  [SMALL_STATE(356)] = 12869,
  [SMALL_STATE(357)] = 12882,
  [SMALL_STATE(358)] = 12891,
  [SMALL_STATE(359)] = 12904,
  [SMALL_STATE(360)] = 12917,
  [SMALL_STATE(361)] = 12926,
  [SMALL_STATE(362)] = 12935,
  [SMALL_STATE(363)] = 12948,
  [SMALL_STATE(364)] = 12957,
  [SMALL_STATE(365)] = 12970,
  [SMALL_STATE(366)] = 12979,
  [SMALL_STATE(367)] = 12988,
  [SMALL_STATE(368)] = 12997,
  [SMALL_STATE(369)] = 13010,
  [SMALL_STATE(370)] = 13019,
  [SMALL_STATE(371)] = 13028,
  [SMALL_STATE(372)] = 13037,
  [SMALL_STATE(373)] = 13050,
  [SMALL_STATE(374)] = 13063,
  [SMALL_STATE(375)] = 13076,
  [SMALL_STATE(376)] = 13089,
  [SMALL_STATE(377)] = 13102,
  [SMALL_STATE(378)] = 13111,
  [SMALL_STATE(379)] = 13120,
  [SMALL_STATE(380)] = 13133,
  [SMALL_STATE(381)] = 13142,
  [SMALL_STATE(382)] = 13155,
  [SMALL_STATE(383)] = 13164,
  [SMALL_STATE(384)] = 13177,
  [SMALL_STATE(385)] = 13186,
  [SMALL_STATE(386)] = 13195,
  [SMALL_STATE(387)] = 13204,
  [SMALL_STATE(388)] = 13217,
  [SMALL_STATE(389)] = 13226,
  [SMALL_STATE(390)] = 13235,
  [SMALL_STATE(391)] = 13248,
  [SMALL_STATE(392)] = 13261,
  [SMALL_STATE(393)] = 13270,
  [SMALL_STATE(394)] = 13279,
  [SMALL_STATE(395)] = 13292,
  [SMALL_STATE(396)] = 13301,
  [SMALL_STATE(397)] = 13314,
  [SMALL_STATE(398)] = 13323,
  [SMALL_STATE(399)] = 13336,
  [SMALL_STATE(400)] = 13349,
  [SMALL_STATE(401)] = 13358,
  [SMALL_STATE(402)] = 13367,
  [SMALL_STATE(403)] = 13376,
  [SMALL_STATE(404)] = 13385,
  [SMALL_STATE(405)] = 13398,
  [SMALL_STATE(406)] = 13411,
  [SMALL_STATE(407)] = 13420,
  [SMALL_STATE(408)] = 13433,
  [SMALL_STATE(409)] = 13442,
  [SMALL_STATE(410)] = 13455,
  [SMALL_STATE(411)] = 13464,
  [SMALL_STATE(412)] = 13473,
  [SMALL_STATE(413)] = 13486,
  [SMALL_STATE(414)] = 13497,
  [SMALL_STATE(415)] = 13510,
  [SMALL_STATE(416)] = 13523,
  [SMALL_STATE(417)] = 13531,
  [SMALL_STATE(418)] = 13539,
  [SMALL_STATE(419)] = 13549,
  [SMALL_STATE(420)] = 13559,
  [SMALL_STATE(421)] = 13569,
  [SMALL_STATE(422)] = 13579,
  [SMALL_STATE(423)] = 13589,
  [SMALL_STATE(424)] = 13599,
  [SMALL_STATE(425)] = 13607,
  [SMALL_STATE(426)] = 13617,
  [SMALL_STATE(427)] = 13627,
  [SMALL_STATE(428)] = 13637,
  [SMALL_STATE(429)] = 13647,
  [SMALL_STATE(430)] = 13657,
  [SMALL_STATE(431)] = 13667,
  [SMALL_STATE(432)] = 13675,
  [SMALL_STATE(433)] = 13683,
  [SMALL_STATE(434)] = 13691,
  [SMALL_STATE(435)] = 13701,
  [SMALL_STATE(436)] = 13711,
  [SMALL_STATE(437)] = 13721,
  [SMALL_STATE(438)] = 13731,
  [SMALL_STATE(439)] = 13741,
  [SMALL_STATE(440)] = 13751,
  [SMALL_STATE(441)] = 13761,
  [SMALL_STATE(442)] = 13769,
  [SMALL_STATE(443)] = 13779,
  [SMALL_STATE(444)] = 13786,
  [SMALL_STATE(445)] = 13793,
  [SMALL_STATE(446)] = 13800,
  [SMALL_STATE(447)] = 13807,
  [SMALL_STATE(448)] = 13814,
  [SMALL_STATE(449)] = 13821,
  [SMALL_STATE(450)] = 13828,
  [SMALL_STATE(451)] = 13835,
  [SMALL_STATE(452)] = 13842,
  [SMALL_STATE(453)] = 13849,
  [SMALL_STATE(454)] = 13856,
  [SMALL_STATE(455)] = 13863,
  [SMALL_STATE(456)] = 13870,
  [SMALL_STATE(457)] = 13877,
  [SMALL_STATE(458)] = 13884,
  [SMALL_STATE(459)] = 13891,
  [SMALL_STATE(460)] = 13898,
  [SMALL_STATE(461)] = 13905,
  [SMALL_STATE(462)] = 13912,
  [SMALL_STATE(463)] = 13919,
  [SMALL_STATE(464)] = 13926,
  [SMALL_STATE(465)] = 13933,
  [SMALL_STATE(466)] = 13940,
  [SMALL_STATE(467)] = 13947,
  [SMALL_STATE(468)] = 13954,
  [SMALL_STATE(469)] = 13961,
  [SMALL_STATE(470)] = 13968,
  [SMALL_STATE(471)] = 13975,
  [SMALL_STATE(472)] = 13982,
  [SMALL_STATE(473)] = 13989,
  [SMALL_STATE(474)] = 13996,
  [SMALL_STATE(475)] = 14003,
  [SMALL_STATE(476)] = 14010,
  [SMALL_STATE(477)] = 14017,
  [SMALL_STATE(478)] = 14024,
  [SMALL_STATE(479)] = 14031,
  [SMALL_STATE(480)] = 14038,
  [SMALL_STATE(481)] = 14045,
  [SMALL_STATE(482)] = 14052,
  [SMALL_STATE(483)] = 14059,
  [SMALL_STATE(484)] = 14066,
  [SMALL_STATE(485)] = 14073,
  [SMALL_STATE(486)] = 14080,
  [SMALL_STATE(487)] = 14087,
  [SMALL_STATE(488)] = 14094,
  [SMALL_STATE(489)] = 14101,
  [SMALL_STATE(490)] = 14108,
  [SMALL_STATE(491)] = 14115,
  [SMALL_STATE(492)] = 14122,
  [SMALL_STATE(493)] = 14129,
  [SMALL_STATE(494)] = 14136,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(125),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(15),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(118),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(127),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(246),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(48),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(47),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(47),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(435),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(39),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(372),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(9),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(35),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(29),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(371),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(464),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(34),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(7),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(51),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(160),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(445),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access_expression, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access_expression, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_expression, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_expression, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_expression, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_expression, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonempty_block_expression, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonempty_block_expression, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 5),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(200),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(121),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(252),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(253),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(48),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(47),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(47),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(435),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(56),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(51),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(160),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(462),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 5),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 5),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 6),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 6),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 6),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 5),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_expression, 5),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_expression, 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 7),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 7),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 6),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 6),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 4),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expression, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expression, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 4),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_expression, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_expression, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression_pun, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_let_pattern, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_value, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 6),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_let_expression, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(274),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(216),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(493),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(490),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(489),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(488),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(256),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(485),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 2),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 2),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 6),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 6),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 5),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_pattern, 3),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_pattern, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 3),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 6),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 6),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_pattern, 5),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_pattern, 5),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 4),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 5),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 7),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 7),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 1),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_pattern, 3),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_pattern, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any, 1),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pub, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [769] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(480),
  [772] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(274),
  [775] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(295),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(456),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(263),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [794] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(160),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(462),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat2, 2),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(20),
  [821] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(307),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(307),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat1, 2),
  [859] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(307),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(307),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 7),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 6),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 3),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 5),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 5),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2), SHIFT_REPEAT(123),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retuern_type, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 4),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pub_attribute, 3),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 4),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 1),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(300),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern_pun, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2), SHIFT_REPEAT(28),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2), SHIFT_REPEAT(193),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_fragement, 1),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_fragement, 1),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(294),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2), SHIFT_REPEAT(313),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolator, 3),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolator, 3),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 5),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 8),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item, 1),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 4),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 4),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 3),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2),
  [1097] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2), SHIFT_REPEAT(293),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 4),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 6),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 5),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(429),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 3),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filed_single_pattern, 1),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 4),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(440),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 5),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 3),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 1),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_expression, 1),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 4),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
