/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PYTHON_TAB_H_INCLUDED
# define YY_YY_PYTHON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AMPEREQUAL = 258,              /* AMPEREQUAL  */
    AND = 259,                     /* AND  */
    BREAK = 260,                   /* BREAK  */
    CIRCUMFLEXEQUAL = 261,         /* CIRCUMFLEXEQUAL  */
    CLASS = 262,                   /* CLASS  */
    CONTINUE = 263,                /* CONTINUE  */
    DEDENT = 264,                  /* DEDENT  */
    DEF = 265,                     /* DEF  */
    DOUBLESLASH = 266,             /* DOUBLESLASH  */
    DOUBLESLASHEQUAL = 267,        /* DOUBLESLASHEQUAL  */
    DOUBLESTAR = 268,              /* DOUBLESTAR  */
    DOUBLESTAREQUAL = 269,         /* DOUBLESTAREQUAL  */
    ELIF = 270,                    /* ELIF  */
    ENDMARKER = 271,               /* ENDMARKER  */
    EQEQUAL = 272,                 /* EQEQUAL  */
    FALSE = 273,                   /* FALSE  */
    FOR = 274,                     /* FOR  */
    GREATEREQUAL = 275,            /* GREATEREQUAL  */
    GLOBAL = 276,                  /* GLOBAL  */
    IF = 277,                      /* IF  */
    IN = 278,                      /* IN  */
    INDENT = 279,                  /* INDENT  */
    IS = 280,                      /* IS  */
    LEFTSHIFT = 281,               /* LEFTSHIFT  */
    LEFTSHIFTEQUAL = 282,          /* LEFTSHIFTEQUAL  */
    LESSEQUAL = 283,               /* LESSEQUAL  */
    MINEQUAL = 284,                /* MINEQUAL  */
    NEWLINE = 285,                 /* NEWLINE  */
    NONE = 286,                    /* NONE  */
    NOT = 287,                     /* NOT  */
    NOTEQUAL = 288,                /* NOTEQUAL  */
    OR = 289,                      /* OR  */
    PERCENTEQUAL = 290,            /* PERCENTEQUAL  */
    PLUSEQUAL = 291,               /* PLUSEQUAL  */
    RARROW = 292,                  /* RARROW  */
    RETURN = 293,                  /* RETURN  */
    RIGHTSHIFTEQUAL = 294,         /* RIGHTSHIFTEQUAL  */
    RIGHTSHIFT = 295,              /* RIGHTSHIFT  */
    SLASHEQUAL = 296,              /* SLASHEQUAL  */
    STAREQUAL = 297,               /* STAREQUAL  */
    TRUE = 298,                    /* TRUE  */
    VBAREQUAL = 299,               /* VBAREQUAL  */
    WHILE = 300,                   /* WHILE  */
    INT = 301,                     /* INT  */
    FLOAT = 302,                   /* FLOAT  */
    STR = 303,                     /* STR  */
    BOOL = 304,                    /* BOOL  */
    LIST = 305,                    /* LIST  */
    STRING = 306,                  /* STRING  */
    DUNDER = 307,                  /* DUNDER  */
    NAME = 308,                    /* NAME  */
    INTEGER = 309,                 /* INTEGER  */
    FLOAT_NUMBER = 310,            /* FLOAT_NUMBER  */
    ELSE = 311                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "python.y"

	struct ast_node *ast_node_info;
	struct terminal_node *terminal_node_info;

#line 125 "python.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PYTHON_TAB_H_INCLUDED  */
