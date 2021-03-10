module.exports = grammar({
    name: 'inform7',
    word: $ => $.word,
    extras: $ =>
    [
        $.block_comment,
        /\s+/,
    ],
    conflicts: $ =>[
    
    ],

    rules: {
        source_file: $ => seq($.title, repeat1($._statement)),
        _space: $=> token(/ +/),
        word: $ => /[a-zA-Z][a-zA-Z0-9_]*/,
        identifier: $ => seq(
            optional($._article),
            repeat1(seq($.word, optional($._space)))
        ),
        block_comment: $ => seq(
            '[',
            repeat(choice(/./, $.block_comment)),
            ']'
          ),
    
        line_ending: $ => "\n",
          
        title: $ => seq($.string_literal, spaced("by"), $.identifier, $.line_ending ),
        section_heading: $ => seq(/[Ss]ection +/, optional($.number), "-", $.identifier, $.line_ending),
        indefinite_article: $ => seq(choice(/[aA] +/, /[aA]n +/)),
        definite_article: $ => /[Tt]he +/,
        mass_article: $ => /[Ss]ome +/,
        _article: $ => seq(choice($.indefinite_article, $.definite_article, $.mass_article)),

        full_stop: $ => ".",
        understand_statement: $ => seq( /[uU]nderstand +/, space($.string_literal), space("as"), $._expression, $.full_stop),
        has_statement: $ => seq($._expression, space("has"), $._expression, space("called"), $._expression, $.full_stop),
        can_be_statement: $ => seq($._expression, space("can be"), $._expression, $.full_stop),

        is_statement: $ => seq(
            $._expression,
            space(choice("is", "are")),
            $._expression,
            $.full_stop
        ),

        _statement: $ => choice(
            $.section_heading,
            $.is_statement,
            $.understand_statement,
            $.has_statement,
            $.can_be_statement,
        ),


        number_type: $ => "number",
        text_type: $ => "text",
        value_type: $ => "value",

        built_in_type: $ => seq(
            optional($._article),
            choice(
                $.number_type,
                $.text_type,
                $.value_type,
        )),
    
        kind_of_expression: $ => prec.left( seq( /a +kind +of +/,  $._expression)), 
        of_expression: $ => prec.left( seq($._expression, space("of"), $._expression) ), 
        not_expression: $ => prec.left(seq( space("not"), $._expression)),
        usually_expression: $ => prec.left(seq( space("usually"), $._expression)),
        in_expression: $ => prec.left(seq($._expression, space("in"), $._expression)),
        comma_separated_list: $ => prec.right(seq(
            $._expression,
            repeat1(prec.left(seq(",", optional("and"), $._expression))),
        )),

        _expression: $ => choice(
            $.kind_of_expression,
            $.of_expression,
            $.identifier,
            $.not_expression,
            $.usually_expression,
            $.in_expression,
            $.built_in_type,
            $.number,
            $.comma_separated_list,
        ),


        
        string_literal: $ => seq(
            '"',
            repeat(
              token.immediate(prec(1, /[^\\"\n]+/)),
            ),
            '"',
          ),
    
        number: $ => /\d+/
      }
});
  
function spaced(rule) {
    
    return seq(token(/ +/), rule, token(/ +/))
}

function space(rule) {
    
    return seq(rule, token(/ +/))
}

function CI (keyword) {
    return new RegExp(keyword
      .split('')
      .map(letter => `[${letter}${letter.toUpperCase()}]`)
      .join('')
    )
  }