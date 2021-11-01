# lex-yacc-parser
First lab for Programming Language Concepts subject

A syntax analyzer for mpl(my programming language) using Lex & YACC.

This analyzer does not bargain with semantics. Its objective is constrained with syntax as it were.

All rules can be found in rules.pdf and ebnf.

To test it on examples, use the following commands:
> lex mpl.l
> yacc -d mpl.y
> gcc -o run lex.yy.c y.tab.c -ll 
> ./run<example.mpl
