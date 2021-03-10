module.exports = grammar({
    name: 'inform7',
    word: $ => $.word,
    conflicts: $ =>[
   
    ],

    rules: {
        source_file: $ => seq($.title, repeat1($._statement)),
        _space: $=> token(/ +/),
        word: $ => /[a-zA-Z0-9_]+/,
        identifier: $ => seq(
            optional(space($._article)),
            repeat1(seq($.word, optional($._space)))
        ),
        line_ending: $ => "\n",

        title: $ => seq($.string_literal, spaced("by"), $.identifier, $.line_ending ),
        section_heading: $ => seq(/[sS]ection /, optional($.number), "-", $.identifier, $.line_ending),
        indefinite_article: $ => seq(choice("a", "an")),
        definite_article: $ => "the",
        mass_article: $ => "some",
        _article: $ => seq(choice($.indefinite_article, $.definite_article, $.mass_article)),

        full_stop: $ => ".",
        understand_statement: $ => seq(space("Understand"), space($.string_literal), space("as"), $._expression, $.full_stop),
        has_statement: $ => seq($._expression, space("has"), $._expression, space("called"), $._expression, $.full_stop),
        can_be_statement: $ => seq($._expression, space("can be"), $._expression, $.full_stop),

        _statement: $ => choice(
            $.section_heading,
            $.is_statement,
            $.understand_statement,
            $.has_statement,
            $.can_be_statement,
        ),
    
        of_expression: $ => prec.left( seq($._expression, space("of"), $._expression) ), 
        not_expression: $ => prec.left(seq( space("not"), $._expression)),
        usually_expression: $ => prec.left(seq( space("usually"), $._expression)),
        in_expression: $ => prec.left(seq($._expression, space("in"), $._expression)),

        _expression: $ => choice(
            $.of_expression,
            $.identifier,
            $.not_expression,
            $.usually_expression,
            $.in_expression,
        ),

        is_statement: $ => seq(
            $._expression,
            space("is"),
            $._expression,
            $.full_stop
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