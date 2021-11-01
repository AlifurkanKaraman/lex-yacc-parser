%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
%}

%%

INT|NOT_INT|CHR             return TYPE;

[a-z_][a-z0-9_]*            return VARIABLE;

":="                        return ASSIGNEMENT;
"|"                         return OR;
"&"                         return AND;
"!="                        return NOT;
">"                         return G;
">="                        return GE;
"<"                         return L;
"<="                        return LE;
"="                         return EQUAL;
"*"                         return MULTIPLICATION;
"/"                         return DIVISION;
"%"                         return MODULO;
"**"                        return EXPONENT;
"+"                         return PLUS;
"-"                         return MINUS;
")"                         return RBRACE;
"("                         return LBRACE;



[+-]?[0-9]+                 yylval = atoi(yytext); return INTEGER;
[+-]?[0-9]*(\.)/[0-9]+      yylval = atof(yytext); return FLOAT;
\'.\'                       return CHARACTER;

;                           return ENDOFSTATE;

TERMINATE                   return TERMINATE;
START                       return START;
MAIN                        return MAIN;
END                         return END;
INPUT                       return INPUT;
OUTPUT                      return OUTPUT;

FINISH                      return FINISH_OF_STATEMENT;
"=>"                        return WHETHER;
"=!"                        return OTHERWISE;

"{"                         return LBRACKET;
"}"                         return RBRACKET;

      

^!.*!$                      return COMMENT;

\n                          ;
[ \t]+                      ;


%%

int yywrap()
{
    return 1;
}