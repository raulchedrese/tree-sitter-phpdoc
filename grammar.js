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

  word: $ => $._name,

  conflicts: $ => [
    [$._namespace_name],
    [$._namespace_name_as_prefix],
  ],

  rules: {
    document: $ => seq(
      $._begin,
      optional($.description),
      repeat($.tag),
      $._end,
    ),

    _begin: $ => token(seq('/**', repeat('*'))),
  
    tag: $ => choice(
      seq($.tag_name, optional($.description)),

      $._author_tag,

      $._deprecated_tag,

      $._global_tag,

      $._internal_tag,

      $._link_tag,

      $._method_tag,
    ),

    _author_tag: $ => seq(
      alias('@author', $.tag_name),
      optional(
        seq($.author_name, optional(seq('<', $.email_address, '>')))
      )
    ),

    _deprecated_tag: $ => seq(
      alias('@deprecated', $.tag_name),
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
      $.uri,
      optional($.description)
    ),

    _link_inline_tag: $ => seq(
      alias('@link', $.tag_name),
      $.uri,
      optional(alias($.text, $.description))
    ),

    _method_tag: $ => seq(
      alias('@method', $.tag_name),
      optional($.static),
      optional($._type_name),
      alias($._name, $.name),
      '(',
      repeat($.param),
      ')'
    ),

    author_name: $ => /[a-zA-Zα-ωΑ-Ωµ0-9_][ a-zA-Zα-ωΑ-Ωµ0-9_]*/,

    email_address: $ => /\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+/,
  
    tag_name: $ => choice(...phpdoc_tags_with_at()),
  
    description: $ => repeat1($.text_line),

    text_line: $ => seq(
      repeat1(choice($.text, $.inline_tag)),
      choice('\n', '\r\n')
    ),

    text: $ => token(prec(-1, /[^@*\s\r\n{}][^\r\n{}]*/)),

    inline_tag: $ => prec(-1, seq(
      '{',
      choice(
        $._internal_inline_tag,
        $._link_inline_tag
      ),
      '}'
    )),

    version: $ => /[\.0-9]+/,

    uri: $ => /\w+:(\/?\/?)[^\s}]+/,

    _name: $ => /[_a-zA-Z\u00A1-\u00ff][_a-zA-Z\u00A1-\u00ff\d]*/,

    _type_name: $ => alias($.qualified_name, $.type),

    param: $ => seq(
      optional($._type_name),
      $.variable_name
    ),

    qualified_name: $ => seq(
      optional($._namespace_name_as_prefix),
      $._name
    ),
    
    _namespace_name: $ => seq($._name, repeat(seq('\\', $._name))),

    _namespace_name_as_prefix: $ => choice(
      '\\',
      seq(optional('\\'), $._namespace_name, '\\'),
    ),

    static: $ => 'static',

    variable_name: $ => seq('$', $._name),
  
    _end: $ => '*/',
  },
})

function phpdoc_tags_with_at() {
  return phpdoc_tags().map(tag => `@${tag}`);
}

function phpdoc_tags() {
  return [
    'api',
    'category',
    'copyright',
    'example',
    'filesource',
    'ignore',
    'license',
    'package',
    'param',
    'property',
    'property-read',
    'property-write',
    'return',
    'see',
    'since',
    'source',
    'subpackage',
    'throws',
    'todo',
    'uses',
    'var',
    'version',
  ];
}