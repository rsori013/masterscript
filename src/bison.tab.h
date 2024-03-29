/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    ARRAY = 259,
    INTEGERVAR = 260,
    ARRAYFILL = 261,
    RETURN = 262,
    SEMICOLON = 263,
    COMMA = 264,
    IF = 265,
    ELSE = 266,
    WHILE = 267,
    TRUE = 268,
    FALSE = 269,
    CONTINUE = 270,
    BREAK = 271,
    GET = 272,
    PRINT = 273,
    NOT = 274,
    COLON = 275,
    L_PAREN = 276,
    R_PAREN = 277,
    L_SQUARE_BRACKET = 278,
    R_SQUARE_BRACKET = 279,
    ASSIGN = 280,
    LBRACE = 281,
    RBRACE = 282,
    ADD = 283,
    SUB = 284,
    MULT = 285,
    DIV = 286,
    MOD = 287,
    EQ = 288,
    NEQ = 289,
    LT = 290,
    GT = 291,
    LTE = 292,
    GTE = 293,
    INTEGER = 294,
    IDENTIFIER = 295
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 255 "bison.y" /* yacc.c:1909  */

  char *op_val;
  struct CodeNode *node;

#line 100 "bison.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
