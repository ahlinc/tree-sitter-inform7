module.exports = grammar({
    name: 'inform7',
    word: $ => $.word,
    extras: $ =>
        [
            $.block_comment,
            /\s+/,
        ],
    conflicts: $ => [
    ],

    inline: $ => [
        $.suite,
    ],

    externals: $ => [
        $._newline,
        $._indent,
        $._dedent,
      ],
    

    rules: {
        source_file: $ => seq($.title, repeat1($._statement)),
        _space: $ => token(/ +/),
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
    
        title: $ => seq($.string_literal, spaced("by"), $.identifier, $._newline),
        section_heading: $ => seq(s("section"), optional($.number), "-", $.identifier, $._newline),
        indefinite_article: $ => seq(choice(s("a"), s("an"))),
        definite_article: $ => s("the"),
        mass_article: $ => s("some"),
        _article: $ => seq(choice($.indefinite_article, $.definite_article, $.mass_article)),

        full_stop: $ => ".",
        semicolon: $ => ";",
        understand_statement: $ => seq(s("understand"), space($.string_literal), s("as"), $._expression, $.full_stop),
        has_statement: $ => seq($._expression, s("has"), $._expression, s("called"), $._expression, $.full_stop),
        can_be_statement: $ => seq($._expression, s("can"), s("be"), $._expression, $.full_stop),
        action_statement: $ => seq($._expression, /is +an +action +applying +to +/, $.action_quantifier, $.full_stop),
        action_quantifier: $ => choice(
            CI("nothing"),
            seq(space($.number), $._expression),
        ),

        is_fragment: $ => seq(
            $._expression,
            choice(s("is"), s("are")),
            $._expression,
        ),

        _fragment_termination: $ => choice($.full_stop, $.semicolon),

        relational_fragment: $ => seq(
            $._expression,
        ),

        say_statement: $ => seq(
            s("say"),
            $.string_literal,
            optional($._fragment_termination)
        ),

        now_statement: $ => seq(
            s("now"),
            choice(
                $.is_fragment,
                $.relational_fragment,
            ),
            $._fragment_termination,
        ),


        otherwise: $ => choice(
            seq(s("otherwise"), $.if_statment),
            seq(CI("otherwise"), ":", $.suite)
        ),
            

        if_statment: $ => seq(
            s("if"),
            choice(
                $.is_fragment,
                $._expression,
            ),
            ":",
            $.suite,
        ),

        is_statement: $ => seq(
            $._expression,
            choice(s("is"), s("are")),
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
            $.shorthand_rule,
        ),

        suite: $ => choice(
            seq($._indent, $.block),
            alias($._newline, $.block),
        ),


        _fragment: $ => seq(
            choice(
                $.now_statement,
                $.if_statment,
                $.say_statement,
                $.otherwise,
            ),
            $._newline
        ),
            

        block: $ => seq(
            repeat($._fragment),
            $._dedent
        ),
        

        after: $ => s("after"),
        carry_out: $ => seq(s("carry"), s("out")),
        instead: $ => seq( s("instead"), optional(s("of")) ),
        check: $ => s("check"),
        report: $ => s("report"),

        _shortand_rule_type: $ => choice(
            $.after,
            $.carry_out,
            $.instead,
            $.check,
            $.report,
        ),           

        shorthand_rule: $ => seq(
            $._shortand_rule_type,
            $._expression,
            ":",
            $.suite,
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
        provides_expression: $ => prec.left(seq($._expression, s("provides"), $._expression)),
        called_parenthetical: $ => prec.right(seq($._expression,
            "(",
            s("called"),
            $.identifier,
            ")"
        )),

        binary_expression: $ => prec.left(seq(
            $._expression,
            token(choice(">", "<", "+", "-", "*", "/", ">=", "<=", s("and"), s("or") )),
            $._expression,
        )),

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
            $.provides_expression,
            $.binary_expression,
            $.called_parenthetical,
        ),

        // this needs a lot of work.
        text_substitution: $ => seq("[",choice(
            $._expression,
            "one of",
            "'re",
            "/i"
            ),   
        "]"),

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