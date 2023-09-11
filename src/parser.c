#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 653
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
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
  sym_unescaped_string_fragment = 27,
  sym_escape_seqence = 28,
  anon_sym_DASH = 29,
  anon_sym_PLUS = 30,
  anon_sym_STAR_STAR = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_STAR_EQ = 34,
  anon_sym_SLASH_EQ = 35,
  anon_sym_PERCENT = 36,
  anon_sym_PLUS_EQ = 37,
  anon_sym_DASH_EQ = 38,
  anon_sym_GT = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_LT = 42,
  anon_sym_EQ_EQ = 43,
  anon_sym_BANG_EQ = 44,
  anon_sym_AMP_AMP = 45,
  anon_sym_PIPE_PIPE = 46,
  anon_sym_DOT_DOT = 47,
  anon_sym_fn = 48,
  anon_sym_LBRACK = 49,
  anon_sym_RBRACK = 50,
  aux_sym_accessor_token1 = 51,
  anon_sym_match = 52,
  anon_sym_EQ_GT = 53,
  anon_sym_if = 54,
  anon_sym_else = 55,
  anon_sym_break = 56,
  anon_sym_continue = 57,
  anon_sym_COLON_EQ = 58,
  anon_sym_var = 59,
  anon_sym_while = 60,
  anon_sym_return = 61,
  anon_sym_as = 62,
  anon_sym_PIPE = 63,
  anon_sym_DASH_GT = 64,
  sym_mutability = 65,
  sym_uppercase_identifier = 66,
  sym_colon_colon_uppercase_identifier = 67,
  sym_colon_colon_lowercase_identifier = 68,
  sym_identifier = 69,
  sym_dot_identifier = 70,
  sym_package_identifier = 71,
  sym_structure = 72,
  sym_structure_item = 73,
  sym_visibility = 74,
  sym_pub_attribute = 75,
  sym_type_defintion = 76,
  sym_struct_definition = 77,
  sym_struct_filed_declaration = 78,
  sym_enum_definition = 79,
  sym_enum_constructor = 80,
  sym_value_definition = 81,
  sym_function_definition = 82,
  sym_interface_definition = 83,
  sym_interface_method_declaration = 84,
  sym_expression = 85,
  sym_simple_expression = 86,
  sym_atomic_expression = 87,
  sym_string_interpolation = 88,
  sym_interpolator = 89,
  sym_literal = 90,
  sym_boolean_literal = 91,
  sym_string_literal = 92,
  sym_string_fragement = 93,
  sym_unary_expression = 94,
  sym_binary_expression = 95,
  sym_struct_expression = 96,
  sym_struct_field_expression = 97,
  sym_struct_filed_expression = 98,
  sym_labeled_expression = 99,
  sym_labeled_expression_pun = 100,
  sym_block_expression = 101,
  sym_nonempty_block_expression = 102,
  sym_anonymous_lambda_expression = 103,
  sym_constructor_expression = 104,
  sym_apply_expression = 105,
  sym_array_access_expression = 106,
  sym_dot_apply_expression = 107,
  sym_access_expression = 108,
  sym_accessor = 109,
  sym_method_expression = 110,
  sym_unit_expression = 111,
  sym_tuple_expression = 112,
  sym_constraint_expression = 113,
  sym_array_expression = 114,
  sym_match_expression = 115,
  sym_case_clause = 116,
  sym_if_expression = 117,
  sym_else_clause = 118,
  sym_statement_expression = 119,
  sym_let_expression = 120,
  sym_shorthand_let_expression = 121,
  sym_shorthand_let_pattern = 122,
  sym_var_expression = 123,
  sym_assign_expression = 124,
  sym_left_value = 125,
  sym_named_lambda_expression = 126,
  sym_while_expression = 127,
  sym_return_expression = 128,
  sym_pattern = 129,
  sym_as_pattern = 130,
  sym_or_pattern = 131,
  sym_simple_pattern = 132,
  sym_constructor_pattern = 133,
  sym_tuple_pattern = 134,
  sym_constraint_pattern = 135,
  sym_array_pattern = 136,
  sym_array_sub_pattern = 137,
  sym_dotdot_pattern = 138,
  sym_struct_pattern = 139,
  sym_struct_filed_pattern = 140,
  sym_filed_single_pattern = 141,
  sym_labeled_pattern = 142,
  sym_labeled_pattern_pun = 143,
  sym_type = 144,
  sym_tuple_type = 145,
  sym_function_type = 146,
  sym_apply_type = 147,
  sym_type_arguments = 148,
  sym_type_parameters = 149,
  sym_type_annotation = 150,
  sym_retuern_type = 151,
  sym_parameter = 152,
  sym_parameters = 153,
  sym_any = 154,
  sym_pub = 155,
  sym_qualified_identifier = 156,
  sym_qualified_type_identifier = 157,
  sym_function_identifier = 158,
  sym_type_identifier = 159,
  sym_constraints = 160,
  sym_constraint = 161,
  aux_sym_structure_repeat1 = 162,
  aux_sym_struct_definition_repeat1 = 163,
  aux_sym_enum_definition_repeat1 = 164,
  aux_sym_enum_constructor_repeat1 = 165,
  aux_sym_interface_definition_repeat1 = 166,
  aux_sym_string_interpolation_repeat1 = 167,
  aux_sym_string_interpolation_repeat2 = 168,
  aux_sym_struct_field_expression_repeat1 = 169,
  aux_sym_block_expression_repeat1 = 170,
  aux_sym_apply_expression_repeat1 = 171,
  aux_sym_match_expression_repeat1 = 172,
  aux_sym_constructor_pattern_repeat1 = 173,
  aux_sym_struct_filed_pattern_repeat1 = 174,
  aux_sym_type_parameters_repeat1 = 175,
  aux_sym_parameters_repeat1 = 176,
  aux_sym_constraints_repeat1 = 177,
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 12,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 17,
  [25] = 25,
  [26] = 16,
  [27] = 27,
  [28] = 27,
  [29] = 25,
  [30] = 30,
  [31] = 14,
  [32] = 22,
  [33] = 23,
  [34] = 21,
  [35] = 30,
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
  [56] = 46,
  [57] = 48,
  [58] = 47,
  [59] = 42,
  [60] = 60,
  [61] = 38,
  [62] = 55,
  [63] = 60,
  [64] = 64,
  [65] = 45,
  [66] = 66,
  [67] = 67,
  [68] = 52,
  [69] = 69,
  [70] = 50,
  [71] = 51,
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
  [96] = 93,
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
  [117] = 107,
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
  [140] = 78,
  [141] = 81,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 80,
  [148] = 148,
  [149] = 149,
  [150] = 82,
  [151] = 151,
  [152] = 84,
  [153] = 153,
  [154] = 88,
  [155] = 125,
  [156] = 77,
  [157] = 95,
  [158] = 97,
  [159] = 109,
  [160] = 160,
  [161] = 115,
  [162] = 102,
  [163] = 163,
  [164] = 111,
  [165] = 165,
  [166] = 104,
  [167] = 112,
  [168] = 73,
  [169] = 105,
  [170] = 118,
  [171] = 98,
  [172] = 119,
  [173] = 136,
  [174] = 86,
  [175] = 137,
  [176] = 122,
  [177] = 124,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 121,
  [182] = 100,
  [183] = 99,
  [184] = 179,
  [185] = 116,
  [186] = 74,
  [187] = 135,
  [188] = 131,
  [189] = 76,
  [190] = 72,
  [191] = 134,
  [192] = 133,
  [193] = 75,
  [194] = 127,
  [195] = 87,
  [196] = 128,
  [197] = 129,
  [198] = 89,
  [199] = 199,
  [200] = 85,
  [201] = 90,
  [202] = 91,
  [203] = 130,
  [204] = 114,
  [205] = 113,
  [206] = 108,
  [207] = 103,
  [208] = 208,
  [209] = 101,
  [210] = 120,
  [211] = 92,
  [212] = 123,
  [213] = 110,
  [214] = 126,
  [215] = 215,
  [216] = 132,
  [217] = 217,
  [218] = 217,
  [219] = 219,
  [220] = 220,
  [221] = 219,
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
  [234] = 233,
  [235] = 235,
  [236] = 226,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 237,
  [241] = 241,
  [242] = 242,
  [243] = 241,
  [244] = 244,
  [245] = 244,
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
  [258] = 255,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 261,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 256,
  [269] = 260,
  [270] = 259,
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
  [281] = 280,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 286,
  [288] = 276,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 278,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 293,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 295,
  [306] = 301,
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
  [331] = 327,
  [332] = 332,
  [333] = 332,
  [334] = 334,
  [335] = 330,
  [336] = 336,
  [337] = 334,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 326,
  [342] = 342,
  [343] = 343,
  [344] = 338,
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
  [369] = 360,
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
  [389] = 363,
  [390] = 390,
  [391] = 371,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 339,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 347,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 350,
  [410] = 410,
  [411] = 411,
  [412] = 309,
  [413] = 312,
  [414] = 414,
  [415] = 351,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 346,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 407,
  [431] = 431,
  [432] = 432,
  [433] = 425,
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
  [449] = 438,
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
  [469] = 414,
  [470] = 408,
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
  [490] = 444,
  [491] = 491,
  [492] = 492,
  [493] = 448,
  [494] = 450,
  [495] = 386,
  [496] = 387,
  [497] = 451,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 466,
  [502] = 484,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 400,
  [512] = 512,
  [513] = 509,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 510,
  [523] = 404,
  [524] = 517,
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
  [539] = 539,
  [540] = 382,
  [541] = 541,
  [542] = 467,
  [543] = 543,
  [544] = 544,
  [545] = 356,
  [546] = 546,
  [547] = 528,
  [548] = 352,
  [549] = 549,
  [550] = 550,
  [551] = 365,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 358,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 399,
  [563] = 563,
  [564] = 396,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 571,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 508,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 572,
  [588] = 588,
  [589] = 586,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 600,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
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
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 604,
  [628] = 596,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 598,
  [638] = 625,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 597,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 607,
  [650] = 650,
  [651] = 651,
  [652] = 652,
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
      if (eof) ADVANCE(32);
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(90);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(90);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(90);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '|') ADVANCE(85);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '|') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '|') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 21:
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 22:
      if (lookahead == '|') ADVANCE(78);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 27:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(89);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(91);
      END_STATE();
    case 28:
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(94);
      END_STATE();
    case 29:
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(91);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(90);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(90);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(27);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(90);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(92);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_escape_seqence);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_accessor_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(78);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_colon_colon_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_colon_colon_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_dot_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_package_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(94);
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
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 31},
  [73] = {.lex_state = 31},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 31},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
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
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 1},
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
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 4},
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
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 31},
  [249] = {.lex_state = 31},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 9},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 8},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 8},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 31},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 31},
  [314] = {.lex_state = 31},
  [315] = {.lex_state = 31},
  [316] = {.lex_state = 31},
  [317] = {.lex_state = 31},
  [318] = {.lex_state = 31},
  [319] = {.lex_state = 31},
  [320] = {.lex_state = 31},
  [321] = {.lex_state = 31},
  [322] = {.lex_state = 31},
  [323] = {.lex_state = 31},
  [324] = {.lex_state = 31},
  [325] = {.lex_state = 31},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 6},
  [328] = {.lex_state = 9},
  [329] = {.lex_state = 8},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 6},
  [342] = {.lex_state = 31},
  [343] = {.lex_state = 31},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 8},
  [347] = {.lex_state = 8},
  [348] = {.lex_state = 31},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 8},
  [352] = {.lex_state = 4},
  [353] = {.lex_state = 31},
  [354] = {.lex_state = 31},
  [355] = {.lex_state = 31},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 31},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 31},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 31},
  [363] = {.lex_state = 6},
  [364] = {.lex_state = 9},
  [365] = {.lex_state = 4},
  [366] = {.lex_state = 9},
  [367] = {.lex_state = 3},
  [368] = {.lex_state = 21},
  [369] = {.lex_state = 31},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 8},
  [373] = {.lex_state = 8},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 31},
  [376] = {.lex_state = 31},
  [377] = {.lex_state = 3},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 9},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 4},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 9},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 4},
  [387] = {.lex_state = 4},
  [388] = {.lex_state = 31},
  [389] = {.lex_state = 6},
  [390] = {.lex_state = 3},
  [391] = {.lex_state = 6},
  [392] = {.lex_state = 8},
  [393] = {.lex_state = 3},
  [394] = {.lex_state = 3},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 4},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 31},
  [399] = {.lex_state = 4},
  [400] = {.lex_state = 4},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 3},
  [404] = {.lex_state = 8},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 6},
  [407] = {.lex_state = 8},
  [408] = {.lex_state = 8},
  [409] = {.lex_state = 3},
  [410] = {.lex_state = 31},
  [411] = {.lex_state = 8},
  [412] = {.lex_state = 1},
  [413] = {.lex_state = 1},
  [414] = {.lex_state = 8},
  [415] = {.lex_state = 3},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 31},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 31},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 3},
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 31},
  [425] = {.lex_state = 31},
  [426] = {.lex_state = 6},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 8},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 31},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 21},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 31},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 31},
  [442] = {.lex_state = 1},
  [443] = {.lex_state = 8},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 31},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 1},
  [457] = {.lex_state = 1},
  [458] = {.lex_state = 1},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 1},
  [461] = {.lex_state = 1},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 31},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 21},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 1},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 1},
  [477] = {.lex_state = 1},
  [478] = {.lex_state = 4},
  [479] = {.lex_state = 1},
  [480] = {.lex_state = 4},
  [481] = {.lex_state = 1},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 4},
  [488] = {.lex_state = 1},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 1},
  [496] = {.lex_state = 1},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 31},
  [500] = {.lex_state = 8},
  [501] = {.lex_state = 21},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 1},
  [504] = {.lex_state = 1},
  [505] = {.lex_state = 1},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 1},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 1},
  [512] = {.lex_state = 1},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 1},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 1},
  [517] = {.lex_state = 21},
  [518] = {.lex_state = 1},
  [519] = {.lex_state = 1},
  [520] = {.lex_state = 4},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 1},
  [524] = {.lex_state = 21},
  [525] = {.lex_state = 1},
  [526] = {.lex_state = 18},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 4},
  [530] = {.lex_state = 1},
  [531] = {.lex_state = 1},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 4},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 4},
  [540] = {.lex_state = 1},
  [541] = {.lex_state = 1},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 1},
  [545] = {.lex_state = 1},
  [546] = {.lex_state = 1},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 1},
  [549] = {.lex_state = 31},
  [550] = {.lex_state = 1},
  [551] = {.lex_state = 1},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 8},
  [555] = {.lex_state = 1},
  [556] = {.lex_state = 8},
  [557] = {.lex_state = 1},
  [558] = {.lex_state = 1},
  [559] = {.lex_state = 4},
  [560] = {.lex_state = 1},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 1},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 31},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 31},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 21},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 21},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 4},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 21},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 4},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 4},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 4},
  [611] = {.lex_state = 4},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 31},
  [614] = {.lex_state = 21},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 31},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 21},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 21},
  [621] = {.lex_state = 21},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 31},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 4},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 31},
  [636] = {.lex_state = 31},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 31},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 21},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 31},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 21},
  [651] = {.lex_state = 21},
  [652] = {.lex_state = 21},
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
  },
  [1] = {
    [sym_structure] = STATE(645),
    [sym_structure_item] = STATE(445),
    [sym_visibility] = STATE(446),
    [sym_type_defintion] = STATE(458),
    [sym_struct_definition] = STATE(458),
    [sym_enum_definition] = STATE(458),
    [sym_value_definition] = STATE(458),
    [sym_function_definition] = STATE(458),
    [sym_interface_definition] = STATE(458),
    [sym_pub] = STATE(463),
    [aux_sym_structure_repeat1] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_priv] = ACTIONS(5),
    [anon_sym_pub] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_interface] = ACTIONS(19),
  },
  [2] = {
    [sym_expression] = STATE(225),
    [sym_simple_expression] = STATE(152),
    [sym_atomic_expression] = STATE(195),
    [sym_string_interpolation] = STATE(183),
    [sym_literal] = STATE(183),
    [sym_boolean_literal] = STATE(156),
    [sym_string_literal] = STATE(156),
    [sym_unary_expression] = STATE(195),
    [sym_binary_expression] = STATE(195),
    [sym_struct_expression] = STATE(195),
    [sym_struct_field_expression] = STATE(601),
    [sym_labeled_expression] = STATE(592),
    [sym_labeled_expression_pun] = STATE(606),
    [sym_nonempty_block_expression] = STATE(195),
    [sym_anonymous_lambda_expression] = STATE(195),
    [sym_constructor_expression] = STATE(195),
    [sym_apply_expression] = STATE(195),
    [sym_array_access_expression] = STATE(148),
    [sym_dot_apply_expression] = STATE(195),
    [sym_access_expression] = STATE(195),
    [sym_method_expression] = STATE(195),
    [sym_unit_expression] = STATE(195),
    [sym_tuple_expression] = STATE(195),
    [sym_constraint_expression] = STATE(195),
    [sym_array_expression] = STATE(195),
    [sym_match_expression] = STATE(182),
    [sym_if_expression] = STATE(182),
    [sym_statement_expression] = STATE(544),
    [sym_let_expression] = STATE(546),
    [sym_shorthand_let_expression] = STATE(546),
    [sym_shorthand_let_pattern] = STATE(634),
    [sym_var_expression] = STATE(546),
    [sym_assign_expression] = STATE(546),
    [sym_left_value] = STATE(633),
    [sym_named_lambda_expression] = STATE(546),
    [sym_while_expression] = STATE(546),
    [sym_return_expression] = STATE(546),
    [sym_qualified_identifier] = STATE(148),
    [sym_qualified_type_identifier] = STATE(637),
    [aux_sym_block_expression_repeat1] = STATE(4),
    [sym_lowercase_identifier] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_fn] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_match] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(49),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_continue] = ACTIONS(51),
    [anon_sym_var] = ACTIONS(53),
    [anon_sym_while] = ACTIONS(55),
    [anon_sym_return] = ACTIONS(57),
    [sym_uppercase_identifier] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_package_identifier] = ACTIONS(63),
  },
  [3] = {
    [sym_expression] = STATE(225),
    [sym_simple_expression] = STATE(152),
    [sym_atomic_expression] = STATE(195),
    [sym_string_interpolation] = STATE(183),
    [sym_literal] = STATE(183),
    [sym_boolean_literal] = STATE(156),
    [sym_string_literal] = STATE(156),
    [sym_unary_expression] = STATE(195),
    [sym_binary_expression] = STATE(195),
    [sym_struct_expression] = STATE(195),
    [sym_struct_field_expression] = STATE(600),
    [sym_labeled_expression] = STATE(592),
    [sym_labeled_expression_pun] = STATE(606),
    [sym_nonempty_block_expression] = STATE(195),
    [sym_anonymous_lambda_expression] = STATE(195),
    [sym_constructor_expression] = STATE(195),
    [sym_apply_expression] = STATE(195),
    [sym_array_access_expression] = STATE(148),
    [sym_dot_apply_expression] = STATE(195),
    [sym_access_expression] = STATE(195),
    [sym_method_expression] = STATE(195),
    [sym_unit_expression] = STATE(195),
    [sym_tuple_expression] = STATE(195),
    [sym_constraint_expression] = STATE(195),
    [sym_array_expression] = STATE(195),
    [sym_match_expression] = STATE(182),
    [sym_if_expression] = STATE(182),
    [sym_statement_expression] = STATE(544),
    [sym_let_expression] = STATE(546),
    [sym_shorthand_let_expression] = STATE(546),
    [sym_shorthand_let_pattern] = STATE(634),
    [sym_var_expression] = STATE(546),
    [sym_assign_expression] = STATE(546),
    [sym_left_value] = STATE(633),
    [sym_named_lambda_expression] = STATE(546),
    [sym_while_expression] = STATE(546),
    [sym_return_expression] = STATE(546),
    [sym_qualified_identifier] = STATE(148),
    [sym_qualified_type_identifier] = STATE(637),
    [aux_sym_block_expression_repeat1] = STATE(7),
    [sym_lowercase_identifier] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(67),
    [anon_sym_fn] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_match] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(49),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_continue] = ACTIONS(51),
    [anon_sym_var] = ACTIONS(53),
    [anon_sym_while] = ACTIONS(55),
    [anon_sym_return] = ACTIONS(57),
    [sym_uppercase_identifier] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_package_identifier] = ACTIONS(63),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 34,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_fn,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_return,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(69), 1,
      sym_lowercase_identifier,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_block_expression_repeat1,
    STATE(152), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(544), 1,
      sym_statement_expression,
    STATE(633), 1,
      sym_left_value,
    STATE(634), 1,
      sym_shorthand_let_pattern,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(148), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(546), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(195), 15,
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
  [130] = 34,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_fn,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_return,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(69), 1,
      sym_lowercase_identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_block_expression_repeat1,
    STATE(152), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(544), 1,
      sym_statement_expression,
    STATE(633), 1,
      sym_left_value,
    STATE(634), 1,
      sym_shorthand_let_pattern,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(148), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(546), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(195), 15,
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
  [260] = 34,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_fn,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_return,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(69), 1,
      sym_lowercase_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_block_expression_repeat1,
    STATE(152), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(544), 1,
      sym_statement_expression,
    STATE(633), 1,
      sym_left_value,
    STATE(634), 1,
      sym_shorthand_let_pattern,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(148), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(546), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(195), 15,
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
  [390] = 34,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_fn,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_return,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(69), 1,
      sym_lowercase_identifier,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_block_expression_repeat1,
    STATE(152), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(544), 1,
      sym_statement_expression,
    STATE(633), 1,
      sym_left_value,
    STATE(634), 1,
      sym_shorthand_let_pattern,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(148), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(546), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(195), 15,
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
  [520] = 34,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_fn,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_return,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(69), 1,
      sym_lowercase_identifier,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_block_expression_repeat1,
    STATE(152), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(544), 1,
      sym_statement_expression,
    STATE(633), 1,
      sym_left_value,
    STATE(634), 1,
      sym_shorthand_let_pattern,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(148), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(546), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(195), 15,
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
  [650] = 34,
    ACTIONS(81), 1,
      sym_lowercase_identifier,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_let,
    ACTIONS(95), 1,
      anon_sym__,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      sym_integer_literal,
    ACTIONS(110), 1,
      anon_sym_fn,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      anon_sym_match,
    ACTIONS(119), 1,
      anon_sym_if,
    ACTIONS(125), 1,
      anon_sym_var,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(131), 1,
      anon_sym_return,
    ACTIONS(134), 1,
      sym_uppercase_identifier,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(140), 1,
      sym_package_identifier,
    STATE(9), 1,
      aux_sym_block_expression_repeat1,
    STATE(152), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(544), 1,
      sym_statement_expression,
    STATE(633), 1,
      sym_left_value,
    STATE(634), 1,
      sym_shorthand_let_pattern,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(101), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(122), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(148), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(546), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(195), 15,
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
  [780] = 34,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_fn,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_return,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(69), 1,
      sym_lowercase_identifier,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_block_expression_repeat1,
    STATE(152), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(544), 1,
      sym_statement_expression,
    STATE(633), 1,
      sym_left_value,
    STATE(634), 1,
      sym_shorthand_let_pattern,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(148), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(546), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(195), 15,
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
  [910] = 24,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym_integer_literal,
    ACTIONS(163), 1,
      anon_sym_fn,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_uppercase_identifier,
    ACTIONS(169), 1,
      sym_package_identifier,
    STATE(152), 1,
      sym_simple_expression,
    STATE(231), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [1005] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [1096] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(219), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [1187] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [1278] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(221), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [1369] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(237), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [1460] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [1551] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [1642] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [1733] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [1824] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [1915] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_simple_expression,
    STATE(236), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2006] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2097] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2188] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2279] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(240), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2370] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2461] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(234), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2552] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2643] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2734] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2825] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_simple_expression,
    STATE(226), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [2916] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [3007] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [3098] = 23,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [3189] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(208), 1,
      sym_simple_expression,
    STATE(247), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [3277] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(228), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [3365] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(218), 1,
      sym_simple_expression,
    STATE(247), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [3453] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(238), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [3541] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(222), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [3629] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(229), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [3717] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(184), 1,
      sym_simple_expression,
    STATE(247), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [3805] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [3893] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(223), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [3981] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(241), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [4069] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(167), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [4157] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(173), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [4245] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(164), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [4333] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [4421] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(122), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [4509] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(86), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [4597] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(119), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [4685] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(230), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [4773] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(227), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [4861] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(118), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [4949] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(112), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [5037] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(111), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [5125] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(136), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [5213] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(179), 1,
      sym_simple_expression,
    STATE(247), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [5301] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(245), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [5389] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(217), 1,
      sym_simple_expression,
    STATE(247), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [5477] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(170), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [5565] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(244), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [5653] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(235), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [5741] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [5829] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [5917] = 22,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(187), 1,
      anon_sym_fn,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_match,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(199), 1,
      sym_package_identifier,
    STATE(84), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(99), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(100), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(87), 17,
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
  [6005] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(172), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [6093] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(232), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [6181] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(176), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [6269] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_match,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_uppercase_identifier,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_package_identifier,
    ACTIONS(145), 1,
      sym_lowercase_identifier,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(152), 1,
      sym_simple_expression,
    STATE(174), 1,
      sym_expression,
    STATE(637), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(156), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(182), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(183), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(195), 17,
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
  [6357] = 2,
    ACTIONS(249), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(247), 26,
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
  [6397] = 2,
    ACTIONS(253), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(251), 26,
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
  [6437] = 2,
    ACTIONS(257), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(255), 25,
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
  [6476] = 2,
    ACTIONS(261), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(259), 25,
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
  [6515] = 2,
    ACTIONS(265), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(263), 25,
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
  [6554] = 2,
    ACTIONS(269), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(267), 25,
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
  [6593] = 4,
    ACTIONS(275), 1,
      anon_sym_else,
    STATE(91), 1,
      sym_else_clause,
    ACTIONS(273), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(271), 22,
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
  [6633] = 20,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    STATE(153), 1,
      sym_dotdot_pattern,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(328), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    STATE(615), 1,
      sym_array_sub_pattern,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6704] = 2,
    ACTIONS(295), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(293), 23,
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
  [6739] = 3,
    ACTIONS(301), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(299), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(297), 22,
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
  [6776] = 2,
    ACTIONS(305), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 23,
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
  [6811] = 5,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_COLON_EQ,
    ACTIONS(309), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [6852] = 6,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym_accessor,
    ACTIONS(325), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(321), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 18,
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
  [6895] = 2,
    ACTIONS(329), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 22,
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
  [6929] = 3,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(333), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(331), 21,
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
  [6965] = 2,
    ACTIONS(339), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(337), 22,
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
  [6999] = 2,
    ACTIONS(343), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(341), 22,
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
  [7033] = 2,
    ACTIONS(347), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 22,
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
  [7067] = 2,
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
  [7101] = 2,
    ACTIONS(355), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(353), 22,
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
  [7135] = 2,
    ACTIONS(359), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(357), 22,
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
  [7169] = 19,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_match_expression_repeat1,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(521), 1,
      sym_case_clause,
    STATE(526), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7237] = 19,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(349), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    STATE(640), 1,
      sym_dotdot_pattern,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7305] = 2,
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
  [7339] = 19,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_match_expression_repeat1,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(521), 1,
      sym_case_clause,
    STATE(526), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7407] = 2,
    ACTIONS(373), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 22,
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
  [7441] = 2,
    ACTIONS(377), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 22,
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
  [7475] = 2,
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
  [7509] = 2,
    ACTIONS(321), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 22,
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
  [7543] = 2,
    ACTIONS(385), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(383), 22,
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
  [7577] = 2,
    ACTIONS(389), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(387), 22,
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
  [7611] = 2,
    ACTIONS(393), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(391), 22,
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
  [7645] = 2,
    ACTIONS(397), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(395), 22,
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
  [7679] = 2,
    ACTIONS(401), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 22,
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
  [7713] = 19,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      sym_integer_literal,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      sym_uppercase_identifier,
    ACTIONS(429), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym_package_identifier,
    STATE(106), 1,
      aux_sym_match_expression_repeat1,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(521), 1,
      sym_case_clause,
    STATE(526), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(403), 2,
      anon_sym__,
      sym_lowercase_identifier,
    ACTIONS(417), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7781] = 19,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_match_expression_repeat1,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(521), 1,
      sym_case_clause,
    STATE(526), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7849] = 2,
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
  [7883] = 2,
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
  [7917] = 2,
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
  [7951] = 10,
    ACTIONS(333), 1,
      anon_sym_COLON,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(331), 11,
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
  [8001] = 9,
    ACTIONS(333), 1,
      anon_sym_COLON,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(331), 12,
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
  [8049] = 2,
    ACTIONS(465), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(463), 22,
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
  [8083] = 2,
    ACTIONS(469), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(467), 22,
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
  [8117] = 2,
    ACTIONS(473), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(471), 22,
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
  [8151] = 2,
    ACTIONS(309), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(307), 22,
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
  [8185] = 19,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_match_expression_repeat1,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(521), 1,
      sym_case_clause,
    STATE(526), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8253] = 7,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(333), 3,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(331), 16,
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
  [8297] = 3,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(333), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(331), 21,
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
  [8333] = 2,
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
  [8367] = 2,
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
  [8401] = 5,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(333), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(331), 18,
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
  [8441] = 2,
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
  [8475] = 2,
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
  [8509] = 2,
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
  [8543] = 2,
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
  [8577] = 2,
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
  [8611] = 2,
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
  [8645] = 2,
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
  [8679] = 2,
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
  [8713] = 2,
    ACTIONS(519), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(517), 22,
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
  [8747] = 2,
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
  [8781] = 2,
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
  [8815] = 2,
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
  [8849] = 2,
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
  [8883] = 3,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(539), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(537), 21,
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
  [8919] = 2,
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
  [8953] = 19,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(349), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    STATE(630), 1,
      sym_dotdot_pattern,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9021] = 3,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(315), 1,
      anon_sym_COLON_EQ,
    ACTIONS(309), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9056] = 4,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      anon_sym_else,
    STATE(202), 1,
      sym_else_clause,
    ACTIONS(273), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9093] = 3,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(299), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9128] = 17,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(349), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9190] = 17,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(349), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9252] = 17,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(349), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9314] = 17,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(349), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9376] = 17,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(349), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9438] = 2,
    ACTIONS(293), 1,
      anon_sym_LF,
    ACTIONS(295), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9470] = 3,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      anon_sym_EQ,
    ACTIONS(339), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9504] = 3,
    ACTIONS(315), 1,
      anon_sym_COLON_EQ,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9538] = 2,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9570] = 17,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(349), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9632] = 6,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    STATE(192), 1,
      sym_accessor,
    ACTIONS(567), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(321), 21,
      anon_sym_SEMI,
      anon_sym_,
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
  [9672] = 17,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(384), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9734] = 2,
    ACTIONS(341), 1,
      anon_sym_LF,
    ACTIONS(343), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9766] = 2,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(495), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9797] = 2,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(269), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9828] = 2,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9859] = 2,
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(373), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9890] = 2,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(443), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9921] = 16,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(385), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9980] = 2,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10011] = 2,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(389), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10042] = 16,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(364), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [10101] = 7,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(333), 8,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10142] = 16,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(366), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [10201] = 2,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10232] = 6,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(333), 9,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10271] = 2,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10302] = 2,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(401), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10333] = 5,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(333), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10370] = 2,
    ACTIONS(375), 1,
      anon_sym_LF,
    ACTIONS(377), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10401] = 3,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(333), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10434] = 3,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(539), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10467] = 3,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(333), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10500] = 2,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(543), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10531] = 4,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(333), 19,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10566] = 2,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(491), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10597] = 16,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(274), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [10656] = 8,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_accessor,
    STATE(140), 1,
      sym_block_expression,
    ACTIONS(325), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(321), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 13,
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
  [10699] = 16,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(395), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [10758] = 2,
    ACTIONS(481), 1,
      anon_sym_LF,
    ACTIONS(483), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10789] = 2,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(321), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10820] = 2,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(381), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10851] = 8,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_block_expression,
    STATE(133), 1,
      sym_accessor,
    ACTIONS(325), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(321), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 13,
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
  [10894] = 2,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(309), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10925] = 2,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(257), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10956] = 2,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10987] = 2,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11018] = 2,
    ACTIONS(263), 1,
      anon_sym_LF,
    ACTIONS(265), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11049] = 2,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11080] = 2,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11111] = 2,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11142] = 2,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(261), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11173] = 2,
    ACTIONS(501), 1,
      anon_sym_LF,
    ACTIONS(503), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11204] = 2,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11235] = 2,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11266] = 2,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(511), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11297] = 2,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11328] = 16,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(379), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [11387] = 2,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(329), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11418] = 2,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(351), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11449] = 2,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(355), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11480] = 2,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11511] = 2,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(469), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11542] = 2,
    ACTIONS(463), 1,
      anon_sym_LF,
    ACTIONS(465), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11573] = 2,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(439), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11604] = 2,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11635] = 8,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_accessor,
    STATE(503), 1,
      sym_block_expression,
    ACTIONS(325), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(321), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 13,
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
  [11678] = 2,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(385), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11709] = 2,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(479), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11740] = 2,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(359), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11771] = 2,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(487), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11802] = 2,
    ACTIONS(445), 1,
      anon_sym_LF,
    ACTIONS(447), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11833] = 2,
    ACTIONS(497), 1,
      anon_sym_LF,
    ACTIONS(499), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11864] = 16,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer_literal,
    ACTIONS(197), 1,
      sym_uppercase_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      sym_package_identifier,
    STATE(265), 1,
      sym_constructor_expression,
    STATE(349), 1,
      sym_pattern,
    STATE(598), 1,
      sym_qualified_type_identifier,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(77), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(271), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(297), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [11923] = 2,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11954] = 7,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_accessor,
    ACTIONS(325), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(321), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 13,
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
  [11994] = 7,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_accessor,
    ACTIONS(325), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(321), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 13,
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
  [12034] = 15,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    STATE(493), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12089] = 2,
    ACTIONS(90), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
    ACTIONS(601), 14,
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
  [12118] = 15,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    ACTIONS(605), 1,
      anon_sym_COLON,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12173] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(609), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(611), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12217] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(621), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12261] = 12,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12309] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(627), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12353] = 14,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(444), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12405] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12449] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12493] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(641), 1,
      anon_sym_LF,
    ACTIONS(643), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12537] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(645), 1,
      anon_sym_LF,
    ACTIONS(647), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12581] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(649), 1,
      anon_sym_LF,
    ACTIONS(651), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12625] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(653), 1,
      anon_sym_LF,
    ACTIONS(655), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12669] = 14,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(449), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12721] = 14,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12773] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(667), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12817] = 14,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RBRACK,
    STATE(490), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12869] = 14,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    STATE(467), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12921] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(677), 1,
      anon_sym_LF,
    ACTIONS(679), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12965] = 10,
    ACTIONS(573), 1,
      anon_sym_STAR_STAR,
    ACTIONS(579), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(615), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(617), 1,
      sym_dot_identifier,
    ACTIONS(681), 1,
      anon_sym_LF,
    ACTIONS(683), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(575), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(577), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13009] = 14,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    STATE(542), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13061] = 13,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13110] = 12,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(693), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13157] = 13,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13206] = 12,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13252] = 12,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13298] = 12,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13344] = 11,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_AMP_AMP,
    ACTIONS(595), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(599), 1,
      sym_dot_identifier,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(457), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(453), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(459), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13387] = 14,
    ACTIONS(5), 1,
      anon_sym_priv,
    ACTIONS(7), 1,
      anon_sym_pub,
    ACTIONS(9), 1,
      anon_sym_type,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_interface,
    ACTIONS(705), 1,
      ts_builtin_sym_end,
    STATE(249), 1,
      aux_sym_structure_repeat1,
    STATE(445), 1,
      sym_structure_item,
    STATE(446), 1,
      sym_visibility,
    STATE(463), 1,
      sym_pub,
    STATE(458), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [13435] = 14,
    ACTIONS(707), 1,
      ts_builtin_sym_end,
    ACTIONS(709), 1,
      anon_sym_priv,
    ACTIONS(712), 1,
      anon_sym_pub,
    ACTIONS(715), 1,
      anon_sym_type,
    ACTIONS(718), 1,
      anon_sym_struct,
    ACTIONS(721), 1,
      anon_sym_enum,
    ACTIONS(724), 1,
      anon_sym_let,
    ACTIONS(727), 1,
      anon_sym_func,
    ACTIONS(730), 1,
      anon_sym_interface,
    STATE(249), 1,
      aux_sym_structure_repeat1,
    STATE(445), 1,
      sym_structure_item,
    STATE(446), 1,
      sym_visibility,
    STATE(463), 1,
      sym_pub,
    STATE(458), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [13483] = 3,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    ACTIONS(733), 5,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(735), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [13505] = 2,
    ACTIONS(739), 5,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(741), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [13524] = 2,
    ACTIONS(743), 5,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(412), 8,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [13542] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(533), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13570] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13598] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(513), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13626] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13654] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13682] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(509), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13710] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(761), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13738] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13766] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13794] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13822] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13850] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(553), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13878] = 3,
    ACTIONS(773), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(775), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [13896] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13924] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13952] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13980] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14008] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    ACTIONS(787), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14036] = 2,
    ACTIONS(791), 1,
      anon_sym_EQ,
    ACTIONS(789), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14051] = 2,
    ACTIONS(795), 1,
      anon_sym_EQ,
    ACTIONS(793), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14066] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(454), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14091] = 3,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(797), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
  [14108] = 2,
    ACTIONS(805), 1,
      anon_sym_EQ,
    ACTIONS(803), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14123] = 7,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym__,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(813), 1,
      sym_package_identifier,
    STATE(397), 1,
      sym_qualified_type_identifier,
    STATE(548), 1,
      sym_type,
    STATE(496), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14148] = 7,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym__,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(813), 1,
      sym_package_identifier,
    STATE(397), 1,
      sym_qualified_type_identifier,
    STATE(461), 1,
      sym_type,
    STATE(496), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14173] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(450), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14198] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(642), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14223] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(627), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14248] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(604), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14273] = 2,
    ACTIONS(817), 1,
      anon_sym_EQ,
    ACTIONS(815), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14288] = 2,
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
  [14303] = 2,
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
  [14318] = 2,
    ACTIONS(829), 1,
      anon_sym_EQ,
    ACTIONS(827), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14333] = 7,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym__,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(813), 1,
      sym_package_identifier,
    STATE(397), 1,
      sym_qualified_type_identifier,
    STATE(562), 1,
      sym_type,
    STATE(496), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14358] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(399), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14383] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(352), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14408] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(559), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14433] = 2,
    ACTIONS(833), 1,
      anon_sym_EQ,
    ACTIONS(831), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14448] = 2,
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
  [14463] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(494), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14488] = 7,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym__,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(813), 1,
      sym_package_identifier,
    STATE(397), 1,
      sym_qualified_type_identifier,
    STATE(508), 1,
      sym_type,
    STATE(496), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14513] = 7,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym__,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(813), 1,
      sym_package_identifier,
    STATE(397), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(496), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14538] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(382), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14563] = 7,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym__,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(813), 1,
      sym_package_identifier,
    STATE(397), 1,
      sym_qualified_type_identifier,
    STATE(514), 1,
      sym_type,
    STATE(496), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14588] = 2,
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
  [14603] = 2,
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
  [14618] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(582), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14643] = 2,
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
  [14658] = 7,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym__,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(813), 1,
      sym_package_identifier,
    STATE(397), 1,
      sym_qualified_type_identifier,
    STATE(555), 1,
      sym_type,
    STATE(496), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14683] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14708] = 2,
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
  [14723] = 2,
    ACTIONS(857), 1,
      anon_sym_EQ,
    ACTIONS(855), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14738] = 7,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym__,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(813), 1,
      sym_package_identifier,
    STATE(397), 1,
      sym_qualified_type_identifier,
    STATE(540), 1,
      sym_type,
    STATE(496), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14763] = 7,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym__,
    STATE(339), 1,
      sym_qualified_type_identifier,
    STATE(358), 1,
      sym_type,
    STATE(387), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14788] = 2,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(859), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14803] = 9,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(865), 1,
      anon_sym_EQ,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
    STATE(340), 1,
      sym_type_parameters,
    STATE(392), 1,
      sym_parameters,
    STATE(536), 1,
      sym_retuern_type,
    STATE(537), 1,
      sym_block_expression,
  [14831] = 1,
    ACTIONS(301), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [14843] = 1,
    ACTIONS(707), 9,
      ts_builtin_sym_end,
      anon_sym_priv,
      anon_sym_pub,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [14855] = 9,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
    ACTIONS(871), 1,
      anon_sym_EQ,
    STATE(329), 1,
      sym_type_parameters,
    STATE(372), 1,
      sym_parameters,
    STATE(519), 1,
      sym_block_expression,
    STATE(520), 1,
      sym_retuern_type,
  [14883] = 1,
    ACTIONS(873), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [14895] = 8,
    ACTIONS(875), 1,
      sym_lowercase_identifier,
    ACTIONS(877), 1,
      anon_sym_priv,
    ACTIONS(879), 1,
      anon_sym_pub,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
    ACTIONS(883), 1,
      sym_mutability,
    STATE(322), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(570), 1,
      sym_visibility,
  [14920] = 8,
    ACTIONS(885), 1,
      sym_lowercase_identifier,
    ACTIONS(888), 1,
      anon_sym_priv,
    ACTIONS(891), 1,
      anon_sym_pub,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
    ACTIONS(896), 1,
      sym_mutability,
    STATE(314), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(570), 1,
      sym_visibility,
  [14945] = 8,
    ACTIONS(875), 1,
      sym_lowercase_identifier,
    ACTIONS(877), 1,
      anon_sym_priv,
    ACTIONS(879), 1,
      anon_sym_pub,
    ACTIONS(883), 1,
      sym_mutability,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(570), 1,
      sym_visibility,
  [14970] = 8,
    ACTIONS(875), 1,
      sym_lowercase_identifier,
    ACTIONS(877), 1,
      anon_sym_priv,
    ACTIONS(879), 1,
      anon_sym_pub,
    ACTIONS(883), 1,
      sym_mutability,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(570), 1,
      sym_visibility,
  [14995] = 4,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    STATE(355), 1,
      sym_pub_attribute,
    ACTIONS(905), 3,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
    ACTIONS(907), 3,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [15012] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_interface_definition_repeat1,
    STATE(525), 1,
      sym_interface_method_declaration,
    STATE(532), 1,
      sym_function_identifier,
    STATE(623), 1,
      sym_qualified_type_identifier,
  [15037] = 8,
    ACTIONS(875), 1,
      sym_lowercase_identifier,
    ACTIONS(877), 1,
      anon_sym_priv,
    ACTIONS(879), 1,
      anon_sym_pub,
    ACTIONS(883), 1,
      sym_mutability,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    STATE(316), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(570), 1,
      sym_visibility,
  [15062] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    STATE(324), 1,
      aux_sym_interface_definition_repeat1,
    STATE(525), 1,
      sym_interface_method_declaration,
    STATE(532), 1,
      sym_function_identifier,
    STATE(623), 1,
      sym_qualified_type_identifier,
  [15087] = 8,
    ACTIONS(915), 1,
      sym_lowercase_identifier,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    ACTIONS(920), 1,
      sym_identifier,
    ACTIONS(923), 1,
      sym_package_identifier,
    STATE(321), 1,
      aux_sym_interface_definition_repeat1,
    STATE(525), 1,
      sym_interface_method_declaration,
    STATE(532), 1,
      sym_function_identifier,
    STATE(623), 1,
      sym_qualified_type_identifier,
  [15112] = 8,
    ACTIONS(875), 1,
      sym_lowercase_identifier,
    ACTIONS(877), 1,
      anon_sym_priv,
    ACTIONS(879), 1,
      anon_sym_pub,
    ACTIONS(883), 1,
      sym_mutability,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(570), 1,
      sym_visibility,
  [15137] = 8,
    ACTIONS(875), 1,
      sym_lowercase_identifier,
    ACTIONS(877), 1,
      anon_sym_priv,
    ACTIONS(879), 1,
      anon_sym_pub,
    ACTIONS(883), 1,
      sym_mutability,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(570), 1,
      sym_visibility,
  [15162] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    ACTIONS(926), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_interface_definition_repeat1,
    STATE(525), 1,
      sym_interface_method_declaration,
    STATE(532), 1,
      sym_function_identifier,
    STATE(623), 1,
      sym_qualified_type_identifier,
  [15187] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_interface_definition_repeat1,
    STATE(525), 1,
      sym_interface_method_declaration,
    STATE(532), 1,
      sym_function_identifier,
    STATE(623), 1,
      sym_qualified_type_identifier,
  [15212] = 5,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    STATE(332), 1,
      sym_interpolator,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(331), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [15230] = 5,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      sym_interpolator,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(345), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [15248] = 7,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_as,
    STATE(383), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(608), 1,
      sym_dotdot_pattern,
  [15270] = 7,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(865), 1,
      anon_sym_EQ,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
    STATE(392), 1,
      sym_parameters,
    STATE(536), 1,
      sym_retuern_type,
    STATE(537), 1,
      sym_block_expression,
  [15292] = 4,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(336), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15308] = 5,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    STATE(338), 1,
      sym_interpolator,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(345), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [15326] = 4,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(334), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15342] = 4,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(948), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(337), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15358] = 4,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(950), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(336), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15374] = 4,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(336), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15390] = 4,
    ACTIONS(954), 1,
      anon_sym_DQUOTE,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(959), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(336), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15406] = 4,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(962), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(336), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15422] = 4,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(950), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(335), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15438] = 3,
    ACTIONS(966), 1,
      anon_sym_LBRACK,
    STATE(400), 1,
      sym_type_arguments,
    ACTIONS(964), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15452] = 7,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
    ACTIONS(968), 1,
      anon_sym_EQ,
    STATE(373), 1,
      sym_parameters,
    STATE(478), 1,
      sym_retuern_type,
    STATE(485), 1,
      sym_block_expression,
  [15474] = 5,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(970), 1,
      anon_sym_DQUOTE,
    STATE(333), 1,
      sym_interpolator,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(327), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [15492] = 6,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT,
    ACTIONS(972), 1,
      sym_lowercase_identifier,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
    STATE(447), 1,
      sym_filed_single_pattern,
    STATE(631), 1,
      sym_dotdot_pattern,
    STATE(483), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [15512] = 6,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT,
    ACTIONS(972), 1,
      sym_lowercase_identifier,
    ACTIONS(976), 1,
      anon_sym_RBRACE,
    STATE(447), 1,
      sym_filed_single_pattern,
    STATE(641), 1,
      sym_dotdot_pattern,
    STATE(483), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [15532] = 4,
    ACTIONS(932), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(962), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(330), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15548] = 3,
    ACTIONS(978), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(980), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(345), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [15561] = 2,
    ACTIONS(985), 1,
      anon_sym_DASH_GT,
    ACTIONS(983), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15572] = 2,
    ACTIONS(989), 1,
      anon_sym_DASH_GT,
    ACTIONS(987), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15583] = 5,
    ACTIONS(972), 1,
      sym_lowercase_identifier,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      sym_filed_single_pattern,
    STATE(599), 1,
      sym_struct_filed_pattern,
    STATE(483), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [15600] = 3,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(940), 1,
      anon_sym_as,
    ACTIONS(993), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [15613] = 2,
    ACTIONS(997), 1,
      anon_sym_DASH_GT,
    ACTIONS(995), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15624] = 2,
    ACTIONS(1001), 1,
      anon_sym_DASH_GT,
    ACTIONS(999), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15635] = 1,
    ACTIONS(1003), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15643] = 1,
    ACTIONS(1005), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [15651] = 5,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    STATE(311), 1,
      sym_function_identifier,
    STATE(623), 1,
      sym_qualified_type_identifier,
  [15667] = 1,
    ACTIONS(1007), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [15675] = 1,
    ACTIONS(1009), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15683] = 4,
    ACTIONS(1011), 1,
      sym_lowercase_identifier,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    STATE(507), 1,
      sym_struct_filed_expression,
    STATE(594), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [15697] = 1,
    ACTIONS(1015), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15705] = 4,
    ACTIONS(1017), 1,
      anon_sym_LF,
    ACTIONS(1021), 1,
      anon_sym_LBRACK,
    STATE(505), 1,
      sym_type_parameters,
    ACTIONS(1019), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15719] = 5,
    ACTIONS(1011), 1,
      sym_lowercase_identifier,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    STATE(592), 1,
      sym_labeled_expression,
    STATE(606), 1,
      sym_labeled_expression_pun,
    STATE(638), 1,
      sym_struct_field_expression,
  [15735] = 1,
    ACTIONS(1025), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [15743] = 5,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    STATE(308), 1,
      sym_function_identifier,
    STATE(623), 1,
      sym_qualified_type_identifier,
  [15759] = 3,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(345), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [15771] = 3,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(940), 1,
      anon_sym_as,
    ACTIONS(1027), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [15783] = 1,
    ACTIONS(1029), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15791] = 5,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(940), 1,
      anon_sym_as,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    STATE(473), 1,
      aux_sym_constructor_pattern_repeat1,
  [15807] = 4,
    ACTIONS(1035), 1,
      anon_sym_LF,
    ACTIONS(1039), 1,
      anon_sym_DASH_GT,
    STATE(488), 1,
      sym_retuern_type,
    ACTIONS(1037), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15821] = 5,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(1041), 1,
      sym_identifier,
    STATE(434), 1,
      sym_constraint,
    STATE(472), 1,
      sym_qualified_type_identifier,
    STATE(579), 1,
      sym_constraints,
  [15837] = 5,
    ACTIONS(1011), 1,
      sym_lowercase_identifier,
    ACTIONS(1043), 1,
      anon_sym_RBRACE,
    STATE(592), 1,
      sym_labeled_expression,
    STATE(606), 1,
      sym_labeled_expression_pun,
    STATE(625), 1,
      sym_struct_field_expression,
  [15853] = 1,
    ACTIONS(1045), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [15861] = 3,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(363), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [15873] = 5,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(865), 1,
      anon_sym_EQ,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
    STATE(536), 1,
      sym_retuern_type,
    STATE(537), 1,
      sym_block_expression,
  [15889] = 5,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
    ACTIONS(1047), 1,
      anon_sym_EQ,
    STATE(504), 1,
      sym_block_expression,
    STATE(529), 1,
      sym_retuern_type,
  [15905] = 4,
    ACTIONS(1021), 1,
      anon_sym_LBRACK,
    ACTIONS(1049), 1,
      anon_sym_LF,
    STATE(530), 1,
      sym_type_parameters,
    ACTIONS(1051), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15919] = 1,
    ACTIONS(1053), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [15927] = 4,
    ACTIONS(1011), 1,
      sym_lowercase_identifier,
    ACTIONS(1055), 1,
      anon_sym_RBRACE,
    STATE(575), 1,
      sym_struct_filed_expression,
    STATE(594), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [15941] = 4,
    ACTIONS(1039), 1,
      anon_sym_DASH_GT,
    ACTIONS(1057), 1,
      anon_sym_LF,
    STATE(479), 1,
      sym_retuern_type,
    ACTIONS(1059), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15955] = 3,
    ACTIONS(1061), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_constructor_pattern_repeat1,
    ACTIONS(993), 3,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [15967] = 5,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(940), 1,
      anon_sym_as,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    ACTIONS(1068), 1,
      anon_sym_COMMA,
  [15983] = 5,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1070), 1,
      anon_sym_RBRACE,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(617), 1,
      sym_dotdot_pattern,
  [15999] = 5,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT,
    ACTIONS(976), 1,
      anon_sym_RBRACE,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(641), 1,
      sym_dotdot_pattern,
  [16015] = 1,
    ACTIONS(1076), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16023] = 5,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(640), 1,
      sym_dotdot_pattern,
  [16039] = 5,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(940), 1,
      anon_sym_as,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_constructor_pattern_repeat1,
  [16055] = 5,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(940), 1,
      anon_sym_as,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym_constructor_pattern_repeat1,
  [16071] = 1,
    ACTIONS(1086), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16079] = 1,
    ACTIONS(1088), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16087] = 4,
    ACTIONS(1011), 1,
      sym_lowercase_identifier,
    ACTIONS(1090), 1,
      anon_sym_RBRACE,
    STATE(575), 1,
      sym_struct_filed_expression,
    STATE(594), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [16101] = 3,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(345), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16113] = 4,
    ACTIONS(1039), 1,
      anon_sym_DASH_GT,
    ACTIONS(1092), 1,
      anon_sym_LF,
    STATE(491), 1,
      sym_retuern_type,
    ACTIONS(1094), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16127] = 3,
    ACTIONS(970), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(389), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16139] = 5,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
    ACTIONS(968), 1,
      anon_sym_EQ,
    STATE(478), 1,
      sym_retuern_type,
    STATE(485), 1,
      sym_block_expression,
  [16155] = 4,
    ACTIONS(1039), 1,
      anon_sym_DASH_GT,
    ACTIONS(1096), 1,
      anon_sym_LF,
    STATE(460), 1,
      sym_retuern_type,
    ACTIONS(1098), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16169] = 4,
    ACTIONS(1039), 1,
      anon_sym_DASH_GT,
    ACTIONS(1100), 1,
      anon_sym_LF,
    STATE(541), 1,
      sym_retuern_type,
    ACTIONS(1102), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16183] = 5,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(940), 1,
      anon_sym_as,
    ACTIONS(1104), 1,
      anon_sym_COLON,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    STATE(611), 1,
      sym_type_annotation,
  [16199] = 1,
    ACTIONS(1108), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16207] = 4,
    ACTIONS(964), 1,
      anon_sym_LF,
    ACTIONS(1112), 1,
      anon_sym_LBRACK,
    STATE(511), 1,
      sym_type_arguments,
    ACTIONS(1110), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16221] = 2,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
    ACTIONS(1114), 4,
      anon_sym_priv,
      anon_sym_pub,
      sym_mutability,
      sym_lowercase_identifier,
  [16231] = 1,
    ACTIONS(1116), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16239] = 1,
    ACTIONS(1118), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16247] = 3,
    ACTIONS(1122), 1,
      anon_sym_PLUS,
    STATE(401), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1120), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16258] = 4,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
    ACTIONS(1127), 1,
      sym_uppercase_identifier,
    STATE(405), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [16271] = 3,
    ACTIONS(987), 1,
      anon_sym_LF,
    ACTIONS(1131), 1,
      anon_sym_DASH_GT,
    ACTIONS(1129), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16282] = 1,
    ACTIONS(1133), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [16289] = 4,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
    ACTIONS(1137), 1,
      sym_uppercase_identifier,
    STATE(405), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [16302] = 2,
    ACTIONS(1140), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(1142), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
  [16311] = 4,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
    STATE(155), 1,
      sym_block_expression,
    STATE(589), 1,
      sym_retuern_type,
  [16324] = 1,
    ACTIONS(1144), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [16331] = 3,
    ACTIONS(995), 1,
      anon_sym_LF,
    ACTIONS(1148), 1,
      anon_sym_DASH_GT,
    ACTIONS(1146), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16342] = 2,
    ACTIONS(1150), 1,
      sym_identifier,
    ACTIONS(918), 3,
      anon_sym_RBRACE,
      sym_lowercase_identifier,
      sym_package_identifier,
  [16351] = 4,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
    STATE(561), 1,
      sym_block_expression,
    STATE(568), 1,
      sym_retuern_type,
  [16364] = 2,
    ACTIONS(301), 1,
      anon_sym_LF,
    ACTIONS(549), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [16373] = 2,
    ACTIONS(873), 1,
      anon_sym_LF,
    ACTIONS(1152), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [16382] = 1,
    ACTIONS(1154), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [16389] = 3,
    ACTIONS(999), 1,
      anon_sym_LF,
    ACTIONS(1158), 1,
      anon_sym_DASH_GT,
    ACTIONS(1156), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16400] = 3,
    ACTIONS(1104), 1,
      anon_sym_COLON,
    STATE(588), 1,
      sym_type_annotation,
    ACTIONS(1160), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16411] = 3,
    ACTIONS(1011), 1,
      sym_lowercase_identifier,
    STATE(575), 1,
      sym_struct_filed_expression,
    STATE(594), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [16422] = 4,
    ACTIONS(1127), 1,
      sym_uppercase_identifier,
    ACTIONS(1162), 1,
      anon_sym_RBRACE,
    STATE(402), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [16435] = 4,
    ACTIONS(1127), 1,
      sym_uppercase_identifier,
    ACTIONS(1162), 1,
      anon_sym_RBRACE,
    STATE(405), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [16448] = 3,
    ACTIONS(972), 1,
      sym_lowercase_identifier,
    STATE(447), 1,
      sym_filed_single_pattern,
    STATE(483), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16459] = 2,
    ACTIONS(1166), 1,
      anon_sym_COLON,
    ACTIONS(1164), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [16468] = 3,
    ACTIONS(983), 1,
      anon_sym_LF,
    ACTIONS(1170), 1,
      anon_sym_DASH_GT,
    ACTIONS(1168), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16479] = 3,
    ACTIONS(1172), 1,
      anon_sym_LF,
    ACTIONS(1176), 1,
      anon_sym_LPAREN,
    ACTIONS(1174), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16490] = 3,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    STATE(355), 1,
      sym_pub_attribute,
    ACTIONS(1005), 2,
      sym_mutability,
      sym_lowercase_identifier,
  [16501] = 3,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(1178), 1,
      anon_sym_if,
    STATE(204), 2,
      sym_block_expression,
      sym_if_expression,
  [16512] = 2,
    ACTIONS(1180), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(1182), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
  [16521] = 4,
    ACTIONS(1127), 1,
      sym_uppercase_identifier,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
    STATE(405), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [16534] = 4,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
    ACTIONS(1127), 1,
      sym_uppercase_identifier,
    STATE(427), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [16547] = 3,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(623), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [16558] = 4,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
    STATE(125), 1,
      sym_block_expression,
    STATE(586), 1,
      sym_retuern_type,
  [16571] = 4,
    ACTIONS(1127), 1,
      sym_uppercase_identifier,
    ACTIONS(1189), 1,
      anon_sym_RBRACE,
    STATE(419), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [16584] = 3,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_enum_constructor_repeat1,
    ACTIONS(1191), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [16595] = 3,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    ACTIONS(1196), 1,
      anon_sym_if,
    STATE(114), 2,
      sym_block_expression,
      sym_if_expression,
  [16606] = 3,
    ACTIONS(1200), 1,
      anon_sym_PLUS,
    STATE(435), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16617] = 3,
    ACTIONS(1200), 1,
      anon_sym_PLUS,
    STATE(401), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16628] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_struct_filed_pattern_repeat1,
    ACTIONS(1204), 2,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [16639] = 4,
    ACTIONS(291), 1,
      sym_package_identifier,
    ACTIONS(1041), 1,
      sym_identifier,
    STATE(472), 1,
      sym_qualified_type_identifier,
    STATE(515), 1,
      sym_constraint,
  [16652] = 3,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym_apply_expression_repeat1,
  [16662] = 3,
    ACTIONS(1211), 1,
      sym_lowercase_identifier,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      sym_parameter,
  [16672] = 3,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_parameters_repeat1,
  [16682] = 3,
    ACTIONS(1211), 1,
      sym_lowercase_identifier,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      sym_parameter,
  [16692] = 2,
    ACTIONS(1222), 1,
      anon_sym_LF,
    ACTIONS(1224), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16700] = 1,
    ACTIONS(1226), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [16706] = 3,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym_apply_expression_repeat1,
  [16716] = 2,
    ACTIONS(1230), 1,
      anon_sym_LF,
    ACTIONS(1232), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16724] = 3,
    ACTIONS(1234), 1,
      anon_sym_type,
    ACTIONS(1236), 1,
      anon_sym_struct,
    ACTIONS(1238), 1,
      anon_sym_enum,
  [16734] = 1,
    ACTIONS(1204), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [16740] = 3,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym_apply_expression_repeat1,
  [16750] = 3,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(1242), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym_apply_expression_repeat1,
  [16760] = 3,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    ACTIONS(1246), 1,
      anon_sym_RBRACK,
    STATE(502), 1,
      aux_sym_enum_constructor_repeat1,
  [16770] = 3,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(1248), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_enum_constructor_repeat1,
  [16780] = 3,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    ACTIONS(1250), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_constructor_pattern_repeat1,
  [16790] = 2,
    ACTIONS(1252), 1,
      anon_sym_LF,
    ACTIONS(1254), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16798] = 3,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    STATE(489), 1,
      aux_sym_enum_constructor_repeat1,
  [16808] = 3,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_constructor_pattern_repeat1,
  [16818] = 2,
    ACTIONS(1262), 1,
      anon_sym_LF,
    ACTIONS(1264), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16826] = 2,
    ACTIONS(1266), 1,
      anon_sym_LF,
    ACTIONS(1268), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16834] = 2,
    ACTIONS(1270), 1,
      anon_sym_LF,
    ACTIONS(1272), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16842] = 2,
    ACTIONS(1274), 1,
      anon_sym_LF,
    ACTIONS(1276), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16850] = 2,
    ACTIONS(1057), 1,
      anon_sym_LF,
    ACTIONS(1059), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16858] = 2,
    ACTIONS(1278), 1,
      anon_sym_LF,
    ACTIONS(1280), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16866] = 3,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_enum_constructor_repeat1,
  [16876] = 3,
    ACTIONS(1284), 1,
      anon_sym_let,
    ACTIONS(1286), 1,
      anon_sym_func,
    ACTIONS(1288), 1,
      anon_sym_interface,
  [16886] = 2,
    ACTIONS(1290), 1,
      anon_sym_LF,
    ACTIONS(1292), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16894] = 3,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_RBRACK,
    STATE(465), 1,
      aux_sym_type_parameters_repeat1,
  [16904] = 3,
    ACTIONS(1299), 1,
      anon_sym_RBRACK,
    ACTIONS(1301), 1,
      sym_identifier,
    STATE(577), 1,
      sym_type_identifier,
  [16914] = 3,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym_apply_expression_repeat1,
  [16924] = 3,
    ACTIONS(1305), 1,
      anon_sym_RBRACE,
    ACTIONS(1307), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_struct_field_expression_repeat1,
  [16934] = 2,
    ACTIONS(1154), 1,
      anon_sym_LF,
    ACTIONS(1310), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16942] = 2,
    ACTIONS(1144), 1,
      anon_sym_LF,
    ACTIONS(1312), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16950] = 2,
    ACTIONS(1314), 1,
      anon_sym_LF,
    ACTIONS(1316), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16958] = 1,
    ACTIONS(1318), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [16964] = 3,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    ACTIONS(1320), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_constructor_pattern_repeat1,
  [16974] = 3,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(1322), 1,
      anon_sym_LBRACE,
    STATE(605), 1,
      sym_type_parameters,
  [16984] = 3,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(1324), 1,
      anon_sym_LBRACE,
    STATE(603), 1,
      sym_type_parameters,
  [16994] = 2,
    ACTIONS(1326), 1,
      anon_sym_LF,
    ACTIONS(1328), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17002] = 2,
    ACTIONS(1330), 1,
      anon_sym_LF,
    ACTIONS(1332), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17010] = 3,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(1047), 1,
      anon_sym_EQ,
    STATE(504), 1,
      sym_block_expression,
  [17020] = 2,
    ACTIONS(1035), 1,
      anon_sym_LF,
    ACTIONS(1037), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17028] = 3,
    ACTIONS(1104), 1,
      anon_sym_COLON,
    ACTIONS(1334), 1,
      anon_sym_EQ,
    STATE(602), 1,
      sym_type_annotation,
  [17038] = 2,
    ACTIONS(1336), 1,
      anon_sym_LF,
    ACTIONS(1338), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17046] = 2,
    ACTIONS(1340), 1,
      anon_sym_LF,
    ACTIONS(1342), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17054] = 1,
    ACTIONS(1344), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [17060] = 3,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
    ACTIONS(1346), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_enum_constructor_repeat1,
  [17070] = 2,
    ACTIONS(1348), 1,
      anon_sym_LF,
    ACTIONS(1350), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17078] = 3,
    ACTIONS(1090), 1,
      anon_sym_RBRACE,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_struct_field_expression_repeat1,
  [17088] = 3,
    ACTIONS(1104), 1,
      anon_sym_COLON,
    ACTIONS(1354), 1,
      anon_sym_EQ,
    STATE(610), 1,
      sym_type_annotation,
  [17098] = 2,
    ACTIONS(1092), 1,
      anon_sym_LF,
    ACTIONS(1094), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17106] = 3,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_enum_constructor_repeat1,
  [17116] = 3,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    ACTIONS(1358), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym_apply_expression_repeat1,
  [17126] = 2,
    ACTIONS(1360), 1,
      anon_sym_LF,
    ACTIONS(1362), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17134] = 1,
    ACTIONS(1191), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17140] = 3,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym_apply_expression_repeat1,
  [17150] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_RBRACK,
    STATE(484), 1,
      aux_sym_enum_constructor_repeat1,
  [17160] = 2,
    ACTIONS(1086), 1,
      anon_sym_LF,
    ACTIONS(1370), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17168] = 2,
    ACTIONS(1088), 1,
      anon_sym_LF,
    ACTIONS(1372), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17176] = 3,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_enum_constructor_repeat1,
  [17186] = 3,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    ACTIONS(1378), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_parameters_repeat1,
  [17196] = 3,
    ACTIONS(1211), 1,
      sym_lowercase_identifier,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      sym_parameter,
  [17206] = 1,
    ACTIONS(1380), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17212] = 3,
    ACTIONS(1301), 1,
      sym_identifier,
    ACTIONS(1382), 1,
      anon_sym_RBRACK,
    STATE(577), 1,
      sym_type_identifier,
  [17222] = 3,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
    ACTIONS(1384), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_enum_constructor_repeat1,
  [17232] = 2,
    ACTIONS(1386), 1,
      anon_sym_LF,
    ACTIONS(1388), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17240] = 2,
    ACTIONS(1390), 1,
      anon_sym_LF,
    ACTIONS(1392), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17248] = 2,
    ACTIONS(1049), 1,
      anon_sym_LF,
    ACTIONS(1051), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17256] = 2,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(1394), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [17264] = 3,
    ACTIONS(1398), 1,
      anon_sym_RBRACE,
    ACTIONS(1400), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym_struct_field_expression_repeat1,
  [17274] = 2,
    ACTIONS(1402), 1,
      anon_sym_LF,
    ACTIONS(1404), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17282] = 3,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    ACTIONS(1408), 1,
      anon_sym_COMMA,
    STATE(497), 1,
      aux_sym_enum_constructor_repeat1,
  [17292] = 3,
    ACTIONS(1410), 1,
      anon_sym_COMMA,
    ACTIONS(1412), 1,
      anon_sym_RBRACK,
    STATE(465), 1,
      aux_sym_type_parameters_repeat1,
  [17302] = 2,
    ACTIONS(1118), 1,
      anon_sym_LF,
    ACTIONS(1414), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17310] = 2,
    ACTIONS(1416), 1,
      anon_sym_LF,
    ACTIONS(1418), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17318] = 3,
    ACTIONS(1420), 1,
      anon_sym_RPAREN,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym_enum_constructor_repeat1,
  [17328] = 2,
    ACTIONS(1424), 1,
      anon_sym_LF,
    ACTIONS(1426), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17336] = 1,
    ACTIONS(1120), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [17342] = 2,
    ACTIONS(1428), 1,
      anon_sym_LF,
    ACTIONS(1430), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17350] = 3,
    ACTIONS(1301), 1,
      sym_identifier,
    ACTIONS(1412), 1,
      anon_sym_RBRACK,
    STATE(577), 1,
      sym_type_identifier,
  [17360] = 2,
    ACTIONS(1432), 1,
      anon_sym_LF,
    ACTIONS(1434), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17368] = 2,
    ACTIONS(1436), 1,
      anon_sym_LF,
    ACTIONS(1438), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17376] = 3,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(865), 1,
      anon_sym_EQ,
    STATE(537), 1,
      sym_block_expression,
  [17386] = 2,
    ACTIONS(1440), 1,
      anon_sym_LF,
    ACTIONS(1442), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17394] = 3,
    ACTIONS(1444), 1,
      anon_sym_COMMA,
    ACTIONS(1446), 1,
      anon_sym_RBRACK,
    STATE(465), 1,
      aux_sym_type_parameters_repeat1,
  [17404] = 2,
    ACTIONS(1133), 1,
      anon_sym_LF,
    ACTIONS(1448), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17412] = 3,
    ACTIONS(1301), 1,
      sym_identifier,
    ACTIONS(1446), 1,
      anon_sym_RBRACK,
    STATE(577), 1,
      sym_type_identifier,
  [17422] = 2,
    ACTIONS(1450), 1,
      anon_sym_LF,
    ACTIONS(1452), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17430] = 3,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(940), 1,
      anon_sym_as,
    ACTIONS(1454), 1,
      anon_sym_EQ_GT,
  [17440] = 3,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(1456), 1,
      anon_sym_LBRACE,
    STATE(626), 1,
      sym_type_parameters,
  [17450] = 3,
    ACTIONS(1458), 1,
      anon_sym_COMMA,
    ACTIONS(1460), 1,
      anon_sym_RBRACK,
    STATE(510), 1,
      aux_sym_type_parameters_repeat1,
  [17460] = 3,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(1462), 1,
      anon_sym_EQ,
    STATE(550), 1,
      sym_block_expression,
  [17470] = 2,
    ACTIONS(1464), 1,
      anon_sym_LF,
    ACTIONS(1466), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17478] = 2,
    ACTIONS(1468), 1,
      anon_sym_LF,
    ACTIONS(1470), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17486] = 3,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(1472), 1,
      anon_sym_LPAREN,
    STATE(629), 1,
      sym_type_parameters,
  [17496] = 3,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    ACTIONS(1474), 1,
      anon_sym_COMMA,
    STATE(462), 1,
      aux_sym_enum_constructor_repeat1,
  [17506] = 2,
    ACTIONS(1476), 1,
      anon_sym_LF,
    ACTIONS(1478), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17514] = 3,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    ACTIONS(1474), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_enum_constructor_repeat1,
  [17524] = 3,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(968), 1,
      anon_sym_EQ,
    STATE(485), 1,
      sym_block_expression,
  [17534] = 2,
    ACTIONS(1480), 1,
      anon_sym_LF,
    ACTIONS(1482), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17542] = 3,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(1484), 1,
      anon_sym_LBRACE,
    STATE(619), 1,
      sym_type_parameters,
  [17552] = 3,
    ACTIONS(1104), 1,
      anon_sym_COLON,
    ACTIONS(1486), 1,
      anon_sym_EQ,
    STATE(595), 1,
      sym_type_annotation,
  [17562] = 2,
    ACTIONS(1076), 1,
      anon_sym_LF,
    ACTIONS(1488), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17570] = 2,
    ACTIONS(1096), 1,
      anon_sym_LF,
    ACTIONS(1098), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17578] = 3,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      aux_sym_apply_expression_repeat1,
  [17588] = 2,
    ACTIONS(1492), 1,
      anon_sym_COLON,
    ACTIONS(1494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17596] = 2,
    ACTIONS(1496), 1,
      anon_sym_LF,
    ACTIONS(1498), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17604] = 2,
    ACTIONS(1009), 1,
      anon_sym_LF,
    ACTIONS(1500), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17612] = 2,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(627), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17620] = 3,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1504), 1,
      anon_sym_RBRACK,
    STATE(522), 1,
      aux_sym_type_parameters_repeat1,
  [17630] = 2,
    ACTIONS(1003), 1,
      anon_sym_LF,
    ACTIONS(1506), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17638] = 3,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(1508), 1,
      sym_lowercase_identifier,
    STATE(407), 1,
      sym_parameters,
  [17648] = 2,
    ACTIONS(1510), 1,
      anon_sym_LF,
    ACTIONS(1512), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17656] = 2,
    ACTIONS(1029), 1,
      anon_sym_LF,
    ACTIONS(1514), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17664] = 3,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
    ACTIONS(1518), 1,
      anon_sym_COMMA,
    STATE(498), 1,
      aux_sym_parameters_repeat1,
  [17674] = 3,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(1520), 1,
      anon_sym_COMMA,
    STATE(535), 1,
      aux_sym_enum_constructor_repeat1,
  [17684] = 1,
    ACTIONS(1522), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17690] = 2,
    ACTIONS(1015), 1,
      anon_sym_LF,
    ACTIONS(1524), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17698] = 1,
    ACTIONS(1526), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17704] = 2,
    ACTIONS(1528), 1,
      anon_sym_LF,
    ACTIONS(1530), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17712] = 2,
    ACTIONS(1532), 1,
      anon_sym_LF,
    ACTIONS(1534), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17720] = 1,
    ACTIONS(1536), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [17726] = 2,
    ACTIONS(1538), 1,
      anon_sym_LF,
    ACTIONS(1540), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17734] = 2,
    ACTIONS(1542), 1,
      anon_sym_LF,
    ACTIONS(1544), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17742] = 2,
    ACTIONS(1116), 1,
      anon_sym_LF,
    ACTIONS(1546), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17750] = 2,
    ACTIONS(1548), 1,
      anon_sym_LF,
    ACTIONS(1550), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17758] = 2,
    ACTIONS(1108), 1,
      anon_sym_LF,
    ACTIONS(1552), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17766] = 1,
    ACTIONS(1135), 2,
      anon_sym_RBRACE,
      sym_uppercase_identifier,
  [17771] = 1,
    ACTIONS(1215), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17776] = 2,
    ACTIONS(1211), 1,
      sym_lowercase_identifier,
    STATE(566), 1,
      sym_parameter,
  [17783] = 2,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    STATE(457), 1,
      sym_block_expression,
  [17790] = 2,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    STATE(576), 1,
      sym_string_literal,
  [17797] = 2,
    ACTIONS(1554), 1,
      sym_lowercase_identifier,
    ACTIONS(1556), 1,
      sym_mutability,
  [17804] = 2,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    STATE(430), 1,
      sym_parameters,
  [17811] = 2,
    ACTIONS(1301), 1,
      sym_identifier,
    STATE(528), 1,
      sym_type_identifier,
  [17818] = 2,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    STATE(407), 1,
      sym_parameters,
  [17825] = 2,
    ACTIONS(1558), 1,
      anon_sym_DQUOTE,
    STATE(481), 1,
      sym_string_literal,
  [17832] = 1,
    ACTIONS(1305), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [17837] = 2,
    ACTIONS(1558), 1,
      anon_sym_DQUOTE,
    STATE(459), 1,
      sym_string_literal,
  [17844] = 1,
    ACTIONS(1297), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17849] = 2,
    ACTIONS(1301), 1,
      sym_identifier,
    STATE(577), 1,
      sym_type_identifier,
  [17856] = 1,
    ACTIONS(1560), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17861] = 2,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    STATE(591), 1,
      sym_string_literal,
  [17868] = 2,
    ACTIONS(1558), 1,
      anon_sym_DQUOTE,
    STATE(485), 1,
      sym_string_literal,
  [17875] = 1,
    ACTIONS(1402), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [17880] = 2,
    ACTIONS(1558), 1,
      anon_sym_DQUOTE,
    STATE(504), 1,
      sym_string_literal,
  [17887] = 2,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    STATE(583), 1,
      sym_string_literal,
  [17894] = 2,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    STATE(411), 1,
      sym_parameters,
  [17901] = 2,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block_expression,
  [17908] = 2,
    ACTIONS(1301), 1,
      sym_identifier,
    STATE(547), 1,
      sym_type_identifier,
  [17915] = 1,
    ACTIONS(1562), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17920] = 2,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_block_expression,
  [17927] = 2,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    STATE(574), 1,
      sym_string_literal,
  [17934] = 2,
    ACTIONS(1558), 1,
      anon_sym_DQUOTE,
    STATE(550), 1,
      sym_string_literal,
  [17941] = 2,
    ACTIONS(1564), 1,
      anon_sym_RBRACE,
    ACTIONS(1566), 1,
      anon_sym_COMMA,
  [17948] = 2,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    STATE(581), 1,
      sym_string_literal,
  [17955] = 1,
    ACTIONS(1568), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [17960] = 1,
    ACTIONS(1570), 1,
      anon_sym_EQ,
  [17964] = 1,
    ACTIONS(1572), 1,
      sym_dot_identifier,
  [17968] = 1,
    ACTIONS(1574), 1,
      sym_dot_identifier,
  [17972] = 1,
    ACTIONS(1576), 1,
      sym_colon_colon_uppercase_identifier,
  [17976] = 1,
    ACTIONS(1578), 1,
      anon_sym_RBRACE,
  [17980] = 1,
    ACTIONS(1580), 1,
      anon_sym_RBRACE,
  [17984] = 1,
    ACTIONS(1582), 1,
      anon_sym_RBRACE,
  [17988] = 1,
    ACTIONS(1486), 1,
      anon_sym_EQ,
  [17992] = 1,
    ACTIONS(1484), 1,
      anon_sym_LBRACE,
  [17996] = 1,
    ACTIONS(1584), 1,
      anon_sym_RPAREN,
  [18000] = 1,
    ACTIONS(1456), 1,
      anon_sym_LBRACE,
  [18004] = 1,
    ACTIONS(1566), 1,
      anon_sym_COMMA,
  [18008] = 1,
    ACTIONS(1586), 1,
      anon_sym_LPAREN,
  [18012] = 1,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
  [18016] = 1,
    ACTIONS(1588), 1,
      anon_sym_COLON,
  [18020] = 1,
    ACTIONS(1590), 1,
      anon_sym_EQ,
  [18024] = 1,
    ACTIONS(1592), 1,
      anon_sym_EQ,
  [18028] = 1,
    ACTIONS(1594), 1,
      anon_sym_RPAREN,
  [18032] = 1,
    ACTIONS(1596), 1,
      sym_lowercase_identifier,
  [18036] = 1,
    ACTIONS(1598), 1,
      sym_identifier,
  [18040] = 1,
    ACTIONS(1600), 1,
      anon_sym_RBRACK,
  [18044] = 1,
    ACTIONS(1602), 1,
      sym_lowercase_identifier,
  [18048] = 1,
    ACTIONS(976), 1,
      anon_sym_RBRACE,
  [18052] = 1,
    ACTIONS(1604), 1,
      sym_identifier,
  [18056] = 1,
    ACTIONS(1606), 1,
      anon_sym_LBRACE,
  [18060] = 1,
    ACTIONS(1608), 1,
      sym_identifier,
  [18064] = 1,
    ACTIONS(1610), 1,
      sym_identifier,
  [18068] = 1,
    ACTIONS(1612), 1,
      anon_sym_LBRACE,
  [18072] = 1,
    ACTIONS(1614), 1,
      sym_colon_colon_lowercase_identifier,
  [18076] = 1,
    ACTIONS(1616), 1,
      sym_lowercase_identifier,
  [18080] = 1,
    ACTIONS(1618), 1,
      anon_sym_RBRACE,
  [18084] = 1,
    ACTIONS(1620), 1,
      anon_sym_LBRACE,
  [18088] = 1,
    ACTIONS(1622), 1,
      anon_sym_RPAREN,
  [18092] = 1,
    ACTIONS(1624), 1,
      sym_dot_identifier,
  [18096] = 1,
    ACTIONS(1626), 1,
      anon_sym_LPAREN,
  [18100] = 1,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
  [18104] = 1,
    ACTIONS(1628), 1,
      anon_sym_RBRACE,
  [18108] = 1,
    ACTIONS(1630), 1,
      anon_sym_LBRACE,
  [18112] = 1,
    ACTIONS(1632), 1,
      anon_sym_EQ,
  [18116] = 1,
    ACTIONS(1634), 1,
      anon_sym_COLON_EQ,
  [18120] = 1,
    ACTIONS(1636), 1,
      anon_sym_readonly,
  [18124] = 1,
    ACTIONS(1638), 1,
      sym_lowercase_identifier,
  [18128] = 1,
    ACTIONS(1640), 1,
      sym_colon_colon_uppercase_identifier,
  [18132] = 1,
    ACTIONS(1642), 1,
      anon_sym_RBRACE,
  [18136] = 1,
    ACTIONS(1644), 1,
      anon_sym_COLON,
  [18140] = 1,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
  [18144] = 1,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
  [18148] = 1,
    ACTIONS(1646), 1,
      anon_sym_RPAREN,
  [18152] = 1,
    ACTIONS(1648), 1,
      sym_dot_identifier,
  [18156] = 1,
    ACTIONS(1650), 1,
      sym_lowercase_identifier,
  [18160] = 1,
    ACTIONS(1652), 1,
      ts_builtin_sym_end,
  [18164] = 1,
    ACTIONS(1654), 1,
      sym_identifier,
  [18168] = 1,
    ACTIONS(1656), 1,
      anon_sym_COLON,
  [18172] = 1,
    ACTIONS(1658), 1,
      sym_lowercase_identifier,
  [18176] = 1,
    ACTIONS(1660), 1,
      anon_sym_LPAREN,
  [18180] = 1,
    ACTIONS(1662), 1,
      sym_identifier,
  [18184] = 1,
    ACTIONS(1664), 1,
      sym_identifier,
  [18188] = 1,
    ACTIONS(1666), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 260,
  [SMALL_STATE(7)] = 390,
  [SMALL_STATE(8)] = 520,
  [SMALL_STATE(9)] = 650,
  [SMALL_STATE(10)] = 780,
  [SMALL_STATE(11)] = 910,
  [SMALL_STATE(12)] = 1005,
  [SMALL_STATE(13)] = 1096,
  [SMALL_STATE(14)] = 1187,
  [SMALL_STATE(15)] = 1278,
  [SMALL_STATE(16)] = 1369,
  [SMALL_STATE(17)] = 1460,
  [SMALL_STATE(18)] = 1551,
  [SMALL_STATE(19)] = 1642,
  [SMALL_STATE(20)] = 1733,
  [SMALL_STATE(21)] = 1824,
  [SMALL_STATE(22)] = 1915,
  [SMALL_STATE(23)] = 2006,
  [SMALL_STATE(24)] = 2097,
  [SMALL_STATE(25)] = 2188,
  [SMALL_STATE(26)] = 2279,
  [SMALL_STATE(27)] = 2370,
  [SMALL_STATE(28)] = 2461,
  [SMALL_STATE(29)] = 2552,
  [SMALL_STATE(30)] = 2643,
  [SMALL_STATE(31)] = 2734,
  [SMALL_STATE(32)] = 2825,
  [SMALL_STATE(33)] = 2916,
  [SMALL_STATE(34)] = 3007,
  [SMALL_STATE(35)] = 3098,
  [SMALL_STATE(36)] = 3189,
  [SMALL_STATE(37)] = 3277,
  [SMALL_STATE(38)] = 3365,
  [SMALL_STATE(39)] = 3453,
  [SMALL_STATE(40)] = 3541,
  [SMALL_STATE(41)] = 3629,
  [SMALL_STATE(42)] = 3717,
  [SMALL_STATE(43)] = 3805,
  [SMALL_STATE(44)] = 3893,
  [SMALL_STATE(45)] = 3981,
  [SMALL_STATE(46)] = 4069,
  [SMALL_STATE(47)] = 4157,
  [SMALL_STATE(48)] = 4245,
  [SMALL_STATE(49)] = 4333,
  [SMALL_STATE(50)] = 4421,
  [SMALL_STATE(51)] = 4509,
  [SMALL_STATE(52)] = 4597,
  [SMALL_STATE(53)] = 4685,
  [SMALL_STATE(54)] = 4773,
  [SMALL_STATE(55)] = 4861,
  [SMALL_STATE(56)] = 4949,
  [SMALL_STATE(57)] = 5037,
  [SMALL_STATE(58)] = 5125,
  [SMALL_STATE(59)] = 5213,
  [SMALL_STATE(60)] = 5301,
  [SMALL_STATE(61)] = 5389,
  [SMALL_STATE(62)] = 5477,
  [SMALL_STATE(63)] = 5565,
  [SMALL_STATE(64)] = 5653,
  [SMALL_STATE(65)] = 5741,
  [SMALL_STATE(66)] = 5829,
  [SMALL_STATE(67)] = 5917,
  [SMALL_STATE(68)] = 6005,
  [SMALL_STATE(69)] = 6093,
  [SMALL_STATE(70)] = 6181,
  [SMALL_STATE(71)] = 6269,
  [SMALL_STATE(72)] = 6357,
  [SMALL_STATE(73)] = 6397,
  [SMALL_STATE(74)] = 6437,
  [SMALL_STATE(75)] = 6476,
  [SMALL_STATE(76)] = 6515,
  [SMALL_STATE(77)] = 6554,
  [SMALL_STATE(78)] = 6593,
  [SMALL_STATE(79)] = 6633,
  [SMALL_STATE(80)] = 6704,
  [SMALL_STATE(81)] = 6739,
  [SMALL_STATE(82)] = 6776,
  [SMALL_STATE(83)] = 6811,
  [SMALL_STATE(84)] = 6852,
  [SMALL_STATE(85)] = 6895,
  [SMALL_STATE(86)] = 6929,
  [SMALL_STATE(87)] = 6965,
  [SMALL_STATE(88)] = 6999,
  [SMALL_STATE(89)] = 7033,
  [SMALL_STATE(90)] = 7067,
  [SMALL_STATE(91)] = 7101,
  [SMALL_STATE(92)] = 7135,
  [SMALL_STATE(93)] = 7169,
  [SMALL_STATE(94)] = 7237,
  [SMALL_STATE(95)] = 7305,
  [SMALL_STATE(96)] = 7339,
  [SMALL_STATE(97)] = 7407,
  [SMALL_STATE(98)] = 7441,
  [SMALL_STATE(99)] = 7475,
  [SMALL_STATE(100)] = 7509,
  [SMALL_STATE(101)] = 7543,
  [SMALL_STATE(102)] = 7577,
  [SMALL_STATE(103)] = 7611,
  [SMALL_STATE(104)] = 7645,
  [SMALL_STATE(105)] = 7679,
  [SMALL_STATE(106)] = 7713,
  [SMALL_STATE(107)] = 7781,
  [SMALL_STATE(108)] = 7849,
  [SMALL_STATE(109)] = 7883,
  [SMALL_STATE(110)] = 7917,
  [SMALL_STATE(111)] = 7951,
  [SMALL_STATE(112)] = 8001,
  [SMALL_STATE(113)] = 8049,
  [SMALL_STATE(114)] = 8083,
  [SMALL_STATE(115)] = 8117,
  [SMALL_STATE(116)] = 8151,
  [SMALL_STATE(117)] = 8185,
  [SMALL_STATE(118)] = 8253,
  [SMALL_STATE(119)] = 8297,
  [SMALL_STATE(120)] = 8333,
  [SMALL_STATE(121)] = 8367,
  [SMALL_STATE(122)] = 8401,
  [SMALL_STATE(123)] = 8441,
  [SMALL_STATE(124)] = 8475,
  [SMALL_STATE(125)] = 8509,
  [SMALL_STATE(126)] = 8543,
  [SMALL_STATE(127)] = 8577,
  [SMALL_STATE(128)] = 8611,
  [SMALL_STATE(129)] = 8645,
  [SMALL_STATE(130)] = 8679,
  [SMALL_STATE(131)] = 8713,
  [SMALL_STATE(132)] = 8747,
  [SMALL_STATE(133)] = 8781,
  [SMALL_STATE(134)] = 8815,
  [SMALL_STATE(135)] = 8849,
  [SMALL_STATE(136)] = 8883,
  [SMALL_STATE(137)] = 8919,
  [SMALL_STATE(138)] = 8953,
  [SMALL_STATE(139)] = 9021,
  [SMALL_STATE(140)] = 9056,
  [SMALL_STATE(141)] = 9093,
  [SMALL_STATE(142)] = 9128,
  [SMALL_STATE(143)] = 9190,
  [SMALL_STATE(144)] = 9252,
  [SMALL_STATE(145)] = 9314,
  [SMALL_STATE(146)] = 9376,
  [SMALL_STATE(147)] = 9438,
  [SMALL_STATE(148)] = 9470,
  [SMALL_STATE(149)] = 9504,
  [SMALL_STATE(150)] = 9538,
  [SMALL_STATE(151)] = 9570,
  [SMALL_STATE(152)] = 9632,
  [SMALL_STATE(153)] = 9672,
  [SMALL_STATE(154)] = 9734,
  [SMALL_STATE(155)] = 9766,
  [SMALL_STATE(156)] = 9797,
  [SMALL_STATE(157)] = 9828,
  [SMALL_STATE(158)] = 9859,
  [SMALL_STATE(159)] = 9890,
  [SMALL_STATE(160)] = 9921,
  [SMALL_STATE(161)] = 9980,
  [SMALL_STATE(162)] = 10011,
  [SMALL_STATE(163)] = 10042,
  [SMALL_STATE(164)] = 10101,
  [SMALL_STATE(165)] = 10142,
  [SMALL_STATE(166)] = 10201,
  [SMALL_STATE(167)] = 10232,
  [SMALL_STATE(168)] = 10271,
  [SMALL_STATE(169)] = 10302,
  [SMALL_STATE(170)] = 10333,
  [SMALL_STATE(171)] = 10370,
  [SMALL_STATE(172)] = 10401,
  [SMALL_STATE(173)] = 10434,
  [SMALL_STATE(174)] = 10467,
  [SMALL_STATE(175)] = 10500,
  [SMALL_STATE(176)] = 10531,
  [SMALL_STATE(177)] = 10566,
  [SMALL_STATE(178)] = 10597,
  [SMALL_STATE(179)] = 10656,
  [SMALL_STATE(180)] = 10699,
  [SMALL_STATE(181)] = 10758,
  [SMALL_STATE(182)] = 10789,
  [SMALL_STATE(183)] = 10820,
  [SMALL_STATE(184)] = 10851,
  [SMALL_STATE(185)] = 10894,
  [SMALL_STATE(186)] = 10925,
  [SMALL_STATE(187)] = 10956,
  [SMALL_STATE(188)] = 10987,
  [SMALL_STATE(189)] = 11018,
  [SMALL_STATE(190)] = 11049,
  [SMALL_STATE(191)] = 11080,
  [SMALL_STATE(192)] = 11111,
  [SMALL_STATE(193)] = 11142,
  [SMALL_STATE(194)] = 11173,
  [SMALL_STATE(195)] = 11204,
  [SMALL_STATE(196)] = 11235,
  [SMALL_STATE(197)] = 11266,
  [SMALL_STATE(198)] = 11297,
  [SMALL_STATE(199)] = 11328,
  [SMALL_STATE(200)] = 11387,
  [SMALL_STATE(201)] = 11418,
  [SMALL_STATE(202)] = 11449,
  [SMALL_STATE(203)] = 11480,
  [SMALL_STATE(204)] = 11511,
  [SMALL_STATE(205)] = 11542,
  [SMALL_STATE(206)] = 11573,
  [SMALL_STATE(207)] = 11604,
  [SMALL_STATE(208)] = 11635,
  [SMALL_STATE(209)] = 11678,
  [SMALL_STATE(210)] = 11709,
  [SMALL_STATE(211)] = 11740,
  [SMALL_STATE(212)] = 11771,
  [SMALL_STATE(213)] = 11802,
  [SMALL_STATE(214)] = 11833,
  [SMALL_STATE(215)] = 11864,
  [SMALL_STATE(216)] = 11923,
  [SMALL_STATE(217)] = 11954,
  [SMALL_STATE(218)] = 11994,
  [SMALL_STATE(219)] = 12034,
  [SMALL_STATE(220)] = 12089,
  [SMALL_STATE(221)] = 12118,
  [SMALL_STATE(222)] = 12173,
  [SMALL_STATE(223)] = 12217,
  [SMALL_STATE(224)] = 12261,
  [SMALL_STATE(225)] = 12309,
  [SMALL_STATE(226)] = 12353,
  [SMALL_STATE(227)] = 12405,
  [SMALL_STATE(228)] = 12449,
  [SMALL_STATE(229)] = 12493,
  [SMALL_STATE(230)] = 12537,
  [SMALL_STATE(231)] = 12581,
  [SMALL_STATE(232)] = 12625,
  [SMALL_STATE(233)] = 12669,
  [SMALL_STATE(234)] = 12721,
  [SMALL_STATE(235)] = 12773,
  [SMALL_STATE(236)] = 12817,
  [SMALL_STATE(237)] = 12869,
  [SMALL_STATE(238)] = 12921,
  [SMALL_STATE(239)] = 12965,
  [SMALL_STATE(240)] = 13009,
  [SMALL_STATE(241)] = 13061,
  [SMALL_STATE(242)] = 13110,
  [SMALL_STATE(243)] = 13157,
  [SMALL_STATE(244)] = 13206,
  [SMALL_STATE(245)] = 13252,
  [SMALL_STATE(246)] = 13298,
  [SMALL_STATE(247)] = 13344,
  [SMALL_STATE(248)] = 13387,
  [SMALL_STATE(249)] = 13435,
  [SMALL_STATE(250)] = 13483,
  [SMALL_STATE(251)] = 13505,
  [SMALL_STATE(252)] = 13524,
  [SMALL_STATE(253)] = 13542,
  [SMALL_STATE(254)] = 13570,
  [SMALL_STATE(255)] = 13598,
  [SMALL_STATE(256)] = 13626,
  [SMALL_STATE(257)] = 13654,
  [SMALL_STATE(258)] = 13682,
  [SMALL_STATE(259)] = 13710,
  [SMALL_STATE(260)] = 13738,
  [SMALL_STATE(261)] = 13766,
  [SMALL_STATE(262)] = 13794,
  [SMALL_STATE(263)] = 13822,
  [SMALL_STATE(264)] = 13850,
  [SMALL_STATE(265)] = 13878,
  [SMALL_STATE(266)] = 13896,
  [SMALL_STATE(267)] = 13924,
  [SMALL_STATE(268)] = 13952,
  [SMALL_STATE(269)] = 13980,
  [SMALL_STATE(270)] = 14008,
  [SMALL_STATE(271)] = 14036,
  [SMALL_STATE(272)] = 14051,
  [SMALL_STATE(273)] = 14066,
  [SMALL_STATE(274)] = 14091,
  [SMALL_STATE(275)] = 14108,
  [SMALL_STATE(276)] = 14123,
  [SMALL_STATE(277)] = 14148,
  [SMALL_STATE(278)] = 14173,
  [SMALL_STATE(279)] = 14198,
  [SMALL_STATE(280)] = 14223,
  [SMALL_STATE(281)] = 14248,
  [SMALL_STATE(282)] = 14273,
  [SMALL_STATE(283)] = 14288,
  [SMALL_STATE(284)] = 14303,
  [SMALL_STATE(285)] = 14318,
  [SMALL_STATE(286)] = 14333,
  [SMALL_STATE(287)] = 14358,
  [SMALL_STATE(288)] = 14383,
  [SMALL_STATE(289)] = 14408,
  [SMALL_STATE(290)] = 14433,
  [SMALL_STATE(291)] = 14448,
  [SMALL_STATE(292)] = 14463,
  [SMALL_STATE(293)] = 14488,
  [SMALL_STATE(294)] = 14513,
  [SMALL_STATE(295)] = 14538,
  [SMALL_STATE(296)] = 14563,
  [SMALL_STATE(297)] = 14588,
  [SMALL_STATE(298)] = 14603,
  [SMALL_STATE(299)] = 14618,
  [SMALL_STATE(300)] = 14643,
  [SMALL_STATE(301)] = 14658,
  [SMALL_STATE(302)] = 14683,
  [SMALL_STATE(303)] = 14708,
  [SMALL_STATE(304)] = 14723,
  [SMALL_STATE(305)] = 14738,
  [SMALL_STATE(306)] = 14763,
  [SMALL_STATE(307)] = 14788,
  [SMALL_STATE(308)] = 14803,
  [SMALL_STATE(309)] = 14831,
  [SMALL_STATE(310)] = 14843,
  [SMALL_STATE(311)] = 14855,
  [SMALL_STATE(312)] = 14883,
  [SMALL_STATE(313)] = 14895,
  [SMALL_STATE(314)] = 14920,
  [SMALL_STATE(315)] = 14945,
  [SMALL_STATE(316)] = 14970,
  [SMALL_STATE(317)] = 14995,
  [SMALL_STATE(318)] = 15012,
  [SMALL_STATE(319)] = 15037,
  [SMALL_STATE(320)] = 15062,
  [SMALL_STATE(321)] = 15087,
  [SMALL_STATE(322)] = 15112,
  [SMALL_STATE(323)] = 15137,
  [SMALL_STATE(324)] = 15162,
  [SMALL_STATE(325)] = 15187,
  [SMALL_STATE(326)] = 15212,
  [SMALL_STATE(327)] = 15230,
  [SMALL_STATE(328)] = 15248,
  [SMALL_STATE(329)] = 15270,
  [SMALL_STATE(330)] = 15292,
  [SMALL_STATE(331)] = 15308,
  [SMALL_STATE(332)] = 15326,
  [SMALL_STATE(333)] = 15342,
  [SMALL_STATE(334)] = 15358,
  [SMALL_STATE(335)] = 15374,
  [SMALL_STATE(336)] = 15390,
  [SMALL_STATE(337)] = 15406,
  [SMALL_STATE(338)] = 15422,
  [SMALL_STATE(339)] = 15438,
  [SMALL_STATE(340)] = 15452,
  [SMALL_STATE(341)] = 15474,
  [SMALL_STATE(342)] = 15492,
  [SMALL_STATE(343)] = 15512,
  [SMALL_STATE(344)] = 15532,
  [SMALL_STATE(345)] = 15548,
  [SMALL_STATE(346)] = 15561,
  [SMALL_STATE(347)] = 15572,
  [SMALL_STATE(348)] = 15583,
  [SMALL_STATE(349)] = 15600,
  [SMALL_STATE(350)] = 15613,
  [SMALL_STATE(351)] = 15624,
  [SMALL_STATE(352)] = 15635,
  [SMALL_STATE(353)] = 15643,
  [SMALL_STATE(354)] = 15651,
  [SMALL_STATE(355)] = 15667,
  [SMALL_STATE(356)] = 15675,
  [SMALL_STATE(357)] = 15683,
  [SMALL_STATE(358)] = 15697,
  [SMALL_STATE(359)] = 15705,
  [SMALL_STATE(360)] = 15719,
  [SMALL_STATE(361)] = 15735,
  [SMALL_STATE(362)] = 15743,
  [SMALL_STATE(363)] = 15759,
  [SMALL_STATE(364)] = 15771,
  [SMALL_STATE(365)] = 15783,
  [SMALL_STATE(366)] = 15791,
  [SMALL_STATE(367)] = 15807,
  [SMALL_STATE(368)] = 15821,
  [SMALL_STATE(369)] = 15837,
  [SMALL_STATE(370)] = 15853,
  [SMALL_STATE(371)] = 15861,
  [SMALL_STATE(372)] = 15873,
  [SMALL_STATE(373)] = 15889,
  [SMALL_STATE(374)] = 15905,
  [SMALL_STATE(375)] = 15919,
  [SMALL_STATE(376)] = 15927,
  [SMALL_STATE(377)] = 15941,
  [SMALL_STATE(378)] = 15955,
  [SMALL_STATE(379)] = 15967,
  [SMALL_STATE(380)] = 15983,
  [SMALL_STATE(381)] = 15999,
  [SMALL_STATE(382)] = 16015,
  [SMALL_STATE(383)] = 16023,
  [SMALL_STATE(384)] = 16039,
  [SMALL_STATE(385)] = 16055,
  [SMALL_STATE(386)] = 16071,
  [SMALL_STATE(387)] = 16079,
  [SMALL_STATE(388)] = 16087,
  [SMALL_STATE(389)] = 16101,
  [SMALL_STATE(390)] = 16113,
  [SMALL_STATE(391)] = 16127,
  [SMALL_STATE(392)] = 16139,
  [SMALL_STATE(393)] = 16155,
  [SMALL_STATE(394)] = 16169,
  [SMALL_STATE(395)] = 16183,
  [SMALL_STATE(396)] = 16199,
  [SMALL_STATE(397)] = 16207,
  [SMALL_STATE(398)] = 16221,
  [SMALL_STATE(399)] = 16231,
  [SMALL_STATE(400)] = 16239,
  [SMALL_STATE(401)] = 16247,
  [SMALL_STATE(402)] = 16258,
  [SMALL_STATE(403)] = 16271,
  [SMALL_STATE(404)] = 16282,
  [SMALL_STATE(405)] = 16289,
  [SMALL_STATE(406)] = 16302,
  [SMALL_STATE(407)] = 16311,
  [SMALL_STATE(408)] = 16324,
  [SMALL_STATE(409)] = 16331,
  [SMALL_STATE(410)] = 16342,
  [SMALL_STATE(411)] = 16351,
  [SMALL_STATE(412)] = 16364,
  [SMALL_STATE(413)] = 16373,
  [SMALL_STATE(414)] = 16382,
  [SMALL_STATE(415)] = 16389,
  [SMALL_STATE(416)] = 16400,
  [SMALL_STATE(417)] = 16411,
  [SMALL_STATE(418)] = 16422,
  [SMALL_STATE(419)] = 16435,
  [SMALL_STATE(420)] = 16448,
  [SMALL_STATE(421)] = 16459,
  [SMALL_STATE(422)] = 16468,
  [SMALL_STATE(423)] = 16479,
  [SMALL_STATE(424)] = 16490,
  [SMALL_STATE(425)] = 16501,
  [SMALL_STATE(426)] = 16512,
  [SMALL_STATE(427)] = 16521,
  [SMALL_STATE(428)] = 16534,
  [SMALL_STATE(429)] = 16547,
  [SMALL_STATE(430)] = 16558,
  [SMALL_STATE(431)] = 16571,
  [SMALL_STATE(432)] = 16584,
  [SMALL_STATE(433)] = 16595,
  [SMALL_STATE(434)] = 16606,
  [SMALL_STATE(435)] = 16617,
  [SMALL_STATE(436)] = 16628,
  [SMALL_STATE(437)] = 16639,
  [SMALL_STATE(438)] = 16652,
  [SMALL_STATE(439)] = 16662,
  [SMALL_STATE(440)] = 16672,
  [SMALL_STATE(441)] = 16682,
  [SMALL_STATE(442)] = 16692,
  [SMALL_STATE(443)] = 16700,
  [SMALL_STATE(444)] = 16706,
  [SMALL_STATE(445)] = 16716,
  [SMALL_STATE(446)] = 16724,
  [SMALL_STATE(447)] = 16734,
  [SMALL_STATE(448)] = 16740,
  [SMALL_STATE(449)] = 16750,
  [SMALL_STATE(450)] = 16760,
  [SMALL_STATE(451)] = 16770,
  [SMALL_STATE(452)] = 16780,
  [SMALL_STATE(453)] = 16790,
  [SMALL_STATE(454)] = 16798,
  [SMALL_STATE(455)] = 16808,
  [SMALL_STATE(456)] = 16818,
  [SMALL_STATE(457)] = 16826,
  [SMALL_STATE(458)] = 16834,
  [SMALL_STATE(459)] = 16842,
  [SMALL_STATE(460)] = 16850,
  [SMALL_STATE(461)] = 16858,
  [SMALL_STATE(462)] = 16866,
  [SMALL_STATE(463)] = 16876,
  [SMALL_STATE(464)] = 16886,
  [SMALL_STATE(465)] = 16894,
  [SMALL_STATE(466)] = 16904,
  [SMALL_STATE(467)] = 16914,
  [SMALL_STATE(468)] = 16924,
  [SMALL_STATE(469)] = 16934,
  [SMALL_STATE(470)] = 16942,
  [SMALL_STATE(471)] = 16950,
  [SMALL_STATE(472)] = 16958,
  [SMALL_STATE(473)] = 16964,
  [SMALL_STATE(474)] = 16974,
  [SMALL_STATE(475)] = 16984,
  [SMALL_STATE(476)] = 16994,
  [SMALL_STATE(477)] = 17002,
  [SMALL_STATE(478)] = 17010,
  [SMALL_STATE(479)] = 17020,
  [SMALL_STATE(480)] = 17028,
  [SMALL_STATE(481)] = 17038,
  [SMALL_STATE(482)] = 17046,
  [SMALL_STATE(483)] = 17054,
  [SMALL_STATE(484)] = 17060,
  [SMALL_STATE(485)] = 17070,
  [SMALL_STATE(486)] = 17078,
  [SMALL_STATE(487)] = 17088,
  [SMALL_STATE(488)] = 17098,
  [SMALL_STATE(489)] = 17106,
  [SMALL_STATE(490)] = 17116,
  [SMALL_STATE(491)] = 17126,
  [SMALL_STATE(492)] = 17134,
  [SMALL_STATE(493)] = 17140,
  [SMALL_STATE(494)] = 17150,
  [SMALL_STATE(495)] = 17160,
  [SMALL_STATE(496)] = 17168,
  [SMALL_STATE(497)] = 17176,
  [SMALL_STATE(498)] = 17186,
  [SMALL_STATE(499)] = 17196,
  [SMALL_STATE(500)] = 17206,
  [SMALL_STATE(501)] = 17212,
  [SMALL_STATE(502)] = 17222,
  [SMALL_STATE(503)] = 17232,
  [SMALL_STATE(504)] = 17240,
  [SMALL_STATE(505)] = 17248,
  [SMALL_STATE(506)] = 17256,
  [SMALL_STATE(507)] = 17264,
  [SMALL_STATE(508)] = 17274,
  [SMALL_STATE(509)] = 17282,
  [SMALL_STATE(510)] = 17292,
  [SMALL_STATE(511)] = 17302,
  [SMALL_STATE(512)] = 17310,
  [SMALL_STATE(513)] = 17318,
  [SMALL_STATE(514)] = 17328,
  [SMALL_STATE(515)] = 17336,
  [SMALL_STATE(516)] = 17342,
  [SMALL_STATE(517)] = 17350,
  [SMALL_STATE(518)] = 17360,
  [SMALL_STATE(519)] = 17368,
  [SMALL_STATE(520)] = 17376,
  [SMALL_STATE(521)] = 17386,
  [SMALL_STATE(522)] = 17394,
  [SMALL_STATE(523)] = 17404,
  [SMALL_STATE(524)] = 17412,
  [SMALL_STATE(525)] = 17422,
  [SMALL_STATE(526)] = 17430,
  [SMALL_STATE(527)] = 17440,
  [SMALL_STATE(528)] = 17450,
  [SMALL_STATE(529)] = 17460,
  [SMALL_STATE(530)] = 17470,
  [SMALL_STATE(531)] = 17478,
  [SMALL_STATE(532)] = 17486,
  [SMALL_STATE(533)] = 17496,
  [SMALL_STATE(534)] = 17506,
  [SMALL_STATE(535)] = 17514,
  [SMALL_STATE(536)] = 17524,
  [SMALL_STATE(537)] = 17534,
  [SMALL_STATE(538)] = 17542,
  [SMALL_STATE(539)] = 17552,
  [SMALL_STATE(540)] = 17562,
  [SMALL_STATE(541)] = 17570,
  [SMALL_STATE(542)] = 17578,
  [SMALL_STATE(543)] = 17588,
  [SMALL_STATE(544)] = 17596,
  [SMALL_STATE(545)] = 17604,
  [SMALL_STATE(546)] = 17612,
  [SMALL_STATE(547)] = 17620,
  [SMALL_STATE(548)] = 17630,
  [SMALL_STATE(549)] = 17638,
  [SMALL_STATE(550)] = 17648,
  [SMALL_STATE(551)] = 17656,
  [SMALL_STATE(552)] = 17664,
  [SMALL_STATE(553)] = 17674,
  [SMALL_STATE(554)] = 17684,
  [SMALL_STATE(555)] = 17690,
  [SMALL_STATE(556)] = 17698,
  [SMALL_STATE(557)] = 17704,
  [SMALL_STATE(558)] = 17712,
  [SMALL_STATE(559)] = 17720,
  [SMALL_STATE(560)] = 17726,
  [SMALL_STATE(561)] = 17734,
  [SMALL_STATE(562)] = 17742,
  [SMALL_STATE(563)] = 17750,
  [SMALL_STATE(564)] = 17758,
  [SMALL_STATE(565)] = 17766,
  [SMALL_STATE(566)] = 17771,
  [SMALL_STATE(567)] = 17776,
  [SMALL_STATE(568)] = 17783,
  [SMALL_STATE(569)] = 17790,
  [SMALL_STATE(570)] = 17797,
  [SMALL_STATE(571)] = 17804,
  [SMALL_STATE(572)] = 17811,
  [SMALL_STATE(573)] = 17818,
  [SMALL_STATE(574)] = 17825,
  [SMALL_STATE(575)] = 17832,
  [SMALL_STATE(576)] = 17837,
  [SMALL_STATE(577)] = 17844,
  [SMALL_STATE(578)] = 17849,
  [SMALL_STATE(579)] = 17856,
  [SMALL_STATE(580)] = 17861,
  [SMALL_STATE(581)] = 17868,
  [SMALL_STATE(582)] = 17875,
  [SMALL_STATE(583)] = 17880,
  [SMALL_STATE(584)] = 17887,
  [SMALL_STATE(585)] = 17894,
  [SMALL_STATE(586)] = 17901,
  [SMALL_STATE(587)] = 17908,
  [SMALL_STATE(588)] = 17915,
  [SMALL_STATE(589)] = 17920,
  [SMALL_STATE(590)] = 17927,
  [SMALL_STATE(591)] = 17934,
  [SMALL_STATE(592)] = 17941,
  [SMALL_STATE(593)] = 17948,
  [SMALL_STATE(594)] = 17955,
  [SMALL_STATE(595)] = 17960,
  [SMALL_STATE(596)] = 17964,
  [SMALL_STATE(597)] = 17968,
  [SMALL_STATE(598)] = 17972,
  [SMALL_STATE(599)] = 17976,
  [SMALL_STATE(600)] = 17980,
  [SMALL_STATE(601)] = 17984,
  [SMALL_STATE(602)] = 17988,
  [SMALL_STATE(603)] = 17992,
  [SMALL_STATE(604)] = 17996,
  [SMALL_STATE(605)] = 18000,
  [SMALL_STATE(606)] = 18004,
  [SMALL_STATE(607)] = 18008,
  [SMALL_STATE(608)] = 18012,
  [SMALL_STATE(609)] = 18016,
  [SMALL_STATE(610)] = 18020,
  [SMALL_STATE(611)] = 18024,
  [SMALL_STATE(612)] = 18028,
  [SMALL_STATE(613)] = 18032,
  [SMALL_STATE(614)] = 18036,
  [SMALL_STATE(615)] = 18040,
  [SMALL_STATE(616)] = 18044,
  [SMALL_STATE(617)] = 18048,
  [SMALL_STATE(618)] = 18052,
  [SMALL_STATE(619)] = 18056,
  [SMALL_STATE(620)] = 18060,
  [SMALL_STATE(621)] = 18064,
  [SMALL_STATE(622)] = 18068,
  [SMALL_STATE(623)] = 18072,
  [SMALL_STATE(624)] = 18076,
  [SMALL_STATE(625)] = 18080,
  [SMALL_STATE(626)] = 18084,
  [SMALL_STATE(627)] = 18088,
  [SMALL_STATE(628)] = 18092,
  [SMALL_STATE(629)] = 18096,
  [SMALL_STATE(630)] = 18100,
  [SMALL_STATE(631)] = 18104,
  [SMALL_STATE(632)] = 18108,
  [SMALL_STATE(633)] = 18112,
  [SMALL_STATE(634)] = 18116,
  [SMALL_STATE(635)] = 18120,
  [SMALL_STATE(636)] = 18124,
  [SMALL_STATE(637)] = 18128,
  [SMALL_STATE(638)] = 18132,
  [SMALL_STATE(639)] = 18136,
  [SMALL_STATE(640)] = 18140,
  [SMALL_STATE(641)] = 18144,
  [SMALL_STATE(642)] = 18148,
  [SMALL_STATE(643)] = 18152,
  [SMALL_STATE(644)] = 18156,
  [SMALL_STATE(645)] = 18160,
  [SMALL_STATE(646)] = 18164,
  [SMALL_STATE(647)] = 18168,
  [SMALL_STATE(648)] = 18172,
  [SMALL_STATE(649)] = 18176,
  [SMALL_STATE(650)] = 18180,
  [SMALL_STATE(651)] = 18184,
  [SMALL_STATE(652)] = 18188,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(139),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(15),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(180),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(149),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(326),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(189),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(156),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(47),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(549),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(32),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(61),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(59),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(546),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(636),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(36),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(11),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(186),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(312),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(643),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_expression_pun, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_pattern, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access_expression, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access_expression, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_expression, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_expression, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 5),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 4),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(297),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(199),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(348),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(391),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(76),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(77),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(79),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(74),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(312),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(596),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 5),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_expression, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_expression, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 5),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 5),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_expression, 5),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_expression, 5),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 5),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 6),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 6),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 6),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 6),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonempty_block_expression, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonempty_block_expression, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 6),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 6),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 7),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 7),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expression, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expression, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_expression, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_expression, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_value, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 4),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 4),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_clause, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 6),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 4),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 2),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 5),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_let_expression, 3),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_expression, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 5),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 5),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 5),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(353),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(317),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(652),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(651),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(650),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(648),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(354),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(646),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 1),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 5),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 5),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_pattern, 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_pattern, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 3),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 3),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 3),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 3),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_pattern, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_pattern, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 2),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 4),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 4),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 1),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_pattern, 5),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_pattern, 5),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 5),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 5),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 7),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 7),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 6),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 6),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 6),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 6),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 1),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [885] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(647),
  [888] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(353),
  [891] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(424),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [896] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(644),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pub, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(361),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(312),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(596),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2),
  [956] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(67),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(406),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 2),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(406),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 2),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 2),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 2),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 2),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern, 3),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 6),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 6),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 3),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 3),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pub_attribute, 3),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 5),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 5),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 5),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2), SHIFT_REPEAT(215),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 1),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any, 1),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 4),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 7),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 7),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 4),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 4),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 3),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 3),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 1),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(437),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [1137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(423),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_fragement, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_fragement, 1),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 1),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern_pun, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 1),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 1),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolator, 3),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolator, 3),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2), SHIFT_REPEAT(43),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2), SHIFT_REPEAT(302),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2),
  [1206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2), SHIFT_REPEAT(420),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(567),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 6),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 6),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [1264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 5),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 5),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item, 1),
  [1272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item, 1),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [1276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 3),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 3),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 6),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 6),
  [1294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(578),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2),
  [1307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2), SHIFT_REPEAT(417),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 4),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 4),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 5),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 4),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 4),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [1338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 7),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filed_single_pattern, 1),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 8),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 8),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any, 1),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 3),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [1392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression_pun, 1),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 3),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retuern_type, 2),
  [1404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retuern_type, 2),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 2),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 5),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 5),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 5),
  [1426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 5),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5),
  [1430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 5),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [1434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [1438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 4),
  [1466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 4),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [1470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4),
  [1478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 4),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [1482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 5),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [1512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [1514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [1524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [1530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4),
  [1540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 4),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 4),
  [1544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 4),
  [1546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 3),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 1),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_expression, 1),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 4),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1652] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
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
