#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 202
#define LARGE_STATE_COUNT 51
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
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
  anon_sym_ATafter = 37,
  anon_sym_ATafterClass = 38,
  anon_sym_ATannotation = 39,
  anon_sym_ATbackupGlobals = 40,
  anon_sym_ATbackupStaticAttributes = 41,
  anon_sym_ATbefore = 42,
  anon_sym_ATbeforeClass = 43,
  anon_sym_ATcodeCoverageIgnore = 44,
  anon_sym_ATcodeCoverageIgnore_STAR = 45,
  anon_sym_ATcodeCoverageIgnoreEnd = 46,
  anon_sym_ATcodeCoverageIgnoreStart = 47,
  anon_sym_ATcovers = 48,
  anon_sym_ATcoversDefaultClass = 49,
  anon_sym_ATcoversDefaultClasstoshortenannotations = 50,
  anon_sym_ATcoversNothing = 51,
  anon_sym_ATdataProvider = 52,
  anon_sym_ATdepends = 53,
  anon_sym_ATdependsannotationtoexpressdependencies = 54,
  anon_sym_ATdoesNotPerformAssertions = 55,
  anon_sym_ATgroup = 56,
  anon_sym_ATlarge = 57,
  anon_sym_ATmedium = 58,
  anon_sym_ATpreserveGlobalState = 59,
  anon_sym_ATrequires = 60,
  anon_sym_ATrequiresusages = 61,
  anon_sym_ATrunInSeparateProcess = 62,
  anon_sym_ATrunTestsInSeparateProcesses = 63,
  anon_sym_ATsmall = 64,
  anon_sym_ATtest = 65,
  anon_sym_ATtestWith = 66,
  anon_sym_ATtestdox = 67,
  anon_sym_ATticket = 68,
  anon_sym_LBRACK_RBRACK = 69,
  anon_sym_COMMA = 70,
  anon_sym_list = 71,
  anon_sym_BSLASH = 72,
  aux_sym_namespace_name_as_prefix_token1 = 73,
  anon_sym_QMARK = 74,
  anon_sym_array = 75,
  anon_sym_callable = 76,
  anon_sym_iterable = 77,
  anon_sym_bool = 78,
  anon_sym_float = 79,
  anon_sym_int = 80,
  anon_sym_string = 81,
  anon_sym_void = 82,
  anon_sym_mixed = 83,
  anon_sym_static = 84,
  anon_sym_false = 85,
  anon_sym_null = 86,
  anon_sym_PIPE = 87,
  anon_sym_DOLLAR = 88,
  sym_author_name = 89,
  sym_email_address = 90,
  sym_text = 91,
  sym_version = 92,
  sym_uri = 93,
  anon_sym_LPAREN = 94,
  anon_sym_RPAREN = 95,
  anon_sym_EQ = 96,
  sym_default_value = 97,
  sym__end = 98,
  sym_document = 99,
  sym_tag = 100,
  sym_inline_tag = 101,
  sym__simple_tag_without_description = 102,
  sym__simple_tag_with_optional_description = 103,
  sym__simple_tag_with_required_description = 104,
  sym__currently_incomplete_tags = 105,
  sym__author_tag = 106,
  sym__global_tag = 107,
  sym__internal_tag = 108,
  sym__internal_inline_tag = 109,
  sym__link_tag = 110,
  sym__link_inline_tag = 111,
  sym__method_tag = 112,
  sym__param_tag = 113,
  sym__property_tag = 114,
  sym__return_tag = 115,
  sym__see_tag = 116,
  sym__see_inline_tag = 117,
  sym__throws_tag = 118,
  sym__var_tag = 119,
  sym__version_tag = 120,
  sym__phpunit_tag = 121,
  sym__type = 122,
  sym__types = 123,
  sym__regular_types = 124,
  sym__phpdoc_array_types = 125,
  sym__psalm_generic_array_types = 126,
  sym__psalm_list_array_types = 127,
  sym_named_type = 128,
  sym_namespace_name = 129,
  sym_namespace_name_as_prefix = 130,
  sym_optional_type = 131,
  sym_primitive_type = 132,
  sym_qualified_name = 133,
  sym_union_type = 134,
  sym_variable_name = 135,
  sym_description = 136,
  sym_parameters = 137,
  sym_parameter = 138,
  sym_static = 139,
  aux_sym_document_repeat1 = 140,
  aux_sym__phpdoc_array_types_repeat1 = 141,
  aux_sym_namespace_name_repeat1 = 142,
  aux_sym_union_type_repeat1 = 143,
  aux_sym_description_repeat1 = 144,
  aux_sym_parameters_repeat1 = 145,
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
  [anon_sym_ATafter] = "tag_name",
  [anon_sym_ATafterClass] = "tag_name",
  [anon_sym_ATannotation] = "tag_name",
  [anon_sym_ATbackupGlobals] = "tag_name",
  [anon_sym_ATbackupStaticAttributes] = "tag_name",
  [anon_sym_ATbefore] = "tag_name",
  [anon_sym_ATbeforeClass] = "tag_name",
  [anon_sym_ATcodeCoverageIgnore] = "tag_name",
  [anon_sym_ATcodeCoverageIgnore_STAR] = "tag_name",
  [anon_sym_ATcodeCoverageIgnoreEnd] = "tag_name",
  [anon_sym_ATcodeCoverageIgnoreStart] = "tag_name",
  [anon_sym_ATcovers] = "tag_name",
  [anon_sym_ATcoversDefaultClass] = "tag_name",
  [anon_sym_ATcoversDefaultClasstoshortenannotations] = "tag_name",
  [anon_sym_ATcoversNothing] = "tag_name",
  [anon_sym_ATdataProvider] = "tag_name",
  [anon_sym_ATdepends] = "tag_name",
  [anon_sym_ATdependsannotationtoexpressdependencies] = "tag_name",
  [anon_sym_ATdoesNotPerformAssertions] = "tag_name",
  [anon_sym_ATgroup] = "tag_name",
  [anon_sym_ATlarge] = "tag_name",
  [anon_sym_ATmedium] = "tag_name",
  [anon_sym_ATpreserveGlobalState] = "tag_name",
  [anon_sym_ATrequires] = "tag_name",
  [anon_sym_ATrequiresusages] = "tag_name",
  [anon_sym_ATrunInSeparateProcess] = "tag_name",
  [anon_sym_ATrunTestsInSeparateProcesses] = "tag_name",
  [anon_sym_ATsmall] = "tag_name",
  [anon_sym_ATtest] = "tag_name",
  [anon_sym_ATtestWith] = "tag_name",
  [anon_sym_ATtestdox] = "tag_name",
  [anon_sym_ATticket] = "tag_name",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_COMMA] = ",",
  [anon_sym_list] = "primitive_type",
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
  [sym__phpunit_tag] = "_phpunit_tag",
  [sym__type] = "_type",
  [sym__types] = "_types",
  [sym__regular_types] = "_regular_types",
  [sym__phpdoc_array_types] = "array_type",
  [sym__psalm_generic_array_types] = "array_type",
  [sym__psalm_list_array_types] = "array_type",
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
  [aux_sym__phpdoc_array_types_repeat1] = "_phpdoc_array_types_repeat1",
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
  [anon_sym_ATafter] = anon_sym_ATinheritDoc,
  [anon_sym_ATafterClass] = anon_sym_ATinheritDoc,
  [anon_sym_ATannotation] = anon_sym_ATinheritDoc,
  [anon_sym_ATbackupGlobals] = anon_sym_ATinheritDoc,
  [anon_sym_ATbackupStaticAttributes] = anon_sym_ATinheritDoc,
  [anon_sym_ATbefore] = anon_sym_ATinheritDoc,
  [anon_sym_ATbeforeClass] = anon_sym_ATinheritDoc,
  [anon_sym_ATcodeCoverageIgnore] = anon_sym_ATinheritDoc,
  [anon_sym_ATcodeCoverageIgnore_STAR] = anon_sym_ATinheritDoc,
  [anon_sym_ATcodeCoverageIgnoreEnd] = anon_sym_ATinheritDoc,
  [anon_sym_ATcodeCoverageIgnoreStart] = anon_sym_ATinheritDoc,
  [anon_sym_ATcovers] = anon_sym_ATinheritDoc,
  [anon_sym_ATcoversDefaultClass] = anon_sym_ATinheritDoc,
  [anon_sym_ATcoversDefaultClasstoshortenannotations] = anon_sym_ATinheritDoc,
  [anon_sym_ATcoversNothing] = anon_sym_ATinheritDoc,
  [anon_sym_ATdataProvider] = anon_sym_ATinheritDoc,
  [anon_sym_ATdepends] = anon_sym_ATinheritDoc,
  [anon_sym_ATdependsannotationtoexpressdependencies] = anon_sym_ATinheritDoc,
  [anon_sym_ATdoesNotPerformAssertions] = anon_sym_ATinheritDoc,
  [anon_sym_ATgroup] = anon_sym_ATinheritDoc,
  [anon_sym_ATlarge] = anon_sym_ATinheritDoc,
  [anon_sym_ATmedium] = anon_sym_ATinheritDoc,
  [anon_sym_ATpreserveGlobalState] = anon_sym_ATinheritDoc,
  [anon_sym_ATrequires] = anon_sym_ATinheritDoc,
  [anon_sym_ATrequiresusages] = anon_sym_ATinheritDoc,
  [anon_sym_ATrunInSeparateProcess] = anon_sym_ATinheritDoc,
  [anon_sym_ATrunTestsInSeparateProcesses] = anon_sym_ATinheritDoc,
  [anon_sym_ATsmall] = anon_sym_ATinheritDoc,
  [anon_sym_ATtest] = anon_sym_ATinheritDoc,
  [anon_sym_ATtestWith] = anon_sym_ATinheritDoc,
  [anon_sym_ATtestdox] = anon_sym_ATinheritDoc,
  [anon_sym_ATticket] = anon_sym_ATinheritDoc,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_list] = sym_primitive_type,
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
  [sym__phpunit_tag] = sym__phpunit_tag,
  [sym__type] = sym__type,
  [sym__types] = sym__types,
  [sym__regular_types] = sym__regular_types,
  [sym__phpdoc_array_types] = sym__phpdoc_array_types,
  [sym__psalm_generic_array_types] = sym__phpdoc_array_types,
  [sym__psalm_list_array_types] = sym__phpdoc_array_types,
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
  [aux_sym__phpdoc_array_types_repeat1] = aux_sym__phpdoc_array_types_repeat1,
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
  [anon_sym_ATafter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATafterClass] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATannotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATbackupGlobals] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATbackupStaticAttributes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATbefore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATbeforeClass] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcodeCoverageIgnore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcodeCoverageIgnore_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcodeCoverageIgnoreEnd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcodeCoverageIgnoreStart] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcovers] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcoversDefaultClass] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcoversDefaultClasstoshortenannotations] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcoversNothing] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdataProvider] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdepends] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdependsannotationtoexpressdependencies] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdoesNotPerformAssertions] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATgroup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATlarge] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATmedium] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATpreserveGlobalState] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATrequires] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATrequiresusages] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATrunInSeparateProcess] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATrunTestsInSeparateProcesses] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsmall] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATtest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATtestWith] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATtestdox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATticket] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = true,
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
  [sym__phpunit_tag] = {
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
  [sym__phpdoc_array_types] = {
    .visible = true,
    .named = true,
  },
  [sym__psalm_generic_array_types] = {
    .visible = true,
    .named = true,
  },
  [sym__psalm_list_array_types] = {
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
  [aux_sym__phpdoc_array_types_repeat1] = {
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

enum {
  field_array = 1,
  field_key = 2,
  field_value = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[6] = {
  [4] = {.index = 0, .length = 2},
  [5] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_array, 0},
    {field_value, 2},
  [2] =
    {field_array, 0},
    {field_key, 2},
    {field_value, 4},
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(462);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(461)
      if (lookahead == '\r') SKIP(461)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '<') ADVANCE(480);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '}') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '<') ADVANCE(480);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '}') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '<') ADVANCE(480);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '}') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') SKIP(3)
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '<') ADVANCE(480);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '<') ADVANCE(480);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '<') ADVANCE(480);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '<') ADVANCE(480);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '<') ADVANCE(480);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(19)
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 19:
      if (lookahead == '\t') SKIP(19)
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 20:
      if (lookahead == '\t') SKIP(21)
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 21:
      if (lookahead == '\t') SKIP(21)
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 22:
      if (lookahead == '\t') SKIP(23)
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 23:
      if (lookahead == '\t') SKIP(23)
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 24:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '*') SKIP(24)
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 25:
      if (lookahead == '\t') SKIP(25)
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == ' ') SKIP(25)
      if (lookahead == '*') SKIP(25)
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '}') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 26:
      if (lookahead == '\t') SKIP(26)
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == ' ') SKIP(26)
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == '*') SKIP(26)
      if (lookahead == '}') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(565);
      END_STATE();
    case 27:
      if (lookahead == '\t') ADVANCE(580);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == '\r') ADVANCE(580);
      if (lookahead == ' ') SKIP(27)
      if (lookahead == '*') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(581);
      END_STATE();
    case 28:
      if (lookahead == '\t') SKIP(29)
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == ' ') SKIP(29)
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == '\t') SKIP(29)
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == ' ') SKIP(29)
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == '\t') SKIP(30)
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == ' ') SKIP(30)
      if (lookahead == '*') ADVANCE(554);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 31:
      if (lookahead == '\t') SKIP(30)
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == ' ') SKIP(30)
      if (lookahead == '*') ADVANCE(555);
      if (lookahead == '<') ADVANCE(557);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(397);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(420);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(463);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '@') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '@') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == '@') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(418);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(398);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(285);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(251);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(293);
      END_STATE();
    case 50:
      if (lookahead == 'G') ADVANCE(252);
      if (lookahead == 'S') ADVANCE(416);
      END_STATE();
    case 51:
      if (lookahead == 'G') ADVANCE(253);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(208);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(184);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(282);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(295);
      END_STATE();
    case 56:
      if (lookahead == 'P') ADVANCE(346);
      END_STATE();
    case 57:
      if (lookahead == 'P') ADVANCE(347);
      END_STATE();
    case 58:
      if (lookahead == 'P') ADVANCE(177);
      END_STATE();
    case 59:
      if (lookahead == 'P') ADVANCE(359);
      END_STATE();
    case 60:
      if (lookahead == 'S') ADVANCE(186);
      END_STATE();
    case 61:
      if (lookahead == 'S') ADVANCE(436);
      END_STATE();
    case 62:
      if (lookahead == 'S') ADVANCE(193);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(530);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(319);
      END_STATE();
    case 104:
      if (lookahead == 'b') ADVANCE(446);
      END_STATE();
    case 105:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 107:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(495);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(489);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(457);
      if (lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'h') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 194:
      if (lookahead == 'f') ADVANCE(411);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 195:
      if (lookahead == 'f') ADVANCE(296);
      END_STATE();
    case 196:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 197:
      if (lookahead == 'f') ADVANCE(304);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(512);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 203:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 204:
      if (lookahead == 'g') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 205:
      if (lookahead == 'g') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 206:
      if (lookahead == 'g') ADVANCE(303);
      END_STATE();
    case 207:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(277);
      END_STATE();
    case 209:
      if (lookahead == 'h') ADVANCE(527);
      END_STATE();
    case 210:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(404);
      END_STATE();
    case 213:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 214:
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 215:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 234:
      if (lookahead == 'k') ADVANCE(484);
      END_STATE();
    case 235:
      if (lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 236:
      if (lookahead == 'k') ADVANCE(161);
      END_STATE();
    case 237:
      if (lookahead == 'k') ADVANCE(442);
      END_STATE();
    case 238:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 254:
      if (lookahead == 'm') ADVANCE(487);
      END_STATE();
    case 255:
      if (lookahead == 'm') ADVANCE(519);
      END_STATE();
    case 256:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 257:
      if (lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 316:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 317:
      if (lookahead == 'p') ADVANCE(517);
      END_STATE();
    case 318:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 319:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 320:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 321:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 322:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 323:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 324:
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 325:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 326:
      if (lookahead == 'q') ADVANCE(439);
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(342);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 363:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 364:
      if (lookahead == 's') ADVANCE(478);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 367:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 368:
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(504);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(523);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(524);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(511);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(383);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(394);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 403:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 404:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 438:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 439:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 440:
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 441:
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 442:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 447:
      if (lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 448:
      if (lookahead == 'v') ADVANCE(221);
      END_STATE();
    case 449:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 450:
      if (lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 451:
      if (lookahead == 'w') ADVANCE(366);
      END_STATE();
    case 452:
      if (lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 453:
      if (lookahead == 'x') ADVANCE(528);
      END_STATE();
    case 454:
      if (lookahead == 'x') ADVANCE(324);
      END_STATE();
    case 455:
      if (lookahead == 'y') ADVANCE(470);
      END_STATE();
    case 456:
      if (lookahead == 'y') ADVANCE(488);
      END_STATE();
    case 457:
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 458:
      if (lookahead == '*' ||
          lookahead == 'x') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 459:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 460:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(558);
      END_STATE();
    case 461:
      if (eof) ADVANCE(462);
      if (lookahead == '\t') SKIP(461)
      if (lookahead == '\n') SKIP(461)
      if (lookahead == '\r') SKIP(461)
      if (lookahead == ' ') SKIP(461)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '<') ADVANCE(480);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '}') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_ATinheritDoc);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_ATafter);
      if (lookahead == 'C') ADVANCE(245);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_ATafterClass);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_ATbackupGlobals);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_ATbackupStaticAttributes);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_ATbefore);
      if (lookahead == 'C') ADVANCE(250);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_ATbeforeClass);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore);
      if (lookahead == '*') ADVANCE(506);
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead == 'S') ADVANCE(428);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore_STAR);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreEnd);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreStart);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_ATcovers);
      if (lookahead == 'D') ADVANCE(152);
      if (lookahead == 'N') ADVANCE(300);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClass);
      if (lookahead == ' ') ADVANCE(419);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClasstoshortenannotations);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_ATcoversNothing);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_ATdataProvider);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_ATdepends);
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_ATdependsannotationtoexpressdependencies);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_ATdoesNotPerformAssertions);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_ATgroup);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_ATlarge);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_ATmedium);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_ATpreserveGlobalState);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_ATrequires);
      if (lookahead == ' ') ADVANCE(445);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_ATrequiresusages);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ATrunInSeparateProcess);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_ATrunTestsInSeparateProcesses);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_ATsmall);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_ATtest);
      if (lookahead == 'W') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_ATtestWith);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_ATtestdox);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_ATticket);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(557);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead == '<') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead == '<') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '@') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(572);
      if (lookahead == 'x') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == 'x') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(564);
      if (lookahead == '.') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(564);
      if (lookahead == '.') ADVANCE(562);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(564);
      if (lookahead == '.') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(459);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(459);
      if (lookahead == '.') ADVANCE(458);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead == '\t') ADVANCE(580);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == '\r') ADVANCE(580);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == ')') ADVANCE(581);
      if (lookahead == '*') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(581);
      END_STATE();
    case 582:
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
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(13)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(13)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(26)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(26)
      if (lookahead == '*') SKIP(13)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == '\t') SKIP(26)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(26)
      if (lookahead == '*') SKIP(0)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_callable);
      END_STATE();
    case 67:
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
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
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
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 25},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 25},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 26},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 26},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 25},
  [142] = {.lex_state = 25},
  [143] = {.lex_state = 25},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 25},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 24},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 24},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 27},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 29},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 30},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 27},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
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
    [anon_sym_ATafter] = ACTIONS(1),
    [anon_sym_ATafterClass] = ACTIONS(1),
    [anon_sym_ATannotation] = ACTIONS(1),
    [anon_sym_ATbackupGlobals] = ACTIONS(1),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(1),
    [anon_sym_ATbefore] = ACTIONS(1),
    [anon_sym_ATbeforeClass] = ACTIONS(1),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(1),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(1),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(1),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(1),
    [anon_sym_ATcovers] = ACTIONS(1),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(1),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(1),
    [anon_sym_ATcoversNothing] = ACTIONS(1),
    [anon_sym_ATdataProvider] = ACTIONS(1),
    [anon_sym_ATdepends] = ACTIONS(1),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(1),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(1),
    [anon_sym_ATgroup] = ACTIONS(1),
    [anon_sym_ATlarge] = ACTIONS(1),
    [anon_sym_ATmedium] = ACTIONS(1),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(1),
    [anon_sym_ATrequires] = ACTIONS(1),
    [anon_sym_ATrequiresusages] = ACTIONS(1),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(1),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(1),
    [anon_sym_ATsmall] = ACTIONS(1),
    [anon_sym_ATtest] = ACTIONS(1),
    [anon_sym_ATtestWith] = ACTIONS(1),
    [anon_sym_ATtestdox] = ACTIONS(1),
    [anon_sym_ATticket] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
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
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(160),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(3),
    [sym_inline_tag] = STATE(50),
    [sym__simple_tag_without_description] = STATE(82),
    [sym__simple_tag_with_optional_description] = STATE(82),
    [sym__simple_tag_with_required_description] = STATE(82),
    [sym__currently_incomplete_tags] = STATE(25),
    [sym__author_tag] = STATE(82),
    [sym__global_tag] = STATE(82),
    [sym__internal_tag] = STATE(82),
    [sym__link_tag] = STATE(82),
    [sym__method_tag] = STATE(82),
    [sym__param_tag] = STATE(82),
    [sym__property_tag] = STATE(82),
    [sym__return_tag] = STATE(82),
    [sym__see_tag] = STATE(82),
    [sym__throws_tag] = STATE(82),
    [sym__var_tag] = STATE(82),
    [sym__version_tag] = STATE(82),
    [sym__phpunit_tag] = STATE(82),
    [sym_description] = STATE(6),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATcategory] = ACTIONS(11),
    [anon_sym_ATcopyright] = ACTIONS(11),
    [anon_sym_ATtodo] = ACTIONS(11),
    [anon_sym_ATexample] = ACTIONS(13),
    [anon_sym_ATlicense] = ACTIONS(13),
    [anon_sym_ATpackage] = ACTIONS(13),
    [anon_sym_ATsource] = ACTIONS(13),
    [anon_sym_ATsubpackage] = ACTIONS(13),
    [anon_sym_ATuses] = ACTIONS(13),
    [anon_sym_ATauthor] = ACTIONS(15),
    [anon_sym_ATglobal] = ACTIONS(17),
    [anon_sym_ATinternal] = ACTIONS(19),
    [anon_sym_ATlink] = ACTIONS(21),
    [anon_sym_ATmethod] = ACTIONS(23),
    [anon_sym_ATparam] = ACTIONS(25),
    [anon_sym_ATproperty] = ACTIONS(27),
    [anon_sym_ATproperty_DASHread] = ACTIONS(29),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(29),
    [anon_sym_ATreturn] = ACTIONS(31),
    [anon_sym_ATsee] = ACTIONS(33),
    [anon_sym_ATthrows] = ACTIONS(35),
    [anon_sym_ATvar] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(39),
    [anon_sym_ATafter] = ACTIONS(41),
    [anon_sym_ATafterClass] = ACTIONS(43),
    [anon_sym_ATannotation] = ACTIONS(43),
    [anon_sym_ATbackupGlobals] = ACTIONS(43),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(43),
    [anon_sym_ATbefore] = ACTIONS(41),
    [anon_sym_ATbeforeClass] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(41),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(43),
    [anon_sym_ATcovers] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(43),
    [anon_sym_ATcoversNothing] = ACTIONS(43),
    [anon_sym_ATdataProvider] = ACTIONS(43),
    [anon_sym_ATdepends] = ACTIONS(41),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(43),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(43),
    [anon_sym_ATgroup] = ACTIONS(43),
    [anon_sym_ATlarge] = ACTIONS(43),
    [anon_sym_ATmedium] = ACTIONS(43),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(43),
    [anon_sym_ATrequires] = ACTIONS(41),
    [anon_sym_ATrequiresusages] = ACTIONS(43),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(43),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(43),
    [anon_sym_ATsmall] = ACTIONS(43),
    [anon_sym_ATtest] = ACTIONS(41),
    [anon_sym_ATtestWith] = ACTIONS(43),
    [anon_sym_ATtestdox] = ACTIONS(43),
    [anon_sym_ATticket] = ACTIONS(43),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(47),
  },
  [3] = {
    [sym_tag] = STATE(4),
    [sym__simple_tag_without_description] = STATE(82),
    [sym__simple_tag_with_optional_description] = STATE(82),
    [sym__simple_tag_with_required_description] = STATE(82),
    [sym__currently_incomplete_tags] = STATE(25),
    [sym__author_tag] = STATE(82),
    [sym__global_tag] = STATE(82),
    [sym__internal_tag] = STATE(82),
    [sym__link_tag] = STATE(82),
    [sym__method_tag] = STATE(82),
    [sym__param_tag] = STATE(82),
    [sym__property_tag] = STATE(82),
    [sym__return_tag] = STATE(82),
    [sym__see_tag] = STATE(82),
    [sym__throws_tag] = STATE(82),
    [sym__var_tag] = STATE(82),
    [sym__version_tag] = STATE(82),
    [sym__phpunit_tag] = STATE(82),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATcategory] = ACTIONS(11),
    [anon_sym_ATcopyright] = ACTIONS(11),
    [anon_sym_ATtodo] = ACTIONS(11),
    [anon_sym_ATexample] = ACTIONS(13),
    [anon_sym_ATlicense] = ACTIONS(13),
    [anon_sym_ATpackage] = ACTIONS(13),
    [anon_sym_ATsource] = ACTIONS(13),
    [anon_sym_ATsubpackage] = ACTIONS(13),
    [anon_sym_ATuses] = ACTIONS(13),
    [anon_sym_ATauthor] = ACTIONS(15),
    [anon_sym_ATglobal] = ACTIONS(17),
    [anon_sym_ATinternal] = ACTIONS(19),
    [anon_sym_ATlink] = ACTIONS(21),
    [anon_sym_ATmethod] = ACTIONS(23),
    [anon_sym_ATparam] = ACTIONS(25),
    [anon_sym_ATproperty] = ACTIONS(27),
    [anon_sym_ATproperty_DASHread] = ACTIONS(29),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(29),
    [anon_sym_ATreturn] = ACTIONS(31),
    [anon_sym_ATsee] = ACTIONS(33),
    [anon_sym_ATthrows] = ACTIONS(35),
    [anon_sym_ATvar] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(39),
    [anon_sym_ATafter] = ACTIONS(41),
    [anon_sym_ATafterClass] = ACTIONS(43),
    [anon_sym_ATannotation] = ACTIONS(43),
    [anon_sym_ATbackupGlobals] = ACTIONS(43),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(43),
    [anon_sym_ATbefore] = ACTIONS(41),
    [anon_sym_ATbeforeClass] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(41),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(43),
    [anon_sym_ATcovers] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(43),
    [anon_sym_ATcoversNothing] = ACTIONS(43),
    [anon_sym_ATdataProvider] = ACTIONS(43),
    [anon_sym_ATdepends] = ACTIONS(41),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(43),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(43),
    [anon_sym_ATgroup] = ACTIONS(43),
    [anon_sym_ATlarge] = ACTIONS(43),
    [anon_sym_ATmedium] = ACTIONS(43),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(43),
    [anon_sym_ATrequires] = ACTIONS(41),
    [anon_sym_ATrequiresusages] = ACTIONS(43),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(43),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(43),
    [anon_sym_ATsmall] = ACTIONS(43),
    [anon_sym_ATtest] = ACTIONS(41),
    [anon_sym_ATtestWith] = ACTIONS(43),
    [anon_sym_ATtestdox] = ACTIONS(43),
    [anon_sym_ATticket] = ACTIONS(43),
    [sym__end] = ACTIONS(49),
  },
  [4] = {
    [sym_tag] = STATE(4),
    [sym__simple_tag_without_description] = STATE(82),
    [sym__simple_tag_with_optional_description] = STATE(82),
    [sym__simple_tag_with_required_description] = STATE(82),
    [sym__currently_incomplete_tags] = STATE(25),
    [sym__author_tag] = STATE(82),
    [sym__global_tag] = STATE(82),
    [sym__internal_tag] = STATE(82),
    [sym__link_tag] = STATE(82),
    [sym__method_tag] = STATE(82),
    [sym__param_tag] = STATE(82),
    [sym__property_tag] = STATE(82),
    [sym__return_tag] = STATE(82),
    [sym__see_tag] = STATE(82),
    [sym__throws_tag] = STATE(82),
    [sym__var_tag] = STATE(82),
    [sym__version_tag] = STATE(82),
    [sym__phpunit_tag] = STATE(82),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATapi] = ACTIONS(51),
    [anon_sym_ATfilesource] = ACTIONS(51),
    [anon_sym_ATignore] = ACTIONS(54),
    [anon_sym_ATcategory] = ACTIONS(57),
    [anon_sym_ATcopyright] = ACTIONS(57),
    [anon_sym_ATtodo] = ACTIONS(57),
    [anon_sym_ATexample] = ACTIONS(60),
    [anon_sym_ATlicense] = ACTIONS(60),
    [anon_sym_ATpackage] = ACTIONS(60),
    [anon_sym_ATsource] = ACTIONS(60),
    [anon_sym_ATsubpackage] = ACTIONS(60),
    [anon_sym_ATuses] = ACTIONS(60),
    [anon_sym_ATauthor] = ACTIONS(63),
    [anon_sym_ATglobal] = ACTIONS(66),
    [anon_sym_ATinternal] = ACTIONS(69),
    [anon_sym_ATlink] = ACTIONS(72),
    [anon_sym_ATmethod] = ACTIONS(75),
    [anon_sym_ATparam] = ACTIONS(78),
    [anon_sym_ATproperty] = ACTIONS(81),
    [anon_sym_ATproperty_DASHread] = ACTIONS(84),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(84),
    [anon_sym_ATreturn] = ACTIONS(87),
    [anon_sym_ATsee] = ACTIONS(90),
    [anon_sym_ATthrows] = ACTIONS(93),
    [anon_sym_ATvar] = ACTIONS(96),
    [anon_sym_ATdeprecated] = ACTIONS(99),
    [anon_sym_ATsince] = ACTIONS(99),
    [anon_sym_ATversion] = ACTIONS(99),
    [anon_sym_ATafter] = ACTIONS(102),
    [anon_sym_ATafterClass] = ACTIONS(105),
    [anon_sym_ATannotation] = ACTIONS(105),
    [anon_sym_ATbackupGlobals] = ACTIONS(105),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(105),
    [anon_sym_ATbefore] = ACTIONS(102),
    [anon_sym_ATbeforeClass] = ACTIONS(105),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(102),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(105),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(105),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(105),
    [anon_sym_ATcovers] = ACTIONS(102),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(102),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(105),
    [anon_sym_ATcoversNothing] = ACTIONS(105),
    [anon_sym_ATdataProvider] = ACTIONS(105),
    [anon_sym_ATdepends] = ACTIONS(102),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(105),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(105),
    [anon_sym_ATgroup] = ACTIONS(105),
    [anon_sym_ATlarge] = ACTIONS(105),
    [anon_sym_ATmedium] = ACTIONS(105),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(105),
    [anon_sym_ATrequires] = ACTIONS(102),
    [anon_sym_ATrequiresusages] = ACTIONS(105),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(105),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(105),
    [anon_sym_ATsmall] = ACTIONS(105),
    [anon_sym_ATtest] = ACTIONS(102),
    [anon_sym_ATtestWith] = ACTIONS(105),
    [anon_sym_ATtestdox] = ACTIONS(105),
    [anon_sym_ATticket] = ACTIONS(105),
    [sym__end] = ACTIONS(108),
  },
  [5] = {
    [sym_tag] = STATE(4),
    [sym__simple_tag_without_description] = STATE(82),
    [sym__simple_tag_with_optional_description] = STATE(82),
    [sym__simple_tag_with_required_description] = STATE(82),
    [sym__currently_incomplete_tags] = STATE(25),
    [sym__author_tag] = STATE(82),
    [sym__global_tag] = STATE(82),
    [sym__internal_tag] = STATE(82),
    [sym__link_tag] = STATE(82),
    [sym__method_tag] = STATE(82),
    [sym__param_tag] = STATE(82),
    [sym__property_tag] = STATE(82),
    [sym__return_tag] = STATE(82),
    [sym__see_tag] = STATE(82),
    [sym__throws_tag] = STATE(82),
    [sym__var_tag] = STATE(82),
    [sym__version_tag] = STATE(82),
    [sym__phpunit_tag] = STATE(82),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATcategory] = ACTIONS(11),
    [anon_sym_ATcopyright] = ACTIONS(11),
    [anon_sym_ATtodo] = ACTIONS(11),
    [anon_sym_ATexample] = ACTIONS(13),
    [anon_sym_ATlicense] = ACTIONS(13),
    [anon_sym_ATpackage] = ACTIONS(13),
    [anon_sym_ATsource] = ACTIONS(13),
    [anon_sym_ATsubpackage] = ACTIONS(13),
    [anon_sym_ATuses] = ACTIONS(13),
    [anon_sym_ATauthor] = ACTIONS(15),
    [anon_sym_ATglobal] = ACTIONS(17),
    [anon_sym_ATinternal] = ACTIONS(19),
    [anon_sym_ATlink] = ACTIONS(21),
    [anon_sym_ATmethod] = ACTIONS(23),
    [anon_sym_ATparam] = ACTIONS(25),
    [anon_sym_ATproperty] = ACTIONS(27),
    [anon_sym_ATproperty_DASHread] = ACTIONS(29),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(29),
    [anon_sym_ATreturn] = ACTIONS(31),
    [anon_sym_ATsee] = ACTIONS(33),
    [anon_sym_ATthrows] = ACTIONS(35),
    [anon_sym_ATvar] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(39),
    [anon_sym_ATafter] = ACTIONS(41),
    [anon_sym_ATafterClass] = ACTIONS(43),
    [anon_sym_ATannotation] = ACTIONS(43),
    [anon_sym_ATbackupGlobals] = ACTIONS(43),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(43),
    [anon_sym_ATbefore] = ACTIONS(41),
    [anon_sym_ATbeforeClass] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(41),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(43),
    [anon_sym_ATcovers] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(43),
    [anon_sym_ATcoversNothing] = ACTIONS(43),
    [anon_sym_ATdataProvider] = ACTIONS(43),
    [anon_sym_ATdepends] = ACTIONS(41),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(43),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(43),
    [anon_sym_ATgroup] = ACTIONS(43),
    [anon_sym_ATlarge] = ACTIONS(43),
    [anon_sym_ATmedium] = ACTIONS(43),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(43),
    [anon_sym_ATrequires] = ACTIONS(41),
    [anon_sym_ATrequiresusages] = ACTIONS(43),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(43),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(43),
    [anon_sym_ATsmall] = ACTIONS(43),
    [anon_sym_ATtest] = ACTIONS(41),
    [anon_sym_ATtestWith] = ACTIONS(43),
    [anon_sym_ATtestdox] = ACTIONS(43),
    [anon_sym_ATticket] = ACTIONS(43),
    [sym__end] = ACTIONS(110),
  },
  [6] = {
    [sym_tag] = STATE(5),
    [sym__simple_tag_without_description] = STATE(82),
    [sym__simple_tag_with_optional_description] = STATE(82),
    [sym__simple_tag_with_required_description] = STATE(82),
    [sym__currently_incomplete_tags] = STATE(25),
    [sym__author_tag] = STATE(82),
    [sym__global_tag] = STATE(82),
    [sym__internal_tag] = STATE(82),
    [sym__link_tag] = STATE(82),
    [sym__method_tag] = STATE(82),
    [sym__param_tag] = STATE(82),
    [sym__property_tag] = STATE(82),
    [sym__return_tag] = STATE(82),
    [sym__see_tag] = STATE(82),
    [sym__throws_tag] = STATE(82),
    [sym__var_tag] = STATE(82),
    [sym__version_tag] = STATE(82),
    [sym__phpunit_tag] = STATE(82),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATcategory] = ACTIONS(11),
    [anon_sym_ATcopyright] = ACTIONS(11),
    [anon_sym_ATtodo] = ACTIONS(11),
    [anon_sym_ATexample] = ACTIONS(13),
    [anon_sym_ATlicense] = ACTIONS(13),
    [anon_sym_ATpackage] = ACTIONS(13),
    [anon_sym_ATsource] = ACTIONS(13),
    [anon_sym_ATsubpackage] = ACTIONS(13),
    [anon_sym_ATuses] = ACTIONS(13),
    [anon_sym_ATauthor] = ACTIONS(15),
    [anon_sym_ATglobal] = ACTIONS(17),
    [anon_sym_ATinternal] = ACTIONS(19),
    [anon_sym_ATlink] = ACTIONS(21),
    [anon_sym_ATmethod] = ACTIONS(23),
    [anon_sym_ATparam] = ACTIONS(25),
    [anon_sym_ATproperty] = ACTIONS(27),
    [anon_sym_ATproperty_DASHread] = ACTIONS(29),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(29),
    [anon_sym_ATreturn] = ACTIONS(31),
    [anon_sym_ATsee] = ACTIONS(33),
    [anon_sym_ATthrows] = ACTIONS(35),
    [anon_sym_ATvar] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(39),
    [anon_sym_ATafter] = ACTIONS(41),
    [anon_sym_ATafterClass] = ACTIONS(43),
    [anon_sym_ATannotation] = ACTIONS(43),
    [anon_sym_ATbackupGlobals] = ACTIONS(43),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(43),
    [anon_sym_ATbefore] = ACTIONS(41),
    [anon_sym_ATbeforeClass] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(41),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(43),
    [anon_sym_ATcovers] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(43),
    [anon_sym_ATcoversNothing] = ACTIONS(43),
    [anon_sym_ATdataProvider] = ACTIONS(43),
    [anon_sym_ATdepends] = ACTIONS(41),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(43),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(43),
    [anon_sym_ATgroup] = ACTIONS(43),
    [anon_sym_ATlarge] = ACTIONS(43),
    [anon_sym_ATmedium] = ACTIONS(43),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(43),
    [anon_sym_ATrequires] = ACTIONS(41),
    [anon_sym_ATrequiresusages] = ACTIONS(43),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(43),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(43),
    [anon_sym_ATsmall] = ACTIONS(43),
    [anon_sym_ATtest] = ACTIONS(41),
    [anon_sym_ATtestWith] = ACTIONS(43),
    [anon_sym_ATtestdox] = ACTIONS(43),
    [anon_sym_ATticket] = ACTIONS(43),
    [sym__end] = ACTIONS(49),
  },
  [7] = {
    [aux_sym_namespace_name_repeat1] = STATE(145),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_ATapi] = ACTIONS(112),
    [anon_sym_ATfilesource] = ACTIONS(112),
    [anon_sym_ATignore] = ACTIONS(112),
    [anon_sym_ATcategory] = ACTIONS(112),
    [anon_sym_ATcopyright] = ACTIONS(112),
    [anon_sym_ATtodo] = ACTIONS(112),
    [anon_sym_ATexample] = ACTIONS(112),
    [anon_sym_ATlicense] = ACTIONS(112),
    [anon_sym_ATpackage] = ACTIONS(112),
    [anon_sym_ATsource] = ACTIONS(112),
    [anon_sym_ATsubpackage] = ACTIONS(112),
    [anon_sym_ATuses] = ACTIONS(112),
    [anon_sym_ATauthor] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_ATglobal] = ACTIONS(112),
    [anon_sym_ATinternal] = ACTIONS(112),
    [anon_sym_ATlink] = ACTIONS(112),
    [anon_sym_ATmethod] = ACTIONS(112),
    [anon_sym_ATparam] = ACTIONS(112),
    [anon_sym_ATproperty] = ACTIONS(114),
    [anon_sym_ATproperty_DASHread] = ACTIONS(112),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(112),
    [anon_sym_ATreturn] = ACTIONS(112),
    [anon_sym_ATsee] = ACTIONS(112),
    [anon_sym_ATthrows] = ACTIONS(112),
    [anon_sym_ATvar] = ACTIONS(112),
    [anon_sym_ATdeprecated] = ACTIONS(112),
    [anon_sym_ATsince] = ACTIONS(112),
    [anon_sym_ATversion] = ACTIONS(112),
    [anon_sym_ATafter] = ACTIONS(114),
    [anon_sym_ATafterClass] = ACTIONS(112),
    [anon_sym_ATannotation] = ACTIONS(112),
    [anon_sym_ATbackupGlobals] = ACTIONS(112),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(112),
    [anon_sym_ATbefore] = ACTIONS(114),
    [anon_sym_ATbeforeClass] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(114),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(112),
    [anon_sym_ATcovers] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(112),
    [anon_sym_ATcoversNothing] = ACTIONS(112),
    [anon_sym_ATdataProvider] = ACTIONS(112),
    [anon_sym_ATdepends] = ACTIONS(114),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(112),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(112),
    [anon_sym_ATgroup] = ACTIONS(112),
    [anon_sym_ATlarge] = ACTIONS(112),
    [anon_sym_ATmedium] = ACTIONS(112),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(112),
    [anon_sym_ATrequires] = ACTIONS(114),
    [anon_sym_ATrequiresusages] = ACTIONS(112),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(112),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(112),
    [anon_sym_ATsmall] = ACTIONS(112),
    [anon_sym_ATtest] = ACTIONS(114),
    [anon_sym_ATtestWith] = ACTIONS(112),
    [anon_sym_ATtestdox] = ACTIONS(112),
    [anon_sym_ATticket] = ACTIONS(112),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [sym_text] = ACTIONS(114),
    [sym__end] = ACTIONS(112),
  },
  [8] = {
    [sym_inline_tag] = STATE(50),
    [sym_variable_name] = STATE(37),
    [sym_description] = STATE(62),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(119),
    [anon_sym_ATfilesource] = ACTIONS(119),
    [anon_sym_ATignore] = ACTIONS(119),
    [anon_sym_ATcategory] = ACTIONS(119),
    [anon_sym_ATcopyright] = ACTIONS(119),
    [anon_sym_ATtodo] = ACTIONS(119),
    [anon_sym_ATexample] = ACTIONS(119),
    [anon_sym_ATlicense] = ACTIONS(119),
    [anon_sym_ATpackage] = ACTIONS(119),
    [anon_sym_ATsource] = ACTIONS(119),
    [anon_sym_ATsubpackage] = ACTIONS(119),
    [anon_sym_ATuses] = ACTIONS(119),
    [anon_sym_ATauthor] = ACTIONS(119),
    [anon_sym_ATglobal] = ACTIONS(119),
    [anon_sym_ATinternal] = ACTIONS(119),
    [anon_sym_ATlink] = ACTIONS(119),
    [anon_sym_ATmethod] = ACTIONS(119),
    [anon_sym_ATparam] = ACTIONS(119),
    [anon_sym_ATproperty] = ACTIONS(121),
    [anon_sym_ATproperty_DASHread] = ACTIONS(119),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(119),
    [anon_sym_ATreturn] = ACTIONS(119),
    [anon_sym_ATsee] = ACTIONS(119),
    [anon_sym_ATthrows] = ACTIONS(119),
    [anon_sym_ATvar] = ACTIONS(119),
    [anon_sym_ATdeprecated] = ACTIONS(119),
    [anon_sym_ATsince] = ACTIONS(119),
    [anon_sym_ATversion] = ACTIONS(119),
    [anon_sym_ATafter] = ACTIONS(121),
    [anon_sym_ATafterClass] = ACTIONS(119),
    [anon_sym_ATannotation] = ACTIONS(119),
    [anon_sym_ATbackupGlobals] = ACTIONS(119),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(119),
    [anon_sym_ATbefore] = ACTIONS(121),
    [anon_sym_ATbeforeClass] = ACTIONS(119),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(121),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(119),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(119),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(119),
    [anon_sym_ATcovers] = ACTIONS(121),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(121),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(119),
    [anon_sym_ATcoversNothing] = ACTIONS(119),
    [anon_sym_ATdataProvider] = ACTIONS(119),
    [anon_sym_ATdepends] = ACTIONS(121),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(119),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(119),
    [anon_sym_ATgroup] = ACTIONS(119),
    [anon_sym_ATlarge] = ACTIONS(119),
    [anon_sym_ATmedium] = ACTIONS(119),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(119),
    [anon_sym_ATrequires] = ACTIONS(121),
    [anon_sym_ATrequiresusages] = ACTIONS(119),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(119),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(119),
    [anon_sym_ATsmall] = ACTIONS(119),
    [anon_sym_ATtest] = ACTIONS(121),
    [anon_sym_ATtestWith] = ACTIONS(119),
    [anon_sym_ATtestdox] = ACTIONS(119),
    [anon_sym_ATticket] = ACTIONS(119),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(119),
  },
  [9] = {
    [aux_sym_namespace_name_repeat1] = STATE(145),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_ATapi] = ACTIONS(112),
    [anon_sym_ATfilesource] = ACTIONS(112),
    [anon_sym_ATignore] = ACTIONS(112),
    [anon_sym_ATcategory] = ACTIONS(112),
    [anon_sym_ATcopyright] = ACTIONS(112),
    [anon_sym_ATtodo] = ACTIONS(112),
    [anon_sym_ATexample] = ACTIONS(112),
    [anon_sym_ATlicense] = ACTIONS(112),
    [anon_sym_ATpackage] = ACTIONS(112),
    [anon_sym_ATsource] = ACTIONS(112),
    [anon_sym_ATsubpackage] = ACTIONS(112),
    [anon_sym_ATuses] = ACTIONS(112),
    [anon_sym_ATauthor] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_ATglobal] = ACTIONS(112),
    [anon_sym_ATinternal] = ACTIONS(112),
    [anon_sym_ATlink] = ACTIONS(112),
    [anon_sym_ATmethod] = ACTIONS(112),
    [anon_sym_ATparam] = ACTIONS(112),
    [anon_sym_ATproperty] = ACTIONS(114),
    [anon_sym_ATproperty_DASHread] = ACTIONS(112),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(112),
    [anon_sym_ATreturn] = ACTIONS(112),
    [anon_sym_ATsee] = ACTIONS(112),
    [anon_sym_ATthrows] = ACTIONS(112),
    [anon_sym_ATvar] = ACTIONS(112),
    [anon_sym_ATdeprecated] = ACTIONS(112),
    [anon_sym_ATsince] = ACTIONS(112),
    [anon_sym_ATversion] = ACTIONS(112),
    [anon_sym_ATafter] = ACTIONS(114),
    [anon_sym_ATafterClass] = ACTIONS(112),
    [anon_sym_ATannotation] = ACTIONS(112),
    [anon_sym_ATbackupGlobals] = ACTIONS(112),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(112),
    [anon_sym_ATbefore] = ACTIONS(114),
    [anon_sym_ATbeforeClass] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(114),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(112),
    [anon_sym_ATcovers] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(112),
    [anon_sym_ATcoversNothing] = ACTIONS(112),
    [anon_sym_ATdataProvider] = ACTIONS(112),
    [anon_sym_ATdepends] = ACTIONS(114),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(112),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(112),
    [anon_sym_ATgroup] = ACTIONS(112),
    [anon_sym_ATlarge] = ACTIONS(112),
    [anon_sym_ATmedium] = ACTIONS(112),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(112),
    [anon_sym_ATrequires] = ACTIONS(114),
    [anon_sym_ATrequiresusages] = ACTIONS(112),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(112),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(112),
    [anon_sym_ATsmall] = ACTIONS(112),
    [anon_sym_ATtest] = ACTIONS(114),
    [anon_sym_ATtestWith] = ACTIONS(112),
    [anon_sym_ATtestdox] = ACTIONS(112),
    [anon_sym_ATticket] = ACTIONS(112),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(112),
    [sym_text] = ACTIONS(114),
    [sym__end] = ACTIONS(112),
  },
  [10] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_ATapi] = ACTIONS(125),
    [anon_sym_ATfilesource] = ACTIONS(125),
    [anon_sym_ATignore] = ACTIONS(125),
    [anon_sym_ATcategory] = ACTIONS(125),
    [anon_sym_ATcopyright] = ACTIONS(125),
    [anon_sym_ATtodo] = ACTIONS(125),
    [anon_sym_ATexample] = ACTIONS(125),
    [anon_sym_ATlicense] = ACTIONS(125),
    [anon_sym_ATpackage] = ACTIONS(125),
    [anon_sym_ATsource] = ACTIONS(125),
    [anon_sym_ATsubpackage] = ACTIONS(125),
    [anon_sym_ATuses] = ACTIONS(125),
    [anon_sym_ATauthor] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_ATglobal] = ACTIONS(125),
    [anon_sym_ATinternal] = ACTIONS(125),
    [anon_sym_ATlink] = ACTIONS(125),
    [anon_sym_ATmethod] = ACTIONS(125),
    [anon_sym_ATparam] = ACTIONS(125),
    [anon_sym_ATproperty] = ACTIONS(129),
    [anon_sym_ATproperty_DASHread] = ACTIONS(125),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(125),
    [anon_sym_ATreturn] = ACTIONS(125),
    [anon_sym_ATsee] = ACTIONS(125),
    [anon_sym_ATthrows] = ACTIONS(125),
    [anon_sym_ATvar] = ACTIONS(125),
    [anon_sym_ATdeprecated] = ACTIONS(125),
    [anon_sym_ATsince] = ACTIONS(125),
    [anon_sym_ATversion] = ACTIONS(125),
    [anon_sym_ATafter] = ACTIONS(129),
    [anon_sym_ATafterClass] = ACTIONS(125),
    [anon_sym_ATannotation] = ACTIONS(125),
    [anon_sym_ATbackupGlobals] = ACTIONS(125),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(125),
    [anon_sym_ATbefore] = ACTIONS(129),
    [anon_sym_ATbeforeClass] = ACTIONS(125),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(129),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(125),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(125),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(125),
    [anon_sym_ATcovers] = ACTIONS(129),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(129),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(125),
    [anon_sym_ATcoversNothing] = ACTIONS(125),
    [anon_sym_ATdataProvider] = ACTIONS(125),
    [anon_sym_ATdepends] = ACTIONS(129),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(125),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(125),
    [anon_sym_ATgroup] = ACTIONS(125),
    [anon_sym_ATlarge] = ACTIONS(125),
    [anon_sym_ATmedium] = ACTIONS(125),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(125),
    [anon_sym_ATrequires] = ACTIONS(129),
    [anon_sym_ATrequiresusages] = ACTIONS(125),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(125),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(125),
    [anon_sym_ATsmall] = ACTIONS(125),
    [anon_sym_ATtest] = ACTIONS(129),
    [anon_sym_ATtestWith] = ACTIONS(125),
    [anon_sym_ATtestdox] = ACTIONS(125),
    [anon_sym_ATticket] = ACTIONS(125),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_DOLLAR] = ACTIONS(125),
    [sym_text] = ACTIONS(129),
    [sym__end] = ACTIONS(125),
  },
  [11] = {
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_ATapi] = ACTIONS(133),
    [anon_sym_ATfilesource] = ACTIONS(133),
    [anon_sym_ATignore] = ACTIONS(133),
    [anon_sym_ATcategory] = ACTIONS(133),
    [anon_sym_ATcopyright] = ACTIONS(133),
    [anon_sym_ATtodo] = ACTIONS(133),
    [anon_sym_ATexample] = ACTIONS(133),
    [anon_sym_ATlicense] = ACTIONS(133),
    [anon_sym_ATpackage] = ACTIONS(133),
    [anon_sym_ATsource] = ACTIONS(133),
    [anon_sym_ATsubpackage] = ACTIONS(133),
    [anon_sym_ATuses] = ACTIONS(133),
    [anon_sym_ATauthor] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_ATglobal] = ACTIONS(133),
    [anon_sym_ATinternal] = ACTIONS(133),
    [anon_sym_ATlink] = ACTIONS(133),
    [anon_sym_ATmethod] = ACTIONS(133),
    [anon_sym_ATparam] = ACTIONS(133),
    [anon_sym_ATproperty] = ACTIONS(135),
    [anon_sym_ATproperty_DASHread] = ACTIONS(133),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(133),
    [anon_sym_ATreturn] = ACTIONS(133),
    [anon_sym_ATsee] = ACTIONS(133),
    [anon_sym_ATthrows] = ACTIONS(133),
    [anon_sym_ATvar] = ACTIONS(133),
    [anon_sym_ATdeprecated] = ACTIONS(133),
    [anon_sym_ATsince] = ACTIONS(133),
    [anon_sym_ATversion] = ACTIONS(133),
    [anon_sym_ATafter] = ACTIONS(135),
    [anon_sym_ATafterClass] = ACTIONS(133),
    [anon_sym_ATannotation] = ACTIONS(133),
    [anon_sym_ATbackupGlobals] = ACTIONS(133),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(133),
    [anon_sym_ATbefore] = ACTIONS(135),
    [anon_sym_ATbeforeClass] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(135),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(133),
    [anon_sym_ATcovers] = ACTIONS(135),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(135),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(133),
    [anon_sym_ATcoversNothing] = ACTIONS(133),
    [anon_sym_ATdataProvider] = ACTIONS(133),
    [anon_sym_ATdepends] = ACTIONS(135),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(133),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(133),
    [anon_sym_ATgroup] = ACTIONS(133),
    [anon_sym_ATlarge] = ACTIONS(133),
    [anon_sym_ATmedium] = ACTIONS(133),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(133),
    [anon_sym_ATrequires] = ACTIONS(135),
    [anon_sym_ATrequiresusages] = ACTIONS(133),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(133),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(133),
    [anon_sym_ATsmall] = ACTIONS(133),
    [anon_sym_ATtest] = ACTIONS(135),
    [anon_sym_ATtestWith] = ACTIONS(133),
    [anon_sym_ATtestdox] = ACTIONS(133),
    [anon_sym_ATticket] = ACTIONS(133),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [sym_text] = ACTIONS(135),
    [sym__end] = ACTIONS(133),
  },
  [12] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(79),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(137),
    [anon_sym_ATfilesource] = ACTIONS(137),
    [anon_sym_ATignore] = ACTIONS(137),
    [anon_sym_ATcategory] = ACTIONS(137),
    [anon_sym_ATcopyright] = ACTIONS(137),
    [anon_sym_ATtodo] = ACTIONS(137),
    [anon_sym_ATexample] = ACTIONS(137),
    [anon_sym_ATlicense] = ACTIONS(137),
    [anon_sym_ATpackage] = ACTIONS(137),
    [anon_sym_ATsource] = ACTIONS(137),
    [anon_sym_ATsubpackage] = ACTIONS(137),
    [anon_sym_ATuses] = ACTIONS(137),
    [anon_sym_ATauthor] = ACTIONS(137),
    [anon_sym_ATglobal] = ACTIONS(137),
    [anon_sym_ATinternal] = ACTIONS(137),
    [anon_sym_ATlink] = ACTIONS(137),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(139),
    [anon_sym_ATmethod] = ACTIONS(137),
    [anon_sym_ATparam] = ACTIONS(137),
    [anon_sym_ATproperty] = ACTIONS(141),
    [anon_sym_ATproperty_DASHread] = ACTIONS(137),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(137),
    [anon_sym_ATreturn] = ACTIONS(137),
    [anon_sym_ATsee] = ACTIONS(137),
    [anon_sym_ATthrows] = ACTIONS(137),
    [anon_sym_ATvar] = ACTIONS(137),
    [anon_sym_ATdeprecated] = ACTIONS(137),
    [anon_sym_ATsince] = ACTIONS(137),
    [anon_sym_ATversion] = ACTIONS(137),
    [anon_sym_ATafter] = ACTIONS(141),
    [anon_sym_ATafterClass] = ACTIONS(137),
    [anon_sym_ATannotation] = ACTIONS(137),
    [anon_sym_ATbackupGlobals] = ACTIONS(137),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(137),
    [anon_sym_ATbefore] = ACTIONS(141),
    [anon_sym_ATbeforeClass] = ACTIONS(137),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(141),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(137),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(137),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(137),
    [anon_sym_ATcovers] = ACTIONS(141),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(141),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(137),
    [anon_sym_ATcoversNothing] = ACTIONS(137),
    [anon_sym_ATdataProvider] = ACTIONS(137),
    [anon_sym_ATdepends] = ACTIONS(141),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(137),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(137),
    [anon_sym_ATgroup] = ACTIONS(137),
    [anon_sym_ATlarge] = ACTIONS(137),
    [anon_sym_ATmedium] = ACTIONS(137),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(137),
    [anon_sym_ATrequires] = ACTIONS(141),
    [anon_sym_ATrequiresusages] = ACTIONS(137),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(137),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(137),
    [anon_sym_ATsmall] = ACTIONS(137),
    [anon_sym_ATtest] = ACTIONS(141),
    [anon_sym_ATtestWith] = ACTIONS(137),
    [anon_sym_ATtestdox] = ACTIONS(137),
    [anon_sym_ATticket] = ACTIONS(137),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(137),
  },
  [13] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_ATapi] = ACTIONS(143),
    [anon_sym_ATfilesource] = ACTIONS(143),
    [anon_sym_ATignore] = ACTIONS(143),
    [anon_sym_ATcategory] = ACTIONS(143),
    [anon_sym_ATcopyright] = ACTIONS(143),
    [anon_sym_ATtodo] = ACTIONS(143),
    [anon_sym_ATexample] = ACTIONS(143),
    [anon_sym_ATlicense] = ACTIONS(143),
    [anon_sym_ATpackage] = ACTIONS(143),
    [anon_sym_ATsource] = ACTIONS(143),
    [anon_sym_ATsubpackage] = ACTIONS(143),
    [anon_sym_ATuses] = ACTIONS(143),
    [anon_sym_ATauthor] = ACTIONS(143),
    [anon_sym_ATglobal] = ACTIONS(143),
    [anon_sym_ATinternal] = ACTIONS(143),
    [anon_sym_ATlink] = ACTIONS(143),
    [anon_sym_ATmethod] = ACTIONS(143),
    [anon_sym_ATparam] = ACTIONS(143),
    [anon_sym_ATproperty] = ACTIONS(145),
    [anon_sym_ATproperty_DASHread] = ACTIONS(143),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(143),
    [anon_sym_ATreturn] = ACTIONS(143),
    [anon_sym_ATsee] = ACTIONS(143),
    [anon_sym_ATthrows] = ACTIONS(143),
    [anon_sym_ATvar] = ACTIONS(143),
    [anon_sym_ATdeprecated] = ACTIONS(143),
    [anon_sym_ATsince] = ACTIONS(143),
    [anon_sym_ATversion] = ACTIONS(143),
    [anon_sym_ATafter] = ACTIONS(145),
    [anon_sym_ATafterClass] = ACTIONS(143),
    [anon_sym_ATannotation] = ACTIONS(143),
    [anon_sym_ATbackupGlobals] = ACTIONS(143),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(143),
    [anon_sym_ATbefore] = ACTIONS(145),
    [anon_sym_ATbeforeClass] = ACTIONS(143),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(145),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(143),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(143),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(143),
    [anon_sym_ATcovers] = ACTIONS(145),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(145),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(143),
    [anon_sym_ATcoversNothing] = ACTIONS(143),
    [anon_sym_ATdataProvider] = ACTIONS(143),
    [anon_sym_ATdepends] = ACTIONS(145),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(143),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(143),
    [anon_sym_ATgroup] = ACTIONS(143),
    [anon_sym_ATlarge] = ACTIONS(143),
    [anon_sym_ATmedium] = ACTIONS(143),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(143),
    [anon_sym_ATrequires] = ACTIONS(145),
    [anon_sym_ATrequiresusages] = ACTIONS(143),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(143),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(143),
    [anon_sym_ATsmall] = ACTIONS(143),
    [anon_sym_ATtest] = ACTIONS(145),
    [anon_sym_ATtestWith] = ACTIONS(143),
    [anon_sym_ATtestdox] = ACTIONS(143),
    [anon_sym_ATticket] = ACTIONS(143),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [sym_text] = ACTIONS(145),
    [sym__end] = ACTIONS(143),
  },
  [14] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_ATapi] = ACTIONS(125),
    [anon_sym_ATfilesource] = ACTIONS(125),
    [anon_sym_ATignore] = ACTIONS(125),
    [anon_sym_ATcategory] = ACTIONS(125),
    [anon_sym_ATcopyright] = ACTIONS(125),
    [anon_sym_ATtodo] = ACTIONS(125),
    [anon_sym_ATexample] = ACTIONS(125),
    [anon_sym_ATlicense] = ACTIONS(125),
    [anon_sym_ATpackage] = ACTIONS(125),
    [anon_sym_ATsource] = ACTIONS(125),
    [anon_sym_ATsubpackage] = ACTIONS(125),
    [anon_sym_ATuses] = ACTIONS(125),
    [anon_sym_ATauthor] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_ATglobal] = ACTIONS(125),
    [anon_sym_ATinternal] = ACTIONS(125),
    [anon_sym_ATlink] = ACTIONS(125),
    [anon_sym_ATmethod] = ACTIONS(125),
    [anon_sym_ATparam] = ACTIONS(125),
    [anon_sym_ATproperty] = ACTIONS(129),
    [anon_sym_ATproperty_DASHread] = ACTIONS(125),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(125),
    [anon_sym_ATreturn] = ACTIONS(125),
    [anon_sym_ATsee] = ACTIONS(125),
    [anon_sym_ATthrows] = ACTIONS(125),
    [anon_sym_ATvar] = ACTIONS(125),
    [anon_sym_ATdeprecated] = ACTIONS(125),
    [anon_sym_ATsince] = ACTIONS(125),
    [anon_sym_ATversion] = ACTIONS(125),
    [anon_sym_ATafter] = ACTIONS(129),
    [anon_sym_ATafterClass] = ACTIONS(125),
    [anon_sym_ATannotation] = ACTIONS(125),
    [anon_sym_ATbackupGlobals] = ACTIONS(125),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(125),
    [anon_sym_ATbefore] = ACTIONS(129),
    [anon_sym_ATbeforeClass] = ACTIONS(125),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(129),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(125),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(125),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(125),
    [anon_sym_ATcovers] = ACTIONS(129),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(129),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(125),
    [anon_sym_ATcoversNothing] = ACTIONS(125),
    [anon_sym_ATdataProvider] = ACTIONS(125),
    [anon_sym_ATdepends] = ACTIONS(129),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(125),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(125),
    [anon_sym_ATgroup] = ACTIONS(125),
    [anon_sym_ATlarge] = ACTIONS(125),
    [anon_sym_ATmedium] = ACTIONS(125),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(125),
    [anon_sym_ATrequires] = ACTIONS(129),
    [anon_sym_ATrequiresusages] = ACTIONS(125),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(125),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(125),
    [anon_sym_ATsmall] = ACTIONS(125),
    [anon_sym_ATtest] = ACTIONS(129),
    [anon_sym_ATtestWith] = ACTIONS(125),
    [anon_sym_ATtestdox] = ACTIONS(125),
    [anon_sym_ATticket] = ACTIONS(125),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(125),
    [sym_text] = ACTIONS(129),
    [sym__end] = ACTIONS(125),
  },
  [15] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_ATapi] = ACTIONS(154),
    [anon_sym_ATfilesource] = ACTIONS(154),
    [anon_sym_ATignore] = ACTIONS(154),
    [anon_sym_ATcategory] = ACTIONS(154),
    [anon_sym_ATcopyright] = ACTIONS(154),
    [anon_sym_ATtodo] = ACTIONS(154),
    [anon_sym_ATexample] = ACTIONS(154),
    [anon_sym_ATlicense] = ACTIONS(154),
    [anon_sym_ATpackage] = ACTIONS(154),
    [anon_sym_ATsource] = ACTIONS(154),
    [anon_sym_ATsubpackage] = ACTIONS(154),
    [anon_sym_ATuses] = ACTIONS(154),
    [anon_sym_ATauthor] = ACTIONS(154),
    [anon_sym_ATglobal] = ACTIONS(154),
    [anon_sym_ATinternal] = ACTIONS(154),
    [anon_sym_ATlink] = ACTIONS(154),
    [anon_sym_ATmethod] = ACTIONS(154),
    [anon_sym_ATparam] = ACTIONS(154),
    [anon_sym_ATproperty] = ACTIONS(156),
    [anon_sym_ATproperty_DASHread] = ACTIONS(154),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(154),
    [anon_sym_ATreturn] = ACTIONS(154),
    [anon_sym_ATsee] = ACTIONS(154),
    [anon_sym_ATthrows] = ACTIONS(154),
    [anon_sym_ATvar] = ACTIONS(154),
    [anon_sym_ATdeprecated] = ACTIONS(154),
    [anon_sym_ATsince] = ACTIONS(154),
    [anon_sym_ATversion] = ACTIONS(154),
    [anon_sym_ATafter] = ACTIONS(156),
    [anon_sym_ATafterClass] = ACTIONS(154),
    [anon_sym_ATannotation] = ACTIONS(154),
    [anon_sym_ATbackupGlobals] = ACTIONS(154),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(154),
    [anon_sym_ATbefore] = ACTIONS(156),
    [anon_sym_ATbeforeClass] = ACTIONS(154),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(156),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(154),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(154),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(154),
    [anon_sym_ATcovers] = ACTIONS(156),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(156),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(154),
    [anon_sym_ATcoversNothing] = ACTIONS(154),
    [anon_sym_ATdataProvider] = ACTIONS(154),
    [anon_sym_ATdepends] = ACTIONS(156),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(154),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(154),
    [anon_sym_ATgroup] = ACTIONS(154),
    [anon_sym_ATlarge] = ACTIONS(154),
    [anon_sym_ATmedium] = ACTIONS(154),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(154),
    [anon_sym_ATrequires] = ACTIONS(156),
    [anon_sym_ATrequiresusages] = ACTIONS(154),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(154),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(154),
    [anon_sym_ATsmall] = ACTIONS(154),
    [anon_sym_ATtest] = ACTIONS(156),
    [anon_sym_ATtestWith] = ACTIONS(154),
    [anon_sym_ATtestdox] = ACTIONS(154),
    [anon_sym_ATticket] = ACTIONS(154),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_DOLLAR] = ACTIONS(154),
    [sym_text] = ACTIONS(156),
    [sym__end] = ACTIONS(154),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_ATapi] = ACTIONS(160),
    [anon_sym_ATfilesource] = ACTIONS(160),
    [anon_sym_ATignore] = ACTIONS(160),
    [anon_sym_ATcategory] = ACTIONS(160),
    [anon_sym_ATcopyright] = ACTIONS(160),
    [anon_sym_ATtodo] = ACTIONS(160),
    [anon_sym_ATexample] = ACTIONS(160),
    [anon_sym_ATlicense] = ACTIONS(160),
    [anon_sym_ATpackage] = ACTIONS(160),
    [anon_sym_ATsource] = ACTIONS(160),
    [anon_sym_ATsubpackage] = ACTIONS(160),
    [anon_sym_ATuses] = ACTIONS(160),
    [anon_sym_ATauthor] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_ATglobal] = ACTIONS(160),
    [anon_sym_ATinternal] = ACTIONS(160),
    [anon_sym_ATlink] = ACTIONS(160),
    [anon_sym_ATmethod] = ACTIONS(160),
    [anon_sym_ATparam] = ACTIONS(160),
    [anon_sym_ATproperty] = ACTIONS(162),
    [anon_sym_ATproperty_DASHread] = ACTIONS(160),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(160),
    [anon_sym_ATreturn] = ACTIONS(160),
    [anon_sym_ATsee] = ACTIONS(160),
    [anon_sym_ATthrows] = ACTIONS(160),
    [anon_sym_ATvar] = ACTIONS(160),
    [anon_sym_ATdeprecated] = ACTIONS(160),
    [anon_sym_ATsince] = ACTIONS(160),
    [anon_sym_ATversion] = ACTIONS(160),
    [anon_sym_ATafter] = ACTIONS(162),
    [anon_sym_ATafterClass] = ACTIONS(160),
    [anon_sym_ATannotation] = ACTIONS(160),
    [anon_sym_ATbackupGlobals] = ACTIONS(160),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(160),
    [anon_sym_ATbefore] = ACTIONS(162),
    [anon_sym_ATbeforeClass] = ACTIONS(160),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(162),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(160),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(160),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(160),
    [anon_sym_ATcovers] = ACTIONS(162),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(162),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(160),
    [anon_sym_ATcoversNothing] = ACTIONS(160),
    [anon_sym_ATdataProvider] = ACTIONS(160),
    [anon_sym_ATdepends] = ACTIONS(162),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(160),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(160),
    [anon_sym_ATgroup] = ACTIONS(160),
    [anon_sym_ATlarge] = ACTIONS(160),
    [anon_sym_ATmedium] = ACTIONS(160),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(160),
    [anon_sym_ATrequires] = ACTIONS(162),
    [anon_sym_ATrequiresusages] = ACTIONS(160),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(160),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(160),
    [anon_sym_ATsmall] = ACTIONS(160),
    [anon_sym_ATtest] = ACTIONS(162),
    [anon_sym_ATtestWith] = ACTIONS(160),
    [anon_sym_ATtestdox] = ACTIONS(160),
    [anon_sym_ATticket] = ACTIONS(160),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(160),
    [sym_text] = ACTIONS(162),
    [sym__end] = ACTIONS(160),
  },
  [17] = {
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_ATapi] = ACTIONS(112),
    [anon_sym_ATfilesource] = ACTIONS(112),
    [anon_sym_ATignore] = ACTIONS(112),
    [anon_sym_ATcategory] = ACTIONS(112),
    [anon_sym_ATcopyright] = ACTIONS(112),
    [anon_sym_ATtodo] = ACTIONS(112),
    [anon_sym_ATexample] = ACTIONS(112),
    [anon_sym_ATlicense] = ACTIONS(112),
    [anon_sym_ATpackage] = ACTIONS(112),
    [anon_sym_ATsource] = ACTIONS(112),
    [anon_sym_ATsubpackage] = ACTIONS(112),
    [anon_sym_ATuses] = ACTIONS(112),
    [anon_sym_ATauthor] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_ATglobal] = ACTIONS(112),
    [anon_sym_ATinternal] = ACTIONS(112),
    [anon_sym_ATlink] = ACTIONS(112),
    [anon_sym_ATmethod] = ACTIONS(112),
    [anon_sym_ATparam] = ACTIONS(112),
    [anon_sym_ATproperty] = ACTIONS(114),
    [anon_sym_ATproperty_DASHread] = ACTIONS(112),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(112),
    [anon_sym_ATreturn] = ACTIONS(112),
    [anon_sym_ATsee] = ACTIONS(112),
    [anon_sym_ATthrows] = ACTIONS(112),
    [anon_sym_ATvar] = ACTIONS(112),
    [anon_sym_ATdeprecated] = ACTIONS(112),
    [anon_sym_ATsince] = ACTIONS(112),
    [anon_sym_ATversion] = ACTIONS(112),
    [anon_sym_ATafter] = ACTIONS(114),
    [anon_sym_ATafterClass] = ACTIONS(112),
    [anon_sym_ATannotation] = ACTIONS(112),
    [anon_sym_ATbackupGlobals] = ACTIONS(112),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(112),
    [anon_sym_ATbefore] = ACTIONS(114),
    [anon_sym_ATbeforeClass] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(114),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(112),
    [anon_sym_ATcovers] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(112),
    [anon_sym_ATcoversNothing] = ACTIONS(112),
    [anon_sym_ATdataProvider] = ACTIONS(112),
    [anon_sym_ATdepends] = ACTIONS(114),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(112),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(112),
    [anon_sym_ATgroup] = ACTIONS(112),
    [anon_sym_ATlarge] = ACTIONS(112),
    [anon_sym_ATmedium] = ACTIONS(112),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(112),
    [anon_sym_ATrequires] = ACTIONS(114),
    [anon_sym_ATrequiresusages] = ACTIONS(112),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(112),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(112),
    [anon_sym_ATsmall] = ACTIONS(112),
    [anon_sym_ATtest] = ACTIONS(114),
    [anon_sym_ATtestWith] = ACTIONS(112),
    [anon_sym_ATtestdox] = ACTIONS(112),
    [anon_sym_ATticket] = ACTIONS(112),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [sym_text] = ACTIONS(114),
    [sym__end] = ACTIONS(112),
  },
  [18] = {
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_ATapi] = ACTIONS(164),
    [anon_sym_ATfilesource] = ACTIONS(164),
    [anon_sym_ATignore] = ACTIONS(164),
    [anon_sym_ATcategory] = ACTIONS(164),
    [anon_sym_ATcopyright] = ACTIONS(164),
    [anon_sym_ATtodo] = ACTIONS(164),
    [anon_sym_ATexample] = ACTIONS(164),
    [anon_sym_ATlicense] = ACTIONS(164),
    [anon_sym_ATpackage] = ACTIONS(164),
    [anon_sym_ATsource] = ACTIONS(164),
    [anon_sym_ATsubpackage] = ACTIONS(164),
    [anon_sym_ATuses] = ACTIONS(164),
    [anon_sym_ATauthor] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_ATglobal] = ACTIONS(164),
    [anon_sym_ATinternal] = ACTIONS(164),
    [anon_sym_ATlink] = ACTIONS(164),
    [anon_sym_ATmethod] = ACTIONS(164),
    [anon_sym_ATparam] = ACTIONS(164),
    [anon_sym_ATproperty] = ACTIONS(166),
    [anon_sym_ATproperty_DASHread] = ACTIONS(164),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(164),
    [anon_sym_ATreturn] = ACTIONS(164),
    [anon_sym_ATsee] = ACTIONS(164),
    [anon_sym_ATthrows] = ACTIONS(164),
    [anon_sym_ATvar] = ACTIONS(164),
    [anon_sym_ATdeprecated] = ACTIONS(164),
    [anon_sym_ATsince] = ACTIONS(164),
    [anon_sym_ATversion] = ACTIONS(164),
    [anon_sym_ATafter] = ACTIONS(166),
    [anon_sym_ATafterClass] = ACTIONS(164),
    [anon_sym_ATannotation] = ACTIONS(164),
    [anon_sym_ATbackupGlobals] = ACTIONS(164),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(164),
    [anon_sym_ATbefore] = ACTIONS(166),
    [anon_sym_ATbeforeClass] = ACTIONS(164),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(166),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(164),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(164),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(164),
    [anon_sym_ATcovers] = ACTIONS(166),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(166),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(164),
    [anon_sym_ATcoversNothing] = ACTIONS(164),
    [anon_sym_ATdataProvider] = ACTIONS(164),
    [anon_sym_ATdepends] = ACTIONS(166),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(164),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(164),
    [anon_sym_ATgroup] = ACTIONS(164),
    [anon_sym_ATlarge] = ACTIONS(164),
    [anon_sym_ATmedium] = ACTIONS(164),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(164),
    [anon_sym_ATrequires] = ACTIONS(166),
    [anon_sym_ATrequiresusages] = ACTIONS(164),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(164),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(164),
    [anon_sym_ATsmall] = ACTIONS(164),
    [anon_sym_ATtest] = ACTIONS(166),
    [anon_sym_ATtestWith] = ACTIONS(164),
    [anon_sym_ATtestdox] = ACTIONS(164),
    [anon_sym_ATticket] = ACTIONS(164),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_DOLLAR] = ACTIONS(164),
    [sym_text] = ACTIONS(166),
    [sym__end] = ACTIONS(164),
  },
  [19] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(68),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(168),
    [anon_sym_ATfilesource] = ACTIONS(168),
    [anon_sym_ATignore] = ACTIONS(168),
    [anon_sym_ATcategory] = ACTIONS(168),
    [anon_sym_ATcopyright] = ACTIONS(168),
    [anon_sym_ATtodo] = ACTIONS(168),
    [anon_sym_ATexample] = ACTIONS(168),
    [anon_sym_ATlicense] = ACTIONS(168),
    [anon_sym_ATpackage] = ACTIONS(168),
    [anon_sym_ATsource] = ACTIONS(168),
    [anon_sym_ATsubpackage] = ACTIONS(168),
    [anon_sym_ATuses] = ACTIONS(168),
    [anon_sym_ATauthor] = ACTIONS(168),
    [anon_sym_ATglobal] = ACTIONS(168),
    [anon_sym_ATinternal] = ACTIONS(168),
    [anon_sym_ATlink] = ACTIONS(168),
    [anon_sym_ATmethod] = ACTIONS(168),
    [anon_sym_ATparam] = ACTIONS(168),
    [anon_sym_ATproperty] = ACTIONS(170),
    [anon_sym_ATproperty_DASHread] = ACTIONS(168),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(168),
    [anon_sym_ATreturn] = ACTIONS(168),
    [anon_sym_ATsee] = ACTIONS(168),
    [anon_sym_ATthrows] = ACTIONS(168),
    [anon_sym_ATvar] = ACTIONS(168),
    [anon_sym_ATdeprecated] = ACTIONS(168),
    [anon_sym_ATsince] = ACTIONS(168),
    [anon_sym_ATversion] = ACTIONS(168),
    [anon_sym_ATafter] = ACTIONS(170),
    [anon_sym_ATafterClass] = ACTIONS(168),
    [anon_sym_ATannotation] = ACTIONS(168),
    [anon_sym_ATbackupGlobals] = ACTIONS(168),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(168),
    [anon_sym_ATbefore] = ACTIONS(170),
    [anon_sym_ATbeforeClass] = ACTIONS(168),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(170),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(168),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(168),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(168),
    [anon_sym_ATcovers] = ACTIONS(170),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(170),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(168),
    [anon_sym_ATcoversNothing] = ACTIONS(168),
    [anon_sym_ATdataProvider] = ACTIONS(168),
    [anon_sym_ATdepends] = ACTIONS(170),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(168),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(168),
    [anon_sym_ATgroup] = ACTIONS(168),
    [anon_sym_ATlarge] = ACTIONS(168),
    [anon_sym_ATmedium] = ACTIONS(168),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(168),
    [anon_sym_ATrequires] = ACTIONS(170),
    [anon_sym_ATrequiresusages] = ACTIONS(168),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(168),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(168),
    [anon_sym_ATsmall] = ACTIONS(168),
    [anon_sym_ATtest] = ACTIONS(170),
    [anon_sym_ATtestWith] = ACTIONS(168),
    [anon_sym_ATtestdox] = ACTIONS(168),
    [anon_sym_ATticket] = ACTIONS(168),
    [sym_text] = ACTIONS(45),
    [sym_version] = ACTIONS(172),
    [sym__end] = ACTIONS(168),
  },
  [20] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(63),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(174),
    [anon_sym_ATfilesource] = ACTIONS(174),
    [anon_sym_ATignore] = ACTIONS(174),
    [anon_sym_ATcategory] = ACTIONS(174),
    [anon_sym_ATcopyright] = ACTIONS(174),
    [anon_sym_ATtodo] = ACTIONS(174),
    [anon_sym_ATexample] = ACTIONS(174),
    [anon_sym_ATlicense] = ACTIONS(174),
    [anon_sym_ATpackage] = ACTIONS(174),
    [anon_sym_ATsource] = ACTIONS(174),
    [anon_sym_ATsubpackage] = ACTIONS(174),
    [anon_sym_ATuses] = ACTIONS(174),
    [anon_sym_ATauthor] = ACTIONS(174),
    [anon_sym_ATglobal] = ACTIONS(174),
    [anon_sym_ATinternal] = ACTIONS(174),
    [anon_sym_ATlink] = ACTIONS(174),
    [anon_sym_ATmethod] = ACTIONS(174),
    [anon_sym_ATparam] = ACTIONS(174),
    [anon_sym_ATproperty] = ACTIONS(176),
    [anon_sym_ATproperty_DASHread] = ACTIONS(174),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(174),
    [anon_sym_ATreturn] = ACTIONS(174),
    [anon_sym_ATsee] = ACTIONS(174),
    [anon_sym_ATthrows] = ACTIONS(174),
    [anon_sym_ATvar] = ACTIONS(174),
    [anon_sym_ATdeprecated] = ACTIONS(174),
    [anon_sym_ATsince] = ACTIONS(174),
    [anon_sym_ATversion] = ACTIONS(174),
    [anon_sym_ATafter] = ACTIONS(176),
    [anon_sym_ATafterClass] = ACTIONS(174),
    [anon_sym_ATannotation] = ACTIONS(174),
    [anon_sym_ATbackupGlobals] = ACTIONS(174),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(174),
    [anon_sym_ATbefore] = ACTIONS(176),
    [anon_sym_ATbeforeClass] = ACTIONS(174),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(176),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(174),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(174),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(174),
    [anon_sym_ATcovers] = ACTIONS(176),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(176),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(174),
    [anon_sym_ATcoversNothing] = ACTIONS(174),
    [anon_sym_ATdataProvider] = ACTIONS(174),
    [anon_sym_ATdepends] = ACTIONS(176),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(174),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(174),
    [anon_sym_ATgroup] = ACTIONS(174),
    [anon_sym_ATlarge] = ACTIONS(174),
    [anon_sym_ATmedium] = ACTIONS(174),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(174),
    [anon_sym_ATrequires] = ACTIONS(176),
    [anon_sym_ATrequiresusages] = ACTIONS(174),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(174),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(174),
    [anon_sym_ATsmall] = ACTIONS(174),
    [anon_sym_ATtest] = ACTIONS(176),
    [anon_sym_ATtestWith] = ACTIONS(174),
    [anon_sym_ATtestdox] = ACTIONS(174),
    [anon_sym_ATticket] = ACTIONS(174),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(174),
  },
  [21] = {
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_ATapi] = ACTIONS(160),
    [anon_sym_ATfilesource] = ACTIONS(160),
    [anon_sym_ATignore] = ACTIONS(160),
    [anon_sym_ATcategory] = ACTIONS(160),
    [anon_sym_ATcopyright] = ACTIONS(160),
    [anon_sym_ATtodo] = ACTIONS(160),
    [anon_sym_ATexample] = ACTIONS(160),
    [anon_sym_ATlicense] = ACTIONS(160),
    [anon_sym_ATpackage] = ACTIONS(160),
    [anon_sym_ATsource] = ACTIONS(160),
    [anon_sym_ATsubpackage] = ACTIONS(160),
    [anon_sym_ATuses] = ACTIONS(160),
    [anon_sym_ATauthor] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_ATglobal] = ACTIONS(160),
    [anon_sym_ATinternal] = ACTIONS(160),
    [anon_sym_ATlink] = ACTIONS(160),
    [anon_sym_ATmethod] = ACTIONS(160),
    [anon_sym_ATparam] = ACTIONS(160),
    [anon_sym_ATproperty] = ACTIONS(162),
    [anon_sym_ATproperty_DASHread] = ACTIONS(160),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(160),
    [anon_sym_ATreturn] = ACTIONS(160),
    [anon_sym_ATsee] = ACTIONS(160),
    [anon_sym_ATthrows] = ACTIONS(160),
    [anon_sym_ATvar] = ACTIONS(160),
    [anon_sym_ATdeprecated] = ACTIONS(160),
    [anon_sym_ATsince] = ACTIONS(160),
    [anon_sym_ATversion] = ACTIONS(160),
    [anon_sym_ATafter] = ACTIONS(162),
    [anon_sym_ATafterClass] = ACTIONS(160),
    [anon_sym_ATannotation] = ACTIONS(160),
    [anon_sym_ATbackupGlobals] = ACTIONS(160),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(160),
    [anon_sym_ATbefore] = ACTIONS(162),
    [anon_sym_ATbeforeClass] = ACTIONS(160),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(162),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(160),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(160),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(160),
    [anon_sym_ATcovers] = ACTIONS(162),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(162),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(160),
    [anon_sym_ATcoversNothing] = ACTIONS(160),
    [anon_sym_ATdataProvider] = ACTIONS(160),
    [anon_sym_ATdepends] = ACTIONS(162),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(160),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(160),
    [anon_sym_ATgroup] = ACTIONS(160),
    [anon_sym_ATlarge] = ACTIONS(160),
    [anon_sym_ATmedium] = ACTIONS(160),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(160),
    [anon_sym_ATrequires] = ACTIONS(162),
    [anon_sym_ATrequiresusages] = ACTIONS(160),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(160),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(160),
    [anon_sym_ATsmall] = ACTIONS(160),
    [anon_sym_ATtest] = ACTIONS(162),
    [anon_sym_ATtestWith] = ACTIONS(160),
    [anon_sym_ATtestdox] = ACTIONS(160),
    [anon_sym_ATticket] = ACTIONS(160),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(160),
    [sym_text] = ACTIONS(162),
    [sym__end] = ACTIONS(160),
  },
  [22] = {
    [aux_sym_union_type_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_ATapi] = ACTIONS(178),
    [anon_sym_ATfilesource] = ACTIONS(178),
    [anon_sym_ATignore] = ACTIONS(178),
    [anon_sym_ATcategory] = ACTIONS(178),
    [anon_sym_ATcopyright] = ACTIONS(178),
    [anon_sym_ATtodo] = ACTIONS(178),
    [anon_sym_ATexample] = ACTIONS(178),
    [anon_sym_ATlicense] = ACTIONS(178),
    [anon_sym_ATpackage] = ACTIONS(178),
    [anon_sym_ATsource] = ACTIONS(178),
    [anon_sym_ATsubpackage] = ACTIONS(178),
    [anon_sym_ATuses] = ACTIONS(178),
    [anon_sym_ATauthor] = ACTIONS(178),
    [anon_sym_ATglobal] = ACTIONS(178),
    [anon_sym_ATinternal] = ACTIONS(178),
    [anon_sym_ATlink] = ACTIONS(178),
    [anon_sym_ATmethod] = ACTIONS(178),
    [anon_sym_ATparam] = ACTIONS(178),
    [anon_sym_ATproperty] = ACTIONS(180),
    [anon_sym_ATproperty_DASHread] = ACTIONS(178),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(178),
    [anon_sym_ATreturn] = ACTIONS(178),
    [anon_sym_ATsee] = ACTIONS(178),
    [anon_sym_ATthrows] = ACTIONS(178),
    [anon_sym_ATvar] = ACTIONS(178),
    [anon_sym_ATdeprecated] = ACTIONS(178),
    [anon_sym_ATsince] = ACTIONS(178),
    [anon_sym_ATversion] = ACTIONS(178),
    [anon_sym_ATafter] = ACTIONS(180),
    [anon_sym_ATafterClass] = ACTIONS(178),
    [anon_sym_ATannotation] = ACTIONS(178),
    [anon_sym_ATbackupGlobals] = ACTIONS(178),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(178),
    [anon_sym_ATbefore] = ACTIONS(180),
    [anon_sym_ATbeforeClass] = ACTIONS(178),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(180),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(178),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(178),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(178),
    [anon_sym_ATcovers] = ACTIONS(180),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(180),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(178),
    [anon_sym_ATcoversNothing] = ACTIONS(178),
    [anon_sym_ATdataProvider] = ACTIONS(178),
    [anon_sym_ATdepends] = ACTIONS(180),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(178),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(178),
    [anon_sym_ATgroup] = ACTIONS(178),
    [anon_sym_ATlarge] = ACTIONS(178),
    [anon_sym_ATmedium] = ACTIONS(178),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(178),
    [anon_sym_ATrequires] = ACTIONS(180),
    [anon_sym_ATrequiresusages] = ACTIONS(178),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(178),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(178),
    [anon_sym_ATsmall] = ACTIONS(178),
    [anon_sym_ATtest] = ACTIONS(180),
    [anon_sym_ATtestWith] = ACTIONS(178),
    [anon_sym_ATtestdox] = ACTIONS(178),
    [anon_sym_ATticket] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [sym_text] = ACTIONS(180),
    [sym__end] = ACTIONS(178),
  },
  [23] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(69),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(184),
    [anon_sym_ATfilesource] = ACTIONS(184),
    [anon_sym_ATignore] = ACTIONS(184),
    [anon_sym_ATcategory] = ACTIONS(184),
    [anon_sym_ATcopyright] = ACTIONS(184),
    [anon_sym_ATtodo] = ACTIONS(184),
    [anon_sym_ATexample] = ACTIONS(184),
    [anon_sym_ATlicense] = ACTIONS(184),
    [anon_sym_ATpackage] = ACTIONS(184),
    [anon_sym_ATsource] = ACTIONS(184),
    [anon_sym_ATsubpackage] = ACTIONS(184),
    [anon_sym_ATuses] = ACTIONS(184),
    [anon_sym_ATauthor] = ACTIONS(184),
    [anon_sym_ATglobal] = ACTIONS(184),
    [anon_sym_ATinternal] = ACTIONS(184),
    [anon_sym_ATlink] = ACTIONS(184),
    [anon_sym_ATmethod] = ACTIONS(184),
    [anon_sym_ATparam] = ACTIONS(184),
    [anon_sym_ATproperty] = ACTIONS(186),
    [anon_sym_ATproperty_DASHread] = ACTIONS(184),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(184),
    [anon_sym_ATreturn] = ACTIONS(184),
    [anon_sym_ATsee] = ACTIONS(184),
    [anon_sym_ATthrows] = ACTIONS(184),
    [anon_sym_ATvar] = ACTIONS(184),
    [anon_sym_ATdeprecated] = ACTIONS(184),
    [anon_sym_ATsince] = ACTIONS(184),
    [anon_sym_ATversion] = ACTIONS(184),
    [anon_sym_ATafter] = ACTIONS(186),
    [anon_sym_ATafterClass] = ACTIONS(184),
    [anon_sym_ATannotation] = ACTIONS(184),
    [anon_sym_ATbackupGlobals] = ACTIONS(184),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(184),
    [anon_sym_ATbefore] = ACTIONS(186),
    [anon_sym_ATbeforeClass] = ACTIONS(184),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(186),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(184),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(184),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(184),
    [anon_sym_ATcovers] = ACTIONS(186),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(186),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(184),
    [anon_sym_ATcoversNothing] = ACTIONS(184),
    [anon_sym_ATdataProvider] = ACTIONS(184),
    [anon_sym_ATdepends] = ACTIONS(186),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(184),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(184),
    [anon_sym_ATgroup] = ACTIONS(184),
    [anon_sym_ATlarge] = ACTIONS(184),
    [anon_sym_ATmedium] = ACTIONS(184),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(184),
    [anon_sym_ATrequires] = ACTIONS(186),
    [anon_sym_ATrequiresusages] = ACTIONS(184),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(184),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(184),
    [anon_sym_ATsmall] = ACTIONS(184),
    [anon_sym_ATtest] = ACTIONS(186),
    [anon_sym_ATtestWith] = ACTIONS(184),
    [anon_sym_ATtestdox] = ACTIONS(184),
    [anon_sym_ATticket] = ACTIONS(184),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(184),
  },
  [24] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(71),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(188),
    [anon_sym_ATfilesource] = ACTIONS(188),
    [anon_sym_ATignore] = ACTIONS(188),
    [anon_sym_ATcategory] = ACTIONS(188),
    [anon_sym_ATcopyright] = ACTIONS(188),
    [anon_sym_ATtodo] = ACTIONS(188),
    [anon_sym_ATexample] = ACTIONS(188),
    [anon_sym_ATlicense] = ACTIONS(188),
    [anon_sym_ATpackage] = ACTIONS(188),
    [anon_sym_ATsource] = ACTIONS(188),
    [anon_sym_ATsubpackage] = ACTIONS(188),
    [anon_sym_ATuses] = ACTIONS(188),
    [anon_sym_ATauthor] = ACTIONS(188),
    [anon_sym_ATglobal] = ACTIONS(188),
    [anon_sym_ATinternal] = ACTIONS(188),
    [anon_sym_ATlink] = ACTIONS(188),
    [anon_sym_ATmethod] = ACTIONS(188),
    [anon_sym_ATparam] = ACTIONS(188),
    [anon_sym_ATproperty] = ACTIONS(190),
    [anon_sym_ATproperty_DASHread] = ACTIONS(188),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(188),
    [anon_sym_ATreturn] = ACTIONS(188),
    [anon_sym_ATsee] = ACTIONS(188),
    [anon_sym_ATthrows] = ACTIONS(188),
    [anon_sym_ATvar] = ACTIONS(188),
    [anon_sym_ATdeprecated] = ACTIONS(188),
    [anon_sym_ATsince] = ACTIONS(188),
    [anon_sym_ATversion] = ACTIONS(188),
    [anon_sym_ATafter] = ACTIONS(190),
    [anon_sym_ATafterClass] = ACTIONS(188),
    [anon_sym_ATannotation] = ACTIONS(188),
    [anon_sym_ATbackupGlobals] = ACTIONS(188),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(188),
    [anon_sym_ATbefore] = ACTIONS(190),
    [anon_sym_ATbeforeClass] = ACTIONS(188),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(190),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(188),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(188),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(188),
    [anon_sym_ATcovers] = ACTIONS(190),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(190),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(188),
    [anon_sym_ATcoversNothing] = ACTIONS(188),
    [anon_sym_ATdataProvider] = ACTIONS(188),
    [anon_sym_ATdepends] = ACTIONS(190),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(188),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(188),
    [anon_sym_ATgroup] = ACTIONS(188),
    [anon_sym_ATlarge] = ACTIONS(188),
    [anon_sym_ATmedium] = ACTIONS(188),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(188),
    [anon_sym_ATrequires] = ACTIONS(190),
    [anon_sym_ATrequiresusages] = ACTIONS(188),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(188),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(188),
    [anon_sym_ATsmall] = ACTIONS(188),
    [anon_sym_ATtest] = ACTIONS(190),
    [anon_sym_ATtestWith] = ACTIONS(188),
    [anon_sym_ATtestdox] = ACTIONS(188),
    [anon_sym_ATticket] = ACTIONS(188),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(188),
  },
  [25] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(70),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(192),
    [anon_sym_ATfilesource] = ACTIONS(192),
    [anon_sym_ATignore] = ACTIONS(192),
    [anon_sym_ATcategory] = ACTIONS(192),
    [anon_sym_ATcopyright] = ACTIONS(192),
    [anon_sym_ATtodo] = ACTIONS(192),
    [anon_sym_ATexample] = ACTIONS(192),
    [anon_sym_ATlicense] = ACTIONS(192),
    [anon_sym_ATpackage] = ACTIONS(192),
    [anon_sym_ATsource] = ACTIONS(192),
    [anon_sym_ATsubpackage] = ACTIONS(192),
    [anon_sym_ATuses] = ACTIONS(192),
    [anon_sym_ATauthor] = ACTIONS(192),
    [anon_sym_ATglobal] = ACTIONS(192),
    [anon_sym_ATinternal] = ACTIONS(192),
    [anon_sym_ATlink] = ACTIONS(192),
    [anon_sym_ATmethod] = ACTIONS(192),
    [anon_sym_ATparam] = ACTIONS(192),
    [anon_sym_ATproperty] = ACTIONS(194),
    [anon_sym_ATproperty_DASHread] = ACTIONS(192),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(192),
    [anon_sym_ATreturn] = ACTIONS(192),
    [anon_sym_ATsee] = ACTIONS(192),
    [anon_sym_ATthrows] = ACTIONS(192),
    [anon_sym_ATvar] = ACTIONS(192),
    [anon_sym_ATdeprecated] = ACTIONS(192),
    [anon_sym_ATsince] = ACTIONS(192),
    [anon_sym_ATversion] = ACTIONS(192),
    [anon_sym_ATafter] = ACTIONS(194),
    [anon_sym_ATafterClass] = ACTIONS(192),
    [anon_sym_ATannotation] = ACTIONS(192),
    [anon_sym_ATbackupGlobals] = ACTIONS(192),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(192),
    [anon_sym_ATbefore] = ACTIONS(194),
    [anon_sym_ATbeforeClass] = ACTIONS(192),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(194),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(192),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(192),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(192),
    [anon_sym_ATcovers] = ACTIONS(194),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(194),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(192),
    [anon_sym_ATcoversNothing] = ACTIONS(192),
    [anon_sym_ATdataProvider] = ACTIONS(192),
    [anon_sym_ATdepends] = ACTIONS(194),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(192),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(192),
    [anon_sym_ATgroup] = ACTIONS(192),
    [anon_sym_ATlarge] = ACTIONS(192),
    [anon_sym_ATmedium] = ACTIONS(192),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(192),
    [anon_sym_ATrequires] = ACTIONS(194),
    [anon_sym_ATrequiresusages] = ACTIONS(192),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(192),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(192),
    [anon_sym_ATsmall] = ACTIONS(192),
    [anon_sym_ATtest] = ACTIONS(194),
    [anon_sym_ATtestWith] = ACTIONS(192),
    [anon_sym_ATtestdox] = ACTIONS(192),
    [anon_sym_ATticket] = ACTIONS(192),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(192),
  },
  [26] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(65),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(196),
    [anon_sym_ATfilesource] = ACTIONS(196),
    [anon_sym_ATignore] = ACTIONS(196),
    [anon_sym_ATcategory] = ACTIONS(196),
    [anon_sym_ATcopyright] = ACTIONS(196),
    [anon_sym_ATtodo] = ACTIONS(196),
    [anon_sym_ATexample] = ACTIONS(196),
    [anon_sym_ATlicense] = ACTIONS(196),
    [anon_sym_ATpackage] = ACTIONS(196),
    [anon_sym_ATsource] = ACTIONS(196),
    [anon_sym_ATsubpackage] = ACTIONS(196),
    [anon_sym_ATuses] = ACTIONS(196),
    [anon_sym_ATauthor] = ACTIONS(196),
    [anon_sym_ATglobal] = ACTIONS(196),
    [anon_sym_ATinternal] = ACTIONS(196),
    [anon_sym_ATlink] = ACTIONS(196),
    [anon_sym_ATmethod] = ACTIONS(196),
    [anon_sym_ATparam] = ACTIONS(196),
    [anon_sym_ATproperty] = ACTIONS(198),
    [anon_sym_ATproperty_DASHread] = ACTIONS(196),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(196),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATsee] = ACTIONS(196),
    [anon_sym_ATthrows] = ACTIONS(196),
    [anon_sym_ATvar] = ACTIONS(196),
    [anon_sym_ATdeprecated] = ACTIONS(196),
    [anon_sym_ATsince] = ACTIONS(196),
    [anon_sym_ATversion] = ACTIONS(196),
    [anon_sym_ATafter] = ACTIONS(198),
    [anon_sym_ATafterClass] = ACTIONS(196),
    [anon_sym_ATannotation] = ACTIONS(196),
    [anon_sym_ATbackupGlobals] = ACTIONS(196),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(196),
    [anon_sym_ATbefore] = ACTIONS(198),
    [anon_sym_ATbeforeClass] = ACTIONS(196),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(198),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(196),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(196),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(196),
    [anon_sym_ATcovers] = ACTIONS(198),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(198),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(196),
    [anon_sym_ATcoversNothing] = ACTIONS(196),
    [anon_sym_ATdataProvider] = ACTIONS(196),
    [anon_sym_ATdepends] = ACTIONS(198),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(196),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(196),
    [anon_sym_ATgroup] = ACTIONS(196),
    [anon_sym_ATlarge] = ACTIONS(196),
    [anon_sym_ATmedium] = ACTIONS(196),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(196),
    [anon_sym_ATrequires] = ACTIONS(198),
    [anon_sym_ATrequiresusages] = ACTIONS(196),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(196),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(196),
    [anon_sym_ATsmall] = ACTIONS(196),
    [anon_sym_ATtest] = ACTIONS(198),
    [anon_sym_ATtestWith] = ACTIONS(196),
    [anon_sym_ATtestdox] = ACTIONS(196),
    [anon_sym_ATticket] = ACTIONS(196),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(196),
  },
  [27] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(81),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(200),
    [anon_sym_ATfilesource] = ACTIONS(200),
    [anon_sym_ATignore] = ACTIONS(200),
    [anon_sym_ATcategory] = ACTIONS(200),
    [anon_sym_ATcopyright] = ACTIONS(200),
    [anon_sym_ATtodo] = ACTIONS(200),
    [anon_sym_ATexample] = ACTIONS(200),
    [anon_sym_ATlicense] = ACTIONS(200),
    [anon_sym_ATpackage] = ACTIONS(200),
    [anon_sym_ATsource] = ACTIONS(200),
    [anon_sym_ATsubpackage] = ACTIONS(200),
    [anon_sym_ATuses] = ACTIONS(200),
    [anon_sym_ATauthor] = ACTIONS(200),
    [anon_sym_ATglobal] = ACTIONS(200),
    [anon_sym_ATinternal] = ACTIONS(200),
    [anon_sym_ATlink] = ACTIONS(200),
    [anon_sym_ATmethod] = ACTIONS(200),
    [anon_sym_ATparam] = ACTIONS(200),
    [anon_sym_ATproperty] = ACTIONS(202),
    [anon_sym_ATproperty_DASHread] = ACTIONS(200),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(200),
    [anon_sym_ATreturn] = ACTIONS(200),
    [anon_sym_ATsee] = ACTIONS(200),
    [anon_sym_ATthrows] = ACTIONS(200),
    [anon_sym_ATvar] = ACTIONS(200),
    [anon_sym_ATdeprecated] = ACTIONS(200),
    [anon_sym_ATsince] = ACTIONS(200),
    [anon_sym_ATversion] = ACTIONS(200),
    [anon_sym_ATafter] = ACTIONS(202),
    [anon_sym_ATafterClass] = ACTIONS(200),
    [anon_sym_ATannotation] = ACTIONS(200),
    [anon_sym_ATbackupGlobals] = ACTIONS(200),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(200),
    [anon_sym_ATbefore] = ACTIONS(202),
    [anon_sym_ATbeforeClass] = ACTIONS(200),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(202),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(200),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(200),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(200),
    [anon_sym_ATcovers] = ACTIONS(202),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(202),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(200),
    [anon_sym_ATcoversNothing] = ACTIONS(200),
    [anon_sym_ATdataProvider] = ACTIONS(200),
    [anon_sym_ATdepends] = ACTIONS(202),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(200),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(200),
    [anon_sym_ATgroup] = ACTIONS(200),
    [anon_sym_ATlarge] = ACTIONS(200),
    [anon_sym_ATmedium] = ACTIONS(200),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(200),
    [anon_sym_ATrequires] = ACTIONS(202),
    [anon_sym_ATrequiresusages] = ACTIONS(200),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(200),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(200),
    [anon_sym_ATsmall] = ACTIONS(200),
    [anon_sym_ATtest] = ACTIONS(202),
    [anon_sym_ATtestWith] = ACTIONS(200),
    [anon_sym_ATtestdox] = ACTIONS(200),
    [anon_sym_ATticket] = ACTIONS(200),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(200),
  },
  [28] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_ATapi] = ACTIONS(143),
    [anon_sym_ATfilesource] = ACTIONS(143),
    [anon_sym_ATignore] = ACTIONS(143),
    [anon_sym_ATcategory] = ACTIONS(143),
    [anon_sym_ATcopyright] = ACTIONS(143),
    [anon_sym_ATtodo] = ACTIONS(143),
    [anon_sym_ATexample] = ACTIONS(143),
    [anon_sym_ATlicense] = ACTIONS(143),
    [anon_sym_ATpackage] = ACTIONS(143),
    [anon_sym_ATsource] = ACTIONS(143),
    [anon_sym_ATsubpackage] = ACTIONS(143),
    [anon_sym_ATuses] = ACTIONS(143),
    [anon_sym_ATauthor] = ACTIONS(143),
    [anon_sym_ATglobal] = ACTIONS(143),
    [anon_sym_ATinternal] = ACTIONS(143),
    [anon_sym_ATlink] = ACTIONS(143),
    [anon_sym_ATmethod] = ACTIONS(143),
    [anon_sym_ATparam] = ACTIONS(143),
    [anon_sym_ATproperty] = ACTIONS(145),
    [anon_sym_ATproperty_DASHread] = ACTIONS(143),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(143),
    [anon_sym_ATreturn] = ACTIONS(143),
    [anon_sym_ATsee] = ACTIONS(143),
    [anon_sym_ATthrows] = ACTIONS(143),
    [anon_sym_ATvar] = ACTIONS(143),
    [anon_sym_ATdeprecated] = ACTIONS(143),
    [anon_sym_ATsince] = ACTIONS(143),
    [anon_sym_ATversion] = ACTIONS(143),
    [anon_sym_ATafter] = ACTIONS(145),
    [anon_sym_ATafterClass] = ACTIONS(143),
    [anon_sym_ATannotation] = ACTIONS(143),
    [anon_sym_ATbackupGlobals] = ACTIONS(143),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(143),
    [anon_sym_ATbefore] = ACTIONS(145),
    [anon_sym_ATbeforeClass] = ACTIONS(143),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(145),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(143),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(143),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(143),
    [anon_sym_ATcovers] = ACTIONS(145),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(145),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(143),
    [anon_sym_ATcoversNothing] = ACTIONS(143),
    [anon_sym_ATdataProvider] = ACTIONS(143),
    [anon_sym_ATdepends] = ACTIONS(145),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(143),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(143),
    [anon_sym_ATgroup] = ACTIONS(143),
    [anon_sym_ATlarge] = ACTIONS(143),
    [anon_sym_ATmedium] = ACTIONS(143),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(143),
    [anon_sym_ATrequires] = ACTIONS(145),
    [anon_sym_ATrequiresusages] = ACTIONS(143),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(143),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(143),
    [anon_sym_ATsmall] = ACTIONS(143),
    [anon_sym_ATtest] = ACTIONS(145),
    [anon_sym_ATtestWith] = ACTIONS(143),
    [anon_sym_ATtestdox] = ACTIONS(143),
    [anon_sym_ATticket] = ACTIONS(143),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(204),
    [anon_sym_PIPE] = ACTIONS(143),
    [sym_text] = ACTIONS(145),
    [sym__end] = ACTIONS(143),
  },
  [29] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(64),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(207),
    [anon_sym_ATfilesource] = ACTIONS(207),
    [anon_sym_ATignore] = ACTIONS(207),
    [anon_sym_ATcategory] = ACTIONS(207),
    [anon_sym_ATcopyright] = ACTIONS(207),
    [anon_sym_ATtodo] = ACTIONS(207),
    [anon_sym_ATexample] = ACTIONS(207),
    [anon_sym_ATlicense] = ACTIONS(207),
    [anon_sym_ATpackage] = ACTIONS(207),
    [anon_sym_ATsource] = ACTIONS(207),
    [anon_sym_ATsubpackage] = ACTIONS(207),
    [anon_sym_ATuses] = ACTIONS(207),
    [anon_sym_ATauthor] = ACTIONS(207),
    [anon_sym_ATglobal] = ACTIONS(207),
    [anon_sym_ATinternal] = ACTIONS(207),
    [anon_sym_ATlink] = ACTIONS(207),
    [anon_sym_ATmethod] = ACTIONS(207),
    [anon_sym_ATparam] = ACTIONS(207),
    [anon_sym_ATproperty] = ACTIONS(209),
    [anon_sym_ATproperty_DASHread] = ACTIONS(207),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(207),
    [anon_sym_ATreturn] = ACTIONS(207),
    [anon_sym_ATsee] = ACTIONS(207),
    [anon_sym_ATthrows] = ACTIONS(207),
    [anon_sym_ATvar] = ACTIONS(207),
    [anon_sym_ATdeprecated] = ACTIONS(207),
    [anon_sym_ATsince] = ACTIONS(207),
    [anon_sym_ATversion] = ACTIONS(207),
    [anon_sym_ATafter] = ACTIONS(209),
    [anon_sym_ATafterClass] = ACTIONS(207),
    [anon_sym_ATannotation] = ACTIONS(207),
    [anon_sym_ATbackupGlobals] = ACTIONS(207),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(207),
    [anon_sym_ATbefore] = ACTIONS(209),
    [anon_sym_ATbeforeClass] = ACTIONS(207),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(209),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(207),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(207),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(207),
    [anon_sym_ATcovers] = ACTIONS(209),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(209),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(207),
    [anon_sym_ATcoversNothing] = ACTIONS(207),
    [anon_sym_ATdataProvider] = ACTIONS(207),
    [anon_sym_ATdepends] = ACTIONS(209),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(207),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(207),
    [anon_sym_ATgroup] = ACTIONS(207),
    [anon_sym_ATlarge] = ACTIONS(207),
    [anon_sym_ATmedium] = ACTIONS(207),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(207),
    [anon_sym_ATrequires] = ACTIONS(209),
    [anon_sym_ATrequiresusages] = ACTIONS(207),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(207),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(207),
    [anon_sym_ATsmall] = ACTIONS(207),
    [anon_sym_ATtest] = ACTIONS(209),
    [anon_sym_ATtestWith] = ACTIONS(207),
    [anon_sym_ATtestdox] = ACTIONS(207),
    [anon_sym_ATticket] = ACTIONS(207),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(207),
  },
  [30] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(73),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(211),
    [anon_sym_ATfilesource] = ACTIONS(211),
    [anon_sym_ATignore] = ACTIONS(211),
    [anon_sym_ATcategory] = ACTIONS(211),
    [anon_sym_ATcopyright] = ACTIONS(211),
    [anon_sym_ATtodo] = ACTIONS(211),
    [anon_sym_ATexample] = ACTIONS(211),
    [anon_sym_ATlicense] = ACTIONS(211),
    [anon_sym_ATpackage] = ACTIONS(211),
    [anon_sym_ATsource] = ACTIONS(211),
    [anon_sym_ATsubpackage] = ACTIONS(211),
    [anon_sym_ATuses] = ACTIONS(211),
    [anon_sym_ATauthor] = ACTIONS(211),
    [anon_sym_ATglobal] = ACTIONS(211),
    [anon_sym_ATinternal] = ACTIONS(211),
    [anon_sym_ATlink] = ACTIONS(211),
    [anon_sym_ATmethod] = ACTIONS(211),
    [anon_sym_ATparam] = ACTIONS(211),
    [anon_sym_ATproperty] = ACTIONS(213),
    [anon_sym_ATproperty_DASHread] = ACTIONS(211),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(211),
    [anon_sym_ATreturn] = ACTIONS(211),
    [anon_sym_ATsee] = ACTIONS(211),
    [anon_sym_ATthrows] = ACTIONS(211),
    [anon_sym_ATvar] = ACTIONS(211),
    [anon_sym_ATdeprecated] = ACTIONS(211),
    [anon_sym_ATsince] = ACTIONS(211),
    [anon_sym_ATversion] = ACTIONS(211),
    [anon_sym_ATafter] = ACTIONS(213),
    [anon_sym_ATafterClass] = ACTIONS(211),
    [anon_sym_ATannotation] = ACTIONS(211),
    [anon_sym_ATbackupGlobals] = ACTIONS(211),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(211),
    [anon_sym_ATbefore] = ACTIONS(213),
    [anon_sym_ATbeforeClass] = ACTIONS(211),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(213),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(211),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(211),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(211),
    [anon_sym_ATcovers] = ACTIONS(213),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(213),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(211),
    [anon_sym_ATcoversNothing] = ACTIONS(211),
    [anon_sym_ATdataProvider] = ACTIONS(211),
    [anon_sym_ATdepends] = ACTIONS(213),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(211),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(211),
    [anon_sym_ATgroup] = ACTIONS(211),
    [anon_sym_ATlarge] = ACTIONS(211),
    [anon_sym_ATmedium] = ACTIONS(211),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(211),
    [anon_sym_ATrequires] = ACTIONS(213),
    [anon_sym_ATrequiresusages] = ACTIONS(211),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(211),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(211),
    [anon_sym_ATsmall] = ACTIONS(211),
    [anon_sym_ATtest] = ACTIONS(213),
    [anon_sym_ATtestWith] = ACTIONS(211),
    [anon_sym_ATtestdox] = ACTIONS(211),
    [anon_sym_ATticket] = ACTIONS(211),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(211),
  },
  [31] = {
    [aux_sym_union_type_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_ATapi] = ACTIONS(215),
    [anon_sym_ATfilesource] = ACTIONS(215),
    [anon_sym_ATignore] = ACTIONS(215),
    [anon_sym_ATcategory] = ACTIONS(215),
    [anon_sym_ATcopyright] = ACTIONS(215),
    [anon_sym_ATtodo] = ACTIONS(215),
    [anon_sym_ATexample] = ACTIONS(215),
    [anon_sym_ATlicense] = ACTIONS(215),
    [anon_sym_ATpackage] = ACTIONS(215),
    [anon_sym_ATsource] = ACTIONS(215),
    [anon_sym_ATsubpackage] = ACTIONS(215),
    [anon_sym_ATuses] = ACTIONS(215),
    [anon_sym_ATauthor] = ACTIONS(215),
    [anon_sym_ATglobal] = ACTIONS(215),
    [anon_sym_ATinternal] = ACTIONS(215),
    [anon_sym_ATlink] = ACTIONS(215),
    [anon_sym_ATmethod] = ACTIONS(215),
    [anon_sym_ATparam] = ACTIONS(215),
    [anon_sym_ATproperty] = ACTIONS(217),
    [anon_sym_ATproperty_DASHread] = ACTIONS(215),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(215),
    [anon_sym_ATreturn] = ACTIONS(215),
    [anon_sym_ATsee] = ACTIONS(215),
    [anon_sym_ATthrows] = ACTIONS(215),
    [anon_sym_ATvar] = ACTIONS(215),
    [anon_sym_ATdeprecated] = ACTIONS(215),
    [anon_sym_ATsince] = ACTIONS(215),
    [anon_sym_ATversion] = ACTIONS(215),
    [anon_sym_ATafter] = ACTIONS(217),
    [anon_sym_ATafterClass] = ACTIONS(215),
    [anon_sym_ATannotation] = ACTIONS(215),
    [anon_sym_ATbackupGlobals] = ACTIONS(215),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(215),
    [anon_sym_ATbefore] = ACTIONS(217),
    [anon_sym_ATbeforeClass] = ACTIONS(215),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(217),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(215),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(215),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(215),
    [anon_sym_ATcovers] = ACTIONS(217),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(217),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(215),
    [anon_sym_ATcoversNothing] = ACTIONS(215),
    [anon_sym_ATdataProvider] = ACTIONS(215),
    [anon_sym_ATdepends] = ACTIONS(217),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(215),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(215),
    [anon_sym_ATgroup] = ACTIONS(215),
    [anon_sym_ATlarge] = ACTIONS(215),
    [anon_sym_ATmedium] = ACTIONS(215),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(215),
    [anon_sym_ATrequires] = ACTIONS(217),
    [anon_sym_ATrequiresusages] = ACTIONS(215),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(215),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(215),
    [anon_sym_ATsmall] = ACTIONS(215),
    [anon_sym_ATtest] = ACTIONS(217),
    [anon_sym_ATtestWith] = ACTIONS(215),
    [anon_sym_ATtestdox] = ACTIONS(215),
    [anon_sym_ATticket] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [sym_text] = ACTIONS(217),
    [sym__end] = ACTIONS(215),
  },
  [32] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_ATapi] = ACTIONS(154),
    [anon_sym_ATfilesource] = ACTIONS(154),
    [anon_sym_ATignore] = ACTIONS(154),
    [anon_sym_ATcategory] = ACTIONS(154),
    [anon_sym_ATcopyright] = ACTIONS(154),
    [anon_sym_ATtodo] = ACTIONS(154),
    [anon_sym_ATexample] = ACTIONS(154),
    [anon_sym_ATlicense] = ACTIONS(154),
    [anon_sym_ATpackage] = ACTIONS(154),
    [anon_sym_ATsource] = ACTIONS(154),
    [anon_sym_ATsubpackage] = ACTIONS(154),
    [anon_sym_ATuses] = ACTIONS(154),
    [anon_sym_ATauthor] = ACTIONS(154),
    [anon_sym_ATglobal] = ACTIONS(154),
    [anon_sym_ATinternal] = ACTIONS(154),
    [anon_sym_ATlink] = ACTIONS(154),
    [anon_sym_ATmethod] = ACTIONS(154),
    [anon_sym_ATparam] = ACTIONS(154),
    [anon_sym_ATproperty] = ACTIONS(156),
    [anon_sym_ATproperty_DASHread] = ACTIONS(154),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(154),
    [anon_sym_ATreturn] = ACTIONS(154),
    [anon_sym_ATsee] = ACTIONS(154),
    [anon_sym_ATthrows] = ACTIONS(154),
    [anon_sym_ATvar] = ACTIONS(154),
    [anon_sym_ATdeprecated] = ACTIONS(154),
    [anon_sym_ATsince] = ACTIONS(154),
    [anon_sym_ATversion] = ACTIONS(154),
    [anon_sym_ATafter] = ACTIONS(156),
    [anon_sym_ATafterClass] = ACTIONS(154),
    [anon_sym_ATannotation] = ACTIONS(154),
    [anon_sym_ATbackupGlobals] = ACTIONS(154),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(154),
    [anon_sym_ATbefore] = ACTIONS(156),
    [anon_sym_ATbeforeClass] = ACTIONS(154),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(156),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(154),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(154),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(154),
    [anon_sym_ATcovers] = ACTIONS(156),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(156),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(154),
    [anon_sym_ATcoversNothing] = ACTIONS(154),
    [anon_sym_ATdataProvider] = ACTIONS(154),
    [anon_sym_ATdepends] = ACTIONS(156),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(154),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(154),
    [anon_sym_ATgroup] = ACTIONS(154),
    [anon_sym_ATlarge] = ACTIONS(154),
    [anon_sym_ATmedium] = ACTIONS(154),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(154),
    [anon_sym_ATrequires] = ACTIONS(156),
    [anon_sym_ATrequiresusages] = ACTIONS(154),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(154),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(154),
    [anon_sym_ATsmall] = ACTIONS(154),
    [anon_sym_ATtest] = ACTIONS(156),
    [anon_sym_ATtestWith] = ACTIONS(154),
    [anon_sym_ATtestdox] = ACTIONS(154),
    [anon_sym_ATticket] = ACTIONS(154),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(154),
    [sym_text] = ACTIONS(156),
    [sym__end] = ACTIONS(154),
  },
  [33] = {
    [aux_sym_union_type_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_ATapi] = ACTIONS(221),
    [anon_sym_ATfilesource] = ACTIONS(221),
    [anon_sym_ATignore] = ACTIONS(221),
    [anon_sym_ATcategory] = ACTIONS(221),
    [anon_sym_ATcopyright] = ACTIONS(221),
    [anon_sym_ATtodo] = ACTIONS(221),
    [anon_sym_ATexample] = ACTIONS(221),
    [anon_sym_ATlicense] = ACTIONS(221),
    [anon_sym_ATpackage] = ACTIONS(221),
    [anon_sym_ATsource] = ACTIONS(221),
    [anon_sym_ATsubpackage] = ACTIONS(221),
    [anon_sym_ATuses] = ACTIONS(221),
    [anon_sym_ATauthor] = ACTIONS(221),
    [anon_sym_ATglobal] = ACTIONS(221),
    [anon_sym_ATinternal] = ACTIONS(221),
    [anon_sym_ATlink] = ACTIONS(221),
    [anon_sym_ATmethod] = ACTIONS(221),
    [anon_sym_ATparam] = ACTIONS(221),
    [anon_sym_ATproperty] = ACTIONS(223),
    [anon_sym_ATproperty_DASHread] = ACTIONS(221),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(221),
    [anon_sym_ATreturn] = ACTIONS(221),
    [anon_sym_ATsee] = ACTIONS(221),
    [anon_sym_ATthrows] = ACTIONS(221),
    [anon_sym_ATvar] = ACTIONS(221),
    [anon_sym_ATdeprecated] = ACTIONS(221),
    [anon_sym_ATsince] = ACTIONS(221),
    [anon_sym_ATversion] = ACTIONS(221),
    [anon_sym_ATafter] = ACTIONS(223),
    [anon_sym_ATafterClass] = ACTIONS(221),
    [anon_sym_ATannotation] = ACTIONS(221),
    [anon_sym_ATbackupGlobals] = ACTIONS(221),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(221),
    [anon_sym_ATbefore] = ACTIONS(223),
    [anon_sym_ATbeforeClass] = ACTIONS(221),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(223),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(221),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(221),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(221),
    [anon_sym_ATcovers] = ACTIONS(223),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(223),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(221),
    [anon_sym_ATcoversNothing] = ACTIONS(221),
    [anon_sym_ATdataProvider] = ACTIONS(221),
    [anon_sym_ATdepends] = ACTIONS(223),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(221),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(221),
    [anon_sym_ATgroup] = ACTIONS(221),
    [anon_sym_ATlarge] = ACTIONS(221),
    [anon_sym_ATmedium] = ACTIONS(221),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(221),
    [anon_sym_ATrequires] = ACTIONS(223),
    [anon_sym_ATrequiresusages] = ACTIONS(221),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(221),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(221),
    [anon_sym_ATsmall] = ACTIONS(221),
    [anon_sym_ATtest] = ACTIONS(223),
    [anon_sym_ATtestWith] = ACTIONS(221),
    [anon_sym_ATtestdox] = ACTIONS(221),
    [anon_sym_ATticket] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [sym_text] = ACTIONS(223),
    [sym__end] = ACTIONS(221),
  },
  [34] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(79),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(137),
    [anon_sym_ATfilesource] = ACTIONS(137),
    [anon_sym_ATignore] = ACTIONS(137),
    [anon_sym_ATcategory] = ACTIONS(137),
    [anon_sym_ATcopyright] = ACTIONS(137),
    [anon_sym_ATtodo] = ACTIONS(137),
    [anon_sym_ATexample] = ACTIONS(137),
    [anon_sym_ATlicense] = ACTIONS(137),
    [anon_sym_ATpackage] = ACTIONS(137),
    [anon_sym_ATsource] = ACTIONS(137),
    [anon_sym_ATsubpackage] = ACTIONS(137),
    [anon_sym_ATuses] = ACTIONS(137),
    [anon_sym_ATauthor] = ACTIONS(137),
    [anon_sym_ATglobal] = ACTIONS(137),
    [anon_sym_ATinternal] = ACTIONS(137),
    [anon_sym_ATlink] = ACTIONS(137),
    [anon_sym_ATmethod] = ACTIONS(137),
    [anon_sym_ATparam] = ACTIONS(137),
    [anon_sym_ATproperty] = ACTIONS(141),
    [anon_sym_ATproperty_DASHread] = ACTIONS(137),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(137),
    [anon_sym_ATreturn] = ACTIONS(137),
    [anon_sym_ATsee] = ACTIONS(137),
    [anon_sym_ATthrows] = ACTIONS(137),
    [anon_sym_ATvar] = ACTIONS(137),
    [anon_sym_ATdeprecated] = ACTIONS(137),
    [anon_sym_ATsince] = ACTIONS(137),
    [anon_sym_ATversion] = ACTIONS(137),
    [anon_sym_ATafter] = ACTIONS(141),
    [anon_sym_ATafterClass] = ACTIONS(137),
    [anon_sym_ATannotation] = ACTIONS(137),
    [anon_sym_ATbackupGlobals] = ACTIONS(137),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(137),
    [anon_sym_ATbefore] = ACTIONS(141),
    [anon_sym_ATbeforeClass] = ACTIONS(137),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(141),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(137),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(137),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(137),
    [anon_sym_ATcovers] = ACTIONS(141),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(141),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(137),
    [anon_sym_ATcoversNothing] = ACTIONS(137),
    [anon_sym_ATdataProvider] = ACTIONS(137),
    [anon_sym_ATdepends] = ACTIONS(141),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(137),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(137),
    [anon_sym_ATgroup] = ACTIONS(137),
    [anon_sym_ATlarge] = ACTIONS(137),
    [anon_sym_ATmedium] = ACTIONS(137),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(137),
    [anon_sym_ATrequires] = ACTIONS(141),
    [anon_sym_ATrequiresusages] = ACTIONS(137),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(137),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(137),
    [anon_sym_ATsmall] = ACTIONS(137),
    [anon_sym_ATtest] = ACTIONS(141),
    [anon_sym_ATtestWith] = ACTIONS(137),
    [anon_sym_ATtestdox] = ACTIONS(137),
    [anon_sym_ATticket] = ACTIONS(137),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(137),
  },
  [35] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(72),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(228),
    [anon_sym_ATfilesource] = ACTIONS(228),
    [anon_sym_ATignore] = ACTIONS(228),
    [anon_sym_ATcategory] = ACTIONS(228),
    [anon_sym_ATcopyright] = ACTIONS(228),
    [anon_sym_ATtodo] = ACTIONS(228),
    [anon_sym_ATexample] = ACTIONS(228),
    [anon_sym_ATlicense] = ACTIONS(228),
    [anon_sym_ATpackage] = ACTIONS(228),
    [anon_sym_ATsource] = ACTIONS(228),
    [anon_sym_ATsubpackage] = ACTIONS(228),
    [anon_sym_ATuses] = ACTIONS(228),
    [anon_sym_ATauthor] = ACTIONS(228),
    [anon_sym_ATglobal] = ACTIONS(228),
    [anon_sym_ATinternal] = ACTIONS(228),
    [anon_sym_ATlink] = ACTIONS(228),
    [anon_sym_ATmethod] = ACTIONS(228),
    [anon_sym_ATparam] = ACTIONS(228),
    [anon_sym_ATproperty] = ACTIONS(230),
    [anon_sym_ATproperty_DASHread] = ACTIONS(228),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(228),
    [anon_sym_ATreturn] = ACTIONS(228),
    [anon_sym_ATsee] = ACTIONS(228),
    [anon_sym_ATthrows] = ACTIONS(228),
    [anon_sym_ATvar] = ACTIONS(228),
    [anon_sym_ATdeprecated] = ACTIONS(228),
    [anon_sym_ATsince] = ACTIONS(228),
    [anon_sym_ATversion] = ACTIONS(228),
    [anon_sym_ATafter] = ACTIONS(230),
    [anon_sym_ATafterClass] = ACTIONS(228),
    [anon_sym_ATannotation] = ACTIONS(228),
    [anon_sym_ATbackupGlobals] = ACTIONS(228),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(228),
    [anon_sym_ATbefore] = ACTIONS(230),
    [anon_sym_ATbeforeClass] = ACTIONS(228),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(230),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(228),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(228),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(228),
    [anon_sym_ATcovers] = ACTIONS(230),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(230),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(228),
    [anon_sym_ATcoversNothing] = ACTIONS(228),
    [anon_sym_ATdataProvider] = ACTIONS(228),
    [anon_sym_ATdepends] = ACTIONS(230),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(228),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(228),
    [anon_sym_ATgroup] = ACTIONS(228),
    [anon_sym_ATlarge] = ACTIONS(228),
    [anon_sym_ATmedium] = ACTIONS(228),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(228),
    [anon_sym_ATrequires] = ACTIONS(230),
    [anon_sym_ATrequiresusages] = ACTIONS(228),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(228),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(228),
    [anon_sym_ATsmall] = ACTIONS(228),
    [anon_sym_ATtest] = ACTIONS(230),
    [anon_sym_ATtestWith] = ACTIONS(228),
    [anon_sym_ATtestdox] = ACTIONS(228),
    [anon_sym_ATticket] = ACTIONS(228),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(228),
  },
  [36] = {
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_ATapi] = ACTIONS(112),
    [anon_sym_ATfilesource] = ACTIONS(112),
    [anon_sym_ATignore] = ACTIONS(112),
    [anon_sym_ATcategory] = ACTIONS(112),
    [anon_sym_ATcopyright] = ACTIONS(112),
    [anon_sym_ATtodo] = ACTIONS(112),
    [anon_sym_ATexample] = ACTIONS(112),
    [anon_sym_ATlicense] = ACTIONS(112),
    [anon_sym_ATpackage] = ACTIONS(112),
    [anon_sym_ATsource] = ACTIONS(112),
    [anon_sym_ATsubpackage] = ACTIONS(112),
    [anon_sym_ATuses] = ACTIONS(112),
    [anon_sym_ATauthor] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_ATglobal] = ACTIONS(112),
    [anon_sym_ATinternal] = ACTIONS(112),
    [anon_sym_ATlink] = ACTIONS(112),
    [anon_sym_ATmethod] = ACTIONS(112),
    [anon_sym_ATparam] = ACTIONS(112),
    [anon_sym_ATproperty] = ACTIONS(114),
    [anon_sym_ATproperty_DASHread] = ACTIONS(112),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(112),
    [anon_sym_ATreturn] = ACTIONS(112),
    [anon_sym_ATsee] = ACTIONS(112),
    [anon_sym_ATthrows] = ACTIONS(112),
    [anon_sym_ATvar] = ACTIONS(112),
    [anon_sym_ATdeprecated] = ACTIONS(112),
    [anon_sym_ATsince] = ACTIONS(112),
    [anon_sym_ATversion] = ACTIONS(112),
    [anon_sym_ATafter] = ACTIONS(114),
    [anon_sym_ATafterClass] = ACTIONS(112),
    [anon_sym_ATannotation] = ACTIONS(112),
    [anon_sym_ATbackupGlobals] = ACTIONS(112),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(112),
    [anon_sym_ATbefore] = ACTIONS(114),
    [anon_sym_ATbeforeClass] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(114),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(112),
    [anon_sym_ATcovers] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(112),
    [anon_sym_ATcoversNothing] = ACTIONS(112),
    [anon_sym_ATdataProvider] = ACTIONS(112),
    [anon_sym_ATdepends] = ACTIONS(114),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(112),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(112),
    [anon_sym_ATgroup] = ACTIONS(112),
    [anon_sym_ATlarge] = ACTIONS(112),
    [anon_sym_ATmedium] = ACTIONS(112),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(112),
    [anon_sym_ATrequires] = ACTIONS(114),
    [anon_sym_ATrequiresusages] = ACTIONS(112),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(112),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(112),
    [anon_sym_ATsmall] = ACTIONS(112),
    [anon_sym_ATtest] = ACTIONS(114),
    [anon_sym_ATtestWith] = ACTIONS(112),
    [anon_sym_ATtestdox] = ACTIONS(112),
    [anon_sym_ATticket] = ACTIONS(112),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [sym_text] = ACTIONS(114),
    [sym__end] = ACTIONS(112),
  },
  [37] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(77),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(232),
    [anon_sym_ATfilesource] = ACTIONS(232),
    [anon_sym_ATignore] = ACTIONS(232),
    [anon_sym_ATcategory] = ACTIONS(232),
    [anon_sym_ATcopyright] = ACTIONS(232),
    [anon_sym_ATtodo] = ACTIONS(232),
    [anon_sym_ATexample] = ACTIONS(232),
    [anon_sym_ATlicense] = ACTIONS(232),
    [anon_sym_ATpackage] = ACTIONS(232),
    [anon_sym_ATsource] = ACTIONS(232),
    [anon_sym_ATsubpackage] = ACTIONS(232),
    [anon_sym_ATuses] = ACTIONS(232),
    [anon_sym_ATauthor] = ACTIONS(232),
    [anon_sym_ATglobal] = ACTIONS(232),
    [anon_sym_ATinternal] = ACTIONS(232),
    [anon_sym_ATlink] = ACTIONS(232),
    [anon_sym_ATmethod] = ACTIONS(232),
    [anon_sym_ATparam] = ACTIONS(232),
    [anon_sym_ATproperty] = ACTIONS(234),
    [anon_sym_ATproperty_DASHread] = ACTIONS(232),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(232),
    [anon_sym_ATreturn] = ACTIONS(232),
    [anon_sym_ATsee] = ACTIONS(232),
    [anon_sym_ATthrows] = ACTIONS(232),
    [anon_sym_ATvar] = ACTIONS(232),
    [anon_sym_ATdeprecated] = ACTIONS(232),
    [anon_sym_ATsince] = ACTIONS(232),
    [anon_sym_ATversion] = ACTIONS(232),
    [anon_sym_ATafter] = ACTIONS(234),
    [anon_sym_ATafterClass] = ACTIONS(232),
    [anon_sym_ATannotation] = ACTIONS(232),
    [anon_sym_ATbackupGlobals] = ACTIONS(232),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(232),
    [anon_sym_ATbefore] = ACTIONS(234),
    [anon_sym_ATbeforeClass] = ACTIONS(232),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(234),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(232),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(232),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(232),
    [anon_sym_ATcovers] = ACTIONS(234),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(234),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(232),
    [anon_sym_ATcoversNothing] = ACTIONS(232),
    [anon_sym_ATdataProvider] = ACTIONS(232),
    [anon_sym_ATdepends] = ACTIONS(234),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(232),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(232),
    [anon_sym_ATgroup] = ACTIONS(232),
    [anon_sym_ATlarge] = ACTIONS(232),
    [anon_sym_ATmedium] = ACTIONS(232),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(232),
    [anon_sym_ATrequires] = ACTIONS(234),
    [anon_sym_ATrequiresusages] = ACTIONS(232),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(232),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(232),
    [anon_sym_ATsmall] = ACTIONS(232),
    [anon_sym_ATtest] = ACTIONS(234),
    [anon_sym_ATtestWith] = ACTIONS(232),
    [anon_sym_ATtestdox] = ACTIONS(232),
    [anon_sym_ATticket] = ACTIONS(232),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(232),
  },
  [38] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(78),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(236),
    [anon_sym_ATfilesource] = ACTIONS(236),
    [anon_sym_ATignore] = ACTIONS(236),
    [anon_sym_ATcategory] = ACTIONS(236),
    [anon_sym_ATcopyright] = ACTIONS(236),
    [anon_sym_ATtodo] = ACTIONS(236),
    [anon_sym_ATexample] = ACTIONS(236),
    [anon_sym_ATlicense] = ACTIONS(236),
    [anon_sym_ATpackage] = ACTIONS(236),
    [anon_sym_ATsource] = ACTIONS(236),
    [anon_sym_ATsubpackage] = ACTIONS(236),
    [anon_sym_ATuses] = ACTIONS(236),
    [anon_sym_ATauthor] = ACTIONS(236),
    [anon_sym_ATglobal] = ACTIONS(236),
    [anon_sym_ATinternal] = ACTIONS(236),
    [anon_sym_ATlink] = ACTIONS(236),
    [anon_sym_ATmethod] = ACTIONS(236),
    [anon_sym_ATparam] = ACTIONS(236),
    [anon_sym_ATproperty] = ACTIONS(238),
    [anon_sym_ATproperty_DASHread] = ACTIONS(236),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(236),
    [anon_sym_ATreturn] = ACTIONS(236),
    [anon_sym_ATsee] = ACTIONS(236),
    [anon_sym_ATthrows] = ACTIONS(236),
    [anon_sym_ATvar] = ACTIONS(236),
    [anon_sym_ATdeprecated] = ACTIONS(236),
    [anon_sym_ATsince] = ACTIONS(236),
    [anon_sym_ATversion] = ACTIONS(236),
    [anon_sym_ATafter] = ACTIONS(238),
    [anon_sym_ATafterClass] = ACTIONS(236),
    [anon_sym_ATannotation] = ACTIONS(236),
    [anon_sym_ATbackupGlobals] = ACTIONS(236),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(236),
    [anon_sym_ATbefore] = ACTIONS(238),
    [anon_sym_ATbeforeClass] = ACTIONS(236),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(238),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(236),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(236),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(236),
    [anon_sym_ATcovers] = ACTIONS(238),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(238),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(236),
    [anon_sym_ATcoversNothing] = ACTIONS(236),
    [anon_sym_ATdataProvider] = ACTIONS(236),
    [anon_sym_ATdepends] = ACTIONS(238),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(236),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(236),
    [anon_sym_ATgroup] = ACTIONS(236),
    [anon_sym_ATlarge] = ACTIONS(236),
    [anon_sym_ATmedium] = ACTIONS(236),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(236),
    [anon_sym_ATrequires] = ACTIONS(238),
    [anon_sym_ATrequiresusages] = ACTIONS(236),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(236),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(236),
    [anon_sym_ATsmall] = ACTIONS(236),
    [anon_sym_ATtest] = ACTIONS(238),
    [anon_sym_ATtestWith] = ACTIONS(236),
    [anon_sym_ATtestdox] = ACTIONS(236),
    [anon_sym_ATticket] = ACTIONS(236),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(236),
  },
  [39] = {
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_ATapi] = ACTIONS(164),
    [anon_sym_ATfilesource] = ACTIONS(164),
    [anon_sym_ATignore] = ACTIONS(164),
    [anon_sym_ATcategory] = ACTIONS(164),
    [anon_sym_ATcopyright] = ACTIONS(164),
    [anon_sym_ATtodo] = ACTIONS(164),
    [anon_sym_ATexample] = ACTIONS(164),
    [anon_sym_ATlicense] = ACTIONS(164),
    [anon_sym_ATpackage] = ACTIONS(164),
    [anon_sym_ATsource] = ACTIONS(164),
    [anon_sym_ATsubpackage] = ACTIONS(164),
    [anon_sym_ATuses] = ACTIONS(164),
    [anon_sym_ATauthor] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_ATglobal] = ACTIONS(164),
    [anon_sym_ATinternal] = ACTIONS(164),
    [anon_sym_ATlink] = ACTIONS(164),
    [anon_sym_ATmethod] = ACTIONS(164),
    [anon_sym_ATparam] = ACTIONS(164),
    [anon_sym_ATproperty] = ACTIONS(166),
    [anon_sym_ATproperty_DASHread] = ACTIONS(164),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(164),
    [anon_sym_ATreturn] = ACTIONS(164),
    [anon_sym_ATsee] = ACTIONS(164),
    [anon_sym_ATthrows] = ACTIONS(164),
    [anon_sym_ATvar] = ACTIONS(164),
    [anon_sym_ATdeprecated] = ACTIONS(164),
    [anon_sym_ATsince] = ACTIONS(164),
    [anon_sym_ATversion] = ACTIONS(164),
    [anon_sym_ATafter] = ACTIONS(166),
    [anon_sym_ATafterClass] = ACTIONS(164),
    [anon_sym_ATannotation] = ACTIONS(164),
    [anon_sym_ATbackupGlobals] = ACTIONS(164),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(164),
    [anon_sym_ATbefore] = ACTIONS(166),
    [anon_sym_ATbeforeClass] = ACTIONS(164),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(166),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(164),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(164),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(164),
    [anon_sym_ATcovers] = ACTIONS(166),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(166),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(164),
    [anon_sym_ATcoversNothing] = ACTIONS(164),
    [anon_sym_ATdataProvider] = ACTIONS(164),
    [anon_sym_ATdepends] = ACTIONS(166),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(164),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(164),
    [anon_sym_ATgroup] = ACTIONS(164),
    [anon_sym_ATlarge] = ACTIONS(164),
    [anon_sym_ATmedium] = ACTIONS(164),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(164),
    [anon_sym_ATrequires] = ACTIONS(166),
    [anon_sym_ATrequiresusages] = ACTIONS(164),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(164),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(164),
    [anon_sym_ATsmall] = ACTIONS(164),
    [anon_sym_ATtest] = ACTIONS(166),
    [anon_sym_ATtestWith] = ACTIONS(164),
    [anon_sym_ATtestdox] = ACTIONS(164),
    [anon_sym_ATticket] = ACTIONS(164),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [sym_text] = ACTIONS(166),
    [sym__end] = ACTIONS(164),
  },
  [40] = {
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_ATapi] = ACTIONS(133),
    [anon_sym_ATfilesource] = ACTIONS(133),
    [anon_sym_ATignore] = ACTIONS(133),
    [anon_sym_ATcategory] = ACTIONS(133),
    [anon_sym_ATcopyright] = ACTIONS(133),
    [anon_sym_ATtodo] = ACTIONS(133),
    [anon_sym_ATexample] = ACTIONS(133),
    [anon_sym_ATlicense] = ACTIONS(133),
    [anon_sym_ATpackage] = ACTIONS(133),
    [anon_sym_ATsource] = ACTIONS(133),
    [anon_sym_ATsubpackage] = ACTIONS(133),
    [anon_sym_ATuses] = ACTIONS(133),
    [anon_sym_ATauthor] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_ATglobal] = ACTIONS(133),
    [anon_sym_ATinternal] = ACTIONS(133),
    [anon_sym_ATlink] = ACTIONS(133),
    [anon_sym_ATmethod] = ACTIONS(133),
    [anon_sym_ATparam] = ACTIONS(133),
    [anon_sym_ATproperty] = ACTIONS(135),
    [anon_sym_ATproperty_DASHread] = ACTIONS(133),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(133),
    [anon_sym_ATreturn] = ACTIONS(133),
    [anon_sym_ATsee] = ACTIONS(133),
    [anon_sym_ATthrows] = ACTIONS(133),
    [anon_sym_ATvar] = ACTIONS(133),
    [anon_sym_ATdeprecated] = ACTIONS(133),
    [anon_sym_ATsince] = ACTIONS(133),
    [anon_sym_ATversion] = ACTIONS(133),
    [anon_sym_ATafter] = ACTIONS(135),
    [anon_sym_ATafterClass] = ACTIONS(133),
    [anon_sym_ATannotation] = ACTIONS(133),
    [anon_sym_ATbackupGlobals] = ACTIONS(133),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(133),
    [anon_sym_ATbefore] = ACTIONS(135),
    [anon_sym_ATbeforeClass] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(135),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(133),
    [anon_sym_ATcovers] = ACTIONS(135),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(135),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(133),
    [anon_sym_ATcoversNothing] = ACTIONS(133),
    [anon_sym_ATdataProvider] = ACTIONS(133),
    [anon_sym_ATdepends] = ACTIONS(135),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(133),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(133),
    [anon_sym_ATgroup] = ACTIONS(133),
    [anon_sym_ATlarge] = ACTIONS(133),
    [anon_sym_ATmedium] = ACTIONS(133),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(133),
    [anon_sym_ATrequires] = ACTIONS(135),
    [anon_sym_ATrequiresusages] = ACTIONS(133),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(133),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(133),
    [anon_sym_ATsmall] = ACTIONS(133),
    [anon_sym_ATtest] = ACTIONS(135),
    [anon_sym_ATtestWith] = ACTIONS(133),
    [anon_sym_ATtestdox] = ACTIONS(133),
    [anon_sym_ATticket] = ACTIONS(133),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [sym_text] = ACTIONS(135),
    [sym__end] = ACTIONS(133),
  },
  [41] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(75),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(240),
    [anon_sym_ATfilesource] = ACTIONS(240),
    [anon_sym_ATignore] = ACTIONS(240),
    [anon_sym_ATcategory] = ACTIONS(240),
    [anon_sym_ATcopyright] = ACTIONS(240),
    [anon_sym_ATtodo] = ACTIONS(240),
    [anon_sym_ATexample] = ACTIONS(240),
    [anon_sym_ATlicense] = ACTIONS(240),
    [anon_sym_ATpackage] = ACTIONS(240),
    [anon_sym_ATsource] = ACTIONS(240),
    [anon_sym_ATsubpackage] = ACTIONS(240),
    [anon_sym_ATuses] = ACTIONS(240),
    [anon_sym_ATauthor] = ACTIONS(240),
    [anon_sym_ATglobal] = ACTIONS(240),
    [anon_sym_ATinternal] = ACTIONS(240),
    [anon_sym_ATlink] = ACTIONS(240),
    [anon_sym_ATmethod] = ACTIONS(240),
    [anon_sym_ATparam] = ACTIONS(240),
    [anon_sym_ATproperty] = ACTIONS(242),
    [anon_sym_ATproperty_DASHread] = ACTIONS(240),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(240),
    [anon_sym_ATreturn] = ACTIONS(240),
    [anon_sym_ATsee] = ACTIONS(240),
    [anon_sym_ATthrows] = ACTIONS(240),
    [anon_sym_ATvar] = ACTIONS(240),
    [anon_sym_ATdeprecated] = ACTIONS(240),
    [anon_sym_ATsince] = ACTIONS(240),
    [anon_sym_ATversion] = ACTIONS(240),
    [anon_sym_ATafter] = ACTIONS(242),
    [anon_sym_ATafterClass] = ACTIONS(240),
    [anon_sym_ATannotation] = ACTIONS(240),
    [anon_sym_ATbackupGlobals] = ACTIONS(240),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(240),
    [anon_sym_ATbefore] = ACTIONS(242),
    [anon_sym_ATbeforeClass] = ACTIONS(240),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(242),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(240),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(240),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(240),
    [anon_sym_ATcovers] = ACTIONS(242),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(242),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(240),
    [anon_sym_ATcoversNothing] = ACTIONS(240),
    [anon_sym_ATdataProvider] = ACTIONS(240),
    [anon_sym_ATdepends] = ACTIONS(242),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(240),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(240),
    [anon_sym_ATgroup] = ACTIONS(240),
    [anon_sym_ATlarge] = ACTIONS(240),
    [anon_sym_ATmedium] = ACTIONS(240),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(240),
    [anon_sym_ATrequires] = ACTIONS(242),
    [anon_sym_ATrequiresusages] = ACTIONS(240),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(240),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(240),
    [anon_sym_ATsmall] = ACTIONS(240),
    [anon_sym_ATtest] = ACTIONS(242),
    [anon_sym_ATtestWith] = ACTIONS(240),
    [anon_sym_ATtestdox] = ACTIONS(240),
    [anon_sym_ATticket] = ACTIONS(240),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(240),
  },
  [42] = {
    [sym_inline_tag] = STATE(50),
    [sym_description] = STATE(76),
    [aux_sym_description_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(244),
    [anon_sym_ATfilesource] = ACTIONS(244),
    [anon_sym_ATignore] = ACTIONS(244),
    [anon_sym_ATcategory] = ACTIONS(244),
    [anon_sym_ATcopyright] = ACTIONS(244),
    [anon_sym_ATtodo] = ACTIONS(244),
    [anon_sym_ATexample] = ACTIONS(244),
    [anon_sym_ATlicense] = ACTIONS(244),
    [anon_sym_ATpackage] = ACTIONS(244),
    [anon_sym_ATsource] = ACTIONS(244),
    [anon_sym_ATsubpackage] = ACTIONS(244),
    [anon_sym_ATuses] = ACTIONS(244),
    [anon_sym_ATauthor] = ACTIONS(244),
    [anon_sym_ATglobal] = ACTIONS(244),
    [anon_sym_ATinternal] = ACTIONS(244),
    [anon_sym_ATlink] = ACTIONS(244),
    [anon_sym_ATmethod] = ACTIONS(244),
    [anon_sym_ATparam] = ACTIONS(244),
    [anon_sym_ATproperty] = ACTIONS(246),
    [anon_sym_ATproperty_DASHread] = ACTIONS(244),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(244),
    [anon_sym_ATreturn] = ACTIONS(244),
    [anon_sym_ATsee] = ACTIONS(244),
    [anon_sym_ATthrows] = ACTIONS(244),
    [anon_sym_ATvar] = ACTIONS(244),
    [anon_sym_ATdeprecated] = ACTIONS(244),
    [anon_sym_ATsince] = ACTIONS(244),
    [anon_sym_ATversion] = ACTIONS(244),
    [anon_sym_ATafter] = ACTIONS(246),
    [anon_sym_ATafterClass] = ACTIONS(244),
    [anon_sym_ATannotation] = ACTIONS(244),
    [anon_sym_ATbackupGlobals] = ACTIONS(244),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(244),
    [anon_sym_ATbefore] = ACTIONS(246),
    [anon_sym_ATbeforeClass] = ACTIONS(244),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(246),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(244),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(244),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(244),
    [anon_sym_ATcovers] = ACTIONS(246),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(246),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(244),
    [anon_sym_ATcoversNothing] = ACTIONS(244),
    [anon_sym_ATdataProvider] = ACTIONS(244),
    [anon_sym_ATdepends] = ACTIONS(246),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(244),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(244),
    [anon_sym_ATgroup] = ACTIONS(244),
    [anon_sym_ATlarge] = ACTIONS(244),
    [anon_sym_ATmedium] = ACTIONS(244),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(244),
    [anon_sym_ATrequires] = ACTIONS(246),
    [anon_sym_ATrequiresusages] = ACTIONS(244),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(244),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(244),
    [anon_sym_ATsmall] = ACTIONS(244),
    [anon_sym_ATtest] = ACTIONS(246),
    [anon_sym_ATtestWith] = ACTIONS(244),
    [anon_sym_ATtestdox] = ACTIONS(244),
    [anon_sym_ATticket] = ACTIONS(244),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(244),
  },
  [43] = {
    [aux_sym_union_type_repeat1] = STATE(47),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_ATapi] = ACTIONS(178),
    [anon_sym_ATfilesource] = ACTIONS(178),
    [anon_sym_ATignore] = ACTIONS(178),
    [anon_sym_ATcategory] = ACTIONS(178),
    [anon_sym_ATcopyright] = ACTIONS(178),
    [anon_sym_ATtodo] = ACTIONS(178),
    [anon_sym_ATexample] = ACTIONS(178),
    [anon_sym_ATlicense] = ACTIONS(178),
    [anon_sym_ATpackage] = ACTIONS(178),
    [anon_sym_ATsource] = ACTIONS(178),
    [anon_sym_ATsubpackage] = ACTIONS(178),
    [anon_sym_ATuses] = ACTIONS(178),
    [anon_sym_ATauthor] = ACTIONS(178),
    [anon_sym_ATglobal] = ACTIONS(178),
    [anon_sym_ATinternal] = ACTIONS(178),
    [anon_sym_ATlink] = ACTIONS(178),
    [anon_sym_ATmethod] = ACTIONS(178),
    [anon_sym_ATparam] = ACTIONS(178),
    [anon_sym_ATproperty] = ACTIONS(180),
    [anon_sym_ATproperty_DASHread] = ACTIONS(178),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(178),
    [anon_sym_ATreturn] = ACTIONS(178),
    [anon_sym_ATsee] = ACTIONS(178),
    [anon_sym_ATthrows] = ACTIONS(178),
    [anon_sym_ATvar] = ACTIONS(178),
    [anon_sym_ATdeprecated] = ACTIONS(178),
    [anon_sym_ATsince] = ACTIONS(178),
    [anon_sym_ATversion] = ACTIONS(178),
    [anon_sym_ATafter] = ACTIONS(180),
    [anon_sym_ATafterClass] = ACTIONS(178),
    [anon_sym_ATannotation] = ACTIONS(178),
    [anon_sym_ATbackupGlobals] = ACTIONS(178),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(178),
    [anon_sym_ATbefore] = ACTIONS(180),
    [anon_sym_ATbeforeClass] = ACTIONS(178),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(180),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(178),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(178),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(178),
    [anon_sym_ATcovers] = ACTIONS(180),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(180),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(178),
    [anon_sym_ATcoversNothing] = ACTIONS(178),
    [anon_sym_ATdataProvider] = ACTIONS(178),
    [anon_sym_ATdepends] = ACTIONS(180),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(178),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(178),
    [anon_sym_ATgroup] = ACTIONS(178),
    [anon_sym_ATlarge] = ACTIONS(178),
    [anon_sym_ATmedium] = ACTIONS(178),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(178),
    [anon_sym_ATrequires] = ACTIONS(180),
    [anon_sym_ATrequiresusages] = ACTIONS(178),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(178),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(178),
    [anon_sym_ATsmall] = ACTIONS(178),
    [anon_sym_ATtest] = ACTIONS(180),
    [anon_sym_ATtestWith] = ACTIONS(178),
    [anon_sym_ATtestdox] = ACTIONS(178),
    [anon_sym_ATticket] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(248),
    [sym_text] = ACTIONS(180),
    [sym__end] = ACTIONS(178),
  },
  [44] = {
    [sym_inline_tag] = STATE(44),
    [aux_sym_description_repeat1] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_ATapi] = ACTIONS(253),
    [anon_sym_ATfilesource] = ACTIONS(253),
    [anon_sym_ATignore] = ACTIONS(253),
    [anon_sym_ATcategory] = ACTIONS(253),
    [anon_sym_ATcopyright] = ACTIONS(253),
    [anon_sym_ATtodo] = ACTIONS(253),
    [anon_sym_ATexample] = ACTIONS(253),
    [anon_sym_ATlicense] = ACTIONS(253),
    [anon_sym_ATpackage] = ACTIONS(253),
    [anon_sym_ATsource] = ACTIONS(253),
    [anon_sym_ATsubpackage] = ACTIONS(253),
    [anon_sym_ATuses] = ACTIONS(253),
    [anon_sym_ATauthor] = ACTIONS(253),
    [anon_sym_ATglobal] = ACTIONS(253),
    [anon_sym_ATinternal] = ACTIONS(253),
    [anon_sym_ATlink] = ACTIONS(253),
    [anon_sym_ATmethod] = ACTIONS(253),
    [anon_sym_ATparam] = ACTIONS(253),
    [anon_sym_ATproperty] = ACTIONS(255),
    [anon_sym_ATproperty_DASHread] = ACTIONS(253),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(253),
    [anon_sym_ATreturn] = ACTIONS(253),
    [anon_sym_ATsee] = ACTIONS(253),
    [anon_sym_ATthrows] = ACTIONS(253),
    [anon_sym_ATvar] = ACTIONS(253),
    [anon_sym_ATdeprecated] = ACTIONS(253),
    [anon_sym_ATsince] = ACTIONS(253),
    [anon_sym_ATversion] = ACTIONS(253),
    [anon_sym_ATafter] = ACTIONS(255),
    [anon_sym_ATafterClass] = ACTIONS(253),
    [anon_sym_ATannotation] = ACTIONS(253),
    [anon_sym_ATbackupGlobals] = ACTIONS(253),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(253),
    [anon_sym_ATbefore] = ACTIONS(255),
    [anon_sym_ATbeforeClass] = ACTIONS(253),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(255),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(253),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(253),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(253),
    [anon_sym_ATcovers] = ACTIONS(255),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(255),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(253),
    [anon_sym_ATcoversNothing] = ACTIONS(253),
    [anon_sym_ATdataProvider] = ACTIONS(253),
    [anon_sym_ATdepends] = ACTIONS(255),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(253),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(253),
    [anon_sym_ATgroup] = ACTIONS(253),
    [anon_sym_ATlarge] = ACTIONS(253),
    [anon_sym_ATmedium] = ACTIONS(253),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(253),
    [anon_sym_ATrequires] = ACTIONS(255),
    [anon_sym_ATrequiresusages] = ACTIONS(253),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(253),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(253),
    [anon_sym_ATsmall] = ACTIONS(253),
    [anon_sym_ATtest] = ACTIONS(255),
    [anon_sym_ATtestWith] = ACTIONS(253),
    [anon_sym_ATtestdox] = ACTIONS(253),
    [anon_sym_ATticket] = ACTIONS(253),
    [sym_text] = ACTIONS(257),
    [sym__end] = ACTIONS(253),
  },
  [45] = {
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_ATapi] = ACTIONS(221),
    [anon_sym_ATfilesource] = ACTIONS(221),
    [anon_sym_ATignore] = ACTIONS(221),
    [anon_sym_ATcategory] = ACTIONS(221),
    [anon_sym_ATcopyright] = ACTIONS(221),
    [anon_sym_ATtodo] = ACTIONS(221),
    [anon_sym_ATexample] = ACTIONS(221),
    [anon_sym_ATlicense] = ACTIONS(221),
    [anon_sym_ATpackage] = ACTIONS(221),
    [anon_sym_ATsource] = ACTIONS(221),
    [anon_sym_ATsubpackage] = ACTIONS(221),
    [anon_sym_ATuses] = ACTIONS(221),
    [anon_sym_ATauthor] = ACTIONS(221),
    [anon_sym_ATglobal] = ACTIONS(221),
    [anon_sym_ATinternal] = ACTIONS(221),
    [anon_sym_ATlink] = ACTIONS(221),
    [anon_sym_ATmethod] = ACTIONS(221),
    [anon_sym_ATparam] = ACTIONS(221),
    [anon_sym_ATproperty] = ACTIONS(223),
    [anon_sym_ATproperty_DASHread] = ACTIONS(221),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(221),
    [anon_sym_ATreturn] = ACTIONS(221),
    [anon_sym_ATsee] = ACTIONS(221),
    [anon_sym_ATthrows] = ACTIONS(221),
    [anon_sym_ATvar] = ACTIONS(221),
    [anon_sym_ATdeprecated] = ACTIONS(221),
    [anon_sym_ATsince] = ACTIONS(221),
    [anon_sym_ATversion] = ACTIONS(221),
    [anon_sym_ATafter] = ACTIONS(223),
    [anon_sym_ATafterClass] = ACTIONS(221),
    [anon_sym_ATannotation] = ACTIONS(221),
    [anon_sym_ATbackupGlobals] = ACTIONS(221),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(221),
    [anon_sym_ATbefore] = ACTIONS(223),
    [anon_sym_ATbeforeClass] = ACTIONS(221),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(223),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(221),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(221),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(221),
    [anon_sym_ATcovers] = ACTIONS(223),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(223),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(221),
    [anon_sym_ATcoversNothing] = ACTIONS(221),
    [anon_sym_ATdataProvider] = ACTIONS(221),
    [anon_sym_ATdepends] = ACTIONS(223),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(221),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(221),
    [anon_sym_ATgroup] = ACTIONS(221),
    [anon_sym_ATlarge] = ACTIONS(221),
    [anon_sym_ATmedium] = ACTIONS(221),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(221),
    [anon_sym_ATrequires] = ACTIONS(223),
    [anon_sym_ATrequiresusages] = ACTIONS(221),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(221),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(221),
    [anon_sym_ATsmall] = ACTIONS(221),
    [anon_sym_ATtest] = ACTIONS(223),
    [anon_sym_ATtestWith] = ACTIONS(221),
    [anon_sym_ATtestdox] = ACTIONS(221),
    [anon_sym_ATticket] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [sym_text] = ACTIONS(223),
    [sym__end] = ACTIONS(221),
  },
  [46] = {
    [anon_sym_LBRACE] = ACTIONS(260),
    [anon_sym_ATapi] = ACTIONS(260),
    [anon_sym_ATfilesource] = ACTIONS(260),
    [anon_sym_ATignore] = ACTIONS(260),
    [anon_sym_ATcategory] = ACTIONS(260),
    [anon_sym_ATcopyright] = ACTIONS(260),
    [anon_sym_ATtodo] = ACTIONS(260),
    [anon_sym_ATexample] = ACTIONS(260),
    [anon_sym_ATlicense] = ACTIONS(260),
    [anon_sym_ATpackage] = ACTIONS(260),
    [anon_sym_ATsource] = ACTIONS(260),
    [anon_sym_ATsubpackage] = ACTIONS(260),
    [anon_sym_ATuses] = ACTIONS(260),
    [anon_sym_ATauthor] = ACTIONS(260),
    [anon_sym_ATglobal] = ACTIONS(260),
    [anon_sym_ATinternal] = ACTIONS(260),
    [anon_sym_ATlink] = ACTIONS(260),
    [anon_sym_ATmethod] = ACTIONS(260),
    [anon_sym_ATparam] = ACTIONS(260),
    [anon_sym_ATproperty] = ACTIONS(262),
    [anon_sym_ATproperty_DASHread] = ACTIONS(260),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(260),
    [anon_sym_ATreturn] = ACTIONS(260),
    [anon_sym_ATsee] = ACTIONS(260),
    [anon_sym_ATthrows] = ACTIONS(260),
    [anon_sym_ATvar] = ACTIONS(260),
    [anon_sym_ATdeprecated] = ACTIONS(260),
    [anon_sym_ATsince] = ACTIONS(260),
    [anon_sym_ATversion] = ACTIONS(260),
    [anon_sym_ATafter] = ACTIONS(262),
    [anon_sym_ATafterClass] = ACTIONS(260),
    [anon_sym_ATannotation] = ACTIONS(260),
    [anon_sym_ATbackupGlobals] = ACTIONS(260),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(260),
    [anon_sym_ATbefore] = ACTIONS(262),
    [anon_sym_ATbeforeClass] = ACTIONS(260),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(262),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(260),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(260),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(260),
    [anon_sym_ATcovers] = ACTIONS(262),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(262),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(260),
    [anon_sym_ATcoversNothing] = ACTIONS(260),
    [anon_sym_ATdataProvider] = ACTIONS(260),
    [anon_sym_ATdepends] = ACTIONS(262),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(260),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(260),
    [anon_sym_ATgroup] = ACTIONS(260),
    [anon_sym_ATlarge] = ACTIONS(260),
    [anon_sym_ATmedium] = ACTIONS(260),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(260),
    [anon_sym_ATrequires] = ACTIONS(262),
    [anon_sym_ATrequiresusages] = ACTIONS(260),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(260),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(260),
    [anon_sym_ATsmall] = ACTIONS(260),
    [anon_sym_ATtest] = ACTIONS(262),
    [anon_sym_ATtestWith] = ACTIONS(260),
    [anon_sym_ATtestdox] = ACTIONS(260),
    [anon_sym_ATticket] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(260),
    [anon_sym_DOLLAR] = ACTIONS(260),
    [sym_text] = ACTIONS(262),
    [sym__end] = ACTIONS(260),
  },
  [47] = {
    [aux_sym_union_type_repeat1] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_ATapi] = ACTIONS(215),
    [anon_sym_ATfilesource] = ACTIONS(215),
    [anon_sym_ATignore] = ACTIONS(215),
    [anon_sym_ATcategory] = ACTIONS(215),
    [anon_sym_ATcopyright] = ACTIONS(215),
    [anon_sym_ATtodo] = ACTIONS(215),
    [anon_sym_ATexample] = ACTIONS(215),
    [anon_sym_ATlicense] = ACTIONS(215),
    [anon_sym_ATpackage] = ACTIONS(215),
    [anon_sym_ATsource] = ACTIONS(215),
    [anon_sym_ATsubpackage] = ACTIONS(215),
    [anon_sym_ATuses] = ACTIONS(215),
    [anon_sym_ATauthor] = ACTIONS(215),
    [anon_sym_ATglobal] = ACTIONS(215),
    [anon_sym_ATinternal] = ACTIONS(215),
    [anon_sym_ATlink] = ACTIONS(215),
    [anon_sym_ATmethod] = ACTIONS(215),
    [anon_sym_ATparam] = ACTIONS(215),
    [anon_sym_ATproperty] = ACTIONS(217),
    [anon_sym_ATproperty_DASHread] = ACTIONS(215),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(215),
    [anon_sym_ATreturn] = ACTIONS(215),
    [anon_sym_ATsee] = ACTIONS(215),
    [anon_sym_ATthrows] = ACTIONS(215),
    [anon_sym_ATvar] = ACTIONS(215),
    [anon_sym_ATdeprecated] = ACTIONS(215),
    [anon_sym_ATsince] = ACTIONS(215),
    [anon_sym_ATversion] = ACTIONS(215),
    [anon_sym_ATafter] = ACTIONS(217),
    [anon_sym_ATafterClass] = ACTIONS(215),
    [anon_sym_ATannotation] = ACTIONS(215),
    [anon_sym_ATbackupGlobals] = ACTIONS(215),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(215),
    [anon_sym_ATbefore] = ACTIONS(217),
    [anon_sym_ATbeforeClass] = ACTIONS(215),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(217),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(215),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(215),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(215),
    [anon_sym_ATcovers] = ACTIONS(217),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(217),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(215),
    [anon_sym_ATcoversNothing] = ACTIONS(215),
    [anon_sym_ATdataProvider] = ACTIONS(215),
    [anon_sym_ATdepends] = ACTIONS(217),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(215),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(215),
    [anon_sym_ATgroup] = ACTIONS(215),
    [anon_sym_ATlarge] = ACTIONS(215),
    [anon_sym_ATmedium] = ACTIONS(215),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(215),
    [anon_sym_ATrequires] = ACTIONS(217),
    [anon_sym_ATrequiresusages] = ACTIONS(215),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(215),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(215),
    [anon_sym_ATsmall] = ACTIONS(215),
    [anon_sym_ATtest] = ACTIONS(217),
    [anon_sym_ATtestWith] = ACTIONS(215),
    [anon_sym_ATtestdox] = ACTIONS(215),
    [anon_sym_ATticket] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(248),
    [sym_text] = ACTIONS(217),
    [sym__end] = ACTIONS(215),
  },
  [48] = {
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_ATapi] = ACTIONS(264),
    [anon_sym_ATfilesource] = ACTIONS(264),
    [anon_sym_ATignore] = ACTIONS(264),
    [anon_sym_ATcategory] = ACTIONS(264),
    [anon_sym_ATcopyright] = ACTIONS(264),
    [anon_sym_ATtodo] = ACTIONS(264),
    [anon_sym_ATexample] = ACTIONS(264),
    [anon_sym_ATlicense] = ACTIONS(264),
    [anon_sym_ATpackage] = ACTIONS(264),
    [anon_sym_ATsource] = ACTIONS(264),
    [anon_sym_ATsubpackage] = ACTIONS(264),
    [anon_sym_ATuses] = ACTIONS(264),
    [anon_sym_ATauthor] = ACTIONS(264),
    [anon_sym_ATglobal] = ACTIONS(264),
    [anon_sym_ATinternal] = ACTIONS(264),
    [anon_sym_ATlink] = ACTIONS(264),
    [anon_sym_ATmethod] = ACTIONS(264),
    [anon_sym_ATparam] = ACTIONS(264),
    [anon_sym_ATproperty] = ACTIONS(266),
    [anon_sym_ATproperty_DASHread] = ACTIONS(264),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(264),
    [anon_sym_ATreturn] = ACTIONS(264),
    [anon_sym_ATsee] = ACTIONS(264),
    [anon_sym_ATthrows] = ACTIONS(264),
    [anon_sym_ATvar] = ACTIONS(264),
    [anon_sym_ATdeprecated] = ACTIONS(264),
    [anon_sym_ATsince] = ACTIONS(264),
    [anon_sym_ATversion] = ACTIONS(264),
    [anon_sym_ATafter] = ACTIONS(266),
    [anon_sym_ATafterClass] = ACTIONS(264),
    [anon_sym_ATannotation] = ACTIONS(264),
    [anon_sym_ATbackupGlobals] = ACTIONS(264),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(264),
    [anon_sym_ATbefore] = ACTIONS(266),
    [anon_sym_ATbeforeClass] = ACTIONS(264),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(266),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(264),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(264),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(264),
    [anon_sym_ATcovers] = ACTIONS(266),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(266),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(264),
    [anon_sym_ATcoversNothing] = ACTIONS(264),
    [anon_sym_ATdataProvider] = ACTIONS(264),
    [anon_sym_ATdepends] = ACTIONS(266),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(264),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(264),
    [anon_sym_ATgroup] = ACTIONS(264),
    [anon_sym_ATlarge] = ACTIONS(264),
    [anon_sym_ATmedium] = ACTIONS(264),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(264),
    [anon_sym_ATrequires] = ACTIONS(266),
    [anon_sym_ATrequiresusages] = ACTIONS(264),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(264),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(264),
    [anon_sym_ATsmall] = ACTIONS(264),
    [anon_sym_ATtest] = ACTIONS(266),
    [anon_sym_ATtestWith] = ACTIONS(264),
    [anon_sym_ATtestdox] = ACTIONS(264),
    [anon_sym_ATticket] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(264),
    [sym_text] = ACTIONS(266),
    [sym__end] = ACTIONS(264),
  },
  [49] = {
    [aux_sym_union_type_repeat1] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_ATapi] = ACTIONS(221),
    [anon_sym_ATfilesource] = ACTIONS(221),
    [anon_sym_ATignore] = ACTIONS(221),
    [anon_sym_ATcategory] = ACTIONS(221),
    [anon_sym_ATcopyright] = ACTIONS(221),
    [anon_sym_ATtodo] = ACTIONS(221),
    [anon_sym_ATexample] = ACTIONS(221),
    [anon_sym_ATlicense] = ACTIONS(221),
    [anon_sym_ATpackage] = ACTIONS(221),
    [anon_sym_ATsource] = ACTIONS(221),
    [anon_sym_ATsubpackage] = ACTIONS(221),
    [anon_sym_ATuses] = ACTIONS(221),
    [anon_sym_ATauthor] = ACTIONS(221),
    [anon_sym_ATglobal] = ACTIONS(221),
    [anon_sym_ATinternal] = ACTIONS(221),
    [anon_sym_ATlink] = ACTIONS(221),
    [anon_sym_ATmethod] = ACTIONS(221),
    [anon_sym_ATparam] = ACTIONS(221),
    [anon_sym_ATproperty] = ACTIONS(223),
    [anon_sym_ATproperty_DASHread] = ACTIONS(221),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(221),
    [anon_sym_ATreturn] = ACTIONS(221),
    [anon_sym_ATsee] = ACTIONS(221),
    [anon_sym_ATthrows] = ACTIONS(221),
    [anon_sym_ATvar] = ACTIONS(221),
    [anon_sym_ATdeprecated] = ACTIONS(221),
    [anon_sym_ATsince] = ACTIONS(221),
    [anon_sym_ATversion] = ACTIONS(221),
    [anon_sym_ATafter] = ACTIONS(223),
    [anon_sym_ATafterClass] = ACTIONS(221),
    [anon_sym_ATannotation] = ACTIONS(221),
    [anon_sym_ATbackupGlobals] = ACTIONS(221),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(221),
    [anon_sym_ATbefore] = ACTIONS(223),
    [anon_sym_ATbeforeClass] = ACTIONS(221),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(223),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(221),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(221),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(221),
    [anon_sym_ATcovers] = ACTIONS(223),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(223),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(221),
    [anon_sym_ATcoversNothing] = ACTIONS(221),
    [anon_sym_ATdataProvider] = ACTIONS(221),
    [anon_sym_ATdepends] = ACTIONS(223),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(221),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(221),
    [anon_sym_ATgroup] = ACTIONS(221),
    [anon_sym_ATlarge] = ACTIONS(221),
    [anon_sym_ATmedium] = ACTIONS(221),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(221),
    [anon_sym_ATrequires] = ACTIONS(223),
    [anon_sym_ATrequiresusages] = ACTIONS(221),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(221),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(221),
    [anon_sym_ATsmall] = ACTIONS(221),
    [anon_sym_ATtest] = ACTIONS(223),
    [anon_sym_ATtestWith] = ACTIONS(221),
    [anon_sym_ATtestdox] = ACTIONS(221),
    [anon_sym_ATticket] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(268),
    [sym_text] = ACTIONS(223),
    [sym__end] = ACTIONS(221),
  },
  [50] = {
    [sym_inline_tag] = STATE(44),
    [aux_sym_description_repeat1] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(271),
    [anon_sym_ATfilesource] = ACTIONS(271),
    [anon_sym_ATignore] = ACTIONS(271),
    [anon_sym_ATcategory] = ACTIONS(271),
    [anon_sym_ATcopyright] = ACTIONS(271),
    [anon_sym_ATtodo] = ACTIONS(271),
    [anon_sym_ATexample] = ACTIONS(271),
    [anon_sym_ATlicense] = ACTIONS(271),
    [anon_sym_ATpackage] = ACTIONS(271),
    [anon_sym_ATsource] = ACTIONS(271),
    [anon_sym_ATsubpackage] = ACTIONS(271),
    [anon_sym_ATuses] = ACTIONS(271),
    [anon_sym_ATauthor] = ACTIONS(271),
    [anon_sym_ATglobal] = ACTIONS(271),
    [anon_sym_ATinternal] = ACTIONS(271),
    [anon_sym_ATlink] = ACTIONS(271),
    [anon_sym_ATmethod] = ACTIONS(271),
    [anon_sym_ATparam] = ACTIONS(271),
    [anon_sym_ATproperty] = ACTIONS(273),
    [anon_sym_ATproperty_DASHread] = ACTIONS(271),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(271),
    [anon_sym_ATreturn] = ACTIONS(271),
    [anon_sym_ATsee] = ACTIONS(271),
    [anon_sym_ATthrows] = ACTIONS(271),
    [anon_sym_ATvar] = ACTIONS(271),
    [anon_sym_ATdeprecated] = ACTIONS(271),
    [anon_sym_ATsince] = ACTIONS(271),
    [anon_sym_ATversion] = ACTIONS(271),
    [anon_sym_ATafter] = ACTIONS(273),
    [anon_sym_ATafterClass] = ACTIONS(271),
    [anon_sym_ATannotation] = ACTIONS(271),
    [anon_sym_ATbackupGlobals] = ACTIONS(271),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(271),
    [anon_sym_ATbefore] = ACTIONS(273),
    [anon_sym_ATbeforeClass] = ACTIONS(271),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(273),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(271),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(271),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(271),
    [anon_sym_ATcovers] = ACTIONS(273),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(273),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(271),
    [anon_sym_ATcoversNothing] = ACTIONS(271),
    [anon_sym_ATdataProvider] = ACTIONS(271),
    [anon_sym_ATdepends] = ACTIONS(273),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(271),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(271),
    [anon_sym_ATgroup] = ACTIONS(271),
    [anon_sym_ATlarge] = ACTIONS(271),
    [anon_sym_ATmedium] = ACTIONS(271),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(271),
    [anon_sym_ATrequires] = ACTIONS(273),
    [anon_sym_ATrequiresusages] = ACTIONS(271),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(271),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(271),
    [anon_sym_ATsmall] = ACTIONS(271),
    [anon_sym_ATtest] = ACTIONS(273),
    [anon_sym_ATtestWith] = ACTIONS(271),
    [anon_sym_ATtestdox] = ACTIONS(271),
    [anon_sym_ATticket] = ACTIONS(271),
    [sym_text] = ACTIONS(275),
    [sym__end] = ACTIONS(271),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(135), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(133), 54,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [69] = 2,
    ACTIONS(262), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(260), 54,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      anon_sym_PIPE,
      sym__end,
  [138] = 2,
    ACTIONS(223), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(221), 54,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      anon_sym_PIPE,
      sym__end,
  [207] = 2,
    ACTIONS(266), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(264), 54,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      anon_sym_PIPE,
      sym__end,
  [276] = 2,
    ACTIONS(279), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(277), 53,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [344] = 2,
    ACTIONS(283), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(281), 53,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [412] = 2,
    ACTIONS(287), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(285), 53,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [480] = 2,
    ACTIONS(291), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(289), 53,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [548] = 2,
    ACTIONS(295), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(293), 53,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [616] = 2,
    ACTIONS(299), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(297), 53,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [684] = 3,
    ACTIONS(303), 1,
      anon_sym_LT,
    ACTIONS(305), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(301), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [753] = 2,
    ACTIONS(234), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(232), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [819] = 2,
    ACTIONS(238), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(236), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [885] = 2,
    ACTIONS(309), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(307), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [951] = 2,
    ACTIONS(313), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(311), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1017] = 2,
    ACTIONS(317), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(315), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1083] = 2,
    ACTIONS(321), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(319), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1149] = 2,
    ACTIONS(190), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(188), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1215] = 2,
    ACTIONS(325), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(323), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1281] = 2,
    ACTIONS(329), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(327), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1347] = 2,
    ACTIONS(333), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(331), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1413] = 2,
    ACTIONS(337), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(335), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1479] = 2,
    ACTIONS(341), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(339), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1545] = 2,
    ACTIONS(345), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(343), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1611] = 2,
    ACTIONS(349), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(347), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1677] = 2,
    ACTIONS(198), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(196), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1743] = 2,
    ACTIONS(353), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(351), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1809] = 2,
    ACTIONS(357), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(355), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1875] = 2,
    ACTIONS(230), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(228), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1941] = 2,
    ACTIONS(361), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(359), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [2007] = 2,
    ACTIONS(365), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(363), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [2073] = 2,
    ACTIONS(194), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(192), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [2139] = 2,
    ACTIONS(369), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(367), 52,
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
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [2205] = 16,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(383), 1,
      anon_sym_DOLLAR,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_qualified_name,
    STATE(127), 1,
      sym_parameter,
    STATE(135), 1,
      sym_variable_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(144), 2,
      sym__type,
      sym_union_type,
    STATE(118), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(124), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(381), 12,
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
  [2272] = 15,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(383), 1,
      anon_sym_DOLLAR,
    STATE(116), 1,
      sym_qualified_name,
    STATE(135), 1,
      sym_variable_name,
    STATE(149), 1,
      sym_parameter,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(144), 2,
      sym__type,
      sym_union_type,
    STATE(118), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(124), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(381), 12,
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
  [2336] = 14,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(42), 1,
      sym_variable_name,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(150), 2,
      sym__type,
      sym_union_type,
    STATE(118), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(124), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(381), 12,
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
  [2397] = 14,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(387), 1,
      anon_sym_static,
    STATE(88), 1,
      sym_static,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(198), 2,
      sym__type,
      sym_union_type,
    STATE(118), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(124), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(381), 11,
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
  [2457] = 12,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 2,
      sym__type,
      sym_union_type,
    STATE(118), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(124), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(381), 12,
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
  [2512] = 12,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(389), 1,
      sym_name,
    ACTIONS(391), 1,
      anon_sym_list,
    ACTIONS(393), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(192), 1,
      sym_namespace_name_as_prefix,
    STATE(8), 2,
      sym__type,
      sym_union_type,
    STATE(10), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(22), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(395), 12,
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
  [2567] = 12,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(397), 1,
      sym_name,
    ACTIONS(399), 1,
      anon_sym_list,
    ACTIONS(401), 1,
      anon_sym_QMARK,
    STATE(36), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(188), 1,
      sym_namespace_name_as_prefix,
    STATE(30), 2,
      sym__type,
      sym_union_type,
    STATE(14), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(43), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(403), 12,
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
  [2622] = 12,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(152), 2,
      sym__type,
      sym_union_type,
    STATE(118), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(124), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(381), 12,
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
  [2677] = 12,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(397), 1,
      sym_name,
    ACTIONS(399), 1,
      anon_sym_list,
    ACTIONS(401), 1,
      anon_sym_QMARK,
    STATE(36), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(188), 1,
      sym_namespace_name_as_prefix,
    STATE(41), 2,
      sym__type,
      sym_union_type,
    STATE(14), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(43), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(403), 12,
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
  [2732] = 12,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(146), 2,
      sym__type,
      sym_union_type,
    STATE(118), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(124), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(381), 12,
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
  [2787] = 11,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(397), 1,
      sym_name,
    ACTIONS(399), 1,
      anon_sym_list,
    ACTIONS(401), 1,
      anon_sym_QMARK,
    STATE(36), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(188), 1,
      sym_namespace_name_as_prefix,
    STATE(14), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(53), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(403), 12,
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
  [2838] = 11,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(389), 1,
      sym_name,
    ACTIONS(391), 1,
      anon_sym_list,
    ACTIONS(393), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(192), 1,
      sym_namespace_name_as_prefix,
    STATE(10), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(45), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(395), 12,
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
  [2889] = 11,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(118), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(129), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(381), 12,
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
  [2940] = 9,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(381), 12,
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
  [2982] = 9,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(168), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(381), 12,
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
  [3024] = 9,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(381), 12,
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
  [3066] = 9,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(185), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(381), 12,
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
  [3108] = 9,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(139), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(381), 12,
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
  [3150] = 9,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(187), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(381), 12,
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
  [3192] = 9,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(189), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(381), 12,
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
  [3234] = 9,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(140), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(381), 12,
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
  [3276] = 9,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(191), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(381), 12,
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
  [3318] = 8,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(389), 1,
      sym_name,
    STATE(17), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(192), 1,
      sym_namespace_name_as_prefix,
    STATE(16), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(395), 12,
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
  [3355] = 4,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(410), 2,
      anon_sym_BSLASH,
      anon_sym_QMARK,
    ACTIONS(164), 3,
      anon_sym_LT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
    ACTIONS(408), 14,
      anon_sym_list,
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
  [3384] = 8,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(397), 1,
      sym_name,
    STATE(36), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(188), 1,
      sym_namespace_name_as_prefix,
    STATE(21), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(403), 12,
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
  [3421] = 8,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    STATE(116), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(190), 1,
      sym_namespace_name_as_prefix,
    STATE(113), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(381), 12,
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
  [3458] = 3,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    STATE(145), 1,
      aux_sym_namespace_name_repeat1,
    ACTIONS(112), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3474] = 5,
    ACTIONS(412), 1,
      anon_sym_ATinheritDoc,
    ACTIONS(414), 1,
      anon_sym_ATinternal,
    ACTIONS(416), 1,
      anon_sym_ATlink,
    ACTIONS(418), 1,
      anon_sym_ATsee,
    STATE(164), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [3492] = 7,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(422), 1,
      sym_uri,
    STATE(12), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(183), 1,
      sym_namespace_name_as_prefix,
  [3514] = 1,
    ACTIONS(160), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3524] = 7,
    ACTIONS(375), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(424), 1,
      sym_uri,
    STATE(128), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_namespace_name,
    STATE(193), 1,
      sym_namespace_name_as_prefix,
  [3546] = 1,
    ACTIONS(133), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3556] = 1,
    ACTIONS(112), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3566] = 1,
    ACTIONS(164), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3576] = 4,
    ACTIONS(426), 1,
      anon_sym_LT,
    ACTIONS(428), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(122), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(125), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3591] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(430), 1,
      sym_text,
    STATE(74), 1,
      sym_description,
    STATE(50), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3605] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(430), 1,
      sym_text,
    STATE(80), 1,
      sym_description,
    STATE(50), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3619] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(430), 1,
      sym_text,
    STATE(67), 1,
      sym_description,
    STATE(50), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3633] = 3,
    ACTIONS(432), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(123), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(154), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3645] = 3,
    ACTIONS(434), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(123), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(143), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3657] = 3,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    STATE(125), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(178), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3668] = 3,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    STATE(126), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(215), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3679] = 3,
    ACTIONS(439), 1,
      anon_sym_PIPE,
    STATE(126), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(221), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3690] = 3,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_parameters_repeat1,
  [3700] = 3,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    ACTIONS(448), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(450), 1,
      sym_text,
  [3710] = 1,
    ACTIONS(221), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3716] = 3,
    ACTIONS(452), 1,
      sym_name,
    ACTIONS(454), 1,
      anon_sym_BSLASH,
    STATE(171), 1,
      sym_namespace_name,
  [3726] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_parameters_repeat1,
  [3736] = 1,
    ACTIONS(264), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3742] = 1,
    ACTIONS(260), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3748] = 3,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_parameters_repeat1,
  [3758] = 2,
    ACTIONS(465), 1,
      anon_sym_EQ,
    ACTIONS(463), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3766] = 1,
    ACTIONS(281), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [3772] = 2,
    ACTIONS(469), 1,
      anon_sym_EQ,
    ACTIONS(467), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3780] = 2,
    ACTIONS(135), 1,
      sym_text,
    ACTIONS(133), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN_RPAREN,
  [3788] = 2,
    ACTIONS(471), 1,
      anon_sym_GT,
    ACTIONS(473), 1,
      anon_sym_COMMA,
  [3795] = 2,
    ACTIONS(475), 1,
      anon_sym_GT,
    ACTIONS(477), 1,
      anon_sym_COMMA,
  [3802] = 2,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(481), 1,
      sym_text,
  [3809] = 2,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    ACTIONS(483), 1,
      sym_text,
  [3816] = 2,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      sym_text,
  [3823] = 2,
    ACTIONS(383), 1,
      anon_sym_DOLLAR,
    STATE(137), 1,
      sym_variable_name,
  [3830] = 2,
    ACTIONS(489), 1,
      anon_sym_BSLASH,
    STATE(157), 1,
      aux_sym_namespace_name_repeat1,
  [3837] = 2,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      sym_variable_name,
  [3844] = 2,
    ACTIONS(492), 1,
      sym_name,
    STATE(180), 1,
      sym_namespace_name,
  [3851] = 1,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3856] = 1,
    ACTIONS(459), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3861] = 2,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_variable_name,
  [3868] = 1,
    ACTIONS(497), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3873] = 2,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_variable_name,
  [3880] = 2,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_parameters,
  [3887] = 2,
    ACTIONS(501), 1,
      sym_name,
    STATE(171), 1,
      sym_namespace_name,
  [3894] = 2,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_parameters,
  [3901] = 2,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    STATE(145), 1,
      aux_sym_namespace_name_repeat1,
  [3908] = 2,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    STATE(157), 1,
      aux_sym_namespace_name_repeat1,
  [3915] = 2,
    ACTIONS(507), 1,
      anon_sym_GT,
    ACTIONS(509), 1,
      anon_sym_COMMA,
  [3922] = 1,
    ACTIONS(511), 1,
      sym_text,
  [3926] = 1,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
  [3930] = 1,
    ACTIONS(515), 1,
      sym_name,
  [3934] = 1,
    ACTIONS(517), 1,
      sym_uri,
  [3938] = 1,
    ACTIONS(519), 1,
      sym_name,
  [3942] = 1,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
  [3946] = 1,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
  [3950] = 1,
    ACTIONS(525), 1,
      anon_sym_BSLASH,
  [3954] = 1,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
  [3958] = 1,
    ACTIONS(507), 1,
      anon_sym_GT,
  [3962] = 1,
    ACTIONS(529), 1,
      anon_sym_LT,
  [3966] = 1,
    ACTIONS(531), 1,
      sym_uri,
  [3970] = 1,
    ACTIONS(533), 1,
      anon_sym_BSLASH,
  [3974] = 1,
    ACTIONS(535), 1,
      sym_default_value,
  [3978] = 1,
    ACTIONS(537), 1,
      sym_name,
  [3982] = 1,
    ACTIONS(539), 1,
      sym_email_address,
  [3986] = 1,
    ACTIONS(541), 1,
      sym_name,
  [3990] = 1,
    ACTIONS(543), 1,
      anon_sym_GT,
  [3994] = 1,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
  [3998] = 1,
    ACTIONS(547), 1,
      anon_sym_BSLASH,
  [4002] = 1,
    ACTIONS(549), 1,
      sym_author_name,
  [4006] = 1,
    ACTIONS(551), 1,
      anon_sym_BSLASH,
  [4010] = 1,
    ACTIONS(553), 1,
      sym_default_value,
  [4014] = 1,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
  [4018] = 1,
    ACTIONS(557), 1,
      sym_name,
  [4022] = 1,
    ACTIONS(559), 1,
      sym_name,
  [4026] = 1,
    ACTIONS(471), 1,
      anon_sym_GT,
  [4030] = 1,
    ACTIONS(561), 1,
      anon_sym_GT,
  [4034] = 1,
    ACTIONS(563), 1,
      anon_sym_GT,
  [4038] = 1,
    ACTIONS(565), 1,
      sym_name,
  [4042] = 1,
    ACTIONS(475), 1,
      anon_sym_GT,
  [4046] = 1,
    ACTIONS(567), 1,
      sym_name,
  [4050] = 1,
    ACTIONS(569), 1,
      anon_sym_GT,
  [4054] = 1,
    ACTIONS(571), 1,
      sym_name,
  [4058] = 1,
    ACTIONS(573), 1,
      sym_name,
  [4062] = 1,
    ACTIONS(575), 1,
      sym_name,
  [4066] = 1,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
  [4070] = 1,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
  [4074] = 1,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
  [4078] = 1,
    ACTIONS(583), 1,
      sym_name,
  [4082] = 1,
    ACTIONS(585), 1,
      sym_name,
  [4086] = 1,
    ACTIONS(587), 1,
      anon_sym_LT,
  [4090] = 1,
    ACTIONS(589), 1,
      anon_sym_LT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(51)] = 0,
  [SMALL_STATE(52)] = 69,
  [SMALL_STATE(53)] = 138,
  [SMALL_STATE(54)] = 207,
  [SMALL_STATE(55)] = 276,
  [SMALL_STATE(56)] = 344,
  [SMALL_STATE(57)] = 412,
  [SMALL_STATE(58)] = 480,
  [SMALL_STATE(59)] = 548,
  [SMALL_STATE(60)] = 616,
  [SMALL_STATE(61)] = 684,
  [SMALL_STATE(62)] = 753,
  [SMALL_STATE(63)] = 819,
  [SMALL_STATE(64)] = 885,
  [SMALL_STATE(65)] = 951,
  [SMALL_STATE(66)] = 1017,
  [SMALL_STATE(67)] = 1083,
  [SMALL_STATE(68)] = 1149,
  [SMALL_STATE(69)] = 1215,
  [SMALL_STATE(70)] = 1281,
  [SMALL_STATE(71)] = 1347,
  [SMALL_STATE(72)] = 1413,
  [SMALL_STATE(73)] = 1479,
  [SMALL_STATE(74)] = 1545,
  [SMALL_STATE(75)] = 1611,
  [SMALL_STATE(76)] = 1677,
  [SMALL_STATE(77)] = 1743,
  [SMALL_STATE(78)] = 1809,
  [SMALL_STATE(79)] = 1875,
  [SMALL_STATE(80)] = 1941,
  [SMALL_STATE(81)] = 2007,
  [SMALL_STATE(82)] = 2073,
  [SMALL_STATE(83)] = 2139,
  [SMALL_STATE(84)] = 2205,
  [SMALL_STATE(85)] = 2272,
  [SMALL_STATE(86)] = 2336,
  [SMALL_STATE(87)] = 2397,
  [SMALL_STATE(88)] = 2457,
  [SMALL_STATE(89)] = 2512,
  [SMALL_STATE(90)] = 2567,
  [SMALL_STATE(91)] = 2622,
  [SMALL_STATE(92)] = 2677,
  [SMALL_STATE(93)] = 2732,
  [SMALL_STATE(94)] = 2787,
  [SMALL_STATE(95)] = 2838,
  [SMALL_STATE(96)] = 2889,
  [SMALL_STATE(97)] = 2940,
  [SMALL_STATE(98)] = 2982,
  [SMALL_STATE(99)] = 3024,
  [SMALL_STATE(100)] = 3066,
  [SMALL_STATE(101)] = 3108,
  [SMALL_STATE(102)] = 3150,
  [SMALL_STATE(103)] = 3192,
  [SMALL_STATE(104)] = 3234,
  [SMALL_STATE(105)] = 3276,
  [SMALL_STATE(106)] = 3318,
  [SMALL_STATE(107)] = 3355,
  [SMALL_STATE(108)] = 3384,
  [SMALL_STATE(109)] = 3421,
  [SMALL_STATE(110)] = 3458,
  [SMALL_STATE(111)] = 3474,
  [SMALL_STATE(112)] = 3492,
  [SMALL_STATE(113)] = 3514,
  [SMALL_STATE(114)] = 3524,
  [SMALL_STATE(115)] = 3546,
  [SMALL_STATE(116)] = 3556,
  [SMALL_STATE(117)] = 3566,
  [SMALL_STATE(118)] = 3576,
  [SMALL_STATE(119)] = 3591,
  [SMALL_STATE(120)] = 3605,
  [SMALL_STATE(121)] = 3619,
  [SMALL_STATE(122)] = 3633,
  [SMALL_STATE(123)] = 3645,
  [SMALL_STATE(124)] = 3657,
  [SMALL_STATE(125)] = 3668,
  [SMALL_STATE(126)] = 3679,
  [SMALL_STATE(127)] = 3690,
  [SMALL_STATE(128)] = 3700,
  [SMALL_STATE(129)] = 3710,
  [SMALL_STATE(130)] = 3716,
  [SMALL_STATE(131)] = 3726,
  [SMALL_STATE(132)] = 3736,
  [SMALL_STATE(133)] = 3742,
  [SMALL_STATE(134)] = 3748,
  [SMALL_STATE(135)] = 3758,
  [SMALL_STATE(136)] = 3766,
  [SMALL_STATE(137)] = 3772,
  [SMALL_STATE(138)] = 3780,
  [SMALL_STATE(139)] = 3788,
  [SMALL_STATE(140)] = 3795,
  [SMALL_STATE(141)] = 3802,
  [SMALL_STATE(142)] = 3809,
  [SMALL_STATE(143)] = 3816,
  [SMALL_STATE(144)] = 3823,
  [SMALL_STATE(145)] = 3830,
  [SMALL_STATE(146)] = 3837,
  [SMALL_STATE(147)] = 3844,
  [SMALL_STATE(148)] = 3851,
  [SMALL_STATE(149)] = 3856,
  [SMALL_STATE(150)] = 3861,
  [SMALL_STATE(151)] = 3868,
  [SMALL_STATE(152)] = 3873,
  [SMALL_STATE(153)] = 3880,
  [SMALL_STATE(154)] = 3887,
  [SMALL_STATE(155)] = 3894,
  [SMALL_STATE(156)] = 3901,
  [SMALL_STATE(157)] = 3908,
  [SMALL_STATE(158)] = 3915,
  [SMALL_STATE(159)] = 3922,
  [SMALL_STATE(160)] = 3926,
  [SMALL_STATE(161)] = 3930,
  [SMALL_STATE(162)] = 3934,
  [SMALL_STATE(163)] = 3938,
  [SMALL_STATE(164)] = 3942,
  [SMALL_STATE(165)] = 3946,
  [SMALL_STATE(166)] = 3950,
  [SMALL_STATE(167)] = 3954,
  [SMALL_STATE(168)] = 3958,
  [SMALL_STATE(169)] = 3962,
  [SMALL_STATE(170)] = 3966,
  [SMALL_STATE(171)] = 3970,
  [SMALL_STATE(172)] = 3974,
  [SMALL_STATE(173)] = 3978,
  [SMALL_STATE(174)] = 3982,
  [SMALL_STATE(175)] = 3986,
  [SMALL_STATE(176)] = 3990,
  [SMALL_STATE(177)] = 3994,
  [SMALL_STATE(178)] = 3998,
  [SMALL_STATE(179)] = 4002,
  [SMALL_STATE(180)] = 4006,
  [SMALL_STATE(181)] = 4010,
  [SMALL_STATE(182)] = 4014,
  [SMALL_STATE(183)] = 4018,
  [SMALL_STATE(184)] = 4022,
  [SMALL_STATE(185)] = 4026,
  [SMALL_STATE(186)] = 4030,
  [SMALL_STATE(187)] = 4034,
  [SMALL_STATE(188)] = 4038,
  [SMALL_STATE(189)] = 4042,
  [SMALL_STATE(190)] = 4046,
  [SMALL_STATE(191)] = 4050,
  [SMALL_STATE(192)] = 4054,
  [SMALL_STATE(193)] = 4058,
  [SMALL_STATE(194)] = 4062,
  [SMALL_STATE(195)] = 4066,
  [SMALL_STATE(196)] = 4070,
  [SMALL_STATE(197)] = 4074,
  [SMALL_STATE(198)] = 4078,
  [SMALL_STATE(199)] = 4082,
  [SMALL_STATE(200)] = 4086,
  [SMALL_STATE(201)] = 4090,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(170),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type, 1),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 1), SHIFT(173),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__types, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(13),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpdoc_array_types, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpdoc_array_types, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_optional_description, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_optional_description, 1),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(28),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(95),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(111),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(44),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 5),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 4),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(94),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__currently_incomplete_tags, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__currently_incomplete_tags, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal_tag, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__internal_tag, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 6),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 6),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_required_description, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_required_description, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_optional_description, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_optional_description, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_tag, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__global_tag, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primitive_type, 1), REDUCE(sym_static, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(123),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(96),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(85),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_inline_tag, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 2), SHIFT(173),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2), SHIFT(156),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 1), SHIFT(156),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2), SHIFT_REPEAT(173),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [513] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 4, .production_id = 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_inline_tag, 3, .production_id = 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 3, .production_id = 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 4),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
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
