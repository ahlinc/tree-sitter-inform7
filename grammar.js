module.exports = grammar({
    name: 'inform7',
    word: $ => $.word,
    extras: $ =>
        [
            $.block_comment,
            /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
        ],
    conflicts: $ => [
    ],

    inline: $ => [
        $.suite,
        $._simple_statement,
        $._compound_statement,
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
        section_heading: $ => seq(s("section"), optional($.number), "-", $.identifier),
        indefinite_article: $ => seq(choice(s("a"), s("an"))),
        definite_article: $ => s("the"),
        mass_article: $ => s("some"),
        _article: $ => seq(choice($.indefinite_article, $.definite_article, $.mass_article)),

        full_stop: $ => ".",
        semicolon: $ => ";",
        understand_statement: $ => seq(s("understand"), space($.string_literal), s("as"), $._expression),
        has_statement: $ => seq($._expression, s("has"), $._expression, s("called"), $._expression),
        can_be_statement: $ => seq($._expression, s("can"), s("be"), $._expression),
        action_statement: $ => seq($._expression, /is +an +action +applying +to +/, $.action_quantifier),
        action_quantifier: $ => choice(
            CI("nothing"),
            seq(space($.number), $._expression),
        ),

        is_fragment: $ => prec.left(seq(
            $._expression,
            choice(s("is"), s("are")),
            $._expression,
        )),

        _fragment_termination: $ => choice($.full_stop, $.semicolon),

        say_statement: $ => seq(
            s("say"),
            $.string_literal,
        ),

        now_statement: $ => seq(
            s("now"),
            $._expression,
        ),

      
        after_statement: $ => seq(
            s('after'),
            field('condition', $._expression),
            ':',
            field('consequence', $.suite),
          ),
      

          if_statement: $ => seq(
            'if',
            field('condition', $._expression),
            ':',
            field('consequence', $.suite),
            repeat(field('alternative', $.elif_clause)),
            optional(field('alternative', $.else_clause))
          ),
      
          elif_clause: $ => seq(
            s("otherwise"),
            s("if"),
            field('condition', $._expression),
            ':',
            field('consequence', $.suite)
          ),
      
          else_clause: $ => seq(
              'otherwise',
              ":",
            field('body', $.suite)
          ),

      
        is_statement: $ => seq(
            $._expression,
            choice(s("is"), s("are")),
            $._expression,
        ),


        _simple_statements: $ => seq(
            $._simple_statement,
            optional(repeat(seq(
              $._fragment_termination,
              $._simple_statement
            ))),
            optional($._fragment_termination),
            $._newline
          ),
      


        suite: $ => choice(
            alias($._simple_statements, $.block),
            seq($._indent, $.block),
            alias($._newline, $.block),
        ),


        _simple_statement: $ => seq(
            choice(
                $.section_heading,
                $.now_statement,
                $.say_statement,
                $.is_statement,
                $.understand_statement,
                $.has_statement,
                $.can_be_statement,
                $.action_statement,
            ),
        ),
            
        _statement: $ => choice(
            $._simple_statements,
            $._compound_statement
          ),
      
        _compound_statement: $ => choice(
            $.if_statement,
            $.shorthand_rule
        ),

        block: $ => seq(
            repeat($._statement),
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
            token(choice(">", "<", "+", "-", "*", "/", ">=", "<=", spaced("and"), spaced("or") )),
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
            $.is_fragment,
            $.string_literal,
            //$.terminated_string,
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
        
        terminated_string: $ => seq(
            '"',
            repeat(
                choice(
                    $.text_substitution,
                    token.immediate(prec(1, /[^\\"\[\]]+/)),
                ),
            ),
            '.',
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