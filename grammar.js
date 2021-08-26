const PHP = require('tree-sitter-php/grammar');

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
    [$.namespace_name],
    [$.namespace_name_as_prefix],
  ],

  word: $ => $.name,

  rules: {
    program: $ => repeat1($.document),

    document: $ => seq(
      $._begin,
      optional($.description),
      repeat($.tag),
      $._end,
    ),

    _begin: $ => token(seq('/**', repeat('*'))),

    tag: $ => choice(
      seq(
          alias($._simple_tag, $.tag_name),
          optional($.description)
      ),

      $._author_tag,
      $._global_tag,
      $._internal_tag,
      $._link_tag,
      $._method_tag,
      $._return_tag,
      $._see_tag,
      $._throws_tag,
      $._var_tag,

      $._version_tag,
      $._variable_tag_with_type,
    ),

    _simple_tag: $ => choice(
        '@api',
        '@category',
        '@copyright',
        '@example',
        '@filesource',
        '@ignore',
        '@license',
        '@package',
        '@source',
        '@subpackage',
        '@todo',
        '@uses',
        '@version',
    ),

    _author_tag: $ => seq(
      alias('@author', $.tag_name),
      optional(
        seq($.author_name, optional(seq('<', $.email_address, '>')))
      )
    ),

    _version_tag: $ => seq(
      alias(
        choice(
          '@deprecated',
          '@since',
        ),
        $.tag_name
      ),
      optional($.version),
      optional($.description),
    ),

    _global_tag: $ => seq(
      alias('@global', $.tag_name),
      $._type_name,
      $.variable_name
    ),

    _internal_tag: $ => seq(
      alias('@internal', $.tag_name),
      optional($.description)
    ),

    _internal_inline_tag: $ => seq(
      alias('@internal', $.tag_name),
      alias($.text, $.description)
    ),

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

    _method_tag: $ => seq(
      alias('@method', $.tag_name),
      optional($.static),
      optional($._type_name),
      $.name,
      '(',
      sep($.param, ','),
      ')',
      optional($.description),
    ),

    _variable_tag_with_type: $ => seq(
      alias(choice(
        '@param',
        '@property',
        '@property-read',
        '@property-write',
      ), $.tag_name),
      optional($._type),
      $.variable_name,
      optional($.description),
    ),

    _return_tag: $ => seq(
      alias('@return', $.tag_name),
      $._type_name,
      optional($.description),
    ),

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

    _throws_tag: $ => seq(
      alias('@throws', $.tag_name),
      $._type_name,
      optional($.description),
    ),

    _var_tag: $ => seq(
      alias('@var', $.tag_name),
      $._type,
      optional($.variable_name),
      optional($.description),
    ),

    author_name: $ => /[a-zA-Zα-ωΑ-Ωµ0-9_][ a-zA-Zα-ωΑ-Ωµ0-9_]*/,

    email_address: $ => /\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+/,

    description: $ => seq(
      repeat1(choice($.text, $.inline_tag)),
    ),

    text: $ => token(prec(-1, /[^@*\s\n{}][^\n{}*]*/)),

    inline_tag: $ => prec(-1, seq(
      '{',
      choice(
        $._internal_inline_tag,
        $._link_inline_tag,
        $._see_inline_tag,
      ),
      '}'
    )),

    version: $ => /[\.0-9]+/,

    uri: $ => /\w+:(\/?\/?)[^\s}]+/,

    name: $ => PHP.rules.name,
    // PHP.rules._type creates an alias for $.type_list
    _type: $ => PHP.rules._type,
    union_type: $ => PHP.rules.union_type,
    optional_type: $ => PHP.rules.optional_type,
    _types: $ => PHP.rules._types,
    named_type: $ => PHP.rules.named_type,
    primitive_type: $ => PHP.rules.primitive_type,

    _type_name: $ => seq(
      alias($.qualified_name, $.type),
      repeat(seq('|', alias($.qualified_name, $.type)))
    ),

    param: $ => seq(
      optional($._type),
      $.variable_name,
      optional(seq(
        '=',
        $.param_value,
      )),
    ),

    param_value: $ => /[^, ][^,)]*/,

    qualified_name: $ => PHP.rules.qualified_name,
    namespace_name_as_prefix: $ => PHP.rules.namespace_name_as_prefix,
    namespace_name: $ => PHP.rules.namespace_name,


    static: $ => 'static',

    variable_name: $ => PHP.rules.variable_name,

    _end: $ => '*/',
  },
})

function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sep(rule, sep) {
  return optional(sep1(rule, sep));
}
