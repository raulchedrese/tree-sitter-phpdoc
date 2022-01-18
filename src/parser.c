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
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 36
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
      if (eof) ADVANCE(454);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(453)
      if (lookahead == '\r') SKIP(453)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(545);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(523);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(571);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '?') ADVANCE(543);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(555);
      if (lookahead == '\\') ADVANCE(542);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead == '}') ADVANCE(458);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(545);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(523);
      if (lookahead == '/') ADVANCE(574);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(571);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '?') ADVANCE(543);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(555);
      if (lookahead == '\\') ADVANCE(542);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead == '}') ADVANCE(458);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(545);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(523);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(571);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '?') ADVANCE(543);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(555);
      if (lookahead == '\\') ADVANCE(542);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead == '}') ADVANCE(458);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '$') ADVANCE(545);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') SKIP(3)
      if (lookahead == ',') ADVANCE(523);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(571);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '?') ADVANCE(543);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(542);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(533);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(574);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(574);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(555);
      if (lookahead == '\\') ADVANCE(542);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(555);
      if (lookahead == '\\') ADVANCE(542);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(574);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '{') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '{') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(574);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(574);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(555);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(555);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(574);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == ' ') SKIP(16)
      if (lookahead == '*') SKIP(16)
      if (lookahead == '\\') ADVANCE(542);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') SKIP(17)
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '}') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '\\') ADVANCE(557);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(18)
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == ' ') SKIP(18)
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '*') SKIP(18)
      if (lookahead == '}') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(557);
      END_STATE();
    case 19:
      if (lookahead == '\t') ADVANCE(572);
      if (lookahead == '\n') ADVANCE(572);
      if (lookahead == '\r') ADVANCE(572);
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '*') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(573);
      END_STATE();
    case 20:
      if (lookahead == '\t') SKIP(21)
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == '\t') SKIP(21)
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == '\t') SKIP(22)
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') SKIP(22)
      if (lookahead == '*') ADVANCE(546);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 23:
      if (lookahead == '\t') SKIP(22)
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') SKIP(22)
      if (lookahead == '*') ADVANCE(547);
      if (lookahead == '<') ADVANCE(549);
      if (lookahead != 0) ADVANCE(548);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(389);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(412);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(455);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '@') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(551);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '@') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == '@') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(410);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(390);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(277);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(243);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(285);
      END_STATE();
    case 42:
      if (lookahead == 'G') ADVANCE(244);
      if (lookahead == 'S') ADVANCE(408);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(245);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(200);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(251);
      if (lookahead == 'T') ADVANCE(176);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(274);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(287);
      END_STATE();
    case 48:
      if (lookahead == 'P') ADVANCE(338);
      END_STATE();
    case 49:
      if (lookahead == 'P') ADVANCE(339);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(169);
      END_STATE();
    case 51:
      if (lookahead == 'P') ADVANCE(351);
      END_STATE();
    case 52:
      if (lookahead == 'S') ADVANCE(178);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(428);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(185);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(522);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'g') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(384);
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'g') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(384);
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(413);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 95:
      if (lookahead == 'b') ADVANCE(311);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(438);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(487);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(499);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(449);
      if (lookahead == 'v') ADVANCE(179);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(359);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 187:
      if (lookahead == 'f') ADVANCE(288);
      END_STATE();
    case 188:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 189:
      if (lookahead == 'f') ADVANCE(296);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(504);
      END_STATE();
    case 191:
      if (lookahead == 'g') ADVANCE(204);
      END_STATE();
    case 192:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 201:
      if (lookahead == 'h') ADVANCE(519);
      END_STATE();
    case 202:
      if (lookahead == 'h') ADVANCE(283);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 204:
      if (lookahead == 'h') ADVANCE(396);
      END_STATE();
    case 205:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 206:
      if (lookahead == 'h') ADVANCE(158);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 207:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(459);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 226:
      if (lookahead == 'k') ADVANCE(476);
      END_STATE();
    case 227:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 228:
      if (lookahead == 'k') ADVANCE(153);
      END_STATE();
    case 229:
      if (lookahead == 'k') ADVANCE(434);
      END_STATE();
    case 230:
      if (lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(479);
      END_STATE();
    case 247:
      if (lookahead == 'm') ADVANCE(511);
      END_STATE();
    case 248:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 308:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 309:
      if (lookahead == 'p') ADVANCE(509);
      END_STATE();
    case 310:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 311:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 312:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 313:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 314:
      if (lookahead == 'p') ADVANCE(238);
      END_STATE();
    case 315:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 316:
      if (lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 317:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 318:
      if (lookahead == 'q') ADVANCE(431);
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 'w') ADVANCE(334);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 355:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 356:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 358:
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 359:
      if (lookahead == 's') ADVANCE(506);
      END_STATE();
    case 360:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 361:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 362:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 363:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 364:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 367:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 368:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(503);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(507);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 403:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 404:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 430:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 431:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 432:
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 433:
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 434:
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 435:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 436:
      if (lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 437:
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 438:
      if (lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 439:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 440:
      if (lookahead == 'v') ADVANCE(213);
      END_STATE();
    case 441:
      if (lookahead == 'v') ADVANCE(137);
      END_STATE();
    case 442:
      if (lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 443:
      if (lookahead == 'w') ADVANCE(358);
      END_STATE();
    case 444:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 445:
      if (lookahead == 'x') ADVANCE(520);
      END_STATE();
    case 446:
      if (lookahead == 'x') ADVANCE(316);
      END_STATE();
    case 447:
      if (lookahead == 'y') ADVANCE(462);
      END_STATE();
    case 448:
      if (lookahead == 'y') ADVANCE(480);
      END_STATE();
    case 449:
      if (lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 450:
      if (lookahead == '*' ||
          lookahead == 'x') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      END_STATE();
    case 451:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 452:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(550);
      END_STATE();
    case 453:
      if (eof) ADVANCE(454);
      if (lookahead == '\t') SKIP(453)
      if (lookahead == '\n') SKIP(453)
      if (lookahead == '\r') SKIP(453)
      if (lookahead == ' ') SKIP(453)
      if (lookahead == '$') ADVANCE(545);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(523);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(571);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '?') ADVANCE(543);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(555);
      if (lookahead == '\\') ADVANCE(542);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '|') ADVANCE(544);
      if (lookahead == '}') ADVANCE(458);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_ATinheritDoc);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(341);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_ATafter);
      if (lookahead == 'C') ADVANCE(237);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_ATafterClass);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_ATbackupGlobals);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_ATbackupStaticAttributes);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_ATbefore);
      if (lookahead == 'C') ADVANCE(242);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_ATbeforeClass);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == 'E') ADVANCE(262);
      if (lookahead == 'S') ADVANCE(420);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore_STAR);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreEnd);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreStart);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_ATcovers);
      if (lookahead == 'D') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(292);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClass);
      if (lookahead == ' ') ADVANCE(411);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClasstoshortenannotations);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_ATcoversNothing);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_ATdataProvider);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_ATdepends);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_ATdependsannotationtoexpressdependencies);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_ATdoesNotPerformAssertions);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_ATgroup);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_ATlarge);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_ATmedium);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_ATpreserveGlobalState);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_ATrequires);
      if (lookahead == ' ') ADVANCE(437);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_ATrequiresusages);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_ATrunInSeparateProcess);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_ATrunTestsInSeparateProcesses);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_ATsmall);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_ATtest);
      if (lookahead == 'W') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_ATtestWith);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_ATtestdox);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_ATticket);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '*') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '*') ADVANCE(547);
      if (lookahead == '<') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead == '<') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '@') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == 'x') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(563);
      if (lookahead == 'x') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(556);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(554);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(451);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead == '.') ADVANCE(450);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead == '\t') ADVANCE(572);
      if (lookahead == '\n') ADVANCE(572);
      if (lookahead == '\r') ADVANCE(572);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '*') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(573);
      END_STATE();
    case 574:
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
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
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
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 16},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 17},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 22},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
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
    [sym_document] = STATE(148),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(4),
    [sym_inline_tag] = STATE(31),
    [sym__simple_tag_without_description] = STATE(61),
    [sym__simple_tag_with_optional_description] = STATE(61),
    [sym__simple_tag_with_required_description] = STATE(61),
    [sym__currently_incomplete_tags] = STATE(23),
    [sym__author_tag] = STATE(61),
    [sym__global_tag] = STATE(61),
    [sym__internal_tag] = STATE(61),
    [sym__link_tag] = STATE(61),
    [sym__method_tag] = STATE(61),
    [sym__param_tag] = STATE(61),
    [sym__property_tag] = STATE(61),
    [sym__return_tag] = STATE(61),
    [sym__see_tag] = STATE(61),
    [sym__throws_tag] = STATE(61),
    [sym__var_tag] = STATE(61),
    [sym__version_tag] = STATE(61),
    [sym__phpunit_tag] = STATE(61),
    [sym_description] = STATE(6),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_description_repeat1] = STATE(31),
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
    [sym_tag] = STATE(5),
    [sym__simple_tag_without_description] = STATE(61),
    [sym__simple_tag_with_optional_description] = STATE(61),
    [sym__simple_tag_with_required_description] = STATE(61),
    [sym__currently_incomplete_tags] = STATE(23),
    [sym__author_tag] = STATE(61),
    [sym__global_tag] = STATE(61),
    [sym__internal_tag] = STATE(61),
    [sym__link_tag] = STATE(61),
    [sym__method_tag] = STATE(61),
    [sym__param_tag] = STATE(61),
    [sym__property_tag] = STATE(61),
    [sym__return_tag] = STATE(61),
    [sym__see_tag] = STATE(61),
    [sym__throws_tag] = STATE(61),
    [sym__var_tag] = STATE(61),
    [sym__version_tag] = STATE(61),
    [sym__phpunit_tag] = STATE(61),
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
  [4] = {
    [sym_tag] = STATE(5),
    [sym__simple_tag_without_description] = STATE(61),
    [sym__simple_tag_with_optional_description] = STATE(61),
    [sym__simple_tag_with_required_description] = STATE(61),
    [sym__currently_incomplete_tags] = STATE(23),
    [sym__author_tag] = STATE(61),
    [sym__global_tag] = STATE(61),
    [sym__internal_tag] = STATE(61),
    [sym__link_tag] = STATE(61),
    [sym__method_tag] = STATE(61),
    [sym__param_tag] = STATE(61),
    [sym__property_tag] = STATE(61),
    [sym__return_tag] = STATE(61),
    [sym__see_tag] = STATE(61),
    [sym__throws_tag] = STATE(61),
    [sym__var_tag] = STATE(61),
    [sym__version_tag] = STATE(61),
    [sym__phpunit_tag] = STATE(61),
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
    [sym__end] = ACTIONS(51),
  },
  [5] = {
    [sym_tag] = STATE(5),
    [sym__simple_tag_without_description] = STATE(61),
    [sym__simple_tag_with_optional_description] = STATE(61),
    [sym__simple_tag_with_required_description] = STATE(61),
    [sym__currently_incomplete_tags] = STATE(23),
    [sym__author_tag] = STATE(61),
    [sym__global_tag] = STATE(61),
    [sym__internal_tag] = STATE(61),
    [sym__link_tag] = STATE(61),
    [sym__method_tag] = STATE(61),
    [sym__param_tag] = STATE(61),
    [sym__property_tag] = STATE(61),
    [sym__return_tag] = STATE(61),
    [sym__see_tag] = STATE(61),
    [sym__throws_tag] = STATE(61),
    [sym__var_tag] = STATE(61),
    [sym__version_tag] = STATE(61),
    [sym__phpunit_tag] = STATE(61),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATapi] = ACTIONS(53),
    [anon_sym_ATfilesource] = ACTIONS(53),
    [anon_sym_ATignore] = ACTIONS(56),
    [anon_sym_ATcategory] = ACTIONS(59),
    [anon_sym_ATcopyright] = ACTIONS(59),
    [anon_sym_ATtodo] = ACTIONS(59),
    [anon_sym_ATexample] = ACTIONS(62),
    [anon_sym_ATlicense] = ACTIONS(62),
    [anon_sym_ATpackage] = ACTIONS(62),
    [anon_sym_ATsource] = ACTIONS(62),
    [anon_sym_ATsubpackage] = ACTIONS(62),
    [anon_sym_ATuses] = ACTIONS(62),
    [anon_sym_ATauthor] = ACTIONS(65),
    [anon_sym_ATglobal] = ACTIONS(68),
    [anon_sym_ATinternal] = ACTIONS(71),
    [anon_sym_ATlink] = ACTIONS(74),
    [anon_sym_ATmethod] = ACTIONS(77),
    [anon_sym_ATparam] = ACTIONS(80),
    [anon_sym_ATproperty] = ACTIONS(83),
    [anon_sym_ATproperty_DASHread] = ACTIONS(86),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(86),
    [anon_sym_ATreturn] = ACTIONS(89),
    [anon_sym_ATsee] = ACTIONS(92),
    [anon_sym_ATthrows] = ACTIONS(95),
    [anon_sym_ATvar] = ACTIONS(98),
    [anon_sym_ATdeprecated] = ACTIONS(101),
    [anon_sym_ATsince] = ACTIONS(101),
    [anon_sym_ATversion] = ACTIONS(101),
    [anon_sym_ATafter] = ACTIONS(104),
    [anon_sym_ATafterClass] = ACTIONS(107),
    [anon_sym_ATannotation] = ACTIONS(107),
    [anon_sym_ATbackupGlobals] = ACTIONS(107),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(107),
    [anon_sym_ATbefore] = ACTIONS(104),
    [anon_sym_ATbeforeClass] = ACTIONS(107),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(104),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(107),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(107),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(107),
    [anon_sym_ATcovers] = ACTIONS(104),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(104),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(107),
    [anon_sym_ATcoversNothing] = ACTIONS(107),
    [anon_sym_ATdataProvider] = ACTIONS(107),
    [anon_sym_ATdepends] = ACTIONS(104),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(107),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(107),
    [anon_sym_ATgroup] = ACTIONS(107),
    [anon_sym_ATlarge] = ACTIONS(107),
    [anon_sym_ATmedium] = ACTIONS(107),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(107),
    [anon_sym_ATrequires] = ACTIONS(104),
    [anon_sym_ATrequiresusages] = ACTIONS(107),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(107),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(107),
    [anon_sym_ATsmall] = ACTIONS(107),
    [anon_sym_ATtest] = ACTIONS(104),
    [anon_sym_ATtestWith] = ACTIONS(107),
    [anon_sym_ATtestdox] = ACTIONS(107),
    [anon_sym_ATticket] = ACTIONS(107),
    [sym__end] = ACTIONS(110),
  },
  [6] = {
    [sym_tag] = STATE(3),
    [sym__simple_tag_without_description] = STATE(61),
    [sym__simple_tag_with_optional_description] = STATE(61),
    [sym__simple_tag_with_required_description] = STATE(61),
    [sym__currently_incomplete_tags] = STATE(23),
    [sym__author_tag] = STATE(61),
    [sym__global_tag] = STATE(61),
    [sym__internal_tag] = STATE(61),
    [sym__link_tag] = STATE(61),
    [sym__method_tag] = STATE(61),
    [sym__param_tag] = STATE(61),
    [sym__property_tag] = STATE(61),
    [sym__return_tag] = STATE(61),
    [sym__see_tag] = STATE(61),
    [sym__throws_tag] = STATE(61),
    [sym__var_tag] = STATE(61),
    [sym__version_tag] = STATE(61),
    [sym__phpunit_tag] = STATE(61),
    [aux_sym_document_repeat1] = STATE(3),
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
    [sym__end] = ACTIONS(51),
  },
  [7] = {
    [aux_sym_namespace_name_repeat1] = STATE(133),
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
  [8] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(66),
    [aux_sym_description_repeat1] = STATE(31),
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
    [sym_text] = ACTIONS(45),
    [sym_version] = ACTIONS(123),
    [sym__end] = ACTIONS(119),
  },
  [9] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(64),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
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
    [anon_sym_ATglobal] = ACTIONS(125),
    [anon_sym_ATinternal] = ACTIONS(125),
    [anon_sym_ATlink] = ACTIONS(125),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(127),
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
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(125),
  },
  [10] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_ATapi] = ACTIONS(131),
    [anon_sym_ATfilesource] = ACTIONS(131),
    [anon_sym_ATignore] = ACTIONS(131),
    [anon_sym_ATcategory] = ACTIONS(131),
    [anon_sym_ATcopyright] = ACTIONS(131),
    [anon_sym_ATtodo] = ACTIONS(131),
    [anon_sym_ATexample] = ACTIONS(131),
    [anon_sym_ATlicense] = ACTIONS(131),
    [anon_sym_ATpackage] = ACTIONS(131),
    [anon_sym_ATsource] = ACTIONS(131),
    [anon_sym_ATsubpackage] = ACTIONS(131),
    [anon_sym_ATuses] = ACTIONS(131),
    [anon_sym_ATauthor] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_ATglobal] = ACTIONS(131),
    [anon_sym_ATinternal] = ACTIONS(131),
    [anon_sym_ATlink] = ACTIONS(131),
    [anon_sym_ATmethod] = ACTIONS(131),
    [anon_sym_ATparam] = ACTIONS(131),
    [anon_sym_ATproperty] = ACTIONS(135),
    [anon_sym_ATproperty_DASHread] = ACTIONS(131),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(131),
    [anon_sym_ATreturn] = ACTIONS(131),
    [anon_sym_ATsee] = ACTIONS(131),
    [anon_sym_ATthrows] = ACTIONS(131),
    [anon_sym_ATvar] = ACTIONS(131),
    [anon_sym_ATdeprecated] = ACTIONS(131),
    [anon_sym_ATsince] = ACTIONS(131),
    [anon_sym_ATversion] = ACTIONS(131),
    [anon_sym_ATafter] = ACTIONS(135),
    [anon_sym_ATafterClass] = ACTIONS(131),
    [anon_sym_ATannotation] = ACTIONS(131),
    [anon_sym_ATbackupGlobals] = ACTIONS(131),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(131),
    [anon_sym_ATbefore] = ACTIONS(135),
    [anon_sym_ATbeforeClass] = ACTIONS(131),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(135),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(131),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(131),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(131),
    [anon_sym_ATcovers] = ACTIONS(135),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(135),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(131),
    [anon_sym_ATcoversNothing] = ACTIONS(131),
    [anon_sym_ATdataProvider] = ACTIONS(131),
    [anon_sym_ATdepends] = ACTIONS(135),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(131),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(131),
    [anon_sym_ATgroup] = ACTIONS(131),
    [anon_sym_ATlarge] = ACTIONS(131),
    [anon_sym_ATmedium] = ACTIONS(131),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(131),
    [anon_sym_ATrequires] = ACTIONS(135),
    [anon_sym_ATrequiresusages] = ACTIONS(131),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(131),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(131),
    [anon_sym_ATsmall] = ACTIONS(131),
    [anon_sym_ATtest] = ACTIONS(135),
    [anon_sym_ATtestWith] = ACTIONS(131),
    [anon_sym_ATtestdox] = ACTIONS(131),
    [anon_sym_ATticket] = ACTIONS(131),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(131),
    [sym_text] = ACTIONS(135),
    [sym__end] = ACTIONS(131),
  },
  [11] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(62),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(139),
    [anon_sym_ATfilesource] = ACTIONS(139),
    [anon_sym_ATignore] = ACTIONS(139),
    [anon_sym_ATcategory] = ACTIONS(139),
    [anon_sym_ATcopyright] = ACTIONS(139),
    [anon_sym_ATtodo] = ACTIONS(139),
    [anon_sym_ATexample] = ACTIONS(139),
    [anon_sym_ATlicense] = ACTIONS(139),
    [anon_sym_ATpackage] = ACTIONS(139),
    [anon_sym_ATsource] = ACTIONS(139),
    [anon_sym_ATsubpackage] = ACTIONS(139),
    [anon_sym_ATuses] = ACTIONS(139),
    [anon_sym_ATauthor] = ACTIONS(139),
    [anon_sym_ATglobal] = ACTIONS(139),
    [anon_sym_ATinternal] = ACTIONS(139),
    [anon_sym_ATlink] = ACTIONS(139),
    [anon_sym_ATmethod] = ACTIONS(139),
    [anon_sym_ATparam] = ACTIONS(139),
    [anon_sym_ATproperty] = ACTIONS(141),
    [anon_sym_ATproperty_DASHread] = ACTIONS(139),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(139),
    [anon_sym_ATreturn] = ACTIONS(139),
    [anon_sym_ATsee] = ACTIONS(139),
    [anon_sym_ATthrows] = ACTIONS(139),
    [anon_sym_ATvar] = ACTIONS(139),
    [anon_sym_ATdeprecated] = ACTIONS(139),
    [anon_sym_ATsince] = ACTIONS(139),
    [anon_sym_ATversion] = ACTIONS(139),
    [anon_sym_ATafter] = ACTIONS(141),
    [anon_sym_ATafterClass] = ACTIONS(139),
    [anon_sym_ATannotation] = ACTIONS(139),
    [anon_sym_ATbackupGlobals] = ACTIONS(139),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(139),
    [anon_sym_ATbefore] = ACTIONS(141),
    [anon_sym_ATbeforeClass] = ACTIONS(139),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(141),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(139),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(139),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(139),
    [anon_sym_ATcovers] = ACTIONS(141),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(141),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(139),
    [anon_sym_ATcoversNothing] = ACTIONS(139),
    [anon_sym_ATdataProvider] = ACTIONS(139),
    [anon_sym_ATdepends] = ACTIONS(141),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(139),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(139),
    [anon_sym_ATgroup] = ACTIONS(139),
    [anon_sym_ATlarge] = ACTIONS(139),
    [anon_sym_ATmedium] = ACTIONS(139),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(139),
    [anon_sym_ATrequires] = ACTIONS(141),
    [anon_sym_ATrequiresusages] = ACTIONS(139),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(139),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(139),
    [anon_sym_ATsmall] = ACTIONS(139),
    [anon_sym_ATtest] = ACTIONS(141),
    [anon_sym_ATtestWith] = ACTIONS(139),
    [anon_sym_ATtestdox] = ACTIONS(139),
    [anon_sym_ATticket] = ACTIONS(139),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(139),
  },
  [12] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(49),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
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
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(143),
  },
  [13] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(52),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(147),
    [anon_sym_ATfilesource] = ACTIONS(147),
    [anon_sym_ATignore] = ACTIONS(147),
    [anon_sym_ATcategory] = ACTIONS(147),
    [anon_sym_ATcopyright] = ACTIONS(147),
    [anon_sym_ATtodo] = ACTIONS(147),
    [anon_sym_ATexample] = ACTIONS(147),
    [anon_sym_ATlicense] = ACTIONS(147),
    [anon_sym_ATpackage] = ACTIONS(147),
    [anon_sym_ATsource] = ACTIONS(147),
    [anon_sym_ATsubpackage] = ACTIONS(147),
    [anon_sym_ATuses] = ACTIONS(147),
    [anon_sym_ATauthor] = ACTIONS(147),
    [anon_sym_ATglobal] = ACTIONS(147),
    [anon_sym_ATinternal] = ACTIONS(147),
    [anon_sym_ATlink] = ACTIONS(147),
    [anon_sym_ATmethod] = ACTIONS(147),
    [anon_sym_ATparam] = ACTIONS(147),
    [anon_sym_ATproperty] = ACTIONS(149),
    [anon_sym_ATproperty_DASHread] = ACTIONS(147),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(147),
    [anon_sym_ATreturn] = ACTIONS(147),
    [anon_sym_ATsee] = ACTIONS(147),
    [anon_sym_ATthrows] = ACTIONS(147),
    [anon_sym_ATvar] = ACTIONS(147),
    [anon_sym_ATdeprecated] = ACTIONS(147),
    [anon_sym_ATsince] = ACTIONS(147),
    [anon_sym_ATversion] = ACTIONS(147),
    [anon_sym_ATafter] = ACTIONS(149),
    [anon_sym_ATafterClass] = ACTIONS(147),
    [anon_sym_ATannotation] = ACTIONS(147),
    [anon_sym_ATbackupGlobals] = ACTIONS(147),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(147),
    [anon_sym_ATbefore] = ACTIONS(149),
    [anon_sym_ATbeforeClass] = ACTIONS(147),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(149),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(147),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(147),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(147),
    [anon_sym_ATcovers] = ACTIONS(149),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(149),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(147),
    [anon_sym_ATcoversNothing] = ACTIONS(147),
    [anon_sym_ATdataProvider] = ACTIONS(147),
    [anon_sym_ATdepends] = ACTIONS(149),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(147),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(147),
    [anon_sym_ATgroup] = ACTIONS(147),
    [anon_sym_ATlarge] = ACTIONS(147),
    [anon_sym_ATmedium] = ACTIONS(147),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(147),
    [anon_sym_ATrequires] = ACTIONS(149),
    [anon_sym_ATrequiresusages] = ACTIONS(147),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(147),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(147),
    [anon_sym_ATsmall] = ACTIONS(147),
    [anon_sym_ATtest] = ACTIONS(149),
    [anon_sym_ATtestWith] = ACTIONS(147),
    [anon_sym_ATtestdox] = ACTIONS(147),
    [anon_sym_ATticket] = ACTIONS(147),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(147),
  },
  [14] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_ATapi] = ACTIONS(151),
    [anon_sym_ATfilesource] = ACTIONS(151),
    [anon_sym_ATignore] = ACTIONS(151),
    [anon_sym_ATcategory] = ACTIONS(151),
    [anon_sym_ATcopyright] = ACTIONS(151),
    [anon_sym_ATtodo] = ACTIONS(151),
    [anon_sym_ATexample] = ACTIONS(151),
    [anon_sym_ATlicense] = ACTIONS(151),
    [anon_sym_ATpackage] = ACTIONS(151),
    [anon_sym_ATsource] = ACTIONS(151),
    [anon_sym_ATsubpackage] = ACTIONS(151),
    [anon_sym_ATuses] = ACTIONS(151),
    [anon_sym_ATauthor] = ACTIONS(151),
    [anon_sym_ATglobal] = ACTIONS(151),
    [anon_sym_ATinternal] = ACTIONS(151),
    [anon_sym_ATlink] = ACTIONS(151),
    [anon_sym_ATmethod] = ACTIONS(151),
    [anon_sym_ATparam] = ACTIONS(151),
    [anon_sym_ATproperty] = ACTIONS(153),
    [anon_sym_ATproperty_DASHread] = ACTIONS(151),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(151),
    [anon_sym_ATreturn] = ACTIONS(151),
    [anon_sym_ATsee] = ACTIONS(151),
    [anon_sym_ATthrows] = ACTIONS(151),
    [anon_sym_ATvar] = ACTIONS(151),
    [anon_sym_ATdeprecated] = ACTIONS(151),
    [anon_sym_ATsince] = ACTIONS(151),
    [anon_sym_ATversion] = ACTIONS(151),
    [anon_sym_ATafter] = ACTIONS(153),
    [anon_sym_ATafterClass] = ACTIONS(151),
    [anon_sym_ATannotation] = ACTIONS(151),
    [anon_sym_ATbackupGlobals] = ACTIONS(151),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(151),
    [anon_sym_ATbefore] = ACTIONS(153),
    [anon_sym_ATbeforeClass] = ACTIONS(151),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(153),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(151),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(151),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(151),
    [anon_sym_ATcovers] = ACTIONS(153),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(153),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(151),
    [anon_sym_ATcoversNothing] = ACTIONS(151),
    [anon_sym_ATdataProvider] = ACTIONS(151),
    [anon_sym_ATdepends] = ACTIONS(153),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(151),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(151),
    [anon_sym_ATgroup] = ACTIONS(151),
    [anon_sym_ATlarge] = ACTIONS(151),
    [anon_sym_ATmedium] = ACTIONS(151),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(151),
    [anon_sym_ATrequires] = ACTIONS(153),
    [anon_sym_ATrequiresusages] = ACTIONS(151),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(151),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(151),
    [anon_sym_ATsmall] = ACTIONS(151),
    [anon_sym_ATtest] = ACTIONS(153),
    [anon_sym_ATtestWith] = ACTIONS(151),
    [anon_sym_ATtestdox] = ACTIONS(151),
    [anon_sym_ATticket] = ACTIONS(151),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(151),
    [sym_text] = ACTIONS(153),
    [sym__end] = ACTIONS(151),
  },
  [15] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(54),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(157),
    [anon_sym_ATfilesource] = ACTIONS(157),
    [anon_sym_ATignore] = ACTIONS(157),
    [anon_sym_ATcategory] = ACTIONS(157),
    [anon_sym_ATcopyright] = ACTIONS(157),
    [anon_sym_ATtodo] = ACTIONS(157),
    [anon_sym_ATexample] = ACTIONS(157),
    [anon_sym_ATlicense] = ACTIONS(157),
    [anon_sym_ATpackage] = ACTIONS(157),
    [anon_sym_ATsource] = ACTIONS(157),
    [anon_sym_ATsubpackage] = ACTIONS(157),
    [anon_sym_ATuses] = ACTIONS(157),
    [anon_sym_ATauthor] = ACTIONS(157),
    [anon_sym_ATglobal] = ACTIONS(157),
    [anon_sym_ATinternal] = ACTIONS(157),
    [anon_sym_ATlink] = ACTIONS(157),
    [anon_sym_ATmethod] = ACTIONS(157),
    [anon_sym_ATparam] = ACTIONS(157),
    [anon_sym_ATproperty] = ACTIONS(159),
    [anon_sym_ATproperty_DASHread] = ACTIONS(157),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(157),
    [anon_sym_ATreturn] = ACTIONS(157),
    [anon_sym_ATsee] = ACTIONS(157),
    [anon_sym_ATthrows] = ACTIONS(157),
    [anon_sym_ATvar] = ACTIONS(157),
    [anon_sym_ATdeprecated] = ACTIONS(157),
    [anon_sym_ATsince] = ACTIONS(157),
    [anon_sym_ATversion] = ACTIONS(157),
    [anon_sym_ATafter] = ACTIONS(159),
    [anon_sym_ATafterClass] = ACTIONS(157),
    [anon_sym_ATannotation] = ACTIONS(157),
    [anon_sym_ATbackupGlobals] = ACTIONS(157),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(157),
    [anon_sym_ATbefore] = ACTIONS(159),
    [anon_sym_ATbeforeClass] = ACTIONS(157),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(159),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(157),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(157),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(157),
    [anon_sym_ATcovers] = ACTIONS(159),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(159),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(157),
    [anon_sym_ATcoversNothing] = ACTIONS(157),
    [anon_sym_ATdataProvider] = ACTIONS(157),
    [anon_sym_ATdepends] = ACTIONS(159),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(157),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(157),
    [anon_sym_ATgroup] = ACTIONS(157),
    [anon_sym_ATlarge] = ACTIONS(157),
    [anon_sym_ATmedium] = ACTIONS(157),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(157),
    [anon_sym_ATrequires] = ACTIONS(159),
    [anon_sym_ATrequiresusages] = ACTIONS(157),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(157),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(157),
    [anon_sym_ATsmall] = ACTIONS(157),
    [anon_sym_ATtest] = ACTIONS(159),
    [anon_sym_ATtestWith] = ACTIONS(157),
    [anon_sym_ATtestdox] = ACTIONS(157),
    [anon_sym_ATticket] = ACTIONS(157),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(157),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_ATapi] = ACTIONS(161),
    [anon_sym_ATfilesource] = ACTIONS(161),
    [anon_sym_ATignore] = ACTIONS(161),
    [anon_sym_ATcategory] = ACTIONS(161),
    [anon_sym_ATcopyright] = ACTIONS(161),
    [anon_sym_ATtodo] = ACTIONS(161),
    [anon_sym_ATexample] = ACTIONS(161),
    [anon_sym_ATlicense] = ACTIONS(161),
    [anon_sym_ATpackage] = ACTIONS(161),
    [anon_sym_ATsource] = ACTIONS(161),
    [anon_sym_ATsubpackage] = ACTIONS(161),
    [anon_sym_ATuses] = ACTIONS(161),
    [anon_sym_ATauthor] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_ATglobal] = ACTIONS(161),
    [anon_sym_ATinternal] = ACTIONS(161),
    [anon_sym_ATlink] = ACTIONS(161),
    [anon_sym_ATmethod] = ACTIONS(161),
    [anon_sym_ATparam] = ACTIONS(161),
    [anon_sym_ATproperty] = ACTIONS(163),
    [anon_sym_ATproperty_DASHread] = ACTIONS(161),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(161),
    [anon_sym_ATreturn] = ACTIONS(161),
    [anon_sym_ATsee] = ACTIONS(161),
    [anon_sym_ATthrows] = ACTIONS(161),
    [anon_sym_ATvar] = ACTIONS(161),
    [anon_sym_ATdeprecated] = ACTIONS(161),
    [anon_sym_ATsince] = ACTIONS(161),
    [anon_sym_ATversion] = ACTIONS(161),
    [anon_sym_ATafter] = ACTIONS(163),
    [anon_sym_ATafterClass] = ACTIONS(161),
    [anon_sym_ATannotation] = ACTIONS(161),
    [anon_sym_ATbackupGlobals] = ACTIONS(161),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(161),
    [anon_sym_ATbefore] = ACTIONS(163),
    [anon_sym_ATbeforeClass] = ACTIONS(161),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(163),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(161),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(161),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(161),
    [anon_sym_ATcovers] = ACTIONS(163),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(163),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(161),
    [anon_sym_ATcoversNothing] = ACTIONS(161),
    [anon_sym_ATdataProvider] = ACTIONS(161),
    [anon_sym_ATdepends] = ACTIONS(163),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(161),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(161),
    [anon_sym_ATgroup] = ACTIONS(161),
    [anon_sym_ATlarge] = ACTIONS(161),
    [anon_sym_ATmedium] = ACTIONS(161),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(161),
    [anon_sym_ATrequires] = ACTIONS(163),
    [anon_sym_ATrequiresusages] = ACTIONS(161),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(161),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(161),
    [anon_sym_ATsmall] = ACTIONS(161),
    [anon_sym_ATtest] = ACTIONS(163),
    [anon_sym_ATtestWith] = ACTIONS(161),
    [anon_sym_ATtestdox] = ACTIONS(161),
    [anon_sym_ATticket] = ACTIONS(161),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(161),
    [anon_sym_PIPE] = ACTIONS(161),
    [sym_text] = ACTIONS(163),
    [sym__end] = ACTIONS(161),
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
    [sym_text] = ACTIONS(114),
    [sym__end] = ACTIONS(112),
  },
  [18] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(48),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(165),
    [anon_sym_ATfilesource] = ACTIONS(165),
    [anon_sym_ATignore] = ACTIONS(165),
    [anon_sym_ATcategory] = ACTIONS(165),
    [anon_sym_ATcopyright] = ACTIONS(165),
    [anon_sym_ATtodo] = ACTIONS(165),
    [anon_sym_ATexample] = ACTIONS(165),
    [anon_sym_ATlicense] = ACTIONS(165),
    [anon_sym_ATpackage] = ACTIONS(165),
    [anon_sym_ATsource] = ACTIONS(165),
    [anon_sym_ATsubpackage] = ACTIONS(165),
    [anon_sym_ATuses] = ACTIONS(165),
    [anon_sym_ATauthor] = ACTIONS(165),
    [anon_sym_ATglobal] = ACTIONS(165),
    [anon_sym_ATinternal] = ACTIONS(165),
    [anon_sym_ATlink] = ACTIONS(165),
    [anon_sym_ATmethod] = ACTIONS(165),
    [anon_sym_ATparam] = ACTIONS(165),
    [anon_sym_ATproperty] = ACTIONS(167),
    [anon_sym_ATproperty_DASHread] = ACTIONS(165),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(165),
    [anon_sym_ATreturn] = ACTIONS(165),
    [anon_sym_ATsee] = ACTIONS(165),
    [anon_sym_ATthrows] = ACTIONS(165),
    [anon_sym_ATvar] = ACTIONS(165),
    [anon_sym_ATdeprecated] = ACTIONS(165),
    [anon_sym_ATsince] = ACTIONS(165),
    [anon_sym_ATversion] = ACTIONS(165),
    [anon_sym_ATafter] = ACTIONS(167),
    [anon_sym_ATafterClass] = ACTIONS(165),
    [anon_sym_ATannotation] = ACTIONS(165),
    [anon_sym_ATbackupGlobals] = ACTIONS(165),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(165),
    [anon_sym_ATbefore] = ACTIONS(167),
    [anon_sym_ATbeforeClass] = ACTIONS(165),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(167),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(165),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(165),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(165),
    [anon_sym_ATcovers] = ACTIONS(167),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(167),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(165),
    [anon_sym_ATcoversNothing] = ACTIONS(165),
    [anon_sym_ATdataProvider] = ACTIONS(165),
    [anon_sym_ATdepends] = ACTIONS(167),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(165),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(165),
    [anon_sym_ATgroup] = ACTIONS(165),
    [anon_sym_ATlarge] = ACTIONS(165),
    [anon_sym_ATmedium] = ACTIONS(165),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(165),
    [anon_sym_ATrequires] = ACTIONS(167),
    [anon_sym_ATrequiresusages] = ACTIONS(165),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(165),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(165),
    [anon_sym_ATsmall] = ACTIONS(165),
    [anon_sym_ATtest] = ACTIONS(167),
    [anon_sym_ATtestWith] = ACTIONS(165),
    [anon_sym_ATtestdox] = ACTIONS(165),
    [anon_sym_ATticket] = ACTIONS(165),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(165),
  },
  [19] = {
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_ATapi] = ACTIONS(169),
    [anon_sym_ATfilesource] = ACTIONS(169),
    [anon_sym_ATignore] = ACTIONS(169),
    [anon_sym_ATcategory] = ACTIONS(169),
    [anon_sym_ATcopyright] = ACTIONS(169),
    [anon_sym_ATtodo] = ACTIONS(169),
    [anon_sym_ATexample] = ACTIONS(169),
    [anon_sym_ATlicense] = ACTIONS(169),
    [anon_sym_ATpackage] = ACTIONS(169),
    [anon_sym_ATsource] = ACTIONS(169),
    [anon_sym_ATsubpackage] = ACTIONS(169),
    [anon_sym_ATuses] = ACTIONS(169),
    [anon_sym_ATauthor] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_ATglobal] = ACTIONS(169),
    [anon_sym_ATinternal] = ACTIONS(169),
    [anon_sym_ATlink] = ACTIONS(169),
    [anon_sym_ATmethod] = ACTIONS(169),
    [anon_sym_ATparam] = ACTIONS(169),
    [anon_sym_ATproperty] = ACTIONS(171),
    [anon_sym_ATproperty_DASHread] = ACTIONS(169),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(169),
    [anon_sym_ATreturn] = ACTIONS(169),
    [anon_sym_ATsee] = ACTIONS(169),
    [anon_sym_ATthrows] = ACTIONS(169),
    [anon_sym_ATvar] = ACTIONS(169),
    [anon_sym_ATdeprecated] = ACTIONS(169),
    [anon_sym_ATsince] = ACTIONS(169),
    [anon_sym_ATversion] = ACTIONS(169),
    [anon_sym_ATafter] = ACTIONS(171),
    [anon_sym_ATafterClass] = ACTIONS(169),
    [anon_sym_ATannotation] = ACTIONS(169),
    [anon_sym_ATbackupGlobals] = ACTIONS(169),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(169),
    [anon_sym_ATbefore] = ACTIONS(171),
    [anon_sym_ATbeforeClass] = ACTIONS(169),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(171),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(169),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(169),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(169),
    [anon_sym_ATcovers] = ACTIONS(171),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(171),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(169),
    [anon_sym_ATcoversNothing] = ACTIONS(169),
    [anon_sym_ATdataProvider] = ACTIONS(169),
    [anon_sym_ATdepends] = ACTIONS(171),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(169),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(169),
    [anon_sym_ATgroup] = ACTIONS(169),
    [anon_sym_ATlarge] = ACTIONS(169),
    [anon_sym_ATmedium] = ACTIONS(169),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(169),
    [anon_sym_ATrequires] = ACTIONS(171),
    [anon_sym_ATrequiresusages] = ACTIONS(169),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(169),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(169),
    [anon_sym_ATsmall] = ACTIONS(169),
    [anon_sym_ATtest] = ACTIONS(171),
    [anon_sym_ATtestWith] = ACTIONS(169),
    [anon_sym_ATtestdox] = ACTIONS(169),
    [anon_sym_ATticket] = ACTIONS(169),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(169),
    [sym_text] = ACTIONS(171),
    [sym__end] = ACTIONS(169),
  },
  [20] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(67),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(173),
    [anon_sym_ATfilesource] = ACTIONS(173),
    [anon_sym_ATignore] = ACTIONS(173),
    [anon_sym_ATcategory] = ACTIONS(173),
    [anon_sym_ATcopyright] = ACTIONS(173),
    [anon_sym_ATtodo] = ACTIONS(173),
    [anon_sym_ATexample] = ACTIONS(173),
    [anon_sym_ATlicense] = ACTIONS(173),
    [anon_sym_ATpackage] = ACTIONS(173),
    [anon_sym_ATsource] = ACTIONS(173),
    [anon_sym_ATsubpackage] = ACTIONS(173),
    [anon_sym_ATuses] = ACTIONS(173),
    [anon_sym_ATauthor] = ACTIONS(173),
    [anon_sym_ATglobal] = ACTIONS(173),
    [anon_sym_ATinternal] = ACTIONS(173),
    [anon_sym_ATlink] = ACTIONS(173),
    [anon_sym_ATmethod] = ACTIONS(173),
    [anon_sym_ATparam] = ACTIONS(173),
    [anon_sym_ATproperty] = ACTIONS(175),
    [anon_sym_ATproperty_DASHread] = ACTIONS(173),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(173),
    [anon_sym_ATreturn] = ACTIONS(173),
    [anon_sym_ATsee] = ACTIONS(173),
    [anon_sym_ATthrows] = ACTIONS(173),
    [anon_sym_ATvar] = ACTIONS(173),
    [anon_sym_ATdeprecated] = ACTIONS(173),
    [anon_sym_ATsince] = ACTIONS(173),
    [anon_sym_ATversion] = ACTIONS(173),
    [anon_sym_ATafter] = ACTIONS(175),
    [anon_sym_ATafterClass] = ACTIONS(173),
    [anon_sym_ATannotation] = ACTIONS(173),
    [anon_sym_ATbackupGlobals] = ACTIONS(173),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(173),
    [anon_sym_ATbefore] = ACTIONS(175),
    [anon_sym_ATbeforeClass] = ACTIONS(173),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(175),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(173),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(173),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(173),
    [anon_sym_ATcovers] = ACTIONS(175),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(175),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(173),
    [anon_sym_ATcoversNothing] = ACTIONS(173),
    [anon_sym_ATdataProvider] = ACTIONS(173),
    [anon_sym_ATdepends] = ACTIONS(175),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(173),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(173),
    [anon_sym_ATgroup] = ACTIONS(173),
    [anon_sym_ATlarge] = ACTIONS(173),
    [anon_sym_ATmedium] = ACTIONS(173),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(173),
    [anon_sym_ATrequires] = ACTIONS(175),
    [anon_sym_ATrequiresusages] = ACTIONS(173),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(173),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(173),
    [anon_sym_ATsmall] = ACTIONS(173),
    [anon_sym_ATtest] = ACTIONS(175),
    [anon_sym_ATtestWith] = ACTIONS(173),
    [anon_sym_ATtestdox] = ACTIONS(173),
    [anon_sym_ATticket] = ACTIONS(173),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(173),
  },
  [21] = {
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_ATapi] = ACTIONS(177),
    [anon_sym_ATfilesource] = ACTIONS(177),
    [anon_sym_ATignore] = ACTIONS(177),
    [anon_sym_ATcategory] = ACTIONS(177),
    [anon_sym_ATcopyright] = ACTIONS(177),
    [anon_sym_ATtodo] = ACTIONS(177),
    [anon_sym_ATexample] = ACTIONS(177),
    [anon_sym_ATlicense] = ACTIONS(177),
    [anon_sym_ATpackage] = ACTIONS(177),
    [anon_sym_ATsource] = ACTIONS(177),
    [anon_sym_ATsubpackage] = ACTIONS(177),
    [anon_sym_ATuses] = ACTIONS(177),
    [anon_sym_ATauthor] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_ATglobal] = ACTIONS(177),
    [anon_sym_ATinternal] = ACTIONS(177),
    [anon_sym_ATlink] = ACTIONS(177),
    [anon_sym_ATmethod] = ACTIONS(177),
    [anon_sym_ATparam] = ACTIONS(177),
    [anon_sym_ATproperty] = ACTIONS(179),
    [anon_sym_ATproperty_DASHread] = ACTIONS(177),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(177),
    [anon_sym_ATreturn] = ACTIONS(177),
    [anon_sym_ATsee] = ACTIONS(177),
    [anon_sym_ATthrows] = ACTIONS(177),
    [anon_sym_ATvar] = ACTIONS(177),
    [anon_sym_ATdeprecated] = ACTIONS(177),
    [anon_sym_ATsince] = ACTIONS(177),
    [anon_sym_ATversion] = ACTIONS(177),
    [anon_sym_ATafter] = ACTIONS(179),
    [anon_sym_ATafterClass] = ACTIONS(177),
    [anon_sym_ATannotation] = ACTIONS(177),
    [anon_sym_ATbackupGlobals] = ACTIONS(177),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(177),
    [anon_sym_ATbefore] = ACTIONS(179),
    [anon_sym_ATbeforeClass] = ACTIONS(177),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(179),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(177),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(177),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(177),
    [anon_sym_ATcovers] = ACTIONS(179),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(179),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(177),
    [anon_sym_ATcoversNothing] = ACTIONS(177),
    [anon_sym_ATdataProvider] = ACTIONS(177),
    [anon_sym_ATdepends] = ACTIONS(179),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(177),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(177),
    [anon_sym_ATgroup] = ACTIONS(177),
    [anon_sym_ATlarge] = ACTIONS(177),
    [anon_sym_ATmedium] = ACTIONS(177),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(177),
    [anon_sym_ATrequires] = ACTIONS(179),
    [anon_sym_ATrequiresusages] = ACTIONS(177),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(177),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(177),
    [anon_sym_ATsmall] = ACTIONS(177),
    [anon_sym_ATtest] = ACTIONS(179),
    [anon_sym_ATtestWith] = ACTIONS(177),
    [anon_sym_ATtestdox] = ACTIONS(177),
    [anon_sym_ATticket] = ACTIONS(177),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(177),
    [sym_text] = ACTIONS(179),
    [sym__end] = ACTIONS(177),
  },
  [22] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(57),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(181),
    [anon_sym_ATfilesource] = ACTIONS(181),
    [anon_sym_ATignore] = ACTIONS(181),
    [anon_sym_ATcategory] = ACTIONS(181),
    [anon_sym_ATcopyright] = ACTIONS(181),
    [anon_sym_ATtodo] = ACTIONS(181),
    [anon_sym_ATexample] = ACTIONS(181),
    [anon_sym_ATlicense] = ACTIONS(181),
    [anon_sym_ATpackage] = ACTIONS(181),
    [anon_sym_ATsource] = ACTIONS(181),
    [anon_sym_ATsubpackage] = ACTIONS(181),
    [anon_sym_ATuses] = ACTIONS(181),
    [anon_sym_ATauthor] = ACTIONS(181),
    [anon_sym_ATglobal] = ACTIONS(181),
    [anon_sym_ATinternal] = ACTIONS(181),
    [anon_sym_ATlink] = ACTIONS(181),
    [anon_sym_ATmethod] = ACTIONS(181),
    [anon_sym_ATparam] = ACTIONS(181),
    [anon_sym_ATproperty] = ACTIONS(183),
    [anon_sym_ATproperty_DASHread] = ACTIONS(181),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(181),
    [anon_sym_ATreturn] = ACTIONS(181),
    [anon_sym_ATsee] = ACTIONS(181),
    [anon_sym_ATthrows] = ACTIONS(181),
    [anon_sym_ATvar] = ACTIONS(181),
    [anon_sym_ATdeprecated] = ACTIONS(181),
    [anon_sym_ATsince] = ACTIONS(181),
    [anon_sym_ATversion] = ACTIONS(181),
    [anon_sym_ATafter] = ACTIONS(183),
    [anon_sym_ATafterClass] = ACTIONS(181),
    [anon_sym_ATannotation] = ACTIONS(181),
    [anon_sym_ATbackupGlobals] = ACTIONS(181),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(181),
    [anon_sym_ATbefore] = ACTIONS(183),
    [anon_sym_ATbeforeClass] = ACTIONS(181),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(183),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(181),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(181),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(181),
    [anon_sym_ATcovers] = ACTIONS(183),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(183),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(181),
    [anon_sym_ATcoversNothing] = ACTIONS(181),
    [anon_sym_ATdataProvider] = ACTIONS(181),
    [anon_sym_ATdepends] = ACTIONS(183),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(181),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(181),
    [anon_sym_ATgroup] = ACTIONS(181),
    [anon_sym_ATlarge] = ACTIONS(181),
    [anon_sym_ATmedium] = ACTIONS(181),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(181),
    [anon_sym_ATrequires] = ACTIONS(183),
    [anon_sym_ATrequiresusages] = ACTIONS(181),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(181),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(181),
    [anon_sym_ATsmall] = ACTIONS(181),
    [anon_sym_ATtest] = ACTIONS(183),
    [anon_sym_ATtestWith] = ACTIONS(181),
    [anon_sym_ATtestdox] = ACTIONS(181),
    [anon_sym_ATticket] = ACTIONS(181),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(181),
  },
  [23] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(65),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(185),
    [anon_sym_ATfilesource] = ACTIONS(185),
    [anon_sym_ATignore] = ACTIONS(185),
    [anon_sym_ATcategory] = ACTIONS(185),
    [anon_sym_ATcopyright] = ACTIONS(185),
    [anon_sym_ATtodo] = ACTIONS(185),
    [anon_sym_ATexample] = ACTIONS(185),
    [anon_sym_ATlicense] = ACTIONS(185),
    [anon_sym_ATpackage] = ACTIONS(185),
    [anon_sym_ATsource] = ACTIONS(185),
    [anon_sym_ATsubpackage] = ACTIONS(185),
    [anon_sym_ATuses] = ACTIONS(185),
    [anon_sym_ATauthor] = ACTIONS(185),
    [anon_sym_ATglobal] = ACTIONS(185),
    [anon_sym_ATinternal] = ACTIONS(185),
    [anon_sym_ATlink] = ACTIONS(185),
    [anon_sym_ATmethod] = ACTIONS(185),
    [anon_sym_ATparam] = ACTIONS(185),
    [anon_sym_ATproperty] = ACTIONS(187),
    [anon_sym_ATproperty_DASHread] = ACTIONS(185),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(185),
    [anon_sym_ATreturn] = ACTIONS(185),
    [anon_sym_ATsee] = ACTIONS(185),
    [anon_sym_ATthrows] = ACTIONS(185),
    [anon_sym_ATvar] = ACTIONS(185),
    [anon_sym_ATdeprecated] = ACTIONS(185),
    [anon_sym_ATsince] = ACTIONS(185),
    [anon_sym_ATversion] = ACTIONS(185),
    [anon_sym_ATafter] = ACTIONS(187),
    [anon_sym_ATafterClass] = ACTIONS(185),
    [anon_sym_ATannotation] = ACTIONS(185),
    [anon_sym_ATbackupGlobals] = ACTIONS(185),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(185),
    [anon_sym_ATbefore] = ACTIONS(187),
    [anon_sym_ATbeforeClass] = ACTIONS(185),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(187),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(185),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(185),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(185),
    [anon_sym_ATcovers] = ACTIONS(187),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(187),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(185),
    [anon_sym_ATcoversNothing] = ACTIONS(185),
    [anon_sym_ATdataProvider] = ACTIONS(185),
    [anon_sym_ATdepends] = ACTIONS(187),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(185),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(185),
    [anon_sym_ATgroup] = ACTIONS(185),
    [anon_sym_ATlarge] = ACTIONS(185),
    [anon_sym_ATmedium] = ACTIONS(185),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(185),
    [anon_sym_ATrequires] = ACTIONS(187),
    [anon_sym_ATrequiresusages] = ACTIONS(185),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(185),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(185),
    [anon_sym_ATsmall] = ACTIONS(185),
    [anon_sym_ATtest] = ACTIONS(187),
    [anon_sym_ATtestWith] = ACTIONS(185),
    [anon_sym_ATtestdox] = ACTIONS(185),
    [anon_sym_ATticket] = ACTIONS(185),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(185),
  },
  [24] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(64),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
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
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(125),
  },
  [25] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_ATapi] = ACTIONS(189),
    [anon_sym_ATfilesource] = ACTIONS(189),
    [anon_sym_ATignore] = ACTIONS(189),
    [anon_sym_ATcategory] = ACTIONS(189),
    [anon_sym_ATcopyright] = ACTIONS(189),
    [anon_sym_ATtodo] = ACTIONS(189),
    [anon_sym_ATexample] = ACTIONS(189),
    [anon_sym_ATlicense] = ACTIONS(189),
    [anon_sym_ATpackage] = ACTIONS(189),
    [anon_sym_ATsource] = ACTIONS(189),
    [anon_sym_ATsubpackage] = ACTIONS(189),
    [anon_sym_ATuses] = ACTIONS(189),
    [anon_sym_ATauthor] = ACTIONS(189),
    [anon_sym_ATglobal] = ACTIONS(189),
    [anon_sym_ATinternal] = ACTIONS(189),
    [anon_sym_ATlink] = ACTIONS(189),
    [anon_sym_ATmethod] = ACTIONS(189),
    [anon_sym_ATparam] = ACTIONS(189),
    [anon_sym_ATproperty] = ACTIONS(191),
    [anon_sym_ATproperty_DASHread] = ACTIONS(189),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(189),
    [anon_sym_ATreturn] = ACTIONS(189),
    [anon_sym_ATsee] = ACTIONS(189),
    [anon_sym_ATthrows] = ACTIONS(189),
    [anon_sym_ATvar] = ACTIONS(189),
    [anon_sym_ATdeprecated] = ACTIONS(189),
    [anon_sym_ATsince] = ACTIONS(189),
    [anon_sym_ATversion] = ACTIONS(189),
    [anon_sym_ATafter] = ACTIONS(191),
    [anon_sym_ATafterClass] = ACTIONS(189),
    [anon_sym_ATannotation] = ACTIONS(189),
    [anon_sym_ATbackupGlobals] = ACTIONS(189),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(189),
    [anon_sym_ATbefore] = ACTIONS(191),
    [anon_sym_ATbeforeClass] = ACTIONS(189),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(191),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(189),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(189),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(189),
    [anon_sym_ATcovers] = ACTIONS(191),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(191),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(189),
    [anon_sym_ATcoversNothing] = ACTIONS(189),
    [anon_sym_ATdataProvider] = ACTIONS(189),
    [anon_sym_ATdepends] = ACTIONS(191),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(189),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(189),
    [anon_sym_ATgroup] = ACTIONS(189),
    [anon_sym_ATlarge] = ACTIONS(189),
    [anon_sym_ATmedium] = ACTIONS(189),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(189),
    [anon_sym_ATrequires] = ACTIONS(191),
    [anon_sym_ATrequiresusages] = ACTIONS(189),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(189),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(189),
    [anon_sym_ATsmall] = ACTIONS(189),
    [anon_sym_ATtest] = ACTIONS(191),
    [anon_sym_ATtestWith] = ACTIONS(189),
    [anon_sym_ATtestdox] = ACTIONS(189),
    [anon_sym_ATticket] = ACTIONS(189),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(189),
    [sym_text] = ACTIONS(191),
    [sym__end] = ACTIONS(189),
  },
  [26] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(53),
    [aux_sym_description_repeat1] = STATE(31),
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
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(60),
    [aux_sym_description_repeat1] = STATE(31),
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
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(59),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(204),
    [anon_sym_ATfilesource] = ACTIONS(204),
    [anon_sym_ATignore] = ACTIONS(204),
    [anon_sym_ATcategory] = ACTIONS(204),
    [anon_sym_ATcopyright] = ACTIONS(204),
    [anon_sym_ATtodo] = ACTIONS(204),
    [anon_sym_ATexample] = ACTIONS(204),
    [anon_sym_ATlicense] = ACTIONS(204),
    [anon_sym_ATpackage] = ACTIONS(204),
    [anon_sym_ATsource] = ACTIONS(204),
    [anon_sym_ATsubpackage] = ACTIONS(204),
    [anon_sym_ATuses] = ACTIONS(204),
    [anon_sym_ATauthor] = ACTIONS(204),
    [anon_sym_ATglobal] = ACTIONS(204),
    [anon_sym_ATinternal] = ACTIONS(204),
    [anon_sym_ATlink] = ACTIONS(204),
    [anon_sym_ATmethod] = ACTIONS(204),
    [anon_sym_ATparam] = ACTIONS(204),
    [anon_sym_ATproperty] = ACTIONS(206),
    [anon_sym_ATproperty_DASHread] = ACTIONS(204),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(204),
    [anon_sym_ATreturn] = ACTIONS(204),
    [anon_sym_ATsee] = ACTIONS(204),
    [anon_sym_ATthrows] = ACTIONS(204),
    [anon_sym_ATvar] = ACTIONS(204),
    [anon_sym_ATdeprecated] = ACTIONS(204),
    [anon_sym_ATsince] = ACTIONS(204),
    [anon_sym_ATversion] = ACTIONS(204),
    [anon_sym_ATafter] = ACTIONS(206),
    [anon_sym_ATafterClass] = ACTIONS(204),
    [anon_sym_ATannotation] = ACTIONS(204),
    [anon_sym_ATbackupGlobals] = ACTIONS(204),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(204),
    [anon_sym_ATbefore] = ACTIONS(206),
    [anon_sym_ATbeforeClass] = ACTIONS(204),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(206),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(204),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(204),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(204),
    [anon_sym_ATcovers] = ACTIONS(206),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(206),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(204),
    [anon_sym_ATcoversNothing] = ACTIONS(204),
    [anon_sym_ATdataProvider] = ACTIONS(204),
    [anon_sym_ATdepends] = ACTIONS(206),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(204),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(204),
    [anon_sym_ATgroup] = ACTIONS(204),
    [anon_sym_ATlarge] = ACTIONS(204),
    [anon_sym_ATmedium] = ACTIONS(204),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(204),
    [anon_sym_ATrequires] = ACTIONS(206),
    [anon_sym_ATrequiresusages] = ACTIONS(204),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(204),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(204),
    [anon_sym_ATsmall] = ACTIONS(204),
    [anon_sym_ATtest] = ACTIONS(206),
    [anon_sym_ATtestWith] = ACTIONS(204),
    [anon_sym_ATtestdox] = ACTIONS(204),
    [anon_sym_ATticket] = ACTIONS(204),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(204),
  },
  [29] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(47),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(208),
    [anon_sym_ATfilesource] = ACTIONS(208),
    [anon_sym_ATignore] = ACTIONS(208),
    [anon_sym_ATcategory] = ACTIONS(208),
    [anon_sym_ATcopyright] = ACTIONS(208),
    [anon_sym_ATtodo] = ACTIONS(208),
    [anon_sym_ATexample] = ACTIONS(208),
    [anon_sym_ATlicense] = ACTIONS(208),
    [anon_sym_ATpackage] = ACTIONS(208),
    [anon_sym_ATsource] = ACTIONS(208),
    [anon_sym_ATsubpackage] = ACTIONS(208),
    [anon_sym_ATuses] = ACTIONS(208),
    [anon_sym_ATauthor] = ACTIONS(208),
    [anon_sym_ATglobal] = ACTIONS(208),
    [anon_sym_ATinternal] = ACTIONS(208),
    [anon_sym_ATlink] = ACTIONS(208),
    [anon_sym_ATmethod] = ACTIONS(208),
    [anon_sym_ATparam] = ACTIONS(208),
    [anon_sym_ATproperty] = ACTIONS(210),
    [anon_sym_ATproperty_DASHread] = ACTIONS(208),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(208),
    [anon_sym_ATreturn] = ACTIONS(208),
    [anon_sym_ATsee] = ACTIONS(208),
    [anon_sym_ATthrows] = ACTIONS(208),
    [anon_sym_ATvar] = ACTIONS(208),
    [anon_sym_ATdeprecated] = ACTIONS(208),
    [anon_sym_ATsince] = ACTIONS(208),
    [anon_sym_ATversion] = ACTIONS(208),
    [anon_sym_ATafter] = ACTIONS(210),
    [anon_sym_ATafterClass] = ACTIONS(208),
    [anon_sym_ATannotation] = ACTIONS(208),
    [anon_sym_ATbackupGlobals] = ACTIONS(208),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(208),
    [anon_sym_ATbefore] = ACTIONS(210),
    [anon_sym_ATbeforeClass] = ACTIONS(208),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(210),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(208),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(208),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(208),
    [anon_sym_ATcovers] = ACTIONS(210),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(210),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(208),
    [anon_sym_ATcoversNothing] = ACTIONS(208),
    [anon_sym_ATdataProvider] = ACTIONS(208),
    [anon_sym_ATdepends] = ACTIONS(210),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(208),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(208),
    [anon_sym_ATgroup] = ACTIONS(208),
    [anon_sym_ATlarge] = ACTIONS(208),
    [anon_sym_ATmedium] = ACTIONS(208),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(208),
    [anon_sym_ATrequires] = ACTIONS(210),
    [anon_sym_ATrequiresusages] = ACTIONS(208),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(208),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(208),
    [anon_sym_ATsmall] = ACTIONS(208),
    [anon_sym_ATtest] = ACTIONS(210),
    [anon_sym_ATtestWith] = ACTIONS(208),
    [anon_sym_ATtestdox] = ACTIONS(208),
    [anon_sym_ATticket] = ACTIONS(208),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(208),
  },
  [30] = {
    [sym_inline_tag] = STATE(31),
    [sym_description] = STATE(58),
    [aux_sym_description_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(212),
    [anon_sym_ATfilesource] = ACTIONS(212),
    [anon_sym_ATignore] = ACTIONS(212),
    [anon_sym_ATcategory] = ACTIONS(212),
    [anon_sym_ATcopyright] = ACTIONS(212),
    [anon_sym_ATtodo] = ACTIONS(212),
    [anon_sym_ATexample] = ACTIONS(212),
    [anon_sym_ATlicense] = ACTIONS(212),
    [anon_sym_ATpackage] = ACTIONS(212),
    [anon_sym_ATsource] = ACTIONS(212),
    [anon_sym_ATsubpackage] = ACTIONS(212),
    [anon_sym_ATuses] = ACTIONS(212),
    [anon_sym_ATauthor] = ACTIONS(212),
    [anon_sym_ATglobal] = ACTIONS(212),
    [anon_sym_ATinternal] = ACTIONS(212),
    [anon_sym_ATlink] = ACTIONS(212),
    [anon_sym_ATmethod] = ACTIONS(212),
    [anon_sym_ATparam] = ACTIONS(212),
    [anon_sym_ATproperty] = ACTIONS(214),
    [anon_sym_ATproperty_DASHread] = ACTIONS(212),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(212),
    [anon_sym_ATreturn] = ACTIONS(212),
    [anon_sym_ATsee] = ACTIONS(212),
    [anon_sym_ATthrows] = ACTIONS(212),
    [anon_sym_ATvar] = ACTIONS(212),
    [anon_sym_ATdeprecated] = ACTIONS(212),
    [anon_sym_ATsince] = ACTIONS(212),
    [anon_sym_ATversion] = ACTIONS(212),
    [anon_sym_ATafter] = ACTIONS(214),
    [anon_sym_ATafterClass] = ACTIONS(212),
    [anon_sym_ATannotation] = ACTIONS(212),
    [anon_sym_ATbackupGlobals] = ACTIONS(212),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(212),
    [anon_sym_ATbefore] = ACTIONS(214),
    [anon_sym_ATbeforeClass] = ACTIONS(212),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(214),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(212),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(212),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(212),
    [anon_sym_ATcovers] = ACTIONS(214),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(214),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(212),
    [anon_sym_ATcoversNothing] = ACTIONS(212),
    [anon_sym_ATdataProvider] = ACTIONS(212),
    [anon_sym_ATdepends] = ACTIONS(214),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(212),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(212),
    [anon_sym_ATgroup] = ACTIONS(212),
    [anon_sym_ATlarge] = ACTIONS(212),
    [anon_sym_ATmedium] = ACTIONS(212),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(212),
    [anon_sym_ATrequires] = ACTIONS(214),
    [anon_sym_ATrequiresusages] = ACTIONS(212),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(212),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(212),
    [anon_sym_ATsmall] = ACTIONS(212),
    [anon_sym_ATtest] = ACTIONS(214),
    [anon_sym_ATtestWith] = ACTIONS(212),
    [anon_sym_ATtestdox] = ACTIONS(212),
    [anon_sym_ATticket] = ACTIONS(212),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(212),
  },
  [31] = {
    [sym_inline_tag] = STATE(34),
    [aux_sym_description_repeat1] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(216),
    [anon_sym_ATfilesource] = ACTIONS(216),
    [anon_sym_ATignore] = ACTIONS(216),
    [anon_sym_ATcategory] = ACTIONS(216),
    [anon_sym_ATcopyright] = ACTIONS(216),
    [anon_sym_ATtodo] = ACTIONS(216),
    [anon_sym_ATexample] = ACTIONS(216),
    [anon_sym_ATlicense] = ACTIONS(216),
    [anon_sym_ATpackage] = ACTIONS(216),
    [anon_sym_ATsource] = ACTIONS(216),
    [anon_sym_ATsubpackage] = ACTIONS(216),
    [anon_sym_ATuses] = ACTIONS(216),
    [anon_sym_ATauthor] = ACTIONS(216),
    [anon_sym_ATglobal] = ACTIONS(216),
    [anon_sym_ATinternal] = ACTIONS(216),
    [anon_sym_ATlink] = ACTIONS(216),
    [anon_sym_ATmethod] = ACTIONS(216),
    [anon_sym_ATparam] = ACTIONS(216),
    [anon_sym_ATproperty] = ACTIONS(218),
    [anon_sym_ATproperty_DASHread] = ACTIONS(216),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(216),
    [anon_sym_ATreturn] = ACTIONS(216),
    [anon_sym_ATsee] = ACTIONS(216),
    [anon_sym_ATthrows] = ACTIONS(216),
    [anon_sym_ATvar] = ACTIONS(216),
    [anon_sym_ATdeprecated] = ACTIONS(216),
    [anon_sym_ATsince] = ACTIONS(216),
    [anon_sym_ATversion] = ACTIONS(216),
    [anon_sym_ATafter] = ACTIONS(218),
    [anon_sym_ATafterClass] = ACTIONS(216),
    [anon_sym_ATannotation] = ACTIONS(216),
    [anon_sym_ATbackupGlobals] = ACTIONS(216),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(216),
    [anon_sym_ATbefore] = ACTIONS(218),
    [anon_sym_ATbeforeClass] = ACTIONS(216),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(218),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(216),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(216),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(216),
    [anon_sym_ATcovers] = ACTIONS(218),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(218),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(216),
    [anon_sym_ATcoversNothing] = ACTIONS(216),
    [anon_sym_ATdataProvider] = ACTIONS(216),
    [anon_sym_ATdepends] = ACTIONS(218),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(216),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(216),
    [anon_sym_ATgroup] = ACTIONS(216),
    [anon_sym_ATlarge] = ACTIONS(216),
    [anon_sym_ATmedium] = ACTIONS(216),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(216),
    [anon_sym_ATrequires] = ACTIONS(218),
    [anon_sym_ATrequiresusages] = ACTIONS(216),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(216),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(216),
    [anon_sym_ATsmall] = ACTIONS(216),
    [anon_sym_ATtest] = ACTIONS(218),
    [anon_sym_ATtestWith] = ACTIONS(216),
    [anon_sym_ATtestdox] = ACTIONS(216),
    [anon_sym_ATticket] = ACTIONS(216),
    [sym_text] = ACTIONS(220),
    [sym__end] = ACTIONS(216),
  },
  [32] = {
    [aux_sym_union_type_repeat1] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_ATapi] = ACTIONS(222),
    [anon_sym_ATfilesource] = ACTIONS(222),
    [anon_sym_ATignore] = ACTIONS(222),
    [anon_sym_ATcategory] = ACTIONS(222),
    [anon_sym_ATcopyright] = ACTIONS(222),
    [anon_sym_ATtodo] = ACTIONS(222),
    [anon_sym_ATexample] = ACTIONS(222),
    [anon_sym_ATlicense] = ACTIONS(222),
    [anon_sym_ATpackage] = ACTIONS(222),
    [anon_sym_ATsource] = ACTIONS(222),
    [anon_sym_ATsubpackage] = ACTIONS(222),
    [anon_sym_ATuses] = ACTIONS(222),
    [anon_sym_ATauthor] = ACTIONS(222),
    [anon_sym_ATglobal] = ACTIONS(222),
    [anon_sym_ATinternal] = ACTIONS(222),
    [anon_sym_ATlink] = ACTIONS(222),
    [anon_sym_ATmethod] = ACTIONS(222),
    [anon_sym_ATparam] = ACTIONS(222),
    [anon_sym_ATproperty] = ACTIONS(224),
    [anon_sym_ATproperty_DASHread] = ACTIONS(222),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(222),
    [anon_sym_ATreturn] = ACTIONS(222),
    [anon_sym_ATsee] = ACTIONS(222),
    [anon_sym_ATthrows] = ACTIONS(222),
    [anon_sym_ATvar] = ACTIONS(222),
    [anon_sym_ATdeprecated] = ACTIONS(222),
    [anon_sym_ATsince] = ACTIONS(222),
    [anon_sym_ATversion] = ACTIONS(222),
    [anon_sym_ATafter] = ACTIONS(224),
    [anon_sym_ATafterClass] = ACTIONS(222),
    [anon_sym_ATannotation] = ACTIONS(222),
    [anon_sym_ATbackupGlobals] = ACTIONS(222),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(222),
    [anon_sym_ATbefore] = ACTIONS(224),
    [anon_sym_ATbeforeClass] = ACTIONS(222),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(224),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(222),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(222),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(222),
    [anon_sym_ATcovers] = ACTIONS(224),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(224),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(222),
    [anon_sym_ATcoversNothing] = ACTIONS(222),
    [anon_sym_ATdataProvider] = ACTIONS(222),
    [anon_sym_ATdepends] = ACTIONS(224),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(222),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(222),
    [anon_sym_ATgroup] = ACTIONS(222),
    [anon_sym_ATlarge] = ACTIONS(222),
    [anon_sym_ATmedium] = ACTIONS(222),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(222),
    [anon_sym_ATrequires] = ACTIONS(224),
    [anon_sym_ATrequiresusages] = ACTIONS(222),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(222),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(222),
    [anon_sym_ATsmall] = ACTIONS(222),
    [anon_sym_ATtest] = ACTIONS(224),
    [anon_sym_ATtestWith] = ACTIONS(222),
    [anon_sym_ATtestdox] = ACTIONS(222),
    [anon_sym_ATticket] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(226),
    [sym_text] = ACTIONS(224),
    [sym__end] = ACTIONS(222),
  },
  [33] = {
    [aux_sym_union_type_repeat1] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_ATapi] = ACTIONS(229),
    [anon_sym_ATfilesource] = ACTIONS(229),
    [anon_sym_ATignore] = ACTIONS(229),
    [anon_sym_ATcategory] = ACTIONS(229),
    [anon_sym_ATcopyright] = ACTIONS(229),
    [anon_sym_ATtodo] = ACTIONS(229),
    [anon_sym_ATexample] = ACTIONS(229),
    [anon_sym_ATlicense] = ACTIONS(229),
    [anon_sym_ATpackage] = ACTIONS(229),
    [anon_sym_ATsource] = ACTIONS(229),
    [anon_sym_ATsubpackage] = ACTIONS(229),
    [anon_sym_ATuses] = ACTIONS(229),
    [anon_sym_ATauthor] = ACTIONS(229),
    [anon_sym_ATglobal] = ACTIONS(229),
    [anon_sym_ATinternal] = ACTIONS(229),
    [anon_sym_ATlink] = ACTIONS(229),
    [anon_sym_ATmethod] = ACTIONS(229),
    [anon_sym_ATparam] = ACTIONS(229),
    [anon_sym_ATproperty] = ACTIONS(231),
    [anon_sym_ATproperty_DASHread] = ACTIONS(229),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(229),
    [anon_sym_ATreturn] = ACTIONS(229),
    [anon_sym_ATsee] = ACTIONS(229),
    [anon_sym_ATthrows] = ACTIONS(229),
    [anon_sym_ATvar] = ACTIONS(229),
    [anon_sym_ATdeprecated] = ACTIONS(229),
    [anon_sym_ATsince] = ACTIONS(229),
    [anon_sym_ATversion] = ACTIONS(229),
    [anon_sym_ATafter] = ACTIONS(231),
    [anon_sym_ATafterClass] = ACTIONS(229),
    [anon_sym_ATannotation] = ACTIONS(229),
    [anon_sym_ATbackupGlobals] = ACTIONS(229),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(229),
    [anon_sym_ATbefore] = ACTIONS(231),
    [anon_sym_ATbeforeClass] = ACTIONS(229),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(231),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(229),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(229),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(229),
    [anon_sym_ATcovers] = ACTIONS(231),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(231),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(229),
    [anon_sym_ATcoversNothing] = ACTIONS(229),
    [anon_sym_ATdataProvider] = ACTIONS(229),
    [anon_sym_ATdepends] = ACTIONS(231),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(229),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(229),
    [anon_sym_ATgroup] = ACTIONS(229),
    [anon_sym_ATlarge] = ACTIONS(229),
    [anon_sym_ATmedium] = ACTIONS(229),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(229),
    [anon_sym_ATrequires] = ACTIONS(231),
    [anon_sym_ATrequiresusages] = ACTIONS(229),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(229),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(229),
    [anon_sym_ATsmall] = ACTIONS(229),
    [anon_sym_ATtest] = ACTIONS(231),
    [anon_sym_ATtestWith] = ACTIONS(229),
    [anon_sym_ATtestdox] = ACTIONS(229),
    [anon_sym_ATticket] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(233),
    [sym_text] = ACTIONS(231),
    [sym__end] = ACTIONS(229),
  },
  [34] = {
    [sym_inline_tag] = STATE(34),
    [aux_sym_description_repeat1] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_ATapi] = ACTIONS(238),
    [anon_sym_ATfilesource] = ACTIONS(238),
    [anon_sym_ATignore] = ACTIONS(238),
    [anon_sym_ATcategory] = ACTIONS(238),
    [anon_sym_ATcopyright] = ACTIONS(238),
    [anon_sym_ATtodo] = ACTIONS(238),
    [anon_sym_ATexample] = ACTIONS(238),
    [anon_sym_ATlicense] = ACTIONS(238),
    [anon_sym_ATpackage] = ACTIONS(238),
    [anon_sym_ATsource] = ACTIONS(238),
    [anon_sym_ATsubpackage] = ACTIONS(238),
    [anon_sym_ATuses] = ACTIONS(238),
    [anon_sym_ATauthor] = ACTIONS(238),
    [anon_sym_ATglobal] = ACTIONS(238),
    [anon_sym_ATinternal] = ACTIONS(238),
    [anon_sym_ATlink] = ACTIONS(238),
    [anon_sym_ATmethod] = ACTIONS(238),
    [anon_sym_ATparam] = ACTIONS(238),
    [anon_sym_ATproperty] = ACTIONS(240),
    [anon_sym_ATproperty_DASHread] = ACTIONS(238),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(238),
    [anon_sym_ATreturn] = ACTIONS(238),
    [anon_sym_ATsee] = ACTIONS(238),
    [anon_sym_ATthrows] = ACTIONS(238),
    [anon_sym_ATvar] = ACTIONS(238),
    [anon_sym_ATdeprecated] = ACTIONS(238),
    [anon_sym_ATsince] = ACTIONS(238),
    [anon_sym_ATversion] = ACTIONS(238),
    [anon_sym_ATafter] = ACTIONS(240),
    [anon_sym_ATafterClass] = ACTIONS(238),
    [anon_sym_ATannotation] = ACTIONS(238),
    [anon_sym_ATbackupGlobals] = ACTIONS(238),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(238),
    [anon_sym_ATbefore] = ACTIONS(240),
    [anon_sym_ATbeforeClass] = ACTIONS(238),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(240),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(238),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(238),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(238),
    [anon_sym_ATcovers] = ACTIONS(240),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(240),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(238),
    [anon_sym_ATcoversNothing] = ACTIONS(238),
    [anon_sym_ATdataProvider] = ACTIONS(238),
    [anon_sym_ATdepends] = ACTIONS(240),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(238),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(238),
    [anon_sym_ATgroup] = ACTIONS(238),
    [anon_sym_ATlarge] = ACTIONS(238),
    [anon_sym_ATmedium] = ACTIONS(238),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(238),
    [anon_sym_ATrequires] = ACTIONS(240),
    [anon_sym_ATrequiresusages] = ACTIONS(238),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(238),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(238),
    [anon_sym_ATsmall] = ACTIONS(238),
    [anon_sym_ATtest] = ACTIONS(240),
    [anon_sym_ATtestWith] = ACTIONS(238),
    [anon_sym_ATtestdox] = ACTIONS(238),
    [anon_sym_ATticket] = ACTIONS(238),
    [sym_text] = ACTIONS(242),
    [sym__end] = ACTIONS(238),
  },
  [35] = {
    [aux_sym_union_type_repeat1] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_ATapi] = ACTIONS(245),
    [anon_sym_ATfilesource] = ACTIONS(245),
    [anon_sym_ATignore] = ACTIONS(245),
    [anon_sym_ATcategory] = ACTIONS(245),
    [anon_sym_ATcopyright] = ACTIONS(245),
    [anon_sym_ATtodo] = ACTIONS(245),
    [anon_sym_ATexample] = ACTIONS(245),
    [anon_sym_ATlicense] = ACTIONS(245),
    [anon_sym_ATpackage] = ACTIONS(245),
    [anon_sym_ATsource] = ACTIONS(245),
    [anon_sym_ATsubpackage] = ACTIONS(245),
    [anon_sym_ATuses] = ACTIONS(245),
    [anon_sym_ATauthor] = ACTIONS(245),
    [anon_sym_ATglobal] = ACTIONS(245),
    [anon_sym_ATinternal] = ACTIONS(245),
    [anon_sym_ATlink] = ACTIONS(245),
    [anon_sym_ATmethod] = ACTIONS(245),
    [anon_sym_ATparam] = ACTIONS(245),
    [anon_sym_ATproperty] = ACTIONS(247),
    [anon_sym_ATproperty_DASHread] = ACTIONS(245),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(245),
    [anon_sym_ATreturn] = ACTIONS(245),
    [anon_sym_ATsee] = ACTIONS(245),
    [anon_sym_ATthrows] = ACTIONS(245),
    [anon_sym_ATvar] = ACTIONS(245),
    [anon_sym_ATdeprecated] = ACTIONS(245),
    [anon_sym_ATsince] = ACTIONS(245),
    [anon_sym_ATversion] = ACTIONS(245),
    [anon_sym_ATafter] = ACTIONS(247),
    [anon_sym_ATafterClass] = ACTIONS(245),
    [anon_sym_ATannotation] = ACTIONS(245),
    [anon_sym_ATbackupGlobals] = ACTIONS(245),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(245),
    [anon_sym_ATbefore] = ACTIONS(247),
    [anon_sym_ATbeforeClass] = ACTIONS(245),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(247),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(245),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(245),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(245),
    [anon_sym_ATcovers] = ACTIONS(247),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(247),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(245),
    [anon_sym_ATcoversNothing] = ACTIONS(245),
    [anon_sym_ATdataProvider] = ACTIONS(245),
    [anon_sym_ATdepends] = ACTIONS(247),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(245),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(245),
    [anon_sym_ATgroup] = ACTIONS(245),
    [anon_sym_ATlarge] = ACTIONS(245),
    [anon_sym_ATmedium] = ACTIONS(245),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(245),
    [anon_sym_ATrequires] = ACTIONS(247),
    [anon_sym_ATrequiresusages] = ACTIONS(245),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(245),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(245),
    [anon_sym_ATsmall] = ACTIONS(245),
    [anon_sym_ATtest] = ACTIONS(247),
    [anon_sym_ATtestWith] = ACTIONS(245),
    [anon_sym_ATtestdox] = ACTIONS(245),
    [anon_sym_ATticket] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(233),
    [sym_text] = ACTIONS(247),
    [sym__end] = ACTIONS(245),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(251), 10,
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
    ACTIONS(249), 54,
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
  [69] = 2,
    ACTIONS(224), 10,
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
    ACTIONS(222), 54,
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
    ACTIONS(179), 10,
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
    ACTIONS(177), 54,
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
  [207] = 2,
    ACTIONS(255), 10,
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
    ACTIONS(253), 54,
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
    ACTIONS(259), 10,
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
    ACTIONS(257), 53,
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
    ACTIONS(263), 10,
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
    ACTIONS(261), 53,
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
    ACTIONS(267), 10,
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
    ACTIONS(265), 53,
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
    ACTIONS(271), 10,
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
    ACTIONS(269), 53,
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
    ACTIONS(275), 10,
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
    ACTIONS(273), 53,
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
  [684] = 3,
    ACTIONS(283), 1,
      anon_sym_LT,
    ACTIONS(285), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(281), 52,
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
    ACTIONS(202), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(200), 52,
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
    ACTIONS(289), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(287), 52,
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
    ACTIONS(293), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(291), 52,
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
    ACTIONS(297), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(295), 52,
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
    ACTIONS(301), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(299), 52,
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
    ACTIONS(303), 52,
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
  [1215] = 2,
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
  [1281] = 2,
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
  [1347] = 2,
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
  [1413] = 2,
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
  [1479] = 2,
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
  [1545] = 2,
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
  [1611] = 2,
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
  [1677] = 2,
    ACTIONS(187), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(185), 52,
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
  [1809] = 2,
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
  [1875] = 2,
    ACTIONS(145), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(143), 52,
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
  [2007] = 2,
    ACTIONS(149), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(147), 52,
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
  [2139] = 16,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(353), 1,
      anon_sym_list,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(363), 1,
      anon_sym_DOLLAR,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_qualified_name,
    STATE(116), 1,
      sym_variable_name,
    STATE(117), 1,
      sym_parameter,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(131), 2,
      sym__type,
      sym_union_type,
    STATE(97), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(104), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(361), 12,
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
  [2206] = 15,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(353), 1,
      anon_sym_list,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(363), 1,
      anon_sym_DOLLAR,
    STATE(94), 1,
      sym_qualified_name,
    STATE(116), 1,
      sym_variable_name,
    STATE(135), 1,
      sym_parameter,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(131), 2,
      sym__type,
      sym_union_type,
    STATE(97), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(104), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(361), 12,
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
  [2270] = 14,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(353), 1,
      anon_sym_list,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(30), 1,
      sym_variable_name,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(119), 2,
      sym__type,
      sym_union_type,
    STATE(97), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(104), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(361), 12,
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
  [2331] = 14,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(353), 1,
      anon_sym_list,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(369), 1,
      anon_sym_static,
    STATE(77), 1,
      sym_static,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(164), 2,
      sym__type,
      sym_union_type,
    STATE(97), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(104), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(361), 11,
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
  [2391] = 12,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(353), 1,
      anon_sym_list,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(125), 2,
      sym__type,
      sym_union_type,
    STATE(97), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(104), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(361), 12,
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
  [2446] = 12,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_qualified_name,
    STATE(156), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(22), 2,
      sym__type,
      sym_union_type,
    STATE(10), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(33), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(377), 12,
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
  [2501] = 12,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_qualified_name,
    STATE(156), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(15), 2,
      sym__type,
      sym_union_type,
    STATE(10), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(33), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(377), 12,
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
  [2556] = 12,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(353), 1,
      anon_sym_list,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(127), 2,
      sym__type,
      sym_union_type,
    STATE(97), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(104), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(361), 12,
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
  [2611] = 12,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(353), 1,
      anon_sym_list,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(124), 2,
      sym__type,
      sym_union_type,
    STATE(97), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(104), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(361), 12,
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
  [2666] = 12,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(353), 1,
      anon_sym_list,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(139), 2,
      sym__type,
      sym_union_type,
    STATE(97), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(104), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(361), 12,
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
  [2721] = 11,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(371), 1,
      sym_name,
    ACTIONS(373), 1,
      anon_sym_list,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_qualified_name,
    STATE(156), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(10), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(37), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(377), 12,
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
  [2772] = 11,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(353), 1,
      anon_sym_list,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(97), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(106), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(361), 12,
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
  [2823] = 9,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(171), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(361), 12,
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
  [2865] = 9,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(146), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(361), 12,
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
  [2907] = 9,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(170), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(361), 12,
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
  [2949] = 9,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(136), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(361), 12,
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
  [2991] = 9,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(122), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(361), 12,
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
  [3033] = 9,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(158), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(361), 12,
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
  [3075] = 8,
    ACTIONS(351), 1,
      sym_name,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    STATE(94), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(92), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(361), 12,
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
  [3112] = 8,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(371), 1,
      sym_name,
    STATE(17), 1,
      sym_qualified_name,
    STATE(156), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
    STATE(16), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(377), 12,
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
  [3149] = 4,
    ACTIONS(379), 1,
      sym_name,
    ACTIONS(384), 2,
      anon_sym_BSLASH,
      anon_sym_QMARK,
    ACTIONS(169), 3,
      anon_sym_LT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
    ACTIONS(382), 14,
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
  [3178] = 3,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    STATE(133), 1,
      aux_sym_namespace_name_repeat1,
    ACTIONS(112), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3194] = 1,
    ACTIONS(177), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3204] = 7,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(386), 1,
      sym_name,
    ACTIONS(388), 1,
      sym_uri,
    STATE(9), 1,
      sym_qualified_name,
    STATE(166), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
  [3226] = 1,
    ACTIONS(161), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3236] = 5,
    ACTIONS(390), 1,
      anon_sym_ATinheritDoc,
    ACTIONS(392), 1,
      anon_sym_ATinternal,
    ACTIONS(394), 1,
      anon_sym_ATlink,
    ACTIONS(396), 1,
      anon_sym_ATsee,
    STATE(144), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [3254] = 1,
    ACTIONS(112), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3264] = 1,
    ACTIONS(169), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3274] = 7,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(386), 1,
      sym_name,
    ACTIONS(398), 1,
      sym_uri,
    STATE(110), 1,
      sym_qualified_name,
    STATE(172), 1,
      sym_namespace_name_as_prefix,
    STATE(175), 1,
      sym_namespace_name,
  [3296] = 4,
    ACTIONS(400), 1,
      anon_sym_LT,
    ACTIONS(402), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(101), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(131), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3311] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      sym_text,
    STATE(55), 1,
      sym_description,
    STATE(31), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3325] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      sym_text,
    STATE(56), 1,
      sym_description,
    STATE(31), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3339] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      sym_text,
    STATE(51), 1,
      sym_description,
    STATE(31), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3353] = 3,
    ACTIONS(406), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(102), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(151), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3365] = 3,
    ACTIONS(408), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(102), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(189), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3377] = 3,
    ACTIONS(411), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(222), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3388] = 3,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(229), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3399] = 3,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(245), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3410] = 1,
    ACTIONS(222), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3416] = 3,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(418), 1,
      anon_sym_BSLASH,
    STATE(147), 1,
      sym_namespace_name,
  [3426] = 2,
    ACTIONS(179), 1,
      sym_text,
    ACTIONS(177), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN_RPAREN,
  [3434] = 1,
    ACTIONS(273), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [3440] = 3,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    ACTIONS(422), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(424), 1,
      sym_text,
  [3450] = 3,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_parameters_repeat1,
  [3460] = 1,
    ACTIONS(253), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3466] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_parameters_repeat1,
  [3476] = 1,
    ACTIONS(249), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3482] = 2,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3490] = 2,
    ACTIONS(441), 1,
      anon_sym_EQ,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3498] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_parameters_repeat1,
  [3508] = 1,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3513] = 2,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_variable_name,
  [3520] = 2,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    STATE(133), 1,
      aux_sym_namespace_name_repeat1,
  [3527] = 2,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      sym_text,
  [3534] = 2,
    ACTIONS(451), 1,
      anon_sym_GT,
    ACTIONS(453), 1,
      anon_sym_COMMA,
  [3541] = 2,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_parameters,
  [3548] = 2,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_variable_name,
  [3555] = 2,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym_variable_name,
  [3562] = 2,
    ACTIONS(457), 1,
      sym_name,
    STATE(147), 1,
      sym_namespace_name,
  [3569] = 2,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    STATE(11), 1,
      sym_variable_name,
  [3576] = 2,
    ACTIONS(460), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      aux_sym_namespace_name_repeat1,
  [3583] = 2,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    ACTIONS(463), 1,
      sym_text,
  [3590] = 2,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_parameters,
  [3597] = 2,
    ACTIONS(363), 1,
      anon_sym_DOLLAR,
    STATE(115), 1,
      sym_variable_name,
  [3604] = 2,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 1,
      sym_text,
  [3611] = 2,
    ACTIONS(469), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      aux_sym_namespace_name_repeat1,
  [3618] = 1,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3623] = 1,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3628] = 2,
    ACTIONS(474), 1,
      anon_sym_GT,
    ACTIONS(476), 1,
      anon_sym_COMMA,
  [3635] = 2,
    ACTIONS(478), 1,
      sym_name,
    STATE(145), 1,
      sym_namespace_name,
  [3642] = 1,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
  [3646] = 1,
    ACTIONS(483), 1,
      sym_name,
  [3650] = 1,
    ACTIONS(485), 1,
      sym_name,
  [3654] = 1,
    ACTIONS(487), 1,
      sym_default_value,
  [3658] = 1,
    ACTIONS(489), 1,
      anon_sym_GT,
  [3662] = 1,
    ACTIONS(491), 1,
      sym_default_value,
  [3666] = 1,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
  [3670] = 1,
    ACTIONS(495), 1,
      anon_sym_BSLASH,
  [3674] = 1,
    ACTIONS(497), 1,
      anon_sym_GT,
  [3678] = 1,
    ACTIONS(499), 1,
      anon_sym_BSLASH,
  [3682] = 1,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
  [3686] = 1,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
  [3690] = 1,
    ACTIONS(505), 1,
      sym_name,
  [3694] = 1,
    ACTIONS(507), 1,
      sym_email_address,
  [3698] = 1,
    ACTIONS(509), 1,
      sym_uri,
  [3702] = 1,
    ACTIONS(511), 1,
      sym_uri,
  [3706] = 1,
    ACTIONS(513), 1,
      sym_name,
  [3710] = 1,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
  [3714] = 1,
    ACTIONS(517), 1,
      sym_name,
  [3718] = 1,
    ACTIONS(519), 1,
      sym_text,
  [3722] = 1,
    ACTIONS(451), 1,
      anon_sym_GT,
  [3726] = 1,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
  [3730] = 1,
    ACTIONS(523), 1,
      anon_sym_LT,
  [3734] = 1,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
  [3738] = 1,
    ACTIONS(527), 1,
      sym_author_name,
  [3742] = 1,
    ACTIONS(529), 1,
      sym_name,
  [3746] = 1,
    ACTIONS(531), 1,
      sym_name,
  [3750] = 1,
    ACTIONS(533), 1,
      anon_sym_BSLASH,
  [3754] = 1,
    ACTIONS(535), 1,
      sym_name,
  [3758] = 1,
    ACTIONS(537), 1,
      sym_name,
  [3762] = 1,
    ACTIONS(539), 1,
      sym_name,
  [3766] = 1,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
  [3770] = 1,
    ACTIONS(543), 1,
      anon_sym_GT,
  [3774] = 1,
    ACTIONS(474), 1,
      anon_sym_GT,
  [3778] = 1,
    ACTIONS(545), 1,
      sym_name,
  [3782] = 1,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
  [3786] = 1,
    ACTIONS(549), 1,
      sym_name,
  [3790] = 1,
    ACTIONS(551), 1,
      anon_sym_BSLASH,
  [3794] = 1,
    ACTIONS(553), 1,
      anon_sym_LT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 69,
  [SMALL_STATE(38)] = 138,
  [SMALL_STATE(39)] = 207,
  [SMALL_STATE(40)] = 276,
  [SMALL_STATE(41)] = 344,
  [SMALL_STATE(42)] = 412,
  [SMALL_STATE(43)] = 480,
  [SMALL_STATE(44)] = 548,
  [SMALL_STATE(45)] = 616,
  [SMALL_STATE(46)] = 684,
  [SMALL_STATE(47)] = 753,
  [SMALL_STATE(48)] = 819,
  [SMALL_STATE(49)] = 885,
  [SMALL_STATE(50)] = 951,
  [SMALL_STATE(51)] = 1017,
  [SMALL_STATE(52)] = 1083,
  [SMALL_STATE(53)] = 1149,
  [SMALL_STATE(54)] = 1215,
  [SMALL_STATE(55)] = 1281,
  [SMALL_STATE(56)] = 1347,
  [SMALL_STATE(57)] = 1413,
  [SMALL_STATE(58)] = 1479,
  [SMALL_STATE(59)] = 1545,
  [SMALL_STATE(60)] = 1611,
  [SMALL_STATE(61)] = 1677,
  [SMALL_STATE(62)] = 1743,
  [SMALL_STATE(63)] = 1809,
  [SMALL_STATE(64)] = 1875,
  [SMALL_STATE(65)] = 1941,
  [SMALL_STATE(66)] = 2007,
  [SMALL_STATE(67)] = 2073,
  [SMALL_STATE(68)] = 2139,
  [SMALL_STATE(69)] = 2206,
  [SMALL_STATE(70)] = 2270,
  [SMALL_STATE(71)] = 2331,
  [SMALL_STATE(72)] = 2391,
  [SMALL_STATE(73)] = 2446,
  [SMALL_STATE(74)] = 2501,
  [SMALL_STATE(75)] = 2556,
  [SMALL_STATE(76)] = 2611,
  [SMALL_STATE(77)] = 2666,
  [SMALL_STATE(78)] = 2721,
  [SMALL_STATE(79)] = 2772,
  [SMALL_STATE(80)] = 2823,
  [SMALL_STATE(81)] = 2865,
  [SMALL_STATE(82)] = 2907,
  [SMALL_STATE(83)] = 2949,
  [SMALL_STATE(84)] = 2991,
  [SMALL_STATE(85)] = 3033,
  [SMALL_STATE(86)] = 3075,
  [SMALL_STATE(87)] = 3112,
  [SMALL_STATE(88)] = 3149,
  [SMALL_STATE(89)] = 3178,
  [SMALL_STATE(90)] = 3194,
  [SMALL_STATE(91)] = 3204,
  [SMALL_STATE(92)] = 3226,
  [SMALL_STATE(93)] = 3236,
  [SMALL_STATE(94)] = 3254,
  [SMALL_STATE(95)] = 3264,
  [SMALL_STATE(96)] = 3274,
  [SMALL_STATE(97)] = 3296,
  [SMALL_STATE(98)] = 3311,
  [SMALL_STATE(99)] = 3325,
  [SMALL_STATE(100)] = 3339,
  [SMALL_STATE(101)] = 3353,
  [SMALL_STATE(102)] = 3365,
  [SMALL_STATE(103)] = 3377,
  [SMALL_STATE(104)] = 3388,
  [SMALL_STATE(105)] = 3399,
  [SMALL_STATE(106)] = 3410,
  [SMALL_STATE(107)] = 3416,
  [SMALL_STATE(108)] = 3426,
  [SMALL_STATE(109)] = 3434,
  [SMALL_STATE(110)] = 3440,
  [SMALL_STATE(111)] = 3450,
  [SMALL_STATE(112)] = 3460,
  [SMALL_STATE(113)] = 3466,
  [SMALL_STATE(114)] = 3476,
  [SMALL_STATE(115)] = 3482,
  [SMALL_STATE(116)] = 3490,
  [SMALL_STATE(117)] = 3498,
  [SMALL_STATE(118)] = 3508,
  [SMALL_STATE(119)] = 3513,
  [SMALL_STATE(120)] = 3520,
  [SMALL_STATE(121)] = 3527,
  [SMALL_STATE(122)] = 3534,
  [SMALL_STATE(123)] = 3541,
  [SMALL_STATE(124)] = 3548,
  [SMALL_STATE(125)] = 3555,
  [SMALL_STATE(126)] = 3562,
  [SMALL_STATE(127)] = 3569,
  [SMALL_STATE(128)] = 3576,
  [SMALL_STATE(129)] = 3583,
  [SMALL_STATE(130)] = 3590,
  [SMALL_STATE(131)] = 3597,
  [SMALL_STATE(132)] = 3604,
  [SMALL_STATE(133)] = 3611,
  [SMALL_STATE(134)] = 3618,
  [SMALL_STATE(135)] = 3623,
  [SMALL_STATE(136)] = 3628,
  [SMALL_STATE(137)] = 3635,
  [SMALL_STATE(138)] = 3642,
  [SMALL_STATE(139)] = 3646,
  [SMALL_STATE(140)] = 3650,
  [SMALL_STATE(141)] = 3654,
  [SMALL_STATE(142)] = 3658,
  [SMALL_STATE(143)] = 3662,
  [SMALL_STATE(144)] = 3666,
  [SMALL_STATE(145)] = 3670,
  [SMALL_STATE(146)] = 3674,
  [SMALL_STATE(147)] = 3678,
  [SMALL_STATE(148)] = 3682,
  [SMALL_STATE(149)] = 3686,
  [SMALL_STATE(150)] = 3690,
  [SMALL_STATE(151)] = 3694,
  [SMALL_STATE(152)] = 3698,
  [SMALL_STATE(153)] = 3702,
  [SMALL_STATE(154)] = 3706,
  [SMALL_STATE(155)] = 3710,
  [SMALL_STATE(156)] = 3714,
  [SMALL_STATE(157)] = 3718,
  [SMALL_STATE(158)] = 3722,
  [SMALL_STATE(159)] = 3726,
  [SMALL_STATE(160)] = 3730,
  [SMALL_STATE(161)] = 3734,
  [SMALL_STATE(162)] = 3738,
  [SMALL_STATE(163)] = 3742,
  [SMALL_STATE(164)] = 3746,
  [SMALL_STATE(165)] = 3750,
  [SMALL_STATE(166)] = 3754,
  [SMALL_STATE(167)] = 3758,
  [SMALL_STATE(168)] = 3762,
  [SMALL_STATE(169)] = 3766,
  [SMALL_STATE(170)] = 3770,
  [SMALL_STATE(171)] = 3774,
  [SMALL_STATE(172)] = 3778,
  [SMALL_STATE(173)] = 3782,
  [SMALL_STATE(174)] = 3786,
  [SMALL_STATE(175)] = 3790,
  [SMALL_STATE(176)] = 3794,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(162),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(152),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type, 1),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 1), SHIFT(150),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__types, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpdoc_array_types, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpdoc_array_types, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_optional_description, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_optional_description, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(25),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 5),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(78),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(93),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(34),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__currently_incomplete_tags, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__currently_incomplete_tags, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_optional_description, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_optional_description, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_tag, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__global_tag, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_required_description, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_required_description, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal_tag, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__internal_tag, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 6),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 6),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 5),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 5),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primitive_type, 1), REDUCE(sym_static, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(102),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(79),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(69),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 1), SHIFT(120),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2), SHIFT_REPEAT(150),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_inline_tag, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 2), SHIFT(150),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2), SHIFT(120),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [501] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 4, .production_id = 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 3, .production_id = 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_inline_tag, 3, .production_id = 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
