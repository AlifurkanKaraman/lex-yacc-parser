%{
#include <stdio.h>
#include <stdlib.h>

int yylex();
void yyerror(const char *str)
{
    fprintf(stderr, "error: %s\n", str);
    exit(0);
}

%}

%token TERMINATE START MAIN END COMMENT INPUT OUTPUT
%token TYPE VARIABLE ASSIGNEMENT ENDOFSTATE INTEGER FLOAT CHARACTER
%token WHETHER OTHERWISE FINISH_OF_STATEMENT
%token OR AND NOT G GE L LE EQUAL MODULO EXPONENT
%token MULTIPLICATION DIVISION PLUS MINUS RBRACE LBRACE LBRACKET RBRACKET

%left OR
%left AND
%left NOT
%left G GE L LE EQUAL
%left PLUS MINUS
%left MULTIPLICATION DIVISION MODULO
%left EXPONENT

%%
program:
    | START declarations MAIN statements END
    ;

declarations:
      declaration
    | declaration declarations
    ;

declaration:
      TYPE VARIABLE ENDOFSTATE
    | COMMENT
    ;

statements:
      statement
   	| statement statements
	;

statement:
      assignment                              
    | TERMINATE ENDOFSTATE                  
    | COMMENT
    | OUTPUT expression ENDOFSTATE                     
    | conditions
    | loop  
    ;

assignment:
      VARIABLE ASSIGNEMENT expression ENDOFSTATE
    | VARIABLE ASSIGNEMENT INPUT ENDOFSTATE
    ;

expression:
      const
    | VARIABLE                                
    | expression OR expression                
    | expression AND expression               
    | expression NOT expression               
    | expression G expression                 
    | expression GE expression                
    | expression L expression                 
    | expression LE expression                
    | expression EQUAL expression             
    | expression PLUS expression              
    | expression MINUS expression             
    | expression MULTIPLICATION expression    
    | expression DIVISION expression
    | expression MODULO expression          
    | LBRACE expression RBRACE
    | expression EXPONENT expression               

    ;

const:
      INTEGER
    | FLOAT
    | CHARACTER
    ;

conditions:
      WHETHER LBRACE expression RBRACE 
        statements
        FINISH_OF_STATEMENT
      |
      WHETHER LBRACE expression RBRACE
        statements
        FINISH_OF_STATEMENT
      OTHERWISE
        statements
        FINISH_OF_STATEMENT
      ;

loop:
      LBRACKET expression RBRACKET 
        statements 
        FINISH_OF_STATEMENT
      ;


%%

int main()
{
    yyparse();
    printf("OK\n");
    return 0;
}