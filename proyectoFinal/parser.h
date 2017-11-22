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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    INICIO = 258,
    NUMERAL = 259,
    INCLUDE = 260,
    LIBRERIA = 261,
    MAIN = 262,
    A_PARENTESIS = 263,
    C_PARENTESIS = 264,
    A_CORCHETE = 265,
    C_CORCHETE = 266,
    SI = 267,
    FIN_SI = 268,
    SI_NO_SI = 269,
    SI_NO = 270,
    FIN_SI_NO = 271,
    WHILE = 272,
    FIN_WHILE = 273,
    PARA = 274,
    FIN_PARA = 275,
    HACER = 276,
    FIN_HACER = 277,
    FUNCION = 278,
    FIN_FUNCION = 279,
    INCREMENTO = 280,
    DECREMENTO = 281,
    ASIGNADOR = 282,
    RETORNA = 283,
    TIP_NUMERICO = 284,
    TIP_CARACTER = 285,
    TIP_BOOL = 286,
    TIP_VACIO = 287,
    ENTERO = 288,
    REAL = 289,
    BOOLEANO = 290,
    CARACTER = 291,
    ID = 292,
    ASIG = 293,
    PCOMA = 294,
    DIFERENTE = 295,
    COMA = 296,
    IGUAL = 297,
    PUNTO = 298,
    MAYOR_IGUAL = 299,
    MENOR_IGUAL = 300,
    MAYOR = 301,
    MENOR = 302,
    LLAVE_IZ = 303,
    LLAVE_DE = 304,
    MAS = 305,
    MENOS = 306,
    POR = 307,
    ENTRE = 308,
    Y_LOGICO = 309,
    O_LOGICO = 310,
    FINAL = 311
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

#endif /* !YY_YY_PARSER_H_INCLUDED  */
