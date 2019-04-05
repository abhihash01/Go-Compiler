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

#ifndef YY_YY_A_TAB_H_INCLUDED
# define YY_YY_A_TAB_H_INCLUDED
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
    NL = 258,
    PACKAGE = 259,
    IMPORT = 260,
    TYP = 261,
    ID = 262,
    COLON = 263,
    NUMBER = 264,
    DOT = 265,
    COLEQU = 266,
    DOUBLE_QUOTE = 267,
    VAR = 268,
    STRUCT = 269,
    FUNC = 270,
    RETURN = 271,
    BREAK = 272,
    CONTINUE = 273,
    DPLUS = 274,
    DMINUS = 275,
    IF = 276,
    GREATER_THAN = 277,
    GREATER_THAN_EQUAL = 278,
    LESSER_THAN = 279,
    LESSER_THAN_EQUAL = 280,
    EQUALS = 281,
    ELSE = 282,
    NOT_EQUALS = 283,
    SS = 284,
    CO = 285,
    OPEN_FLOW = 286,
    CLOSE_FLOW = 287,
    OPEN_BRAC = 288,
    CLOSE_BRAC = 289,
    MAIN = 290,
    TYPE = 291,
    SQUA_OPEN = 292,
    SQUA_CLOSE = 293,
    PLUS = 294,
    MINUS = 295,
    MUL = 296,
    DIV = 297,
    MOD = 298,
    WHILE = 299,
    FOR = 300,
    EQUAL = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_A_TAB_H_INCLUDED  */
