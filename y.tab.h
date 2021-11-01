/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TERMINATE = 258,
    START = 259,
    MAIN = 260,
    END = 261,
    COMMENT = 262,
    INPUT = 263,
    OUTPUT = 264,
    TYPE = 265,
    VARIABLE = 266,
    ASSIGNEMENT = 267,
    ENDOFSTATE = 268,
    INTEGER = 269,
    FLOAT = 270,
    CHARACTER = 271,
    WHETHER = 272,
    OTHERWISE = 273,
    FINISH_OF_STATEMENT = 274,
    OR = 275,
    AND = 276,
    NOT = 277,
    G = 278,
    GE = 279,
    L = 280,
    LE = 281,
    EQUAL = 282,
    MODULO = 283,
    EXPONENT = 284,
    MULTIPLICATION = 285,
    DIVISION = 286,
    PLUS = 287,
    MINUS = 288,
    RBRACE = 289,
    LBRACE = 290,
    LBRACKET = 291,
    RBRACKET = 292
  };
#endif
/* Tokens.  */
#define TERMINATE 258
#define START 259
#define MAIN 260
#define END 261
#define COMMENT 262
#define INPUT 263
#define OUTPUT 264
#define TYPE 265
#define VARIABLE 266
#define ASSIGNEMENT 267
#define ENDOFSTATE 268
#define INTEGER 269
#define FLOAT 270
#define CHARACTER 271
#define WHETHER 272
#define OTHERWISE 273
#define FINISH_OF_STATEMENT 274
#define OR 275
#define AND 276
#define NOT 277
#define G 278
#define GE 279
#define L 280
#define LE 281
#define EQUAL 282
#define MODULO 283
#define EXPONENT 284
#define MULTIPLICATION 285
#define DIVISION 286
#define PLUS 287
#define MINUS 288
#define RBRACE 289
#define LBRACE 290
#define LBRACKET 291
#define RBRACKET 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
