const PHP = require('tree-sitter-php/grammar');

// PHPDoc reference: https://docs.phpdoc.org/3.0/guide/references/phpdoc/index.html
// TODO array return types https://docs.phpdoc.org/3.0/guide/references/phpdoc/types.html#arrays
// PHPDoc tags: https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/index.html#tag-reference
// PHPDoc docs appear to use these conventions
//   @verbatimElement [required element] [<optional element>]

module.exports = grammar({
  name: 'phpdoc',

  extras: $ => [
    token(
      seq(/(\r)|(\r\n)|(\n)/, /[ \t]*/, repeat('*'), /[ \t]*/)
    ),
    token(
      seq(/[ \t]*/, repeat('*'), /[ \t]*/)
    ),
    token(repeat1(' ')),
  ],

  conflicts: $ => [
    [$.primitive_type, $.static],
    [$.namespace_name],
    [$.namespace_name_as_prefix],
  ],

  word: $ => $.name,

  rules: {
    document: $ => seq(
      $._begin,
      optional($.description),
      repeat($.tag),
      $._end,
    ),

    _begin: $ => token(seq('/**', repeat('*'))),

    tag: $ => choice(

      $._simple_tag_without_description,
      $._simple_tag_with_optional_description,
      $._simple_tag_with_required_description,

      seq(
          alias($._currently_incomplete_tags, $.tag_name),
          optional($.description)
      ),

      $._author_tag,
      $._global_tag,
      $._internal_tag,
      $._link_tag,
      $._method_tag,
      $._param_tag,
      $._property_tag,
      $._return_tag,
      $._see_tag,
      $._throws_tag,
      $._var_tag,
      $._version_tag,

      $._phpunit_tag
    ),

    // @inheritDoc is inline only, has no description
    inline_tag: $ => prec(-1, seq(
      '{',
      choice(
        alias("@inheritDoc", $.tag_name),
        $._internal_inline_tag,
        $._link_inline_tag,
        $._see_inline_tag,
      ),
      '}'
    )),

    // @api
    // @filesource
    _simple_tag_without_description: $ => alias(
      choice(
        '@api',
        '@filesource',
      ),
      $.tag_name
    ),

    // @ignore [<description>]
    _simple_tag_with_optional_description: $ => seq(
      alias(
        '@ignore',
        $.tag_name
      ),
      optional($.description)
    ),

    // @category [description]
    // @copyright [description]
    // @todo [description]
    _simple_tag_with_required_description: $ => seq(
      alias(
        choice(
          '@category',
          '@copyright',
          '@todo',
        ),
        $.tag_name
      ),
      $.description
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/subpackage.html
    // @subpackage [name]

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/example.html
    // @example [location] [<start-line> [<number-of-lines>] ] [<description>]
    // (also inline)

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/license.html
    // @license [<url>] [name]
    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/package.html
    // @package [level 1]\\[level 2]\\[etc.]
    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/source.html
    // @source [<start-line> [<number-of-lines>] ] [<description>]
    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/uses.html
    // @uses [FQSEN] [<description>]
    _currently_incomplete_tags: $ => choice(
        '@example',
        '@license',
        '@package',
        '@source',
        '@subpackage',
        '@uses'
    ),

    // @author [name] [<email address>]
    // specs require email address to be wrapped in angle brackets
    _author_tag: $ => seq(
      alias('@author', $.tag_name),
      $.author_name,
      optional(seq('<', $.email_address, '>'))
    ),

    // @global [Type] [name] (name w/o $)
    // @global [Type] [description]
    _global_tag: $ => seq(
      alias('@global', $.tag_name),
      $._type,
      $.variable_name
    ),

    // @internal [description]
    _internal_tag: $ => seq(
      alias('@internal', $.tag_name),
      $.description
    ),

    _internal_inline_tag: $ => seq(
      alias('@internal', $.tag_name),
      alias($.text, $.description)
    ),

    // @link [URI] [<description>]
    _link_tag: $ => seq(
      alias('@link', $.tag_name),
      choice(
        $.uri,
        $.qualified_name,
        seq($.qualified_name, '()'),
      ),
      optional($.description)
    ),

    _link_inline_tag: $ => seq(
      alias('@link', $.tag_name),
      choice(
        $.uri,
        $.qualified_name,
        seq($.qualified_name, '()'),
      ),
      optional(alias($.text, $.description))
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/method.html#method
    // @method [[static] return type] [name]([[type] [parameter]<, ...>]) [<description>]
    _method_tag: $ => seq(
      alias('@method', $.tag_name),
      // `[static]` is interpreted as optional despite not being in [<...>]
      optional($.static),
      $._type,
      $.name,
      $.parameters,
      optional($.description),
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/param.html
    // @param [<Type>] [name] [<description>]
    _param_tag: $ => seq(
      alias('@param', $.tag_name),
      optional($._type),
      $.variable_name,
      optional($.description),
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/property.html
    // @property[<-read|-write>] [Type] [name] [<description>]
    _property_tag: $ => seq(
      alias(choice(
        '@property',
        '@property-read',
        '@property-write',
      ), $.tag_name),
      $._type,
      $.variable_name,
      optional($.description),
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/return.html
    // @return [Type] [<description>]
    _return_tag: $ => seq(
      alias('@return', $.tag_name),
      $._type,
      optional($.description),
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/see.html
    // @see [URI | FQSEN] [<description>]
    _see_tag: $ => seq(
      alias('@see', $.tag_name),
      $.uri,
      $.description,
    ),

    _see_inline_tag: $ => seq(
      alias('@see', $.tag_name),
      $.uri,
      optional(alias($.text, $.description))
    ),

    // @throws [Type] [<description>]
    _throws_tag: $ => seq(
      alias('@throws', $.tag_name),
      $._type,
      optional($.description),
    ),

    // @var ["Type"] [element_name] [<description>]
    _var_tag: $ => seq(
      alias('@var', $.tag_name),
      $._type,
      $.variable_name,
      optional($.description),
    ),

    // @deprecated [<Semantic Version>] [<description>]
    // @since [<Semantic Version>] [<description>]
    // @version [<Semantic Version>] [<description>]
    _version_tag: $ => seq(
      alias(
        choice(
          '@deprecated',
          '@since',
          '@version'
        ),
        $.tag_name
      ),
      optional($.version),
      optional($.description),
    ),

    // partial support for phpunit tags
    // TODO id the "core" tags and flesh out their support (ie some tags take
    // no text, some take types, etc)
    // curl https://phpunit.readthedocs.io/en/9.5/annotations.html | grep '&#64;' | sed 's/&#64;/@/g' | sed -E 's/^.+@/@/' | sed -E 's/<.+$//' | sort | uniq
    _phpunit_tag: $ => seq(
      alias(
        choice(
          '@after',
          '@afterClass',
          '@annotation',
          // '@author', // already part of phpdoc
          '@backupGlobals',
          '@backupStaticAttributes',
          '@before',
          '@beforeClass',
          '@codeCoverageIgnore',
          '@codeCoverageIgnore*',
          '@codeCoverageIgnoreEnd',
          '@codeCoverageIgnoreStart',
          '@covers',
          '@coversDefaultClass',
          '@coversDefaultClass to shorten annotations',
          '@coversNothing',
          '@dataProvider',
          '@depends',
          '@depends annotation to express dependencies',
          '@doesNotPerformAssertions',
          '@group',
          '@large',
          '@medium',
          '@preserveGlobalState',
          '@requires',
          '@requires usages',
          '@runInSeparateProcess',
          '@runTestsInSeparateProcesses',
          '@small',
          '@test',
          '@testWith',
          '@testdox',
          '@ticket',
          // '@uses', // already part of phpdoc
        ),
        $.tag_name
      ),
      optional($.description),
    ),

    // PHP.rules._type creates an alias for $.type_list
    _type: $ => PHP.rules._type,
    // union_type uses _types, so we override it to be "regular" types (which
    // aren't grouped under a parent node) or array types (which are)
    _types: $ => choice(
      $._regular_types,
      alias($._phpdoc_array_types, $.array_type),
      alias($._psalm_generic_array_types, $.array_type),
      alias($._psalm_list_array_types, $.array_type)
    ),
    _regular_types: $ => PHP.rules._types,
    _phpdoc_array_types: $ => seq(
      $._regular_types,
      repeat1("[]")
    ),
    _psalm_generic_array_types: $ => seq(
      field('array', $._regular_types),
      "<",
      field('key', $._regular_types),
      ",",
      field('value', $._regular_types),
      ">"
    ),
    _psalm_list_array_types: $ => seq(
      field('array', choice(alias("list", $.primitive_type), $._regular_types)),
      "<",
      field('value', $._regular_types),
      ">"
    ),

    name: $ => PHP.rules.name,
    named_type: $ => PHP.rules.named_type,
    namespace_name: $ => PHP.rules.namespace_name,
    namespace_name_as_prefix: $ => PHP.rules.namespace_name_as_prefix,
    optional_type: $ => PHP.rules.optional_type,
    primitive_type: $ => PHP.rules.primitive_type,
    qualified_name: $ => PHP.rules.qualified_name,
    union_type: $ => PHP.rules.union_type,
    variable_name: $ => PHP.rules.variable_name,

    // Match as words as possible, where a word is just a sequence of
    // non-whitespace and non-< characters, separated by a space. (The non-<
    // requirement makes sure this regex doesn't consume the <email> field.)
    author_name: $ => /\S+( [^\s<]+)*/,

    // Simplisitic regex to match anything@anything.anything, where the last
    // anything also doesn't include a closing angle bracket
    email_address: $ => /\S+@\S+\.[^\s>]+/,

    description: $ => seq(
      repeat1(choice($.text, $.inline_tag)),
    ),

    text: $ => token(prec(-1, /[^@*\s\n{}\\][^\n{}*]*/)),

    version: $ => /\d+(\.(\d+|[x*])){0,2}(-\w+)?/,

    uri: $ => /\w+:(\/?\/?)[^\s}]+/,

    parameters: $ => seq(
      '(',
      sep($.parameter, ','),
      ')',
    ),

    parameter: $ => seq(
      optional($._type),
      $.variable_name,
      optional(seq(
        '=',
        $.default_value,
      )),
    ),

    default_value: $ => /[^, ][^,)]*/,

    static: $ => 'static',

    _end: $ => '*/',
  },
})

function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sep(rule, sep) {
  return optional(sep1(rule, sep));
}
