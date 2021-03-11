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


    externals: $ => [
        $._newline,
        $._indent,
        $._dedent,
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
        section_heading: $ => seq(s("section"), optional($.number), "-", $.identifier, $.line_ending),
        indefinite_article: $ => seq(choice(s("a"), s("an"))),
        definite_article: $ => s("the"),
        mass_article: $ => s("some"),
        _article: $ => seq(choice($.indefinite_article, $.definite_article, $.mass_article)),

        full_stop: $ => ".",
        semicolon: $ => ";",
        understand_statement: $ => seq( s("understand"), space($.string_literal), s("as"), $._expression, $.full_stop),
        has_statement: $ => seq($._expression, s("has"), $._expression, s("called"), $._expression, $.full_stop),
        can_be_statement: $ => seq($._expression, s("can"),  s("be"), $._expression, $.full_stop),
        action_statement: $ => seq($._expression, /is +an +action +applying +to +/, $.action_quantifier, $.full_stop),
        action_quantifier: $ => choice(
            CI("nothing"),
            seq(space($.number), $._expression),
        ),


        is_fragment: $ => seq(
            $._expression,
            choice( s("is"), s("are") ),
            $._expression,
            choice($.full_stop, $.semicolon),
        ),


        relation: $ =>  repeat1(seq($.word, optional($._space))),

        relational_fragment: $ => seq(
            $._expression,
            choice($.full_stop, $.semicolon),
        ),

        now_statement: $ => seq(
            s("now"), 
            choice(
                $.is_fragment,
                $.relational_fragment,
            )
        ),

        is_statement: $ => seq(
            $._expression,
            choice( s("is"), s("are") ),
            $._expression,
            $.full_stop
        ),

        _statement: $ => choice(
            $.section_heading,
            $.is_statement,
            $.understand_statement,
            $.has_statement,
            $.can_be_statement,
            $.action_statement,
            $.after_statement,
        ),

        _suite: $ => choice(
            seq($._indent, $.block),
            alias($._newline, $.block)
          ),

        block: $ => seq(
            repeat($.now_statement),
            $._dedent
        ),
        
        after_statement: $ => seq(
            CI("after"),
            $._expression,
            ":",
            $._suite,
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
        of_expression: $ => prec.left( seq($._expression, s("of"), $._expression) ), 
        not_expression: $ => prec.left(seq( s("not"), $._expression)),
        usually_expression: $ => prec.left(seq( s("usually"), $._expression)),
        in_expression: $ => prec.left(seq($._expression, s("in"), $._expression)),
 
        comma_separated_list: $ => prec.right(seq(
            $._expression,
            repeat1(prec.left(seq(",", optional(s("and")), $._expression))),
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


        text_substitution: $=> seq("[", $._expression, "]", ),

        string_literal: $ => seq(
            '"',
            repeat(
                choice(
                    $.text_substitution,
                    token.immediate(prec(1, /[^\\"\[\]]+/)),
                ),
            ),
            '"',
          ),
    
        number: $ => choice("zero", "one","two","three","four","five","six","seven","eight","nine","ten","eleven","tweleve", /\d+/),
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
      .concat(' *')  

    )
  }

function s (keyword) {
    return new RegExp(keyword
      .split('')
      .map(letter => `[${letter}${letter.toUpperCase()}]`)
      .join('')
      .concat(' +')  
    )
  }