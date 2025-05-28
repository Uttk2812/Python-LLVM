/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "python.y"


#include <bits/stdc++.h>
using namespace std;
#include "ast.h"
#include "symtable.h"
#include "x86.h"

int yylex();
void yyerror(char *s);
extern FILE *yyin;
extern char *yytext;
extern int yylineno;

extern void init_stack();

extern struct symbol_table_node* symbol_table_head;

bool verbose_parser = false;
bool verbose_parser_empty = false;
struct ast_node *root = NULL;
vector<struct ast_node *> children;

void generate_dot_file(struct ast_node* root, string output_file);


#line 98 "python.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "python.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AMPEREQUAL = 3,                 /* AMPEREQUAL  */
  YYSYMBOL_AND = 4,                        /* AND  */
  YYSYMBOL_BREAK = 5,                      /* BREAK  */
  YYSYMBOL_CIRCUMFLEXEQUAL = 6,            /* CIRCUMFLEXEQUAL  */
  YYSYMBOL_CLASS = 7,                      /* CLASS  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DEDENT = 9,                     /* DEDENT  */
  YYSYMBOL_DEF = 10,                       /* DEF  */
  YYSYMBOL_DOUBLESLASH = 11,               /* DOUBLESLASH  */
  YYSYMBOL_DOUBLESLASHEQUAL = 12,          /* DOUBLESLASHEQUAL  */
  YYSYMBOL_DOUBLESTAR = 13,                /* DOUBLESTAR  */
  YYSYMBOL_DOUBLESTAREQUAL = 14,           /* DOUBLESTAREQUAL  */
  YYSYMBOL_ELIF = 15,                      /* ELIF  */
  YYSYMBOL_ENDMARKER = 16,                 /* ENDMARKER  */
  YYSYMBOL_EQEQUAL = 17,                   /* EQEQUAL  */
  YYSYMBOL_FALSE = 18,                     /* FALSE  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_GREATEREQUAL = 20,              /* GREATEREQUAL  */
  YYSYMBOL_GLOBAL = 21,                    /* GLOBAL  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_IN = 23,                        /* IN  */
  YYSYMBOL_INDENT = 24,                    /* INDENT  */
  YYSYMBOL_IS = 25,                        /* IS  */
  YYSYMBOL_LEFTSHIFT = 26,                 /* LEFTSHIFT  */
  YYSYMBOL_LEFTSHIFTEQUAL = 27,            /* LEFTSHIFTEQUAL  */
  YYSYMBOL_LESSEQUAL = 28,                 /* LESSEQUAL  */
  YYSYMBOL_MINEQUAL = 29,                  /* MINEQUAL  */
  YYSYMBOL_NEWLINE = 30,                   /* NEWLINE  */
  YYSYMBOL_NONE = 31,                      /* NONE  */
  YYSYMBOL_NOT = 32,                       /* NOT  */
  YYSYMBOL_NOTEQUAL = 33,                  /* NOTEQUAL  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_PERCENTEQUAL = 35,              /* PERCENTEQUAL  */
  YYSYMBOL_PLUSEQUAL = 36,                 /* PLUSEQUAL  */
  YYSYMBOL_RARROW = 37,                    /* RARROW  */
  YYSYMBOL_RETURN = 38,                    /* RETURN  */
  YYSYMBOL_RIGHTSHIFTEQUAL = 39,           /* RIGHTSHIFTEQUAL  */
  YYSYMBOL_RIGHTSHIFT = 40,                /* RIGHTSHIFT  */
  YYSYMBOL_SLASHEQUAL = 41,                /* SLASHEQUAL  */
  YYSYMBOL_STAREQUAL = 42,                 /* STAREQUAL  */
  YYSYMBOL_TRUE = 43,                      /* TRUE  */
  YYSYMBOL_VBAREQUAL = 44,                 /* VBAREQUAL  */
  YYSYMBOL_WHILE = 45,                     /* WHILE  */
  YYSYMBOL_INT = 46,                       /* INT  */
  YYSYMBOL_FLOAT = 47,                     /* FLOAT  */
  YYSYMBOL_STR = 48,                       /* STR  */
  YYSYMBOL_BOOL = 49,                      /* BOOL  */
  YYSYMBOL_LIST = 50,                      /* LIST  */
  YYSYMBOL_STRING = 51,                    /* STRING  */
  YYSYMBOL_DUNDER = 52,                    /* DUNDER  */
  YYSYMBOL_NAME = 53,                      /* NAME  */
  YYSYMBOL_INTEGER = 54,                   /* INTEGER  */
  YYSYMBOL_FLOAT_NUMBER = 55,              /* FLOAT_NUMBER  */
  YYSYMBOL_ELSE = 56,                      /* ELSE  */
  YYSYMBOL_57_ = 57,                       /* ';'  */
  YYSYMBOL_58_ = 58,                       /* ':'  */
  YYSYMBOL_59_ = 59,                       /* '='  */
  YYSYMBOL_60_ = 60,                       /* '('  */
  YYSYMBOL_61_ = 61,                       /* ')'  */
  YYSYMBOL_62_ = 62,                       /* ','  */
  YYSYMBOL_63_ = 63,                       /* '<'  */
  YYSYMBOL_64_ = 64,                       /* '>'  */
  YYSYMBOL_65_ = 65,                       /* '|'  */
  YYSYMBOL_66_ = 66,                       /* '^'  */
  YYSYMBOL_67_ = 67,                       /* '&'  */
  YYSYMBOL_68_ = 68,                       /* '+'  */
  YYSYMBOL_69_ = 69,                       /* '-'  */
  YYSYMBOL_70_ = 70,                       /* '*'  */
  YYSYMBOL_71_ = 71,                       /* '/'  */
  YYSYMBOL_72_ = 72,                       /* '%'  */
  YYSYMBOL_73_ = 73,                       /* '~'  */
  YYSYMBOL_74_ = 74,                       /* '.'  */
  YYSYMBOL_75_ = 75,                       /* '['  */
  YYSYMBOL_76_ = 76,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 77,                  /* $accept  */
  YYSYMBOL_file_input = 78,                /* file_input  */
  YYSYMBOL_stmt_OR_NEWLINE_seq = 79,       /* stmt_OR_NEWLINE_seq  */
  YYSYMBOL_stmt = 80,                      /* stmt  */
  YYSYMBOL_simple_stmt = 81,               /* simple_stmt  */
  YYSYMBOL_SEMICOLON_small_stmt_seq = 82,  /* SEMICOLON_small_stmt_seq  */
  YYSYMBOL_small_stmt = 83,                /* small_stmt  */
  YYSYMBOL_expr_stmt = 84,                 /* expr_stmt  */
  YYSYMBOL_augassign_expr = 85,            /* augassign_expr  */
  YYSYMBOL_assign_expr = 86,               /* assign_expr  */
  YYSYMBOL_flow_stmt = 87,                 /* flow_stmt  */
  YYSYMBOL_return_stmt = 88,               /* return_stmt  */
  YYSYMBOL_compound_stmt = 89,             /* compound_stmt  */
  YYSYMBOL_if_stmt = 90,                   /* if_stmt  */
  YYSYMBOL_while_stmt = 91,                /* while_stmt  */
  YYSYMBOL_for_stmt = 92,                  /* for_stmt  */
  YYSYMBOL_funcdef = 93,                   /* funcdef  */
  YYSYMBOL_parameters = 94,                /* parameters  */
  YYSYMBOL_arglist = 95,                   /* arglist  */
  YYSYMBOL_COMMA_argument_seq = 96,        /* COMMA_argument_seq  */
  YYSYMBOL_argument = 97,                  /* argument  */
  YYSYMBOL_classdef = 98,                  /* classdef  */
  YYSYMBOL_elif_seq = 99,                  /* elif_seq  */
  YYSYMBOL_suite = 100,                    /* suite  */
  YYSYMBOL_stmt_seq = 101,                 /* stmt_seq  */
  YYSYMBOL_test = 102,                     /* test  */
  YYSYMBOL_and_test = 103,                 /* and_test  */
  YYSYMBOL_not_test = 104,                 /* not_test  */
  YYSYMBOL_comparison = 105,               /* comparison  */
  YYSYMBOL_expr = 106,                     /* expr  */
  YYSYMBOL_xor_expr = 107,                 /* xor_expr  */
  YYSYMBOL_and_expr = 108,                 /* and_expr  */
  YYSYMBOL_shift_expr = 109,               /* shift_expr  */
  YYSYMBOL_arith_expr = 110,               /* arith_expr  */
  YYSYMBOL_term = 111,                     /* term  */
  YYSYMBOL_factor = 112,                   /* factor  */
  YYSYMBOL_power = 113,                    /* power  */
  YYSYMBOL_atom_expr = 114,                /* atom_expr  */
  YYSYMBOL_trailer = 115,                  /* trailer  */
  YYSYMBOL_atom = 116,                     /* atom  */
  YYSYMBOL_exprlist = 117,                 /* exprlist  */
  YYSYMBOL_COMMA_expr_seq = 118,           /* COMMA_expr_seq  */
  YYSYMBOL_testlist = 119,                 /* testlist  */
  YYSYMBOL_COMMA_test_seq = 120,           /* COMMA_test_seq  */
  YYSYMBOL_NAME_DUNDER = 121               /* NAME_DUNDER  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   726

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    72,    67,     2,
      60,    61,    70,    68,    62,    69,    74,    71,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    57,
      63,    59,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    65,     2,    73,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,    95,   103,   109,   116,   123,   129,   137,   144,
     152,   159,   166,   172,   179,   186,   202,   208,   215,   222,
     229,   236,   243,   250,   257,   264,   271,   278,   285,   292,
     304,   310,   318,   324,   330,   337,   343,   351,   357,   363,
     369,   375,   382,   391,   403,   410,   419,   428,   437,   444,
     452,   459,   467,   474,   481,   488,   495,   505,   515,   529,
     543,   550,   556,   564,   571,   579,   585,   594,   600,   608,
     615,   622,   628,   635,   642,   649,   656,   663,   672,   678,
     687,   693,   702,   708,   717,   723,   730,   739,   745,   752,
     760,   766,   773,   780,   787,   795,   802,   809,   816,   823,
     829,   837,   843,   850,   858,   865,   871,   878,   886,   892,
     898,   904,   911,   917,   928,   938,   948,   955,   963,   971,
     978,   985,   992,   999,  1006,  1013,  1021,  1028,  1035,  1042,
    1050,  1057,  1064,  1072
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AMPEREQUAL", "AND",
  "BREAK", "CIRCUMFLEXEQUAL", "CLASS", "CONTINUE", "DEDENT", "DEF",
  "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR", "DOUBLESTAREQUAL",
  "ELIF", "ENDMARKER", "EQEQUAL", "FALSE", "FOR", "GREATEREQUAL", "GLOBAL",
  "IF", "IN", "INDENT", "IS", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESSEQUAL",
  "MINEQUAL", "NEWLINE", "NONE", "NOT", "NOTEQUAL", "OR", "PERCENTEQUAL",
  "PLUSEQUAL", "RARROW", "RETURN", "RIGHTSHIFTEQUAL", "RIGHTSHIFT",
  "SLASHEQUAL", "STAREQUAL", "TRUE", "VBAREQUAL", "WHILE", "INT", "FLOAT",
  "STR", "BOOL", "LIST", "STRING", "DUNDER", "NAME", "INTEGER",
  "FLOAT_NUMBER", "ELSE", "';'", "':'", "'='", "'('", "')'", "','", "'<'",
  "'>'", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "'~'",
  "'.'", "'['", "']'", "$accept", "file_input", "stmt_OR_NEWLINE_seq",
  "stmt", "simple_stmt", "SEMICOLON_small_stmt_seq", "small_stmt",
  "expr_stmt", "augassign_expr", "assign_expr", "flow_stmt", "return_stmt",
  "compound_stmt", "if_stmt", "while_stmt", "for_stmt", "funcdef",
  "parameters", "arglist", "COMMA_argument_seq", "argument", "classdef",
  "elif_seq", "suite", "stmt_seq", "test", "and_test", "not_test",
  "comparison", "expr", "xor_expr", "and_expr", "shift_expr", "arith_expr",
  "term", "factor", "power", "atom_expr", "trailer", "atom", "exprlist",
  "COMMA_expr_seq", "testlist", "COMMA_test_seq", "NAME_DUNDER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-170)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -170,    30,   175,  -170,  -170,   -11,  -170,     4,  -170,  -170,
     614,   575,  -170,  -170,   575,   575,  -170,   575,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,   497,   614,
     614,   614,   458,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,    13,    34,  -170,
       1,     6,     0,    15,     5,   -20,    -3,  -170,  -170,    50,
     -23,   667,  -170,   -36,    12,     6,    60,   -19,  -170,  -170,
     -18,  -170,    23,  -170,  -170,  -170,  -170,    10,   -21,   575,
      25,   575,   614,   614,   614,   614,   614,   614,   614,   614,
     614,   614,   614,   614,   614,   614,   614,   614,   614,   614,
     536,     4,   575,  -170,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   366,   -41,
       9,   -26,    26,   575,   366,   366,  -170,  -170,  -170,   419,
      34,   575,  -170,     6,     6,     6,     6,     6,     6,     0,
      15,     5,   -20,   -20,    -3,    -3,  -170,  -170,  -170,  -170,
    -170,  -170,    29,   -47,    21,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,   -24,  -170,    40,
      76,  -170,  -170,    41,    45,  -170,    43,  -170,    47,   575,
     366,   614,    49,  -170,  -170,  -170,  -170,    13,  -170,  -170,
    -170,   575,   313,    51,   366,  -170,    46,   575,   -17,  -170,
       6,   366,    -1,    13,  -170,   366,  -170,     4,    13,   366,
    -170,   575,    52,   244,  -170,  -170,  -170,   -15,   366,  -170,
    -170,   366,  -170,  -170
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,    32,     0,    33,     0,     2,   118,
       0,     0,     3,   116,     0,    35,   117,     0,   119,   120,
     121,   122,   123,   115,   133,   132,   113,   114,     0,     0,
       0,     0,     0,     4,     6,    11,    12,    16,    17,    13,
      34,     7,    37,    38,    39,    40,    41,   131,    65,    67,
      70,    71,    78,    80,    82,    84,    87,    90,    98,    99,
     104,    30,   112,     0,     0,   127,     0,     0,    69,    36,
       0,   108,     0,    95,    96,    97,   110,     0,     0,     0,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,   109,   111,     8,     0,
      66,   129,    68,    74,    75,    76,    77,    72,    73,    79,
      81,    83,    85,    86,    88,    89,    94,    91,    92,    93,
     100,   105,     0,   102,     0,    23,    25,    29,    28,    26,
      19,    22,    18,    27,    21,    20,    24,    14,    31,    30,
       0,    61,    56,     0,     0,    48,     0,    53,    55,     0,
       0,   125,     0,    60,    44,     9,    10,   130,   106,   103,
     107,     0,     0,     0,     0,    49,    50,     0,     0,    47,
     126,     0,    42,    15,    64,     0,    57,    51,    54,     0,
      45,     0,     0,     0,    58,    52,    46,     0,     0,    62,
      63,     0,    43,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,  -170,  -169,    -2,  -170,   -16,  -170,  -170,    -6,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
     -95,  -170,  -170,  -120,  -170,   -10,    35,    -8,  -170,    -7,
      28,    48,    27,   -38,   -35,    -4,  -170,  -170,   -34,  -170,
    -170,  -170,    18,  -170,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    33,   171,    78,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,   121,   176,   196,
     177,    46,   202,   172,   213,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,   103,    60,
      66,   122,    61,    80,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    67,    64,    65,   183,   184,    68,    70,    95,   128,
      79,   179,   173,   100,   211,    79,    79,    79,    82,    79,
     174,    83,   118,   204,   119,    73,    74,    75,   102,    84,
       3,    91,   180,    69,    85,   191,   129,   100,    81,   124,
     125,   209,    63,   221,   220,    92,    72,    79,    93,    94,
      77,   101,   102,   142,   143,   212,    24,    25,   144,   145,
     199,    24,    25,    99,    86,    87,    89,    96,    97,    98,
     175,    88,   120,   132,   206,   133,   134,   135,   136,   137,
     138,   210,    90,   123,   126,   214,   127,   131,   181,   216,
     188,   146,   147,   148,   149,   150,   153,   190,   222,   117,
     192,   223,   193,   194,   195,   197,   167,   201,   207,   205,
     218,   168,   215,   186,   130,   178,   139,   141,   152,   189,
     154,   187,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,     0,   169,     0,   140,     0,     0,
       0,   182,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
       4,   203,     5,     6,     0,     7,     0,   208,     0,     0,
      34,     8,     0,     9,    10,     0,     0,    11,     0,     0,
       0,   217,   178,     0,     0,    12,    13,    14,     0,     0,
       0,    34,     0,    15,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,     0,    31,     4,
      32,     5,     6,   219,     7,     0,     0,     0,     0,     0,
       0,     0,     9,    10,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,    16,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,    31,     4,    32,
       5,     6,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     9,    10,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     4,     0,    28,     6,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     9,     0,    31,     0,    32,     0,
       0,     0,     0,     0,     0,     0,   170,    13,    14,     0,
       0,     0,     0,     0,    15,     0,     0,     0,     0,    16,
       0,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     4,     0,    28,     6,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     9,     0,    31,
       0,    32,     0,     0,     0,     0,     0,     0,     0,   185,
      13,    14,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,    16,     0,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     9,     0,     0,    28,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    13,
      14,     0,    31,     0,    32,     0,     0,     0,     0,     0,
       0,    16,     0,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     9,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    13,    14,
       0,    31,     0,    32,    76,     0,     0,     0,     0,     0,
      16,     0,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     9,     0,     0,    28,    71,     0,
       0,     0,     0,     0,     0,    29,    30,    13,    14,     0,
      31,     0,    32,     0,     0,     0,     0,     0,     0,    16,
       0,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     9,     0,     0,    28,   151,     0,     0,
       0,     0,     0,     0,    29,    30,    13,    14,     0,    31,
       0,    32,     0,     0,     0,     0,     0,     0,    16,     0,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     9,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    13,     0,     0,    31,     0,
      32,     0,     0,     0,     0,     0,     0,    16,     0,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     104,     0,     0,   105,    28,     0,     0,     0,     0,   106,
       0,   107,    29,    30,     0,     0,     0,    31,     0,    32,
       0,     0,     0,     0,   108,     0,   109,     0,     0,     0,
       0,     0,   110,   111,     0,     0,   112,     0,   113,   114,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,   117
};

static const yytype_int16 yycheck[] =
{
       2,    11,     7,    10,   124,   125,    14,    17,    11,    30,
      34,    37,    53,    60,    15,    34,    34,    34,    17,    34,
      61,    20,    58,   192,    60,    29,    30,    31,    75,    28,
       0,    26,    58,    15,    33,    59,    57,    60,     4,    58,
      58,    58,    53,    58,   213,    40,    28,    34,    68,    69,
      32,    74,    75,    91,    92,    56,    52,    53,    93,    94,
     180,    52,    53,    13,    63,    64,    66,    70,    71,    72,
      61,    65,    60,    81,   194,    82,    83,    84,    85,    86,
      87,   201,    67,    23,    61,   205,    76,    62,    62,   209,
      61,    95,    96,    97,    98,    99,   101,    76,   218,    59,
      24,   221,    61,    58,    61,    58,   116,    58,    62,    58,
      58,   117,   207,   129,    79,   120,    88,    90,   100,   153,
     102,   131,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,   117,    -1,    89,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,
       5,   191,     7,     8,    -1,    10,    -1,   197,    -1,    -1,
     192,    16,    -1,    18,    19,    -1,    -1,    22,    -1,    -1,
      -1,   211,   207,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,   213,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    73,     5,
      75,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    73,     5,    75,
       7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,     5,    -1,    60,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    -1,    18,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,     5,    -1,    60,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    -1,    18,    -1,    73,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    18,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    31,
      32,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    18,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    31,    32,
      -1,    73,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    18,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    31,    32,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    18,    -1,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    31,    32,    -1,    73,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    18,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    31,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       3,    -1,    -1,     6,    60,    -1,    -1,    -1,    -1,    12,
      -1,    14,    68,    69,    -1,    -1,    -1,    73,    -1,    75,
      -1,    -1,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    -1,    39,    -1,    41,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    78,    79,     0,     5,     7,     8,    10,    16,    18,
      19,    22,    30,    31,    32,    38,    43,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    60,    68,
      69,    73,    75,    80,    81,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    98,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     116,   119,   121,    53,   121,   106,   117,   102,   104,   119,
     102,    61,   119,   112,   112,   112,    76,   119,    82,    34,
     120,     4,    17,    20,    28,    33,    63,    64,    65,    66,
      67,    26,    40,    68,    69,    11,    70,    71,    72,    13,
      60,    74,    75,   115,     3,     6,    12,    14,    27,    29,
      35,    36,    39,    41,    42,    44,    58,    59,    58,    60,
      60,    94,   118,    23,    58,    58,    61,    76,    30,    57,
     103,    62,   104,   106,   106,   106,   106,   106,   106,   107,
     108,   109,   110,   110,   111,   111,   112,   112,   112,   112,
     112,    61,   119,   121,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   102,    86,   119,
      30,    81,   100,    53,    61,    61,    95,    97,   121,    37,
      58,    62,   119,   100,   100,    30,    83,   102,    61,   115,
      76,    59,    24,    61,    58,    61,    96,    58,   102,   100,
     106,    58,    99,   102,    80,    58,   100,    62,   102,    58,
     100,    15,    56,   101,   100,    97,   100,   102,    58,     9,
      80,    58,   100,   100
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    77,    78,    79,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    87,    87,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    91,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   109,   110,   110,   110,
     111,   111,   111,   111,   111,   112,   112,   112,   112,   113,
     113,   114,   114,   114,   114,   115,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     1,     1,     3,     4,
       3,     0,     1,     1,     3,     5,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     5,     8,     4,     6,     7,     5,     2,     3,
       2,     3,     3,     0,     3,     1,     4,     6,     7,     5,
       0,     1,     5,     2,     0,     1,     3,     1,     3,     2,
       1,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     2,     2,     2,     1,     1,
       3,     2,     3,     4,     1,     2,     3,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     3,     0,     2,     3,
       3,     0,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* file_input: stmt_OR_NEWLINE_seq ENDMARKER  */
#line 95 "python.y"
                                                                                                                        {		
																					// printf("Parsed successfully\n");
																					(yyval.ast_node_info) = (yyvsp[-1].ast_node_info);
																					root = (yyval.ast_node_info);
																					return -1;
																				}
#line 1478 "python.tab.c"
    break;

  case 3: /* stmt_OR_NEWLINE_seq: stmt_OR_NEWLINE_seq NEWLINE  */
#line 103 "python.y"
                                                                                                                {
																					if(verbose_parser)
																						printf("stmt_OR_NEWLINE_seq -> stmt_OR_NEWLINE_seq NEWLINE\n");  
																					(yyval.ast_node_info) = (yyvsp[-1].ast_node_info);
																				}
#line 1488 "python.tab.c"
    break;

  case 4: /* stmt_OR_NEWLINE_seq: stmt_OR_NEWLINE_seq stmt  */
#line 109 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("stmt_OR_NEWLINE_seq -> stmt_OR_NEWLINE_seq stmt\n");  
																					children = {(yyvsp[-1].ast_node_info),(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node(LINE_IRRELEVANT,"","","stmt_OR_NEWLINE_seq",children);
																				}
#line 1499 "python.tab.c"
    break;

  case 5: /* stmt_OR_NEWLINE_seq: %empty  */
#line 116 "python.y"
                                                                                                                                                        {
																					if(verbose_parser_empty)
																						printf("stmt_OR_NEWLINE_seq -> empty\n"); 
																					(yyval.ast_node_info) = NULL;
																				}
#line 1509 "python.tab.c"
    break;

  case 6: /* stmt: simple_stmt  */
#line 123 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("stmt -> simple_stmt\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1519 "python.tab.c"
    break;

  case 7: /* stmt: compound_stmt  */
#line 129 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("stmt -> compound_stmt\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1529 "python.tab.c"
    break;

  case 8: /* simple_stmt: small_stmt SEMICOLON_small_stmt_seq NEWLINE  */
#line 137 "python.y"
                                                                                                {
																					if(verbose_parser) 
																						printf("simple_stmt -> small_stmt SEMICOLON_small_stmt_seq NEWLINE\n");
																					children = {(yyvsp[-2].ast_node_info),(yyvsp[-1].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num,"","","simple_stmt",children);
																				}
#line 1540 "python.tab.c"
    break;

  case 9: /* simple_stmt: small_stmt SEMICOLON_small_stmt_seq ';' NEWLINE  */
#line 144 "python.y"
                                                                                                                {
																					if(verbose_parser)
																						printf("simple_stmt -> small_stmt SEMICOLON_small_stmt_seq ';' NEWLINE\n");
																					children = {(yyvsp[-3].ast_node_info),(yyvsp[-2].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-3].ast_node_info)->line_num,"","","simple_stmt",children);
																				}
#line 1551 "python.tab.c"
    break;

  case 10: /* SEMICOLON_small_stmt_seq: SEMICOLON_small_stmt_seq ';' small_stmt  */
#line 152 "python.y"
                                                                                                {
																					if(verbose_parser)
																						printf("SEMICOLON_small_stmt_seq -> SEMICOLON_small_stmt_seq ';' small_stmt\n");
																					children = {(yyvsp[-2].ast_node_info),(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","","SEMICOLON_small_stmt_seq",children);
																				}
#line 1562 "python.tab.c"
    break;

  case 11: /* SEMICOLON_small_stmt_seq: %empty  */
#line 159 "python.y"
                                                                                                                                                        {
																					if(verbose_parser_empty)
																						printf("SEMICOLON_small_stmt_seq -> empty\n");
																					(yyval.ast_node_info) = NULL;
																				}
#line 1572 "python.tab.c"
    break;

  case 12: /* small_stmt: expr_stmt  */
#line 166 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("small_stmt -> expr_stmt\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1582 "python.tab.c"
    break;

  case 13: /* small_stmt: flow_stmt  */
#line 172 "python.y"
                                                                                                                                                {
																					if(verbose_parser) 
																						printf("small_stmt -> flow_stmt\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1592 "python.tab.c"
    break;

  case 14: /* expr_stmt: testlist ':' test  */
#line 179 "python.y"
                                                                                                                                        {	
																					if(verbose_parser)
																						printf("expr_stmt 1 found\n");
																					children = {(yyvsp[-2].ast_node_info),(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"",":","expr_stmt",children);
																				}
#line 1603 "python.tab.c"
    break;

  case 15: /* expr_stmt: testlist ':' test '=' test  */
#line 186 "python.y"
                                                                                                                                {	
																					if(verbose_parser)
																						printf("expr_stmt 1 found\n");
																						/*
																						expr_stmt(=)
																							/		\
																						   :		test   <---- children
																						  /	\
																			testlist  test   <---- children_1       

																						*/
																					vector<struct ast_node *> children_1 = {(yyvsp[-4].ast_node_info),(yyvsp[-2].ast_node_info)};
																					children = {new_ast_node((yyvsp[-2].ast_node_info)->line_num,"",":","expr_stmt",children_1),(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num,"","ASSIGNMENT OPERATOR: =","expr_stmt",children);
																				}
#line 1623 "python.tab.c"
    break;

  case 16: /* expr_stmt: augassign_expr  */
#line 202 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("expr_stmt -> augassign_expr\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1633 "python.tab.c"
    break;

  case 17: /* expr_stmt: assign_expr  */
#line 208 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("expr_stmt -> assign_expr\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1643 "python.tab.c"
    break;

  case 18: /* augassign_expr: testlist PLUSEQUAL testlist  */
#line 215 "python.y"
                                                                                                                {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '+=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: +=", "", children);
																				}
#line 1654 "python.tab.c"
    break;

  case 19: /* augassign_expr: testlist MINEQUAL testlist  */
#line 222 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '-=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: -=", "", children);
																				}
#line 1665 "python.tab.c"
    break;

  case 20: /* augassign_expr: testlist STAREQUAL testlist  */
#line 229 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '*=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: *=", "", children);
																				}
#line 1676 "python.tab.c"
    break;

  case 21: /* augassign_expr: testlist SLASHEQUAL testlist  */
#line 236 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '/=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: /=", "", children);
																				}
#line 1687 "python.tab.c"
    break;

  case 22: /* augassign_expr: testlist PERCENTEQUAL testlist  */
#line 243 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '%%=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: %=", "", children);
																				}
#line 1698 "python.tab.c"
    break;

  case 23: /* augassign_expr: testlist AMPEREQUAL testlist  */
#line 250 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '&=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: &=", "", children);
																				}
#line 1709 "python.tab.c"
    break;

  case 24: /* augassign_expr: testlist VBAREQUAL testlist  */
#line 257 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '|=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: |=", "", children);
																				}
#line 1720 "python.tab.c"
    break;

  case 25: /* augassign_expr: testlist CIRCUMFLEXEQUAL testlist  */
#line 264 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '^=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: ^=", "", children);
																				}
#line 1731 "python.tab.c"
    break;

  case 26: /* augassign_expr: testlist LEFTSHIFTEQUAL testlist  */
#line 271 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '<<=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: <<=", "", children);
																				}
#line 1742 "python.tab.c"
    break;

  case 27: /* augassign_expr: testlist RIGHTSHIFTEQUAL testlist  */
#line 278 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '>>=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: >>=", "", children);
																				}
#line 1753 "python.tab.c"
    break;

  case 28: /* augassign_expr: testlist DOUBLESTAREQUAL testlist  */
#line 285 "python.y"
                                                                                                                        {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '**=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: **=", "", children);
																				}
#line 1764 "python.tab.c"
    break;

  case 29: /* augassign_expr: testlist DOUBLESLASHEQUAL testlist  */
#line 292 "python.y"
                                                                                                                        {
																					if(verbose_parser)
																						printf("augassign_expr -> testlist '//=' testlist\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: //=", "", children);
																				}
#line 1775 "python.tab.c"
    break;

  case 30: /* assign_expr: testlist  */
#line 304 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("assign_expr -> testlist\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1785 "python.tab.c"
    break;

  case 31: /* assign_expr: testlist '=' assign_expr  */
#line 310 "python.y"
                                                                                                                                        {
																					if(verbose_parser_empty)
																						printf("assign_expr -> testlist '=' assign_expr\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ASSIGNMENT OPERATOR: =", "", children);
																				}
#line 1796 "python.tab.c"
    break;

  case 32: /* flow_stmt: BREAK  */
#line 318 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("flow_stmt -> BREAK\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"BREAK","break","",no_child);
																				}
#line 1806 "python.tab.c"
    break;

  case 33: /* flow_stmt: CONTINUE  */
#line 324 "python.y"
                                                                                                                                                        {
																					if(verbose_parser) 
																						printf("flow_stmt -> CONTINUE\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"CONTINUE","continue","",no_child);
																				}
#line 1816 "python.tab.c"
    break;

  case 34: /* flow_stmt: return_stmt  */
#line 330 "python.y"
                                                                                                                                                {
																					if(verbose_parser) 
																						printf("flow_stmt -> return_stmt\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1826 "python.tab.c"
    break;

  case 35: /* return_stmt: RETURN  */
#line 337 "python.y"
                                                                                                                                        {
																					if(verbose_parser) 
																						printf("return_stmt -> RETURN\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"RETURN","return","",no_child);
																				}
#line 1836 "python.tab.c"
    break;

  case 36: /* return_stmt: RETURN testlist  */
#line 343 "python.y"
                                                                                                                                                {
																					if(verbose_parser) 
																						printf("return_stmt -> RETURN testlist\n");
																					children = {(yyvsp[0].ast_node_info)};
																				 	(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","return","return_stmt",children);
																				}
#line 1847 "python.tab.c"
    break;

  case 37: /* compound_stmt: if_stmt  */
#line 351 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("compound_stmt -> if_stmt\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1857 "python.tab.c"
    break;

  case 38: /* compound_stmt: while_stmt  */
#line 357 "python.y"
                                                                                                                                                {
																					if(verbose_parser) 
																						printf("compound_stmt -> while_stmt\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1867 "python.tab.c"
    break;

  case 39: /* compound_stmt: for_stmt  */
#line 363 "python.y"
                                                                                                                                                        {
																					if(verbose_parser)
																						printf("compound_stmt -> for_stmt\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1877 "python.tab.c"
    break;

  case 40: /* compound_stmt: funcdef  */
#line 369 "python.y"
                                                                                                                                                        {
																					if(verbose_parser)
																						printf("compound_stmt -> funcdef\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1887 "python.tab.c"
    break;

  case 41: /* compound_stmt: classdef  */
#line 375 "python.y"
                                                                                                                                                        {
																					if(verbose_parser)
																						printf("compound_stmt -> classdef\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 1897 "python.tab.c"
    break;

  case 42: /* if_stmt: IF test ':' suite elif_seq  */
#line 382 "python.y"
                                                                                                                        {
																					if(verbose_parser)
																						printf("if_stmt -> IF test ':' suite elif_seq\n");
																					children = {(yyvsp[-3].ast_node_info), (yyvsp[-1].ast_node_info)};
																					struct ast_node *temp = new_ast_node((yyvsp[-3].ast_node_info)->line_num,"", "if", "if_stmt", children);
																					children = {temp, (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-3].ast_node_info)->line_num,"","if_stmt","if_stmt",children);
																				}
#line 1910 "python.tab.c"
    break;

  case 43: /* if_stmt: IF test ':' suite elif_seq ELSE ':' suite  */
#line 391 "python.y"
                                                                                                                        {
																					if(verbose_parser) 
																						printf("if_stmt -> IF test ':' suite elif_seq ELSE ':' suite\n");
																					children = {(yyvsp[-6].ast_node_info), (yyvsp[-4].ast_node_info)};
																					struct ast_node *temp1 = new_ast_node((yyvsp[-6].ast_node_info)->line_num,"", "if", "if_stmt", children);
																					children = {(yyvsp[0].ast_node_info)};
																					struct ast_node *temp2 = new_ast_node((yyvsp[-2].terminal_node_info)->line_num,"", "else", "if_stmt", children);
																					children = {temp1, (yyvsp[-3].ast_node_info), temp2};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-6].ast_node_info)->line_num,"","if_stmt","if_stmt",children);
																				}
#line 1925 "python.tab.c"
    break;

  case 44: /* while_stmt: WHILE test ':' suite  */
#line 403 "python.y"
                                                                                                                                {
																					if(verbose_parser) 
																						printf("while_stmt -> WHILE test ':' suite\n");
																					children = {(yyvsp[-2].ast_node_info),(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num,"","while","while_stmt",children);
																				}
#line 1936 "python.tab.c"
    break;

  case 45: /* for_stmt: FOR exprlist IN testlist ':' suite  */
#line 410 "python.y"
                                                                                                                {
																					if(verbose_parser) 
																						printf("for_stmt -> FOR exprlist IN testlist ':' suite\n");
																					children = {new_ast_node((yyvsp[-4].ast_node_info)->line_num,"FOR","for","",no_child),(yyvsp[-4].ast_node_info),
																								new_ast_node((yyvsp[-4].ast_node_info)->line_num,"IN","in","",no_child),(yyvsp[-2].ast_node_info),(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-4].ast_node_info)->line_num,"","for_stmt","for_stmt",children);
																				}
#line 1948 "python.tab.c"
    break;

  case 46: /* funcdef: DEF NAME_DUNDER parameters RARROW test ':' suite  */
#line 419 "python.y"
                                                                                                        {
																					if(verbose_parser) 
																						printf("funcdef -> DEF NAME_DUNDER parameters RARROW test ':' suite\n");
																					((yyvsp[-2].ast_node_info)->text2print) = "return type: " + ((yyvsp[-2].ast_node_info)->text2print);
																					children = {(yyvsp[-4].ast_node_info),(yyvsp[0].ast_node_info),(yyvsp[-2].ast_node_info)};
																					string str = "function\n" + ((yyvsp[-5].ast_node_info)->text2print);
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-5].ast_node_info)->line_num,(yyvsp[-5].ast_node_info)->nonterminal,str,"funcdef",children);
																				}
#line 1961 "python.tab.c"
    break;

  case 47: /* funcdef: DEF NAME_DUNDER parameters ':' suite  */
#line 428 "python.y"
                                                                                                                        {
																					if(verbose_parser) 
																						printf("funcdef -> DEF NAME_DUNDER parameters ':' suite\n");
																					children = {(yyvsp[-2].ast_node_info),(yyvsp[0].ast_node_info)};
																					string str = "function\n" + ((yyvsp[-3].ast_node_info)->text2print);
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-3].ast_node_info)->line_num,(yyvsp[-3].ast_node_info)->nonterminal,str,"funcdef",children);
																				}
#line 1973 "python.tab.c"
    break;

  case 48: /* parameters: '(' ')'  */
#line 437 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("parameters -> '(' ')'\n");
																					children = {new_ast_node(yylineno,"", "No Parameter","",no_child)};
																					(yyval.ast_node_info) = new_ast_node(yylineno,"","parameters","parameters",children);
																				}
#line 1984 "python.tab.c"
    break;

  case 49: /* parameters: '(' arglist ')'  */
#line 444 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("parameters -> '(' arglist ')'\n");
																					children = {(yyvsp[-1].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-1].ast_node_info)->line_num,"","parameters","parameters",children);
																				}
#line 1995 "python.tab.c"
    break;

  case 50: /* arglist: argument COMMA_argument_seq  */
#line 452 "python.y"
                                                                                                                        {
																					if(verbose_parser)
																						printf("arglist -> argument COMMA_argument_seq\n");
																					children = {(yyvsp[-1].ast_node_info),(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-1].ast_node_info)->line_num,"","","arglist",children);
																				}
#line 2006 "python.tab.c"
    break;

  case 51: /* arglist: argument COMMA_argument_seq ','  */
#line 459 "python.y"
                                                                                                                                {
																					if(verbose_parser) 
																						printf("arglist -> argument COMMA_argument_seq ','\n");
																					children = {(yyvsp[-2].ast_node_info),(yyvsp[-1].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num,"","","arglist",children);
																				}
#line 2017 "python.tab.c"
    break;

  case 52: /* COMMA_argument_seq: COMMA_argument_seq ',' argument  */
#line 467 "python.y"
                                                                                                                {
																					if(verbose_parser)
																						printf("COMMA_argument_seq -> COMMA_argument_seq ',' argument\n");
																					children = {(yyvsp[-2].ast_node_info),(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","","COMMA_argument_seq",children);
																				}
#line 2028 "python.tab.c"
    break;

  case 53: /* COMMA_argument_seq: %empty  */
#line 474 "python.y"
                                                                                                                                                        {
																					if(verbose_parser_empty)
																						printf("COMMA_argument_seq -> empty\n");
																					(yyval.ast_node_info) = NULL;
																				}
#line 2038 "python.tab.c"
    break;

  case 54: /* argument: NAME_DUNDER ':' test  */
#line 481 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("argument -> NAME_DUNDER ':' test\n");
																					children = {(yyvsp[-2].ast_node_info),(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num,"",":","argument",children);
																				}
#line 2049 "python.tab.c"
    break;

  case 55: /* argument: NAME_DUNDER  */
#line 488 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("argument -> NAME_DUNDER\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 2059 "python.tab.c"
    break;

  case 56: /* classdef: CLASS NAME ':' suite  */
#line 495 "python.y"
                                                                                                                                {	
																					if(verbose_parser)
																						printf("classdef -> CLASS NAME ':' suite\n");
																					children = {(yyvsp[0].ast_node_info)};
																					string str = "class\n";
																					str += "NAME: ";
																					str += ((yyvsp[-2].terminal_node_info)->lexeme);
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].terminal_node_info)->line_num,(yyvsp[-2].terminal_node_info)->lexeme,str,"classdef",children);
																				}
#line 2073 "python.tab.c"
    break;

  case 57: /* classdef: CLASS NAME '(' ')' ':' suite  */
#line 505 "python.y"
                                                                                                                                {	
																					if(verbose_parser)
																						printf("classdef -> CLASS NAME '(' ')' ':' suite\n");
																					children = {(yyvsp[0].ast_node_info)};
																					string str = "class\n";
																					str += "NAME: ";
																					str += ((yyvsp[-4].terminal_node_info)->lexeme);
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-4].terminal_node_info)->line_num,(yyvsp[-4].terminal_node_info)->lexeme,str,"classdef",children);	
																				}
#line 2087 "python.tab.c"
    break;

  case 58: /* classdef: CLASS NAME '(' NAME ')' ':' suite  */
#line 515 "python.y"
                                                                                                                        {
																					if(verbose_parser)
																						printf("classdef -> CLASS NAME '(' NAME ')' ':' suite\n");
																					string str = "class\n";
																					str += "NAME: ";
																					str += ((yyvsp[-5].terminal_node_info)->lexeme);
																					str += "\nInherited from class\n";
																					str += "NAME: ";
																					str += ((yyvsp[-3].terminal_node_info)->lexeme);
																					children = {(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-5].terminal_node_info)->line_num,(yyvsp[-5].terminal_node_info)->lexeme,str,"classdef",children);
																				}
#line 2104 "python.tab.c"
    break;

  case 59: /* elif_seq: elif_seq ELIF test ':' suite  */
#line 529 "python.y"
                                                                                                                        {
																					if(verbose_parser)
																						printf("elif_seq -> elif_seq ELIF test ':' suite\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					struct ast_node *temp = new_ast_node((yyvsp[-2].ast_node_info)->line_num,"", "elif", "elif_seq", children);
																					if(!((yyvsp[-4].ast_node_info))){
																						children = {temp};
																						(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num,"","","elif_seq",children);
																					}
																					else{
																						(yyval.ast_node_info) = add_child_back((yyvsp[-4].ast_node_info), temp);
																					}
																				}
#line 2122 "python.tab.c"
    break;

  case 60: /* elif_seq: %empty  */
#line 543 "python.y"
                                                                                                                                                        {
																					if(verbose_parser_empty)
																						printf("elif_seq -> empty\n");
																					(yyval.ast_node_info) = NULL;
																				}
#line 2132 "python.tab.c"
    break;

  case 61: /* suite: simple_stmt  */
#line 550 "python.y"
                                                                                                                                        {	
																					if(verbose_parser) 
																						printf("suite -> simple_stmt\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 2142 "python.tab.c"
    break;

  case 62: /* suite: NEWLINE INDENT stmt stmt_seq DEDENT  */
#line 556 "python.y"
                                                                                                                        {	
																					if(verbose_parser) 
																						printf("suite -> NEWLINE INDENT stmt stmt_seq DEDENT\n");
																					children = {(yyvsp[-2].ast_node_info),(yyvsp[-1].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num,"","body","suite",children);
																				}
#line 2153 "python.tab.c"
    break;

  case 63: /* stmt_seq: stmt_seq stmt  */
#line 564 "python.y"
                                                                                                                                        {	
																					if(verbose_parser)
																						printf("stmt_seq -> stmt_seq stmt\n");
																					children = {(yyvsp[-1].ast_node_info),(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","","stmt_seq",children);
																				}
#line 2164 "python.tab.c"
    break;

  case 64: /* stmt_seq: %empty  */
#line 571 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser_empty)
																						printf("stmt_seq -> empty\n");
																					(yyval.ast_node_info) = NULL;
																				}
#line 2174 "python.tab.c"
    break;

  case 65: /* test: and_test  */
#line 579 "python.y"
                                                                                                                                                {	
																					if(verbose_parser) 
																						printf("test -> and_test\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);	
																				}
#line 2184 "python.tab.c"
    break;

  case 66: /* test: test OR and_test  */
#line 585 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("test -> test OR and_test\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "LOGICAL OPERATOR: or", "test", children);
																				}
#line 2195 "python.tab.c"
    break;

  case 67: /* and_test: not_test  */
#line 594 "python.y"
                                                                                                                                                {	
																					if(verbose_parser)
																						printf("and_test -> not_test\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 2205 "python.tab.c"
    break;

  case 68: /* and_test: and_test AND not_test  */
#line 600 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("and_test -> and_test AND not_test\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "LOGICAL OPERATOR: and", "and_test", children);
																				}
#line 2216 "python.tab.c"
    break;

  case 69: /* not_test: NOT not_test  */
#line 608 "python.y"
                                                                                                                                        {	
																					if(verbose_parser) 
																						printf("not_test -> NOT not_test\n");
																					children = {(yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","LOGICAL OPERATOR: not","not_test",children);
																				}
#line 2227 "python.tab.c"
    break;

  case 70: /* not_test: comparison  */
#line 615 "python.y"
                                                                                                                                                {	
																					if(verbose_parser) 
																						printf("not_test -> comparison\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 2237 "python.tab.c"
    break;

  case 71: /* comparison: expr  */
#line 622 "python.y"
                                                                                                                                                {	
																					if(verbose_parser) 
																						printf("comparison -> expr\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 2247 "python.tab.c"
    break;

  case 72: /* comparison: comparison '<' expr  */
#line 628 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("comparison -> comparison '<' expr\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "RELATIONAL OPERATOR: <", "comparison", children);
																				}
#line 2258 "python.tab.c"
    break;

  case 73: /* comparison: comparison '>' expr  */
#line 635 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("comparison -> comparison '>' expr\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "RELATIONAL OPERATOR: >", "comparison", children);
																				}
#line 2269 "python.tab.c"
    break;

  case 74: /* comparison: comparison EQEQUAL expr  */
#line 642 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("comparison -> comparison '==' expr\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "RELATIONAL OPERATOR: ==", "comparison", children);
																				}
#line 2280 "python.tab.c"
    break;

  case 75: /* comparison: comparison GREATEREQUAL expr  */
#line 649 "python.y"
                                                                                                                                {
																					if(verbose_parser)
																						printf("comparison -> comparison '>=' expr\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "RELATIONAL OPERATOR: >=", "comparison", children);
																				}
#line 2291 "python.tab.c"
    break;

  case 76: /* comparison: comparison LESSEQUAL expr  */
#line 656 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("comparison -> comparison '<=' expr\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "RELATIONAL OPERATOR: <=", "comparison", children);
																				}
#line 2302 "python.tab.c"
    break;

  case 77: /* comparison: comparison NOTEQUAL expr  */
#line 663 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("comparison -> comparison '!=' expr\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "RELATIONAL OPERATOR: !=", "comparison", children);
																				}
#line 2313 "python.tab.c"
    break;

  case 78: /* expr: xor_expr  */
#line 672 "python.y"
                                                                                                                                                {	
																					if(verbose_parser) 
																						printf("expr -> xor_expr\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);	
																				}
#line 2323 "python.tab.c"
    break;

  case 79: /* expr: expr '|' xor_expr  */
#line 678 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("expr -> expr '|' xor_expr\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "BITWISE OPERATOR: |", "expr", children);
																				}
#line 2334 "python.tab.c"
    break;

  case 80: /* xor_expr: and_expr  */
#line 687 "python.y"
                                                                                                                                                {	
																					if(verbose_parser) 
																						printf("xor_expr -> and_expr\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 2344 "python.tab.c"
    break;

  case 81: /* xor_expr: xor_expr '^' and_expr  */
#line 693 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("xor_expr -> xor_expr '^' and_expr\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "BITWISE OPERATOR: ^", "xor_expr", children);
																				}
#line 2355 "python.tab.c"
    break;

  case 82: /* and_expr: shift_expr  */
#line 702 "python.y"
                                                                                                                                        {	
																					if(verbose_parser) 
																						printf("and_expr -> shift_expr\n");
																					(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
																				}
#line 2365 "python.tab.c"
    break;

  case 83: /* and_expr: and_expr '&' shift_expr  */
#line 708 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("and_expr -> and_expr '&' shift_expr\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "BITWISE OPERATOR: &", "and_expr", children);
																				}
#line 2376 "python.tab.c"
    break;

  case 84: /* shift_expr: arith_expr  */
#line 717 "python.y"
                                                                                                                                        {	
																					if(verbose_parser) 
							   															printf("shift_expr -> arith_expr\n");
							   														(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
							   													}
#line 2386 "python.tab.c"
    break;

  case 85: /* shift_expr: shift_expr LEFTSHIFT arith_expr  */
#line 723 "python.y"
                                                                                                                                {
							   														if(verbose_parser)
							   															printf("shift_expr -> shift_expr '<<' arith_expr\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "BITWISE OPERATOR: <<", "shift_expr", children);
							   													}
#line 2397 "python.tab.c"
    break;

  case 86: /* shift_expr: shift_expr RIGHTSHIFT arith_expr  */
#line 730 "python.y"
                                                                                                                                {
							   														if(verbose_parser)
							   															printf("shift_expr -> shift_expr '>>' arith_expr\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "BITWISE OPERATOR: >>", "shift_expr", children);
							   													}
#line 2408 "python.tab.c"
    break;

  case 87: /* arith_expr: term  */
#line 739 "python.y"
                                                                                                                                                {
							   														if(verbose_parser)
							   															printf("arith_expr -> term\n");
							   														(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
							   													}
#line 2418 "python.tab.c"
    break;

  case 88: /* arith_expr: arith_expr '+' term  */
#line 745 "python.y"
                                                                                                                                        {
							   														if(verbose_parser)
							   															printf("arith_expr -> arith_expr + term\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: +", "arith_expr", children);
							   													}
#line 2429 "python.tab.c"
    break;

  case 89: /* arith_expr: arith_expr '-' term  */
#line 752 "python.y"
                                                                                                                                        {
							   														if(verbose_parser)
							   															printf("arith_expr -> arith_expr - term\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: -", "arith_expr", children);
							   													}
#line 2440 "python.tab.c"
    break;

  case 90: /* term: factor  */
#line 760 "python.y"
                                                                                                                                                {	
																					if(verbose_parser) 
							   															printf("term -> factor\n");
                                                                                   (yyval.ast_node_info) = (yyvsp[0].ast_node_info);
							   													}
#line 2450 "python.tab.c"
    break;

  case 91: /* term: term '*' factor  */
#line 766 "python.y"
                                                                                                                                                {
							   														if(verbose_parser)
							   															printf("term -> term '*' factor\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: *", "term", children);
							   													}
#line 2461 "python.tab.c"
    break;

  case 92: /* term: term '/' factor  */
#line 773 "python.y"
                                                                                                                                                {
							   														if(verbose_parser)
							   															printf("term -> term '/' factor\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: /", "term", children);
							   													}
#line 2472 "python.tab.c"
    break;

  case 93: /* term: term '%' factor  */
#line 780 "python.y"
                                                                                                                                                {
							   														if(verbose_parser)
							   															printf("term -> term '%%' factor\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: %", "term", children);
							   													}
#line 2483 "python.tab.c"
    break;

  case 94: /* term: term DOUBLESLASH factor  */
#line 787 "python.y"
                                                                                                                                        {
																					if(verbose_parser)
																						printf("term -> term '//' factor\n");
																					children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num, "", "ARITHMETIC OPERATOR: //", "term", children);
																				}
#line 2494 "python.tab.c"
    break;

  case 95: /* factor: '+' factor  */
#line 795 "python.y"
                                                                                                                                        {	
																					if(verbose_parser)
							   															printf("factor -> '+' factor\n");
							   														children = {(yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","UNARY OPERATOR: +","factor",children);
																				}
#line 2505 "python.tab.c"
    break;

  case 96: /* factor: '-' factor  */
#line 802 "python.y"
                                                                                                                                                {	
																					if(verbose_parser)
							   															printf("factor -> '-' factor\n");
							   														children = {(yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","UNARY OPERATOR: -","factor",children);	
																				}
#line 2516 "python.tab.c"
    break;

  case 97: /* factor: '~' factor  */
#line 809 "python.y"
                                                                                                                                                {	
																					if(verbose_parser)	
							   															printf("factor -> '~' factor\n");
							   														children = {(yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","UNARY OPERATOR: ~","factor",children);
																				}
#line 2527 "python.tab.c"
    break;

  case 98: /* factor: power  */
#line 816 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
							   															printf("factor -> power\n");
							   														(yyval.ast_node_info) = (yyvsp[0].ast_node_info);	
							   													}
#line 2537 "python.tab.c"
    break;

  case 99: /* power: atom_expr  */
#line 823 "python.y"
                                                                                                                                                {	
																					if(verbose_parser)
							   															printf("power -> atom_expr\n");
							   														(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
							   													}
#line 2547 "python.tab.c"
    break;

  case 100: /* power: atom_expr DOUBLESTAR factor  */
#line 829 "python.y"
                                                                                                                                {	
																					if(verbose_parser)
							   															printf("power -> atom_expr '**' factor\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","ARITHMETIC OPERATOR: **","power",children);
																				}
#line 2558 "python.tab.c"
    break;

  case 101: /* atom_expr: atom trailer  */
#line 837 "python.y"
                                                                                                                                        {	
																					if(verbose_parser)
							   															printf("atom_expr -> atom trailer\n");
							   														(yyval.ast_node_info) = add_child_back((yyvsp[-1].ast_node_info),(yyvsp[0].ast_node_info));
							   													}
#line 2568 "python.tab.c"
    break;

  case 102: /* atom_expr: atom '.' NAME_DUNDER  */
#line 843 "python.y"
                                                                                                                                        {	
																					if(verbose_parser)
                                                                                        printf(" atom_expr -> atom '.' NAME_DUNDER\n");
							   														children = {(yyvsp[-2].ast_node_info),(yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"",".","atom_expr",children);
							   													}
#line 2579 "python.tab.c"
    break;

  case 103: /* atom_expr: atom '.' NAME_DUNDER trailer  */
#line 850 "python.y"
                                                                                                                                {	
																					if(verbose_parser)
                                                                                        printf("atom_expr -> atom '.' NAME_DUNDER trailer\n");
							   														(yyvsp[-1].ast_node_info) = add_child_back((yyvsp[-1].ast_node_info),(yyvsp[0].ast_node_info));
							   														children = {(yyvsp[-3].ast_node_info),(yyvsp[-1].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-1].ast_node_info)->line_num,"",".","atom_expr",children);
							   													}
#line 2591 "python.tab.c"
    break;

  case 104: /* atom_expr: atom  */
#line 858 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
                                                                                         printf("atom_expr -> atom\n");
							   														(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
							   													}
#line 2601 "python.tab.c"
    break;

  case 105: /* trailer: '(' ')'  */
#line 865 "python.y"
                                                                                                                                                {	
																					if(verbose_parser)
																						printf("trailer -> '(' ')'\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"","( )","trailer",no_child);
																				}
#line 2611 "python.tab.c"
    break;

  case 106: /* trailer: '(' testlist ')'  */
#line 871 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("trailer -> '(' testlist ')'\n");
																					children = {(yyvsp[-1].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-1].ast_node_info)->line_num,"","","trailer",children);
																				}
#line 2622 "python.tab.c"
    break;

  case 107: /* trailer: '[' testlist ']'  */
#line 878 "python.y"
                                                                                                                                                {
																					if(verbose_parser)
																						printf("trailer -> '[' testlist ']'\n");
																					children = {(yyvsp[-1].ast_node_info)};
																					(yyval.ast_node_info) = new_ast_node((yyvsp[-1].ast_node_info)->line_num, "", "", "trailer", children);
																				}
#line 2633 "python.tab.c"
    break;

  case 108: /* atom: '(' ')'  */
#line 886 "python.y"
                                                                                                                                                {	
																					if(verbose_parser)
							   															printf("atom -> '(' ')'\n");
							   														(yyval.ast_node_info) = new_ast_node(yylineno,"","( )","atom",no_child);
							   													}
#line 2643 "python.tab.c"
    break;

  case 109: /* atom: '(' testlist ')'  */
#line 892 "python.y"
                                                                                                                                                {	
																					if(verbose_parser)
							   															printf("atom -> '(' testlist ')'\n");
							   														(yyval.ast_node_info) = (yyvsp[-1].ast_node_info);
							   													}
#line 2653 "python.tab.c"
    break;

  case 110: /* atom: '[' ']'  */
#line 898 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
							   															printf("atom -> '[' ']'\n");
							   														(yyval.ast_node_info) = new_ast_node(yylineno,"","[ ]","atom",no_child);
							   													}
#line 2663 "python.tab.c"
    break;

  case 111: /* atom: '[' testlist ']'  */
#line 904 "python.y"
                                                                                                                                                {		
																					if(verbose_parser)
							   															printf("atom -> '[' testlist ']'\n");
							   														children = {(yyvsp[-1].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-1].ast_node_info)->line_num,"","list [ ]","atom",children);
																				}
#line 2674 "python.tab.c"
    break;

  case 112: /* atom: NAME_DUNDER  */
#line 911 "python.y"
                                                                                                                                                {	
																					if(verbose_parser)
							   															printf("atom -> NAME_DUNDER\n");
							   														(yyval.ast_node_info) = (yyvsp[0].ast_node_info);
							   													}
#line 2684 "python.tab.c"
    break;

  case 113: /* atom: INTEGER  */
#line 917 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
							   															printf("atom -> INTEGER\n");
							   														string str = (yyvsp[0].terminal_node_info)->lexeme;
							   														str = "INTEGER: " + str;
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[0].terminal_node_info)->line_num,"INTEGER",str,"",no_child);
																					(yyval.ast_node_info)->type = "INT";
																					(yyval.ast_node_info)->what = "CONSTANT";

							   													}
#line 2699 "python.tab.c"
    break;

  case 114: /* atom: FLOAT_NUMBER  */
#line 928 "python.y"
                                                                                                                                                {	
																					if(verbose_parser)
																						printf("atom -> FLOAT_NUMBER\n");
																					string str = (yyvsp[0].terminal_node_info)->lexeme;
																					str = "FLOAT_NUMBER: " + str;
																					(yyval.ast_node_info) = new_ast_node((yyvsp[0].terminal_node_info)->line_num,"FLOAT_NUMBER",str,"",no_child);
																					(yyval.ast_node_info)->type = "FLOAT";
																					(yyval.ast_node_info)->what = "CONSTANT";
																				}
#line 2713 "python.tab.c"
    break;

  case 115: /* atom: STRING  */
#line 938 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
																						printf("atom ->STRING\n");
																					string str = (yyvsp[0].terminal_node_info)->lexeme;
																					str = "STRING: " + str;
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[0].terminal_node_info)->line_num,"",str,"atom",no_child);
																					(yyval.ast_node_info)->type = "STR";
																					(yyval.ast_node_info)->what = "CONSTANT";
																				}
#line 2727 "python.tab.c"
    break;

  case 116: /* atom: NONE  */
#line 948 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
																						printf("atom -> NONE\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"","None","atom",no_child);
																					(yyval.ast_node_info)->type = "NONE";
																				}
#line 2738 "python.tab.c"
    break;

  case 117: /* atom: TRUE  */
#line 955 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
																						printf("atom -> TRUE\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"","True","atom",no_child);
																					(yyval.ast_node_info)->type = "BOOL";
																					(yyval.ast_node_info)->what = "CONSTANT";
																				}
#line 2750 "python.tab.c"
    break;

  case 118: /* atom: FALSE  */
#line 963 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
																						printf("atom -> FALSE\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"","False","atom",no_child);
																					(yyval.ast_node_info)->type = "BOOL";
																					(yyval.ast_node_info)->what = "CONSTANT";
																				}
#line 2762 "python.tab.c"
    break;

  case 119: /* atom: INT  */
#line 971 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
																						printf("atom -> INT\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"","int","atom",no_child);
																					//$$->type = "INT";
																				}
#line 2773 "python.tab.c"
    break;

  case 120: /* atom: FLOAT  */
#line 978 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
																						printf("atom -> FLOAT\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"","float","atom",no_child);
																					//$$->type = "FLOAT";
																				}
#line 2784 "python.tab.c"
    break;

  case 121: /* atom: STR  */
#line 985 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
																						printf("atom -> STR\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"","str","atom",no_child);
																					//$$->type = "STR";
																				}
#line 2795 "python.tab.c"
    break;

  case 122: /* atom: BOOL  */
#line 992 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
																						printf("atom -> BOOL\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"","bool","atom",no_child);
																					//$$->type = "BOOL";
																				}
#line 2806 "python.tab.c"
    break;

  case 123: /* atom: LIST  */
#line 999 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
																						printf("atom -> LIST\n");
																					(yyval.ast_node_info) = new_ast_node(yylineno,"","list [ ]","atom",no_child);
																				}
#line 2816 "python.tab.c"
    break;

  case 124: /* exprlist: expr COMMA_expr_seq  */
#line 1006 "python.y"
                                                                                                                                {	
																					if(verbose_parser)
							   															printf("exprlist -> expr COMMA_expr_seq\n");
							   														children = {(yyvsp[-1].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-1].ast_node_info)->line_num,"","","exprlist",children);
							   													}
#line 2827 "python.tab.c"
    break;

  case 125: /* exprlist: expr COMMA_expr_seq ','  */
#line 1013 "python.y"
                                                                                                                                        {	
																					if(verbose_parser)
							   															printf("exprlist -> expr COMMA_expr_seq ','\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[-1].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num,"","","exprlist",children);
							   													}
#line 2838 "python.tab.c"
    break;

  case 126: /* COMMA_expr_seq: COMMA_expr_seq ',' expr  */
#line 1021 "python.y"
                                                                                                                        {
																					if(verbose_parser)
							   															printf("COMMA_expr_seq -> COMMA_expr_seq ',' expr\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","","COMMA_expr_seq",children);
							   													}
#line 2849 "python.tab.c"
    break;

  case 127: /* COMMA_expr_seq: %empty  */
#line 1028 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser_empty)
							   															printf("COMMA_expr_seq -> empty\n");
							   														(yyval.ast_node_info) = NULL;
							   													}
#line 2859 "python.tab.c"
    break;

  case 128: /* testlist: test COMMA_test_seq  */
#line 1035 "python.y"
                                                                                                                                {	
																					if(verbose_parser)
							   															printf("testlist -> test COMMA_test_seq\n");
							   														children = {(yyvsp[-1].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-1].ast_node_info)->line_num,"","","testlist",children);
							   													}
#line 2870 "python.tab.c"
    break;

  case 129: /* testlist: test COMMA_test_seq ','  */
#line 1042 "python.y"
                                                                                                                                        {	
																					if(verbose_parser)
							   															printf("testlist -> test COMMA_test_seq ','\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[-1].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[-2].ast_node_info)->line_num,"","","testlist",children);
							   													}
#line 2881 "python.tab.c"
    break;

  case 130: /* COMMA_test_seq: COMMA_test_seq ',' test  */
#line 1050 "python.y"
                                                                                                                        {
							   														if(verbose_parser) 
							   															printf("COMMA_test_seq -> COMMA_test_seq ',' test\n");
							   														children = {(yyvsp[-2].ast_node_info), (yyvsp[0].ast_node_info)};
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[0].ast_node_info)->line_num,"","","COMMA_test_seq",children);
							   													}
#line 2892 "python.tab.c"
    break;

  case 131: /* COMMA_test_seq: %empty  */
#line 1057 "python.y"
                                                                                                                                                        {
							   														if(verbose_parser_empty)
							   															printf("COMMA_test_seq -> empty\n");
							   														(yyval.ast_node_info) = NULL;
							   													}
#line 2902 "python.tab.c"
    break;

  case 132: /* NAME_DUNDER: NAME  */
#line 1064 "python.y"
                                                                                                                                                {	
																					if(verbose_parser)
																						printf("NAME_DUNDER -> NAME\n");
																					string str = (yyvsp[0].terminal_node_info)->lexeme;
																					str = "NAME: " + str;
																					(yyval.ast_node_info) = new_ast_node((yyvsp[0].terminal_node_info)->line_num,"NAME", str, (yyvsp[0].terminal_node_info)->lexeme, no_child);
							   													}
#line 2914 "python.tab.c"
    break;

  case 133: /* NAME_DUNDER: DUNDER  */
#line 1072 "python.y"
                                                                                                                                                        {	
																					if(verbose_parser)
							   															printf("NAME_DUNDER -> DUNDER\n");
							   														string str = (yyvsp[0].terminal_node_info)->lexeme;
							   														str = "DUNDER: " + str;
							   														(yyval.ast_node_info) = new_ast_node((yyvsp[0].terminal_node_info)->line_num,"DUNDER", str, (yyvsp[0].terminal_node_info)->lexeme, no_child);
																				}
#line 2926 "python.tab.c"
    break;


#line 2930 "python.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1081 "python.y"


void yyerror(char *s){
	fprintf(stderr, "Lineno: %d %s\nOffending token: %s\n", yylineno, s, yytext);
	exit(0);
}

void print_help_manual();
void print_3ac(struct ast_node *root_ast);

void live_feeder(vector<struct quad_node *> &code){
    map<string,int> mp;
    for(int i=code.size()-1;i>=0;i--){
		if(((code[i])->arg2 != NULL) && (((code[i])->arg2)->type == "temporary")){
            if(mp.count(((code[i])->arg2)->value )){
                ((code[i])->arg2)->live = true;
            }
            else{
                mp[((code[i])->arg2)->value] = 1;
                ((code[i])->arg2)->live = false;
            }
        }
        if(((code[i])->arg1 != NULL) && (((code[i])->arg1)->type == "temporary")){
            if(mp.count(((code[i])->arg1)->value)){
                ((code[i])->arg1)->live = true;
            }
            else{
                mp[((code[i])->arg1)->value] = 1;
                ((code[i])->arg1)->live = false;
            }
        }
		if(((code[i])->result != NULL) && (((code[i])->result)->type == "temporary")){
            if(mp.count(((code[i])->result)->value )){
                ((code[i])->result)->live = true;
				mp.erase(((code[i])->result)->value);
            }
            else{
                if((code[i])->op == "mem_assign_list"){
					//code.erase(code.begin()+i);
					((code[i])->result)->live = false;
				}
            }
        }
    }
}

int main(int argc, char *argv[]){

	bool input_file_found = false;
	string output_dot_file;
	for(int i = 1; i<argc; i++){
	/*	--help  */
		if(string(argv[i]) == "--help" || string(argv[i]) == "-h"){
			print_help_manual();
			return -1;
		}
		/*	--input	*/
		else if(string(argv[i]) == "--input" || string(argv[i]) == "-i"){
			if((i+1) < argc){
				FILE* file = fopen(argv[i+1],"r");
				if(!file){
					cout << "Error: Input programa file could not be opened" << endl;
					return -1;
				}

				yyin = file;
				input_file_found = true;
				i++;
			}
			else{
				cout << "Error: No Input program file given" << endl;
				return -1;
			}
		}
		/*	--output	*/
		else if(string(argv[i]) == "--output" || string(argv[i]) == "-o"){
			if((i+1) < argc){
				output_dot_file = string(argv[i+1]);
				FILE* temp = fopen(argv[i+1],"w");
				if(!temp){
					cout << "Error: Output program file could not be opened" << endl;
					return -1;
				}

				i++;
			}
			else{
				cout << "Warning: No Output program file given" << endl;
				cout << "Printing dot script to default filename..." << endl;
				/* Unlike to the input file case, it won't terminate here
					rather will print the dot script to a default filename*/
			}
		}
		/*	--verbose	*/
		else if(string(argv[i]) == "--verbose" || string(argv[i]) == "-v"){
			verbose_parser = true;
		}
		else{
			if(!input_file_found){
				/* Input file not found yet */
				int n = string(argv[i]).size();
				if(argv[i][n-1] == 'y' && argv[i][n-2] == 'p' && argv[i][n-3] == '.'){
					FILE* file = fopen(argv[i],"r");
					if(!file){
						cout << "Error: Input programa file could not be opened" << endl;
						return -1;
					}

					yyin = file;
					input_file_found = true;
					continue;
				}
			}

			cout << "Error: Invalid parameters" << endl;
			print_help_manual();
			return -1;

		}
	}

    if(!input_file_found){
        printf("READING FROM STANDARD INPUT\n");
        yyin = stdin;
    }

	/* Initializing the stack for indent and dedent */
	init_stack();
    yyparse();

	children = create_ast(root);
	/* Code to create AST ast root_ast */
	struct ast_node *root_ast = new_ast_node(LINE_IRRELEVANT,"","start","",children);


	/*	Generates a file.dot */
	generate_dot_file(root_ast,output_dot_file);
	symbol_table_head = new struct symbol_table_node;
	populate_symbol_table(root_ast,symbol_table_head);
	dump_symbol_table(symbol_table_head);
	populate_type(root_ast);
	generate_3ac(symbol_table_head,root_ast);
	live_feeder(root_ast->code);
    
    fstream fout;
    fout.open("final.s",ios::out);
    fout << gen_x86(root_ast->code) << endl;
    fout.close();
    if(yyin != stdin){
		fclose(yyin);
	}
    return 0;
}


void print_3ac(struct ast_node *root_ast)
{
	vector<struct quad_node*> &code = root_ast->code;
    cout << "size of instructions at root: " << code.size() << endl;
	for(int i = 0; i < code.size(); i++){
		string op = code[i]->op;
        string arg1 = "-";
        string arg2 = "-";
        string result = "-";
		int b1=-1,b2=-1,b3=-1;
        int w1=-19,w2=-19,w3=-19;
		if(code[i]->arg1){
            arg1 = code[i]->arg1->value;
			b1 = code[i]->arg1->live;
            w1 = code[i]->arg1->register_width;
		}
		if(code[i]->arg2){
		    arg2 = code[i]->arg2->value;
			b2 = code[i]->arg2->live;
            w2 = code[i]->arg2->register_width;
		}
		if(code[i]->result){
		    result = code[i]->result->value;
			b3 = code[i]->result->live;
            w3 = code[i]->result->register_width;
		}
		cout << "["<< i << "] " << result << ' ' << b3 << "#" << w3 << " = " 
        << arg1 << ' ' << b1 << "#" << w1 << " " << op 
        << " " << arg2 << ' ' << b2 << "#" << w2 << endl;
	}

}
void print_help_manual(){
	cout << "Usage: ./python [options]     \n\n";
    cout << "Commands:\n-h, --help \t\t\t\t\t Show help page\n";
    cout << "-i, --input <input_file_name> \t\t\t Give input file\n";
    cout << "-o, --output <output_file_name>\t\t\t Redirect dot file to output file\n";
    cout << "-v, --verbose \t\t\t\t\t Outputs the entire derivation in command line\n";
    return;
}

bool verbose_ast = true;
int counter=1;
queue<int> ast_node_no;
string print_ast_node(struct ast_node *current,int ast_node_number,int type){
    string s="";
    if(type==0){
		string st = (current->text2print),g="";
		for(int i=0;i<st.size();i++){
			if(st[i]!='"'){
				g=g+st[i];
			}
			else{
				g=g+"\\"+st[i];
			}
		}
		if(verbose_ast)
			g=g+"\nwidth = "+to_string(current->width);
        s="node" + to_string(ast_node_number) + " [label = " + "\"" +  g + "\"]";
    }
    else{
        s="node" + to_string(ast_node_number);
    }
    return s;
}

void generate_dot_file(struct ast_node* root, string output_file){
	if(output_file.size() == 0){
		output_file = "file.dot";
	}
	
	ofstream file(output_file);

    file << "digraph {\n";
    queue<struct ast_node *> q;
	if(root==NULL){
		file << "}\n";
		return;
	}
    file << "   ";
    file << print_ast_node(root,counter,0);
    file << "\n";
    q.push(root);
    ast_node_no.push(counter);
    counter++;
    while(!q.empty()){
        struct ast_node* temp = q.front();
        q.pop();
        int ast_node_number = ast_node_no.front();
        ast_node_no.pop();
        for(int i=0;i<(temp->children).size();i++){
			if((temp->children)[i]==NULL){
				continue;
			}
			file << "	";
			file << print_ast_node((temp->children)[i],counter,0);
			file << "\n";
            file << "   ";
            file << print_ast_node(temp,ast_node_number,1);
            file << " -> ";
            file << print_ast_node((temp->children)[i],counter,1);
            file << "\n";
            q.push((temp->children)[i]);
            ast_node_no.push(counter);
            counter++;
        }
    }
    file << "}\n";

    file.close();
}
