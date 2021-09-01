#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 157
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_name = 1,
  sym__begin = 2,
  anon_sym_LBRACE = 3,
  anon_sym_ATinheritDoc = 4,
  anon_sym_RBRACE = 5,
  anon_sym_ATapi = 6,
  anon_sym_ATfilesource = 7,
  anon_sym_ATignore = 8,
  anon_sym_ATcategory = 9,
  anon_sym_ATcopyright = 10,
  anon_sym_ATtodo = 11,
  anon_sym_ATexample = 12,
  anon_sym_ATlicense = 13,
  anon_sym_ATpackage = 14,
  anon_sym_ATsource = 15,
  anon_sym_ATsubpackage = 16,
  anon_sym_ATuses = 17,
  anon_sym_ATauthor = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_ATglobal = 21,
  anon_sym_ATinternal = 22,
  anon_sym_ATlink = 23,
  anon_sym_LPAREN_RPAREN = 24,
  anon_sym_ATmethod = 25,
  anon_sym_ATparam = 26,
  anon_sym_ATproperty = 27,
  anon_sym_ATproperty_DASHread = 28,
  anon_sym_ATproperty_DASHwrite = 29,
  anon_sym_ATreturn = 30,
  anon_sym_ATsee = 31,
  anon_sym_ATthrows = 32,
  anon_sym_ATvar = 33,
  anon_sym_ATdeprecated = 34,
  anon_sym_ATsince = 35,
  anon_sym_ATversion = 36,
  anon_sym_LBRACK_RBRACK = 37,
  anon_sym_BSLASH = 38,
  aux_sym_namespace_name_as_prefix_token1 = 39,
  anon_sym_QMARK = 40,
  anon_sym_array = 41,
  anon_sym_callable = 42,
  anon_sym_iterable = 43,
  anon_sym_bool = 44,
  anon_sym_float = 45,
  anon_sym_int = 46,
  anon_sym_string = 47,
  anon_sym_void = 48,
  anon_sym_mixed = 49,
  anon_sym_static = 50,
  anon_sym_false = 51,
  anon_sym_null = 52,
  anon_sym_PIPE = 53,
  anon_sym_DOLLAR = 54,
  sym_author_name = 55,
  sym_email_address = 56,
  sym_text = 57,
  sym_version = 58,
  sym_uri = 59,
  anon_sym_LPAREN = 60,
  anon_sym_COMMA = 61,
  anon_sym_RPAREN = 62,
  anon_sym_EQ = 63,
  sym_default_value = 64,
  sym__end = 65,
  sym_document = 66,
  sym_tag = 67,
  sym_inline_tag = 68,
  sym__simple_tag_without_description = 69,
  sym__simple_tag_with_optional_description = 70,
  sym__simple_tag_with_required_description = 71,
  sym__currently_incomplete_tags = 72,
  sym__author_tag = 73,
  sym__global_tag = 74,
  sym__internal_tag = 75,
  sym__internal_inline_tag = 76,
  sym__link_tag = 77,
  sym__link_inline_tag = 78,
  sym__method_tag = 79,
  sym__param_tag = 80,
  sym__property_tag = 81,
  sym__return_tag = 82,
  sym__see_tag = 83,
  sym__see_inline_tag = 84,
  sym__throws_tag = 85,
  sym__var_tag = 86,
  sym__version_tag = 87,
  sym__type = 88,
  sym__types = 89,
  sym__regular_types = 90,
  sym__array_types = 91,
  sym_named_type = 92,
  sym_namespace_name = 93,
  sym_namespace_name_as_prefix = 94,
  sym_optional_type = 95,
  sym_primitive_type = 96,
  sym_qualified_name = 97,
  sym_union_type = 98,
  sym_variable_name = 99,
  sym_description = 100,
  sym_parameters = 101,
  sym_parameter = 102,
  sym_static = 103,
  aux_sym_document_repeat1 = 104,
  aux_sym__array_types_repeat1 = 105,
  aux_sym_namespace_name_repeat1 = 106,
  aux_sym_union_type_repeat1 = 107,
  aux_sym_description_repeat1 = 108,
  aux_sym_parameters_repeat1 = 109,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [sym__begin] = "_begin",
  [anon_sym_LBRACE] = "{",
  [anon_sym_ATinheritDoc] = "tag_name",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATapi] = "tag_name",
  [anon_sym_ATfilesource] = "tag_name",
  [anon_sym_ATignore] = "tag_name",
  [anon_sym_ATcategory] = "tag_name",
  [anon_sym_ATcopyright] = "tag_name",
  [anon_sym_ATtodo] = "tag_name",
  [anon_sym_ATexample] = "@example",
  [anon_sym_ATlicense] = "@license",
  [anon_sym_ATpackage] = "@package",
  [anon_sym_ATsource] = "@source",
  [anon_sym_ATsubpackage] = "@subpackage",
  [anon_sym_ATuses] = "@uses",
  [anon_sym_ATauthor] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_ATglobal] = "tag_name",
  [anon_sym_ATinternal] = "tag_name",
  [anon_sym_ATlink] = "tag_name",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_ATmethod] = "tag_name",
  [anon_sym_ATparam] = "tag_name",
  [anon_sym_ATproperty] = "tag_name",
  [anon_sym_ATproperty_DASHread] = "tag_name",
  [anon_sym_ATproperty_DASHwrite] = "tag_name",
  [anon_sym_ATreturn] = "tag_name",
  [anon_sym_ATsee] = "tag_name",
  [anon_sym_ATthrows] = "tag_name",
  [anon_sym_ATvar] = "tag_name",
  [anon_sym_ATdeprecated] = "tag_name",
  [anon_sym_ATsince] = "tag_name",
  [anon_sym_ATversion] = "tag_name",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_namespace_name_as_prefix_token1] = "namespace",
  [anon_sym_QMARK] = "\?",
  [anon_sym_array] = "array",
  [anon_sym_callable] = "callable",
  [anon_sym_iterable] = "iterable",
  [anon_sym_bool] = "bool",
  [anon_sym_float] = "float",
  [anon_sym_int] = "int",
  [anon_sym_string] = "string",
  [anon_sym_void] = "void",
  [anon_sym_mixed] = "mixed",
  [anon_sym_static] = "static",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_PIPE] = "|",
  [anon_sym_DOLLAR] = "$",
  [sym_author_name] = "author_name",
  [sym_email_address] = "email_address",
  [sym_text] = "text",
  [sym_version] = "version",
  [sym_uri] = "uri",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_default_value] = "default_value",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_tag] = "tag",
  [sym_inline_tag] = "inline_tag",
  [sym__simple_tag_without_description] = "_simple_tag_without_description",
  [sym__simple_tag_with_optional_description] = "_simple_tag_with_optional_description",
  [sym__simple_tag_with_required_description] = "_simple_tag_with_required_description",
  [sym__currently_incomplete_tags] = "tag_name",
  [sym__author_tag] = "_author_tag",
  [sym__global_tag] = "_global_tag",
  [sym__internal_tag] = "_internal_tag",
  [sym__internal_inline_tag] = "_internal_inline_tag",
  [sym__link_tag] = "_link_tag",
  [sym__link_inline_tag] = "_link_inline_tag",
  [sym__method_tag] = "_method_tag",
  [sym__param_tag] = "_param_tag",
  [sym__property_tag] = "_property_tag",
  [sym__return_tag] = "_return_tag",
  [sym__see_tag] = "_see_tag",
  [sym__see_inline_tag] = "_see_inline_tag",
  [sym__throws_tag] = "_throws_tag",
  [sym__var_tag] = "_var_tag",
  [sym__version_tag] = "_version_tag",
  [sym__type] = "_type",
  [sym__types] = "_types",
  [sym__regular_types] = "_regular_types",
  [sym__array_types] = "array_type",
  [sym_named_type] = "named_type",
  [sym_namespace_name] = "namespace_name",
  [sym_namespace_name_as_prefix] = "namespace_name_as_prefix",
  [sym_optional_type] = "optional_type",
  [sym_primitive_type] = "primitive_type",
  [sym_qualified_name] = "qualified_name",
  [sym_union_type] = "type_list",
  [sym_variable_name] = "variable_name",
  [sym_description] = "description",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_static] = "static",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__array_types_repeat1] = "_array_types_repeat1",
  [aux_sym_namespace_name_repeat1] = "namespace_name_repeat1",
  [aux_sym_union_type_repeat1] = "union_type_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [sym__begin] = sym__begin,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_ATinheritDoc] = anon_sym_ATinheritDoc,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATapi] = anon_sym_ATinheritDoc,
  [anon_sym_ATfilesource] = anon_sym_ATinheritDoc,
  [anon_sym_ATignore] = anon_sym_ATinheritDoc,
  [anon_sym_ATcategory] = anon_sym_ATinheritDoc,
  [anon_sym_ATcopyright] = anon_sym_ATinheritDoc,
  [anon_sym_ATtodo] = anon_sym_ATinheritDoc,
  [anon_sym_ATexample] = anon_sym_ATexample,
  [anon_sym_ATlicense] = anon_sym_ATlicense,
  [anon_sym_ATpackage] = anon_sym_ATpackage,
  [anon_sym_ATsource] = anon_sym_ATsource,
  [anon_sym_ATsubpackage] = anon_sym_ATsubpackage,
  [anon_sym_ATuses] = anon_sym_ATuses,
  [anon_sym_ATauthor] = anon_sym_ATinheritDoc,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_ATglobal] = anon_sym_ATinheritDoc,
  [anon_sym_ATinternal] = anon_sym_ATinheritDoc,
  [anon_sym_ATlink] = anon_sym_ATinheritDoc,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_ATmethod] = anon_sym_ATinheritDoc,
  [anon_sym_ATparam] = anon_sym_ATinheritDoc,
  [anon_sym_ATproperty] = anon_sym_ATinheritDoc,
  [anon_sym_ATproperty_DASHread] = anon_sym_ATinheritDoc,
  [anon_sym_ATproperty_DASHwrite] = anon_sym_ATinheritDoc,
  [anon_sym_ATreturn] = anon_sym_ATinheritDoc,
  [anon_sym_ATsee] = anon_sym_ATinheritDoc,
  [anon_sym_ATthrows] = anon_sym_ATinheritDoc,
  [anon_sym_ATvar] = anon_sym_ATinheritDoc,
  [anon_sym_ATdeprecated] = anon_sym_ATinheritDoc,
  [anon_sym_ATsince] = anon_sym_ATinheritDoc,
  [anon_sym_ATversion] = anon_sym_ATinheritDoc,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_namespace_name_as_prefix_token1] = aux_sym_namespace_name_as_prefix_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_callable] = anon_sym_callable,
  [anon_sym_iterable] = anon_sym_iterable,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_mixed] = anon_sym_mixed,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_author_name] = sym_author_name,
  [sym_email_address] = sym_email_address,
  [sym_text] = sym_text,
  [sym_version] = sym_version,
  [sym_uri] = sym_uri,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_default_value] = sym_default_value,
  [sym__end] = sym__end,
  [sym_document] = sym_document,
  [sym_tag] = sym_tag,
  [sym_inline_tag] = sym_inline_tag,
  [sym__simple_tag_without_description] = sym__simple_tag_without_description,
  [sym__simple_tag_with_optional_description] = sym__simple_tag_with_optional_description,
  [sym__simple_tag_with_required_description] = sym__simple_tag_with_required_description,
  [sym__currently_incomplete_tags] = anon_sym_ATinheritDoc,
  [sym__author_tag] = sym__author_tag,
  [sym__global_tag] = sym__global_tag,
  [sym__internal_tag] = sym__internal_tag,
  [sym__internal_inline_tag] = sym__internal_inline_tag,
  [sym__link_tag] = sym__link_tag,
  [sym__link_inline_tag] = sym__link_inline_tag,
  [sym__method_tag] = sym__method_tag,
  [sym__param_tag] = sym__param_tag,
  [sym__property_tag] = sym__property_tag,
  [sym__return_tag] = sym__return_tag,
  [sym__see_tag] = sym__see_tag,
  [sym__see_inline_tag] = sym__see_inline_tag,
  [sym__throws_tag] = sym__throws_tag,
  [sym__var_tag] = sym__var_tag,
  [sym__version_tag] = sym__version_tag,
  [sym__type] = sym__type,
  [sym__types] = sym__types,
  [sym__regular_types] = sym__regular_types,
  [sym__array_types] = sym__array_types,
  [sym_named_type] = sym_named_type,
  [sym_namespace_name] = sym_namespace_name,
  [sym_namespace_name_as_prefix] = sym_namespace_name_as_prefix,
  [sym_optional_type] = sym_optional_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_qualified_name] = sym_qualified_name,
  [sym_union_type] = sym_union_type,
  [sym_variable_name] = sym_variable_name,
  [sym_description] = sym_description,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_static] = sym_static,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__array_types_repeat1] = aux_sym__array_types_repeat1,
  [aux_sym_namespace_name_repeat1] = aux_sym_namespace_name_repeat1,
  [aux_sym_union_type_repeat1] = aux_sym_union_type_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATinheritDoc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapi] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATfilesource] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATignore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcategory] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcopyright] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATtodo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATexample] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATlicense] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsubpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATauthor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATglobal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATinternal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATlink] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmethod] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATparam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty_DASHread] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty_DASHwrite] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsee] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATthrows] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATvar] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdeprecated] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsince] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATversion] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_namespace_name_as_prefix_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iterable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_author_name] = {
    .visible = true,
    .named = true,
  },
  [sym_email_address] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_tag_without_description] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_tag_with_optional_description] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_tag_with_required_description] = {
    .visible = false,
    .named = true,
  },
  [sym__currently_incomplete_tags] = {
    .visible = true,
    .named = true,
  },
  [sym__author_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__global_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__internal_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__internal_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__link_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__link_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__method_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__param_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__property_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__return_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__see_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__see_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__throws_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__var_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__version_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__types] = {
    .visible = false,
    .named = true,
  },
  [sym__regular_types] = {
    .visible = false,
    .named = true,
  },
  [sym__array_types] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_name_as_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
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
  [sym_static] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__array_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespace_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_description,
  },
  [2] = {
    [2] = sym_description,
  },
  [3] = {
    [3] = sym_description,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(182);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(181)
      if (lookahead == '\r') SKIP(181)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '<') ADVANCE(200);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '?') ADVANCE(238);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == '<') ADVANCE(200);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '?') ADVANCE(238);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '<') ADVANCE(200);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '?') ADVANCE(238);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '*') SKIP(3)
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '?') ADVANCE(238);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '(') ADVANCE(247);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '(') ADVANCE(247);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == '<') ADVANCE(200);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '<') ADVANCE(200);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(18)
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == ' ') SKIP(18)
      if (lookahead == '*') SKIP(18)
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(252);
      END_STATE();
    case 19:
      if (lookahead == '\t') SKIP(19)
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '(') ADVANCE(247);
      if (lookahead == '*') SKIP(19)
      if (lookahead == '}') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(252);
      END_STATE();
    case 20:
      if (lookahead == '\t') ADVANCE(268);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(268);
      if (lookahead == ' ') SKIP(20)
      if (lookahead == '*') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(269);
      END_STATE();
    case 21:
      if (lookahead == '\t') SKIP(22)
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') SKIP(22)
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == '\t') SKIP(22)
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') SKIP(22)
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '\t') SKIP(23)
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '*') ADVANCE(241);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 24:
      if (lookahead == '\t') SKIP(23)
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '*') ADVANCE(242);
      if (lookahead == '<') ADVANCE(244);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(183);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '@') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == '@') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(126);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(218);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'g') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'g') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 105:
      if (lookahead == 'k') ADVANCE(204);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 107:
      if (lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 173:
      if (lookahead == 'w') ADVANCE(155);
      END_STATE();
    case 174:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 175:
      if (lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 176:
      if (lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 177:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 178:
      if (lookahead == '*' ||
          lookahead == 'x') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 180:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(245);
      END_STATE();
    case 181:
      if (eof) ADVANCE(182);
      if (lookahead == '\t') SKIP(181)
      if (lookahead == '\n') SKIP(181)
      if (lookahead == '\r') SKIP(181)
      if (lookahead == ' ') SKIP(181)
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '<') ADVANCE(200);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '?') ADVANCE(238);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATinheritDoc);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '*') ADVANCE(242);
      if (lookahead == '<') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == '<') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == 'x') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead == 'x') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(251);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(249);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(178);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead == '\t') ADVANCE(268);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(268);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__end);
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
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '*') SKIP(0)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(12)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(12)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '*') SKIP(12)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '*') SKIP(0)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_callable);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_iterable);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 17},
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
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 18},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 22},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_ATinheritDoc] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATfilesource] = ACTIONS(1),
    [anon_sym_ATignore] = ACTIONS(1),
    [anon_sym_ATcategory] = ACTIONS(1),
    [anon_sym_ATcopyright] = ACTIONS(1),
    [anon_sym_ATtodo] = ACTIONS(1),
    [anon_sym_ATexample] = ACTIONS(1),
    [anon_sym_ATlicense] = ACTIONS(1),
    [anon_sym_ATpackage] = ACTIONS(1),
    [anon_sym_ATsource] = ACTIONS(1),
    [anon_sym_ATsubpackage] = ACTIONS(1),
    [anon_sym_ATuses] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_ATglobal] = ACTIONS(1),
    [anon_sym_ATinternal] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_ATmethod] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
    [anon_sym_ATproperty] = ACTIONS(1),
    [anon_sym_ATproperty_DASHread] = ACTIONS(1),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATsee] = ACTIONS(1),
    [anon_sym_ATthrows] = ACTIONS(1),
    [anon_sym_ATvar] = ACTIONS(1),
    [anon_sym_ATdeprecated] = ACTIONS(1),
    [anon_sym_ATsince] = ACTIONS(1),
    [anon_sym_ATversion] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_namespace_name_as_prefix_token1] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_callable] = ACTIONS(1),
    [anon_sym_iterable] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_mixed] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(133),
    [sym__begin] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_ATignore,
    ACTIONS(15), 1,
      anon_sym_ATauthor,
    ACTIONS(17), 1,
      anon_sym_ATglobal,
    ACTIONS(19), 1,
      anon_sym_ATinternal,
    ACTIONS(21), 1,
      anon_sym_ATlink,
    ACTIONS(23), 1,
      anon_sym_ATmethod,
    ACTIONS(25), 1,
      anon_sym_ATparam,
    ACTIONS(27), 1,
      anon_sym_ATproperty,
    ACTIONS(31), 1,
      anon_sym_ATreturn,
    ACTIONS(33), 1,
      anon_sym_ATsee,
    ACTIONS(35), 1,
      anon_sym_ATthrows,
    ACTIONS(37), 1,
      anon_sym_ATvar,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(43), 1,
      sym__end,
    STATE(6), 1,
      sym_description,
    STATE(22), 1,
      sym__currently_incomplete_tags,
    ACTIONS(7), 2,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
    ACTIONS(29), 2,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(5), 2,
      sym_tag,
      aux_sym_document_repeat1,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(11), 3,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
    ACTIONS(39), 3,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
    ACTIONS(13), 6,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
    STATE(47), 15,
      sym__simple_tag_without_description,
      sym__simple_tag_with_optional_description,
      sym__simple_tag_with_required_description,
      sym__author_tag,
      sym__global_tag,
      sym__internal_tag,
      sym__link_tag,
      sym__method_tag,
      sym__param_tag,
      sym__property_tag,
      sym__return_tag,
      sym__see_tag,
      sym__throws_tag,
      sym__var_tag,
      sym__version_tag,
  [103] = 21,
    ACTIONS(48), 1,
      anon_sym_ATignore,
    ACTIONS(57), 1,
      anon_sym_ATauthor,
    ACTIONS(60), 1,
      anon_sym_ATglobal,
    ACTIONS(63), 1,
      anon_sym_ATinternal,
    ACTIONS(66), 1,
      anon_sym_ATlink,
    ACTIONS(69), 1,
      anon_sym_ATmethod,
    ACTIONS(72), 1,
      anon_sym_ATparam,
    ACTIONS(75), 1,
      anon_sym_ATproperty,
    ACTIONS(81), 1,
      anon_sym_ATreturn,
    ACTIONS(84), 1,
      anon_sym_ATsee,
    ACTIONS(87), 1,
      anon_sym_ATthrows,
    ACTIONS(90), 1,
      anon_sym_ATvar,
    ACTIONS(96), 1,
      sym__end,
    STATE(22), 1,
      sym__currently_incomplete_tags,
    ACTIONS(45), 2,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
    ACTIONS(78), 2,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(3), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(51), 3,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
    ACTIONS(93), 3,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
    ACTIONS(54), 6,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
    STATE(47), 15,
      sym__simple_tag_without_description,
      sym__simple_tag_with_optional_description,
      sym__simple_tag_with_required_description,
      sym__author_tag,
      sym__global_tag,
      sym__internal_tag,
      sym__link_tag,
      sym__method_tag,
      sym__param_tag,
      sym__property_tag,
      sym__return_tag,
      sym__see_tag,
      sym__throws_tag,
      sym__var_tag,
      sym__version_tag,
  [193] = 21,
    ACTIONS(9), 1,
      anon_sym_ATignore,
    ACTIONS(15), 1,
      anon_sym_ATauthor,
    ACTIONS(17), 1,
      anon_sym_ATglobal,
    ACTIONS(19), 1,
      anon_sym_ATinternal,
    ACTIONS(21), 1,
      anon_sym_ATlink,
    ACTIONS(23), 1,
      anon_sym_ATmethod,
    ACTIONS(25), 1,
      anon_sym_ATparam,
    ACTIONS(27), 1,
      anon_sym_ATproperty,
    ACTIONS(31), 1,
      anon_sym_ATreturn,
    ACTIONS(33), 1,
      anon_sym_ATsee,
    ACTIONS(35), 1,
      anon_sym_ATthrows,
    ACTIONS(37), 1,
      anon_sym_ATvar,
    ACTIONS(98), 1,
      sym__end,
    STATE(22), 1,
      sym__currently_incomplete_tags,
    ACTIONS(7), 2,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
    ACTIONS(29), 2,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(3), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(11), 3,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
    ACTIONS(39), 3,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
    ACTIONS(13), 6,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
    STATE(47), 15,
      sym__simple_tag_without_description,
      sym__simple_tag_with_optional_description,
      sym__simple_tag_with_required_description,
      sym__author_tag,
      sym__global_tag,
      sym__internal_tag,
      sym__link_tag,
      sym__method_tag,
      sym__param_tag,
      sym__property_tag,
      sym__return_tag,
      sym__see_tag,
      sym__throws_tag,
      sym__var_tag,
      sym__version_tag,
  [283] = 21,
    ACTIONS(9), 1,
      anon_sym_ATignore,
    ACTIONS(15), 1,
      anon_sym_ATauthor,
    ACTIONS(17), 1,
      anon_sym_ATglobal,
    ACTIONS(19), 1,
      anon_sym_ATinternal,
    ACTIONS(21), 1,
      anon_sym_ATlink,
    ACTIONS(23), 1,
      anon_sym_ATmethod,
    ACTIONS(25), 1,
      anon_sym_ATparam,
    ACTIONS(27), 1,
      anon_sym_ATproperty,
    ACTIONS(31), 1,
      anon_sym_ATreturn,
    ACTIONS(33), 1,
      anon_sym_ATsee,
    ACTIONS(35), 1,
      anon_sym_ATthrows,
    ACTIONS(37), 1,
      anon_sym_ATvar,
    ACTIONS(100), 1,
      sym__end,
    STATE(22), 1,
      sym__currently_incomplete_tags,
    ACTIONS(7), 2,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
    ACTIONS(29), 2,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(3), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(11), 3,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
    ACTIONS(39), 3,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
    ACTIONS(13), 6,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
    STATE(47), 15,
      sym__simple_tag_without_description,
      sym__simple_tag_with_optional_description,
      sym__simple_tag_with_required_description,
      sym__author_tag,
      sym__global_tag,
      sym__internal_tag,
      sym__link_tag,
      sym__method_tag,
      sym__param_tag,
      sym__property_tag,
      sym__return_tag,
      sym__see_tag,
      sym__throws_tag,
      sym__var_tag,
      sym__version_tag,
  [373] = 21,
    ACTIONS(9), 1,
      anon_sym_ATignore,
    ACTIONS(15), 1,
      anon_sym_ATauthor,
    ACTIONS(17), 1,
      anon_sym_ATglobal,
    ACTIONS(19), 1,
      anon_sym_ATinternal,
    ACTIONS(21), 1,
      anon_sym_ATlink,
    ACTIONS(23), 1,
      anon_sym_ATmethod,
    ACTIONS(25), 1,
      anon_sym_ATparam,
    ACTIONS(27), 1,
      anon_sym_ATproperty,
    ACTIONS(31), 1,
      anon_sym_ATreturn,
    ACTIONS(33), 1,
      anon_sym_ATsee,
    ACTIONS(35), 1,
      anon_sym_ATthrows,
    ACTIONS(37), 1,
      anon_sym_ATvar,
    ACTIONS(100), 1,
      sym__end,
    STATE(22), 1,
      sym__currently_incomplete_tags,
    ACTIONS(7), 2,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
    ACTIONS(29), 2,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(4), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(11), 3,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
    ACTIONS(39), 3,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
    ACTIONS(13), 6,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
    STATE(47), 15,
      sym__simple_tag_without_description,
      sym__simple_tag_with_optional_description,
      sym__simple_tag_with_required_description,
      sym__author_tag,
      sym__global_tag,
      sym__internal_tag,
      sym__link_tag,
      sym__method_tag,
      sym__param_tag,
      sym__property_tag,
      sym__return_tag,
      sym__see_tag,
      sym__throws_tag,
      sym__var_tag,
      sym__version_tag,
  [463] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(104), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(106), 1,
      anon_sym_ATproperty,
    STATE(50), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(102), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [513] = 4,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    STATE(108), 1,
      aux_sym_namespace_name_repeat1,
    ACTIONS(110), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(108), 31,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
      sym__end,
  [557] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(117), 1,
      anon_sym_ATproperty,
    ACTIONS(119), 1,
      sym_version,
    STATE(65), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(115), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [607] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(13), 1,
      aux_sym__array_types_repeat1,
    ACTIONS(123), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(121), 30,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_PIPE,
      sym__end,
  [650] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(129), 1,
      anon_sym_ATproperty,
    STATE(62), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(127), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [697] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(133), 1,
      anon_sym_ATproperty,
    STATE(54), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(131), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [744] = 4,
    ACTIONS(139), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(13), 1,
      aux_sym__array_types_repeat1,
    ACTIONS(137), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(135), 30,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_PIPE,
      sym__end,
  [787] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(144), 1,
      anon_sym_ATproperty,
    STATE(51), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(142), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [834] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(106), 1,
      anon_sym_ATproperty,
    STATE(50), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(102), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [881] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(148), 1,
      anon_sym_ATproperty,
    STATE(52), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(146), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [928] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(152), 1,
      anon_sym_ATproperty,
    STATE(48), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(150), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [975] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(156), 1,
      anon_sym_ATproperty,
    STATE(66), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(154), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1022] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(160), 1,
      anon_sym_ATproperty,
    STATE(57), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(158), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1069] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(164), 1,
      anon_sym_ATproperty,
    STATE(60), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(162), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1116] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(168), 1,
      anon_sym_ATproperty,
    STATE(64), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(166), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1163] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(172), 1,
      anon_sym_ATproperty,
    STATE(61), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(170), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1210] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(176), 1,
      anon_sym_ATproperty,
    STATE(59), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(174), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1257] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(180), 1,
      anon_sym_ATproperty,
    STATE(46), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(178), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1304] = 4,
    ACTIONS(186), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(10), 1,
      aux_sym__array_types_repeat1,
    ACTIONS(184), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(182), 30,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_PIPE,
      sym__end,
  [1347] = 2,
    ACTIONS(110), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(108), 31,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
      sym__end,
  [1385] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_ATproperty,
    ACTIONS(192), 1,
      sym_text,
    STATE(33), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(188), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1429] = 4,
    ACTIONS(198), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(196), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(194), 29,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1471] = 2,
    ACTIONS(202), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(200), 31,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
      sym__end,
  [1509] = 4,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    STATE(30), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(206), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(204), 29,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1551] = 2,
    ACTIONS(213), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(211), 31,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
      sym__end,
  [1589] = 2,
    ACTIONS(217), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(215), 31,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
      sym__end,
  [1627] = 5,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_ATproperty,
    ACTIONS(226), 1,
      sym_text,
    STATE(33), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(222), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1671] = 4,
    ACTIONS(198), 1,
      anon_sym_PIPE,
    STATE(30), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(231), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(229), 29,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1713] = 2,
    ACTIONS(206), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(204), 30,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_PIPE,
      sym__end,
  [1750] = 2,
    ACTIONS(213), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(211), 30,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1787] = 2,
    ACTIONS(235), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(233), 29,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1823] = 2,
    ACTIONS(239), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(237), 29,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1859] = 2,
    ACTIONS(243), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(241), 29,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1895] = 2,
    ACTIONS(247), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(245), 29,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1931] = 2,
    ACTIONS(251), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(249), 29,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [1967] = 2,
    ACTIONS(255), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(253), 29,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2003] = 15,
    ACTIONS(257), 1,
      sym_name,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(263), 1,
      anon_sym_QMARK,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_qualified_name,
    STATE(102), 1,
      sym_parameter,
    STATE(103), 1,
      sym_variable_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(136), 1,
      sym_namespace_name_as_prefix,
    STATE(92), 2,
      sym__types,
      sym__array_types,
    STATE(119), 2,
      sym__type,
      sym_union_type,
    STATE(84), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(265), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2065] = 14,
    ACTIONS(257), 1,
      sym_name,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(263), 1,
      anon_sym_QMARK,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_qualified_name,
    STATE(103), 1,
      sym_variable_name,
    STATE(120), 1,
      sym_parameter,
    STATE(124), 1,
      sym_namespace_name,
    STATE(136), 1,
      sym_namespace_name_as_prefix,
    STATE(92), 2,
      sym__types,
      sym__array_types,
    STATE(119), 2,
      sym__type,
      sym_union_type,
    STATE(84), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(265), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2124] = 3,
    ACTIONS(273), 1,
      anon_sym_LT,
    ACTIONS(275), 1,
      anon_sym_ATproperty,
    ACTIONS(271), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2161] = 2,
    ACTIONS(279), 1,
      anon_sym_ATproperty,
    ACTIONS(277), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2195] = 2,
    ACTIONS(172), 1,
      anon_sym_ATproperty,
    ACTIONS(170), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2229] = 2,
    ACTIONS(283), 1,
      anon_sym_ATproperty,
    ACTIONS(281), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2263] = 2,
    ACTIONS(287), 1,
      anon_sym_ATproperty,
    ACTIONS(285), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2297] = 2,
    ACTIONS(144), 1,
      anon_sym_ATproperty,
    ACTIONS(142), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2331] = 2,
    ACTIONS(291), 1,
      anon_sym_ATproperty,
    ACTIONS(289), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2365] = 2,
    ACTIONS(295), 1,
      anon_sym_ATproperty,
    ACTIONS(293), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2399] = 2,
    ACTIONS(299), 1,
      anon_sym_ATproperty,
    ACTIONS(297), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2433] = 2,
    ACTIONS(160), 1,
      anon_sym_ATproperty,
    ACTIONS(158), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2467] = 2,
    ACTIONS(303), 1,
      anon_sym_ATproperty,
    ACTIONS(301), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2501] = 2,
    ACTIONS(307), 1,
      anon_sym_ATproperty,
    ACTIONS(305), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2535] = 2,
    ACTIONS(311), 1,
      anon_sym_ATproperty,
    ACTIONS(309), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2569] = 13,
    ACTIONS(257), 1,
      sym_name,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(263), 1,
      anon_sym_QMARK,
    ACTIONS(313), 1,
      anon_sym_DOLLAR,
    STATE(18), 1,
      sym_variable_name,
    STATE(95), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(136), 1,
      sym_namespace_name_as_prefix,
    STATE(92), 2,
      sym__types,
      sym__array_types,
    STATE(110), 2,
      sym__type,
      sym_union_type,
    STATE(84), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(265), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2625] = 2,
    ACTIONS(317), 1,
      anon_sym_ATproperty,
    ACTIONS(315), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2659] = 2,
    ACTIONS(321), 1,
      anon_sym_ATproperty,
    ACTIONS(319), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2693] = 2,
    ACTIONS(325), 1,
      anon_sym_ATproperty,
    ACTIONS(323), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2727] = 2,
    ACTIONS(329), 1,
      anon_sym_ATproperty,
    ACTIONS(327), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2761] = 2,
    ACTIONS(333), 1,
      anon_sym_ATproperty,
    ACTIONS(331), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2795] = 2,
    ACTIONS(337), 1,
      anon_sym_ATproperty,
    ACTIONS(335), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2829] = 2,
    ACTIONS(180), 1,
      anon_sym_ATproperty,
    ACTIONS(178), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2863] = 2,
    ACTIONS(148), 1,
      anon_sym_ATproperty,
    ACTIONS(146), 28,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      sym__end,
  [2897] = 13,
    ACTIONS(257), 1,
      sym_name,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(263), 1,
      anon_sym_QMARK,
    ACTIONS(339), 1,
      anon_sym_static,
    STATE(73), 1,
      sym_static,
    STATE(95), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(136), 1,
      sym_namespace_name_as_prefix,
    STATE(92), 2,
      sym__types,
      sym__array_types,
    STATE(140), 2,
      sym__type,
      sym_union_type,
    STATE(84), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(265), 11,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_false,
      anon_sym_null,
  [2952] = 11,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(341), 1,
      sym_name,
    ACTIONS(343), 1,
      anon_sym_QMARK,
    STATE(26), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(155), 1,
      sym_namespace_name_as_prefix,
    STATE(23), 2,
      sym__type,
      sym_union_type,
    STATE(28), 2,
      sym__types,
      sym__array_types,
    STATE(25), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(345), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3002] = 11,
    ACTIONS(257), 1,
      sym_name,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(263), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(136), 1,
      sym_namespace_name_as_prefix,
    STATE(92), 2,
      sym__types,
      sym__array_types,
    STATE(117), 2,
      sym__type,
      sym_union_type,
    STATE(84), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(265), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3052] = 11,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(341), 1,
      sym_name,
    ACTIONS(343), 1,
      anon_sym_QMARK,
    STATE(26), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(155), 1,
      sym_namespace_name_as_prefix,
    STATE(11), 2,
      sym__type,
      sym_union_type,
    STATE(28), 2,
      sym__types,
      sym__array_types,
    STATE(25), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(345), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3102] = 11,
    ACTIONS(257), 1,
      sym_name,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(263), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(136), 1,
      sym_namespace_name_as_prefix,
    STATE(92), 2,
      sym__types,
      sym__array_types,
    STATE(122), 2,
      sym__type,
      sym_union_type,
    STATE(84), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(265), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3152] = 11,
    ACTIONS(257), 1,
      sym_name,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(263), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(136), 1,
      sym_namespace_name_as_prefix,
    STATE(92), 2,
      sym__types,
      sym__array_types,
    STATE(123), 2,
      sym__type,
      sym_union_type,
    STATE(84), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(265), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3202] = 11,
    ACTIONS(257), 1,
      sym_name,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(263), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(136), 1,
      sym_namespace_name_as_prefix,
    STATE(92), 2,
      sym__types,
      sym__array_types,
    STATE(146), 2,
      sym__type,
      sym_union_type,
    STATE(84), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(265), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3252] = 10,
    ACTIONS(257), 1,
      sym_name,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(263), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(136), 1,
      sym_namespace_name_as_prefix,
    STATE(105), 2,
      sym__types,
      sym__array_types,
    STATE(84), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(265), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3298] = 10,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(341), 1,
      sym_name,
    ACTIONS(343), 1,
      anon_sym_QMARK,
    STATE(26), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(155), 1,
      sym_namespace_name_as_prefix,
    STATE(35), 2,
      sym__types,
      sym__array_types,
    STATE(25), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(345), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3344] = 8,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(341), 1,
      sym_name,
    STATE(26), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(155), 1,
      sym_namespace_name_as_prefix,
    STATE(32), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(345), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3381] = 8,
    ACTIONS(257), 1,
      sym_name,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    STATE(95), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(136), 1,
      sym_namespace_name_as_prefix,
    STATE(90), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(265), 12,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3418] = 4,
    ACTIONS(347), 1,
      sym_name,
    ACTIONS(200), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
    ACTIONS(350), 2,
      anon_sym_BSLASH,
      anon_sym_QMARK,
    ACTIONS(352), 13,
      aux_sym_namespace_name_as_prefix_token1,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3445] = 5,
    ACTIONS(354), 1,
      anon_sym_ATinheritDoc,
    ACTIONS(356), 1,
      anon_sym_ATinternal,
    ACTIONS(358), 1,
      anon_sym_ATlink,
    ACTIONS(360), 1,
      anon_sym_ATsee,
    STATE(142), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [3463] = 7,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(362), 1,
      sym_name,
    ACTIONS(364), 1,
      sym_uri,
    STATE(7), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(153), 1,
      sym_namespace_name_as_prefix,
  [3485] = 7,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(362), 1,
      sym_name,
    ACTIONS(366), 1,
      sym_uri,
    STATE(98), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_namespace_name,
    STATE(156), 1,
      sym_namespace_name_as_prefix,
  [3507] = 3,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    STATE(108), 1,
      aux_sym_namespace_name_repeat1,
    ACTIONS(108), 4,
      anon_sym_LBRACK_RBRACK,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3520] = 3,
    ACTIONS(368), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(83), 1,
      aux_sym__array_types_repeat1,
    ACTIONS(135), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3532] = 3,
    ACTIONS(371), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(85), 1,
      aux_sym__array_types_repeat1,
    ACTIONS(182), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3544] = 3,
    ACTIONS(373), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(83), 1,
      aux_sym__array_types_repeat1,
    ACTIONS(121), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3556] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      sym_text,
    STATE(63), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3570] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      sym_text,
    STATE(53), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3584] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      sym_text,
    STATE(49), 1,
      sym_description,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3598] = 1,
    ACTIONS(200), 4,
      anon_sym_LBRACK_RBRACK,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3605] = 1,
    ACTIONS(215), 4,
      anon_sym_LBRACK_RBRACK,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3612] = 3,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    STATE(91), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(204), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3623] = 3,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    STATE(94), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(194), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3634] = 1,
    ACTIONS(211), 4,
      anon_sym_LBRACK_RBRACK,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3641] = 3,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    STATE(91), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(229), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3652] = 1,
    ACTIONS(108), 4,
      anon_sym_LBRACK_RBRACK,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3659] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_parameters_repeat1,
  [3669] = 3,
    ACTIONS(387), 1,
      sym_name,
    ACTIONS(389), 1,
      anon_sym_BSLASH,
    STATE(152), 1,
      sym_namespace_name,
  [3679] = 3,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(395), 1,
      sym_text,
  [3689] = 1,
    ACTIONS(253), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [3695] = 3,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_parameters_repeat1,
  [3705] = 2,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3713] = 3,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_parameters_repeat1,
  [3723] = 2,
    ACTIONS(409), 1,
      anon_sym_EQ,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3731] = 2,
    ACTIONS(213), 1,
      sym_text,
    ACTIONS(211), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN_RPAREN,
  [3739] = 1,
    ACTIONS(204), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3745] = 1,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3750] = 2,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(415), 1,
      sym_text,
  [3757] = 2,
    ACTIONS(417), 1,
      anon_sym_BSLASH,
    STATE(118), 1,
      aux_sym_namespace_name_repeat1,
  [3764] = 2,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_parameters,
  [3771] = 2,
    ACTIONS(313), 1,
      anon_sym_DOLLAR,
    STATE(16), 1,
      sym_variable_name,
  [3778] = 2,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    ACTIONS(424), 1,
      sym_text,
  [3785] = 2,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      sym_text,
  [3792] = 2,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_parameters,
  [3799] = 2,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    STATE(108), 1,
      aux_sym_namespace_name_repeat1,
  [3806] = 2,
    ACTIONS(428), 1,
      sym_name,
    STATE(152), 1,
      sym_namespace_name,
  [3813] = 2,
    ACTIONS(431), 1,
      sym_name,
    STATE(150), 1,
      sym_namespace_name,
  [3820] = 2,
    ACTIONS(313), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym_variable_name,
  [3827] = 2,
    ACTIONS(434), 1,
      anon_sym_BSLASH,
    STATE(118), 1,
      aux_sym_namespace_name_repeat1,
  [3834] = 2,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_variable_name,
  [3841] = 1,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3846] = 1,
    ACTIONS(437), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3851] = 2,
    ACTIONS(313), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      sym_variable_name,
  [3858] = 2,
    ACTIONS(313), 1,
      anon_sym_DOLLAR,
    STATE(55), 1,
      sym_variable_name,
  [3865] = 1,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
  [3869] = 1,
    ACTIONS(441), 1,
      sym_text,
  [3873] = 1,
    ACTIONS(443), 1,
      sym_default_value,
  [3877] = 1,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
  [3881] = 1,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
  [3885] = 1,
    ACTIONS(449), 1,
      sym_name,
  [3889] = 1,
    ACTIONS(451), 1,
      sym_default_value,
  [3893] = 1,
    ACTIONS(453), 1,
      anon_sym_GT,
  [3897] = 1,
    ACTIONS(455), 1,
      anon_sym_BSLASH,
  [3901] = 1,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
  [3905] = 1,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
  [3909] = 1,
    ACTIONS(461), 1,
      sym_name,
  [3913] = 1,
    ACTIONS(463), 1,
      sym_name,
  [3917] = 1,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
  [3921] = 1,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
  [3925] = 1,
    ACTIONS(469), 1,
      sym_uri,
  [3929] = 1,
    ACTIONS(471), 1,
      sym_name,
  [3933] = 1,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
  [3937] = 1,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
  [3941] = 1,
    ACTIONS(477), 1,
      sym_email_address,
  [3945] = 1,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
  [3949] = 1,
    ACTIONS(481), 1,
      sym_uri,
  [3953] = 1,
    ACTIONS(483), 1,
      sym_name,
  [3957] = 1,
    ACTIONS(485), 1,
      sym_name,
  [3961] = 1,
    ACTIONS(487), 1,
      sym_name,
  [3965] = 1,
    ACTIONS(489), 1,
      sym_author_name,
  [3969] = 1,
    ACTIONS(491), 1,
      anon_sym_BSLASH,
  [3973] = 1,
    ACTIONS(493), 1,
      sym_name,
  [3977] = 1,
    ACTIONS(495), 1,
      anon_sym_BSLASH,
  [3981] = 1,
    ACTIONS(497), 1,
      sym_name,
  [3985] = 1,
    ACTIONS(499), 1,
      sym_name,
  [3989] = 1,
    ACTIONS(501), 1,
      sym_name,
  [3993] = 1,
    ACTIONS(503), 1,
      sym_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 103,
  [SMALL_STATE(4)] = 193,
  [SMALL_STATE(5)] = 283,
  [SMALL_STATE(6)] = 373,
  [SMALL_STATE(7)] = 463,
  [SMALL_STATE(8)] = 513,
  [SMALL_STATE(9)] = 557,
  [SMALL_STATE(10)] = 607,
  [SMALL_STATE(11)] = 650,
  [SMALL_STATE(12)] = 697,
  [SMALL_STATE(13)] = 744,
  [SMALL_STATE(14)] = 787,
  [SMALL_STATE(15)] = 834,
  [SMALL_STATE(16)] = 881,
  [SMALL_STATE(17)] = 928,
  [SMALL_STATE(18)] = 975,
  [SMALL_STATE(19)] = 1022,
  [SMALL_STATE(20)] = 1069,
  [SMALL_STATE(21)] = 1116,
  [SMALL_STATE(22)] = 1163,
  [SMALL_STATE(23)] = 1210,
  [SMALL_STATE(24)] = 1257,
  [SMALL_STATE(25)] = 1304,
  [SMALL_STATE(26)] = 1347,
  [SMALL_STATE(27)] = 1385,
  [SMALL_STATE(28)] = 1429,
  [SMALL_STATE(29)] = 1471,
  [SMALL_STATE(30)] = 1509,
  [SMALL_STATE(31)] = 1551,
  [SMALL_STATE(32)] = 1589,
  [SMALL_STATE(33)] = 1627,
  [SMALL_STATE(34)] = 1671,
  [SMALL_STATE(35)] = 1713,
  [SMALL_STATE(36)] = 1750,
  [SMALL_STATE(37)] = 1787,
  [SMALL_STATE(38)] = 1823,
  [SMALL_STATE(39)] = 1859,
  [SMALL_STATE(40)] = 1895,
  [SMALL_STATE(41)] = 1931,
  [SMALL_STATE(42)] = 1967,
  [SMALL_STATE(43)] = 2003,
  [SMALL_STATE(44)] = 2065,
  [SMALL_STATE(45)] = 2124,
  [SMALL_STATE(46)] = 2161,
  [SMALL_STATE(47)] = 2195,
  [SMALL_STATE(48)] = 2229,
  [SMALL_STATE(49)] = 2263,
  [SMALL_STATE(50)] = 2297,
  [SMALL_STATE(51)] = 2331,
  [SMALL_STATE(52)] = 2365,
  [SMALL_STATE(53)] = 2399,
  [SMALL_STATE(54)] = 2433,
  [SMALL_STATE(55)] = 2467,
  [SMALL_STATE(56)] = 2501,
  [SMALL_STATE(57)] = 2535,
  [SMALL_STATE(58)] = 2569,
  [SMALL_STATE(59)] = 2625,
  [SMALL_STATE(60)] = 2659,
  [SMALL_STATE(61)] = 2693,
  [SMALL_STATE(62)] = 2727,
  [SMALL_STATE(63)] = 2761,
  [SMALL_STATE(64)] = 2795,
  [SMALL_STATE(65)] = 2829,
  [SMALL_STATE(66)] = 2863,
  [SMALL_STATE(67)] = 2897,
  [SMALL_STATE(68)] = 2952,
  [SMALL_STATE(69)] = 3002,
  [SMALL_STATE(70)] = 3052,
  [SMALL_STATE(71)] = 3102,
  [SMALL_STATE(72)] = 3152,
  [SMALL_STATE(73)] = 3202,
  [SMALL_STATE(74)] = 3252,
  [SMALL_STATE(75)] = 3298,
  [SMALL_STATE(76)] = 3344,
  [SMALL_STATE(77)] = 3381,
  [SMALL_STATE(78)] = 3418,
  [SMALL_STATE(79)] = 3445,
  [SMALL_STATE(80)] = 3463,
  [SMALL_STATE(81)] = 3485,
  [SMALL_STATE(82)] = 3507,
  [SMALL_STATE(83)] = 3520,
  [SMALL_STATE(84)] = 3532,
  [SMALL_STATE(85)] = 3544,
  [SMALL_STATE(86)] = 3556,
  [SMALL_STATE(87)] = 3570,
  [SMALL_STATE(88)] = 3584,
  [SMALL_STATE(89)] = 3598,
  [SMALL_STATE(90)] = 3605,
  [SMALL_STATE(91)] = 3612,
  [SMALL_STATE(92)] = 3623,
  [SMALL_STATE(93)] = 3634,
  [SMALL_STATE(94)] = 3641,
  [SMALL_STATE(95)] = 3652,
  [SMALL_STATE(96)] = 3659,
  [SMALL_STATE(97)] = 3669,
  [SMALL_STATE(98)] = 3679,
  [SMALL_STATE(99)] = 3689,
  [SMALL_STATE(100)] = 3695,
  [SMALL_STATE(101)] = 3705,
  [SMALL_STATE(102)] = 3713,
  [SMALL_STATE(103)] = 3723,
  [SMALL_STATE(104)] = 3731,
  [SMALL_STATE(105)] = 3739,
  [SMALL_STATE(106)] = 3745,
  [SMALL_STATE(107)] = 3750,
  [SMALL_STATE(108)] = 3757,
  [SMALL_STATE(109)] = 3764,
  [SMALL_STATE(110)] = 3771,
  [SMALL_STATE(111)] = 3778,
  [SMALL_STATE(112)] = 3785,
  [SMALL_STATE(113)] = 3792,
  [SMALL_STATE(114)] = 3799,
  [SMALL_STATE(115)] = 3806,
  [SMALL_STATE(116)] = 3813,
  [SMALL_STATE(117)] = 3820,
  [SMALL_STATE(118)] = 3827,
  [SMALL_STATE(119)] = 3834,
  [SMALL_STATE(120)] = 3841,
  [SMALL_STATE(121)] = 3846,
  [SMALL_STATE(122)] = 3851,
  [SMALL_STATE(123)] = 3858,
  [SMALL_STATE(124)] = 3865,
  [SMALL_STATE(125)] = 3869,
  [SMALL_STATE(126)] = 3873,
  [SMALL_STATE(127)] = 3877,
  [SMALL_STATE(128)] = 3881,
  [SMALL_STATE(129)] = 3885,
  [SMALL_STATE(130)] = 3889,
  [SMALL_STATE(131)] = 3893,
  [SMALL_STATE(132)] = 3897,
  [SMALL_STATE(133)] = 3901,
  [SMALL_STATE(134)] = 3905,
  [SMALL_STATE(135)] = 3909,
  [SMALL_STATE(136)] = 3913,
  [SMALL_STATE(137)] = 3917,
  [SMALL_STATE(138)] = 3921,
  [SMALL_STATE(139)] = 3925,
  [SMALL_STATE(140)] = 3929,
  [SMALL_STATE(141)] = 3933,
  [SMALL_STATE(142)] = 3937,
  [SMALL_STATE(143)] = 3941,
  [SMALL_STATE(144)] = 3945,
  [SMALL_STATE(145)] = 3949,
  [SMALL_STATE(146)] = 3953,
  [SMALL_STATE(147)] = 3957,
  [SMALL_STATE(148)] = 3961,
  [SMALL_STATE(149)] = 3965,
  [SMALL_STATE(150)] = 3969,
  [SMALL_STATE(151)] = 3973,
  [SMALL_STATE(152)] = 3977,
  [SMALL_STATE(153)] = 3981,
  [SMALL_STATE(154)] = 3985,
  [SMALL_STATE(155)] = 3989,
  [SMALL_STATE(156)] = 3993,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(149),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(145),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type, 1),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 1), SHIFT(148),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_types, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_types, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_types_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__array_types_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_types_repeat1, 2), SHIFT_REPEAT(13),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_optional_description, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_optional_description, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__types, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(75),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(79),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(33),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__currently_incomplete_tags, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__currently_incomplete_tags, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal_tag, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__internal_tag, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_tag, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__global_tag, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 5),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 6),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 6),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_required_description, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_required_description, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_optional_description, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_optional_description, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primitive_type, 1), REDUCE(sym_static, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_types_repeat1, 2), SHIFT_REPEAT(83),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(74),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 2), SHIFT(148),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_inline_tag, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 1), SHIFT(114),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2), SHIFT(114),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2), SHIFT_REPEAT(148),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 3, .production_id = 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2),
  [457] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 4, .production_id = 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_inline_tag, 3, .production_id = 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_phpdoc(void) {
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
    .keyword_capture_token = sym_name,
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
