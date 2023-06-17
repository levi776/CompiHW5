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
#line 1 "parser.ypp"

    #include "hw3_output.hpp"
    
    #include <iostream>
    #include <cstring>
    #include "symbol_tables_stack.hpp"
    #include "register.hpp"
    #include "bp.hpp"
    #include "parser_helper.hpp"

    #define VAR_EMPTY_STR "EMPTY"
    
    extern int yylineno;
    int yylex();
    void yyerror( const char* s);
    
    using namespace output;

    symbol_tables_stack _stack = symbol_tables_stack();
    bool notBool( char* type);
    bool byteTooLarge(int value);
    bool typesDontMatch( char* LHS_type,  char* RHS_type);
    bool notIntOrByte( char* converter_type,  char* converted_type);
    bool can_type_be_compared(char* t1,char* t2);
    bool expList_not_valid(string func_name, string exp_list);
    bool isVoid();
    char* biggerType(char* first, char* second);
    char* join(char* s1,char* s2);


//TODO:ADD SOME OF THE FUNCTIONS BELOW
/*
    bool notLastBool(vector<string>::iterator it, vector<string>::iterator end);
*/


    

#line 110 "parser.tab.cpp"

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

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_BYTE = 5,                       /* BYTE  */
  YYSYMBOL_B = 6,                          /* B  */
  YYSYMBOL_BOOL = 7,                       /* BOOL  */
  YYSYMBOL_OVERRIDE = 8,                   /* OVERRIDE  */
  YYSYMBOL_TRUE = 9,                       /* TRUE  */
  YYSYMBOL_FALSE = 10,                     /* FALSE  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_V = 12,                         /* V  */
  YYSYMBOL_ERROR = 13,                     /* ERROR  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_BREAK = 16,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 17,                  /* CONTINUE  */
  YYSYMBOL_SC = 18,                        /* SC  */
  YYSYMBOL_COMMA = 19,                     /* COMMA  */
  YYSYMBOL_LBRACE = 20,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 21,                    /* RBRACE  */
  YYSYMBOL_ID = 22,                        /* ID  */
  YYSYMBOL_NUM = 23,                       /* NUM  */
  YYSYMBOL_STRING = 24,                    /* STRING  */
  YYSYMBOL_ASSIGN = 25,                    /* ASSIGN  */
  YYSYMBOL_OR = 26,                        /* OR  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_EQ_RELOP = 28,                  /* EQ_RELOP  */
  YYSYMBOL_RE_RELOP = 29,                  /* RE_RELOP  */
  YYSYMBOL_PM_BINOP = 30,                  /* PM_BINOP  */
  YYSYMBOL_MD_BINOP = 31,                  /* MD_BINOP  */
  YYSYMBOL_NOT = 32,                       /* NOT  */
  YYSYMBOL_LPAREN = 33,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 34,                    /* RPAREN  */
  YYSYMBOL_ELSE = 35,                      /* ELSE  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_Program = 37,                   /* Program  */
  YYSYMBOL_38_1 = 38,                      /* $@1  */
  YYSYMBOL_Funcs = 39,                     /* Funcs  */
  YYSYMBOL_FuncDecl = 40,                  /* FuncDecl  */
  YYSYMBOL_41_2 = 41,                      /* $@2  */
  YYSYMBOL_42_3 = 42,                      /* $@3  */
  YYSYMBOL_OverRide = 43,                  /* OverRide  */
  YYSYMBOL_RetType = 44,                   /* RetType  */
  YYSYMBOL_Formals = 45,                   /* Formals  */
  YYSYMBOL_FormalsList = 46,               /* FormalsList  */
  YYSYMBOL_FormalDecl = 47,                /* FormalDecl  */
  YYSYMBOL_Statements = 48,                /* Statements  */
  YYSYMBOL_49_4 = 49,                      /* $@4  */
  YYSYMBOL_Statement = 50,                 /* Statement  */
  YYSYMBOL_51_5 = 51,                      /* $@5  */
  YYSYMBOL_52_6 = 52,                      /* @6  */
  YYSYMBOL_53_7 = 53,                      /* @7  */
  YYSYMBOL_54_8 = 54,                      /* @8  */
  YYSYMBOL_55_9 = 55,                      /* @9  */
  YYSYMBOL_Call = 56,                      /* Call  */
  YYSYMBOL_NEW_SCOPE_MARKER = 57,          /* NEW_SCOPE_MARKER  */
  YYSYMBOL_POP_SCOPE_MARKER = 58,          /* POP_SCOPE_MARKER  */
  YYSYMBOL_CHECK_TYPE_MARKER = 59,         /* CHECK_TYPE_MARKER  */
  YYSYMBOL_ExpList = 60,                   /* ExpList  */
  YYSYMBOL_Type = 61,                      /* Type  */
  YYSYMBOL_Exp = 62,                       /* Exp  */
  YYSYMBOL_63_10 = 63,                     /* $@10  */
  YYSYMBOL_64_11 = 64                      /* $@11  */
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
typedef yytype_int8 yy_state_t;

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

#if 1

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
#endif /* 1 */

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
#define YYLAST   166

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  112

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    83,    83,    83,    94,    95,   100,   110,    99,   118,
     119,   123,   124,   128,   129,   133,   134,   138,   142,   149,
     148,   159,   159,   166,   175,   191,   191,   206,   215,   219,
     232,   240,   239,   261,   273,   260,   295,   303,   309,   328,
     340,   344,   350,   361,   369,   384,   385,   386,   389,   395,
     412,   424,   439,   445,   450,   456,   468,   472,   476,   481,
     480,   494,   493,   505,   512,   519
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "INT", "BYTE",
  "B", "BOOL", "OVERRIDE", "TRUE", "FALSE", "RETURN", "V", "ERROR", "IF",
  "WHILE", "BREAK", "CONTINUE", "SC", "COMMA", "LBRACE", "RBRACE", "ID",
  "NUM", "STRING", "ASSIGN", "OR", "AND", "EQ_RELOP", "RE_RELOP",
  "PM_BINOP", "MD_BINOP", "NOT", "LPAREN", "RPAREN", "ELSE", "$accept",
  "Program", "$@1", "Funcs", "FuncDecl", "$@2", "$@3", "OverRide",
  "RetType", "Formals", "FormalsList", "FormalDecl", "Statements", "$@4",
  "Statement", "$@5", "@6", "@7", "@8", "@9", "Call", "NEW_SCOPE_MARKER",
  "POP_SCOPE_MARKER", "CHECK_TYPE_MARKER", "ExpList", "Type", "Exp",
  "$@10", "$@11", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-51)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-6)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -51,    12,    17,   -51,   -51,   -51,    17,   155,   -51,   -51,
     -51,   -51,   -51,     2,   -51,    14,    29,   -51,   -51,    16,
      27,    25,    29,   -51,    31,   -51,   -51,    85,    43,   -51,
     -51,    52,    56,   -51,   -20,    57,   -51,    59,    58,   -51,
     -51,   -51,    48,    76,   -51,    62,    -1,   -51,    86,    54,
      55,   -51,   -51,    85,   -51,     5,   -51,    85,   -51,    -7,
     -51,   -51,    63,   118,   -51,   -51,   -51,    62,    62,    62,
      62,    62,    62,    70,    62,   -51,    64,   112,   -51,   -51,
      62,    62,   -51,    62,    62,    33,    38,    72,   -51,    74,
      99,    99,   -51,    92,   -51,    62,   106,   -51,   126,   135,
      85,    75,   -51,   -51,   -51,   -51,    85,    71,   -51,   -51,
      85,   -51
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     9,     1,    10,     3,     9,     0,     4,    11,
      45,    46,    47,     0,    12,     0,    13,     6,    14,    15,
       0,     0,     0,    17,     0,    16,     7,     0,     0,    40,
      33,     0,     0,    21,     0,    19,    18,     0,     0,    56,
      57,    28,    51,    53,    55,     0,     0,    52,     0,     0,
       0,    36,    37,     0,    25,     0,     8,     0,    27,     0,
      54,    58,     0,     0,    29,    61,    59,     0,     0,     0,
       0,     0,     0,    19,     0,    39,     0,    43,    20,    23,
       0,     0,    48,     0,     0,    63,    64,    50,    49,     0,
      42,    34,    22,     0,    38,     0,     0,    65,    62,    60,
       0,     0,    26,    44,    24,    41,     0,    30,    35,    31,
       0,    32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,   -51,   -51,    87,   -51,   -51,   -51,   -51,   -51,   -51,
      89,   -51,    97,   -51,   -50,   -51,   -51,   -51,   -51,   -51,
     -27,   -51,   -51,   -51,    66,    -6,   -26,   -51,   -51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     5,     6,    21,    27,     7,    13,    17,
      18,    19,    35,    57,    36,    53,    74,   110,    50,   101,
      47,    49,   107,    89,    76,    38,    77,    84,    83
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      37,    14,    48,    10,    11,    54,    12,    78,    39,    40,
      20,    79,     3,    55,    39,    40,    20,    -5,    80,    61,
      63,    42,    43,    44,    15,     4,    37,    42,    43,    44,
      37,    45,    46,    10,    11,    22,    12,    45,    46,    75,
      62,    85,    86,    87,    88,    90,    91,    16,    93,    23,
     105,    26,    39,    40,    96,    97,   108,    98,    99,    24,
     111,    41,    68,    69,    70,    42,    43,    44,    69,    70,
      51,    39,    40,    37,    52,    45,    46,    58,    56,    37,
      59,    55,    60,    37,    42,    43,    44,    71,    72,    10,
      11,    92,    12,     8,    45,    46,    28,    81,    94,    29,
      30,    31,    32,    70,    64,    33,   109,    34,   100,   106,
     102,    25,    65,    66,    67,    68,    69,    70,    65,    66,
      67,    68,    69,    70,   104,    65,    66,    67,    68,    69,
      70,    95,    65,    66,    67,    68,    69,    70,    65,    66,
      67,    68,    69,    70,    65,    66,    67,    68,    69,    70,
      73,     0,    82,    66,    67,    68,    69,    70,     9,    10,
      11,   103,    12,    67,    68,    69,    70
};

static const yytype_int8 yycheck[] =
{
      27,     7,    28,     4,     5,    25,     7,    57,     9,    10,
      16,    18,     0,    33,     9,    10,    22,     0,    25,    45,
      46,    22,    23,    24,    22,     8,    53,    22,    23,    24,
      57,    32,    33,     4,     5,    19,     7,    32,    33,    34,
      46,    67,    68,    69,    70,    71,    72,    33,    74,    22,
     100,    20,     9,    10,    80,    81,   106,    83,    84,    34,
     110,    18,    29,    30,    31,    22,    23,    24,    30,    31,
      18,     9,    10,   100,    18,    32,    33,    18,    21,   106,
      22,    33,     6,   110,    22,    23,    24,    33,    33,     4,
       5,    21,     7,     6,    32,    33,    11,    34,    34,    14,
      15,    16,    17,    31,    18,    20,    35,    22,    34,    34,
      18,    22,    26,    27,    28,    29,    30,    31,    26,    27,
      28,    29,    30,    31,    18,    26,    27,    28,    29,    30,
      31,    19,    26,    27,    28,    29,    30,    31,    26,    27,
      28,    29,    30,    31,    26,    27,    28,    29,    30,    31,
      53,    -1,    34,    27,    28,    29,    30,    31,     3,     4,
       5,    95,     7,    28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    38,     0,     8,    39,    40,    43,    39,     3,
       4,     5,     7,    44,    61,    22,    33,    45,    46,    47,
      61,    41,    19,    22,    34,    46,    20,    42,    11,    14,
      15,    16,    17,    20,    22,    48,    50,    56,    61,     9,
      10,    18,    22,    23,    24,    32,    33,    56,    62,    57,
      54,    18,    18,    51,    25,    33,    21,    49,    18,    22,
       6,    62,    61,    62,    18,    26,    27,    28,    29,    30,
      31,    33,    33,    48,    52,    34,    60,    62,    50,    18,
      25,    34,    34,    64,    63,    62,    62,    62,    62,    59,
      62,    62,    21,    62,    34,    19,    62,    62,    62,    62,
      34,    55,    18,    60,    18,    50,    34,    58,    50,    35,
      53,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    38,    37,    39,    39,    41,    42,    40,    43,
      43,    44,    44,    45,    45,    46,    46,    47,    48,    49,
      48,    51,    50,    50,    50,    52,    50,    50,    50,    50,
      50,    53,    50,    54,    55,    50,    50,    50,    56,    56,
      57,    58,    59,    60,    60,    61,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      62,    64,    62,    62,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     0,     0,    11,     0,
       1,     1,     1,     0,     1,     1,     3,     2,     1,     0,
       3,     0,     4,     3,     5,     0,     5,     2,     2,     3,
       7,     0,    10,     0,     0,     7,     2,     2,     4,     3,
       0,     0,     1,     1,     3,     1,     1,     1,     3,     3,
       3,     1,     1,     1,     2,     1,     1,     1,     2,     0,
       4,     0,     4,     3,     3,     4
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* $@1: %empty  */
#line 83 "parser.ypp"
      {initDeclarations();}
#line 1516 "parser.tab.cpp"
    break;

  case 3: /* Program: $@1 Funcs  */
#line 84 "parser.ypp"
          {
        if (yychar == YYEOF) {
            _stack.validateMainFunction(yylineno);
            _stack.pop_scope();
            printGlobalAndCodeBuffer();
        }    
    }
#line 1528 "parser.tab.cpp"
    break;

  case 4: /* Funcs: FuncDecl Funcs  */
#line 94 "parser.ypp"
                     {/*empty*/}
#line 1534 "parser.tab.cpp"
    break;

  case 5: /* Funcs: %empty  */
#line 95 "parser.ypp"
                 {/*empty*/}
#line 1540 "parser.tab.cpp"
    break;

  case 6: /* $@2: %empty  */
#line 100 "parser.ypp"
    { 
        string llvm_name = rgs.freshVar(string(yyvsp[-2].name),true); 
        _stack.insert(string(yyvsp[-2].name), string(join(join(yyvsp[0].type ,"->"),yyvsp[-3].type)),llvm_name, true, yyvsp[-4].intVal, yylineno);
        declareFunction(/*is_override =*/ yyvsp[-4].intVal,
                        /*func_name=*/ string(yyvsp[-2].name),
                        /*func_arguments_type_string=*/ string(yyvsp[0].type),
                        /*func_arguments_type_string=*/ string(yyvsp[0].name),
                        /*fresh_func_name*/ llvm_name); 
    }
#line 1554 "parser.tab.cpp"
    break;

  case 7: /* $@3: %empty  */
#line 110 "parser.ypp"
    {_stack.push_scope();_stack.symbol_table_add_function_parameter_entries(string(yyvsp[-3].name), string(yyvsp[-3].type), yylineno);}
#line 1560 "parser.tab.cpp"
    break;

  case 8: /* FuncDecl: OverRide RetType ID LPAREN Formals $@2 RPAREN LBRACE $@3 Statements RBRACE  */
#line 112 "parser.ypp"
    {
        _stack.pop_scope();
        closeFunction(/*nextlist=*/yyvsp[-1].nextList, /*func_return_type=*/  string(yyvsp[-9].type));
    }
#line 1569 "parser.tab.cpp"
    break;

  case 9: /* OverRide: %empty  */
#line 118 "parser.ypp"
                 {yyval.intVal = false;}
#line 1575 "parser.tab.cpp"
    break;

  case 10: /* OverRide: OVERRIDE  */
#line 119 "parser.ypp"
               {yyval.intVal = true;}
#line 1581 "parser.tab.cpp"
    break;

  case 11: /* RetType: VOID  */
#line 123 "parser.ypp"
           { yyval.type=yyvsp[0].type; }
#line 1587 "parser.tab.cpp"
    break;

  case 12: /* RetType: Type  */
#line 124 "parser.ypp"
           { yyval.type=yyvsp[0].type; }
#line 1593 "parser.tab.cpp"
    break;

  case 13: /* Formals: %empty  */
#line 128 "parser.ypp"
                  {yyval.type = ""; yyval.name = "";  }
#line 1599 "parser.tab.cpp"
    break;

  case 14: /* Formals: FormalsList  */
#line 129 "parser.ypp"
                 {yyval.type = yyvsp[0].type; yyval.name = yyvsp[0].name;}
#line 1605 "parser.tab.cpp"
    break;

  case 15: /* FormalsList: FormalDecl  */
#line 133 "parser.ypp"
                 {yyval.type = yyvsp[0].type; yyval.name = yyvsp[0].name;}
#line 1611 "parser.tab.cpp"
    break;

  case 16: /* FormalsList: FormalDecl COMMA FormalsList  */
#line 134 "parser.ypp"
                                   {yyval.type = join(join(yyvsp[-2].type ,","), yyvsp[0].type);
                                    yyval.name = join(join(yyvsp[-2].name ,",") , yyvsp[0].name);}
#line 1618 "parser.tab.cpp"
    break;

  case 17: /* FormalDecl: Type ID  */
#line 138 "parser.ypp"
              { yyval.type = yyvsp[-1].type ; yyval.name = yyvsp[0].name; }
#line 1624 "parser.tab.cpp"
    break;

  case 18: /* Statements: Statement  */
#line 143 "parser.ypp"
    {
        yyval.nextList = yyvsp[0].nextList;
        yyval.breakList = yyvsp[0].breakList;
        yyval.contList = yyvsp[0].contList;
        }
#line 1634 "parser.tab.cpp"
    break;

  case 19: /* $@4: %empty  */
#line 149 "parser.ypp"
    { bpVector(yyvsp[0].nextList);}
#line 1640 "parser.tab.cpp"
    break;

  case 20: /* Statements: Statements $@4 Statement  */
#line 151 "parser.ypp"
    {
        yyval.nextList = yyvsp[0].nextList; 
        yyval.breakList = cbf.merge(yyvsp[-2].breakList, yyvsp[0].breakList);
        yyval.contList = cbf.merge(yyvsp[-2].contList, yyvsp[0].contList);
        //cbf.emit("end of statement");
        }
#line 1651 "parser.tab.cpp"
    break;

  case 21: /* $@5: %empty  */
#line 159 "parser.ypp"
             {_stack.push_scope();}
#line 1657 "parser.tab.cpp"
    break;

  case 22: /* Statement: LBRACE $@5 Statements RBRACE  */
#line 160 "parser.ypp"
    {
        _stack.pop_scope();
        yyval.nextList = yyvsp[-1].nextList;
        yyval.breakList = yyvsp[-1].breakList;
        yyval.contList = yyvsp[-1].contList;
    }
#line 1668 "parser.tab.cpp"
    break;

  case 23: /* Statement: Type ID SC  */
#line 166 "parser.ypp"
                 { 
        string llvm_name = rgs.freshVar(string(yyvsp[-1].name),false);
        yyval.llvm_name = llvm_name;
        yyval.name = yyvsp[-1].name;
        _stack.insert(yyvsp[-1].name , yyvsp[-2].type, llvm_name, false, false, yylineno);
        yyvsp[-1].type=yyvsp[-2].type;
        cbf.bpatch(yyval.jumpList, yyval.startLabel);
        varDefintionGenerate(/*varType*/string(yyvsp[-2].type),/*var_name*/llvm_name); 
        }
#line 1682 "parser.tab.cpp"
    break;

  case 24: /* Statement: Type ID ASSIGN Exp SC  */
#line 176 "parser.ypp"
    {
        if(typesDontMatch(yyvsp[-4].type, yyvsp[-1].type)) 
        {
            errorMismatch(yylineno);
        }
        yyval.llvm_name = rgs.freshVar(string(yyvsp[-3].name),false);
        yyval.name = yyvsp[-3].name;
        yyvsp[-3].type=yyvsp[-4].type; _stack.insert(yyvsp[-3].name , yyvsp[-3].type, yyval.llvm_name, false, false, yylineno);     
        varDefintionAndAssignmentGenerate(/*llvm_var*/yyval.llvm_name,
                             /*number value*/yyvsp[-1].llvm_name,
                             /*exp_type*/string(yyvsp[-1].type),   
                             /*exp_true_list*/yyvsp[-1].trueList,
                             /*exp_false_list*/yyvsp[-1].falseList,
                             true);   
    }
#line 1702 "parser.tab.cpp"
    break;

  case 25: /* @6: %empty  */
#line 191 "parser.ypp"
                {
        if(!_stack.nameExists(yyvsp[-1].name) || _stack.isFunc(yyvsp[-1].name)) errorUndef(yylineno, yyvsp[-1].name);
        yyval.name = yyvsp[-1].name;
        }
#line 1711 "parser.tab.cpp"
    break;

  case 26: /* Statement: ID ASSIGN @6 Exp SC  */
#line 195 "parser.ypp"
               { 
            if(typesDontMatch(_stack.getType(yyvsp[-4].name).data(), yyvsp[-1].type)) errorMismatch(yylineno);
            string llvm_name = _stack.getLlvmName(string(yyvsp[-4].name));
           //resolve_jump_next_line(string($4.startLabel),$4.jumpList);
            varDefintionAndAssignmentGenerate(/*llvm_var*/llvm_name,
                                /*number value*/yyvsp[-1].llvm_name,
                                /*exp_type*/string(yyvsp[-1].type),   
                                /*exp_true_list*/yyvsp[-1].trueList,
                                /*exp_false_list*/yyvsp[-1].falseList,
                                false);
        }
#line 1727 "parser.tab.cpp"
    break;

  case 27: /* Statement: Call SC  */
#line 206 "parser.ypp"
              {

      yyval.type = yyvsp[-1].type;
      yyval.llvm_name = rgs.freshVar();
      //TODO: refference
      
      //resolve_jump_next_line(string($1.startLabel),$1.jumpList);
       cbf.emit(yyvsp[-1].label);
       }
#line 1741 "parser.tab.cpp"
    break;

  case 28: /* Statement: RETURN SC  */
#line 215 "parser.ypp"
                { 
        if(!isVoid()||_stack.getCurrentfunctionreturnType()!="VOID") errorMismatch(yylineno); 
        cbf.emit("ret void");
        }
#line 1750 "parser.tab.cpp"
    break;

  case 29: /* Statement: RETURN Exp SC  */
#line 219 "parser.ypp"
                    {
        if(isVoid()||!_stack.is_desired_return_type(string(yyvsp[-1].type),_stack.getCurrentfunctionreturnType(),false)) errorMismatch(yylineno);
        if(strcmp(yyvsp[-1].type, "BOOL") == 0)
        {
            yyvsp[-1].llvm_name = rgs.freshVar();
            emitBool(yyvsp[-1].llvm_name, yyvsp[-1].trueList,yyvsp[-1].falseList);
    
        }
        cbf.emit("ret i32 " + yyvsp[-1].llvm_name);



        }
#line 1768 "parser.tab.cpp"
    break;

  case 30: /* Statement: IF NEW_SCOPE_MARKER LPAREN CHECK_TYPE_MARKER RPAREN Statement POP_SCOPE_MARKER  */
#line 233 "parser.ypp"
{    
        yyval.nextList = cbf.merge(yyvsp[-3].falseList, yyvsp[-1].nextList);
        yyval.nextList = cbf.merge(yyval.nextList, yyvsp[0].nextList);
        yyval.breakList = yyvsp[-1].breakList;
        yyval.contList = yyvsp[-1].contList;
}
#line 1779 "parser.tab.cpp"
    break;

  case 31: /* @7: %empty  */
#line 240 "parser.ypp"
     {
        _stack.push_scope();
        yyval.nextList = yyvsp[-1].nextList;
        bpVector(yyvsp[-4].falseList);

    }
#line 1790 "parser.tab.cpp"
    break;

  case 32: /* Statement: IF NEW_SCOPE_MARKER LPAREN CHECK_TYPE_MARKER RPAREN Statement POP_SCOPE_MARKER ELSE @7 Statement  */
#line 246 "parser.ypp"
    {
        //TODO: return to understand
        _stack.pop_scope();
        //int line = cbf.emit("br label @");
        //cbf.emit("Statement: line");
        //auto temp = cbf.merge(cbf.makelist({line, FIRST}), );
        auto temp = cbf.merge(yyvsp[-4].nextList, yyvsp[-1].nextList);
        yyval.nextList = cbf.merge(temp, yyvsp[0].nextList);
        yyval.breakList = cbf.merge(yyvsp[-4].breakList, yyvsp[0].breakList);
        yyval.contList = cbf.merge(yyvsp[-4].contList, yyvsp[0].contList);
        
    }
#line 1807 "parser.tab.cpp"
    break;

  case 33: /* @8: %empty  */
#line 261 "parser.ypp"
    {
        _stack.push_scope();_stack.updateInWhile(true);
        //TODO: understand
        //NIKITA'S COMMENT: There must be a jump to a label BEFORE it definition....:
        int line = cbf.emit("br label @");
        cbf.emit("WHILE: line");
        yyval.label = cbf.genLabel();

        const auto& list = cbf.makelist({line, FIRST});
        bpVector(list, string(yyval.label));
    }
#line 1823 "parser.tab.cpp"
    break;

  case 34: /* @9: %empty  */
#line 273 "parser.ypp"
    { 
        if(notBool(yyvsp[0].type)) errorMismatch(yylineno);
        //TODO: understand
        yyval.label = cbf.genLabel();
        cbf.emit("while something exp: genLabel");

        bpVector(yyvsp[0].trueList, string(yyval.label));
        
    }
#line 1837 "parser.tab.cpp"
    break;

  case 35: /* Statement: WHILE @8 LPAREN Exp @9 RPAREN Statement  */
#line 283 "parser.ypp"
    {
        //todo understand
        _stack.updateInWhile(false);
        _stack.pop_scope();
        bpVector(yyvsp[0].contList,string(yyvsp[-5].label));
        bpVector(yyvsp[0].nextList,string(yyvsp[-5].label));
        yyval.nextList = cbf.merge(yyvsp[-3].falseList, yyvsp[0].breakList);
        cbf.emit("br label %" + yyvsp[-5].label);
        cbf.emit("While LPAREN Exp RPAREN Statement");


    }
#line 1854 "parser.tab.cpp"
    break;

  case 36: /* Statement: BREAK SC  */
#line 296 "parser.ypp"
    { 
        if(!_stack.inWhileLoop()) errorUnexpectedBreak(yylineno);
                
       
        yyval.breakList = cbf.makelist({cbf.emit("br label @"), FIRST});
        
    }
#line 1866 "parser.tab.cpp"
    break;

  case 37: /* Statement: CONTINUE SC  */
#line 303 "parser.ypp"
                  { 
        if(!_stack.inWhileLoop()) errorUnexpectedContinue(yylineno);
        yyval.contList = cbf.makelist({cbf.emit("br label @"), FIRST});
        }
#line 1875 "parser.tab.cpp"
    break;

  case 38: /* Call: ID LPAREN ExpList RPAREN  */
#line 309 "parser.ypp"
                               { 
        //todo understand
        _stack.validateCall(string(yyvsp[-3].name), string(yyvsp[-1].type), yylineno);
        
        
        yyval.name = yyvsp[-3].name; 
        yyval.type = _stack.getFuncReturnType(string(yyvsp[-3].name),string(yyvsp[-1].type)).data();
        yyval.llvm_name = _stack.getFunctionLlvmName(string(yyvsp[-3].name), string(yyvsp[-1].type));
        yyval.label = funcCall(/*function return type*/string(yyval.type),
                      /*function parameter types*/string(yyvsp[-1].type),
                      /*function parameter llvm_names*/string(yyvsp[-1].llvm_name),
                      /*truelist_list*/yyvsp[-1].trueListList,
                      /*falselist_list*/yyvsp[-1].falseListList,
                      string(yyval.llvm_name));




    }
#line 1899 "parser.tab.cpp"
    break;

  case 39: /* Call: ID LPAREN RPAREN  */
#line 329 "parser.ypp"
    { 
        //todo understand
        _stack.validateCall(string(yyvsp[-2].name), "",yylineno);
        yyval.name = yyvsp[-2].name; 
        yyval.type = _stack.getFuncReturnType(yyvsp[-2].name,"").data();       
        string str_name(yyvsp[-2].name);
        string call_str = "call " + convertToLLVMType(string(yyval.type)) + " @" + str_name + "()";
        yyval.label = call_str;
    }
#line 1913 "parser.tab.cpp"
    break;

  case 40: /* NEW_SCOPE_MARKER: %empty  */
#line 340 "parser.ypp"
                 {_stack.push_scope();}
#line 1919 "parser.tab.cpp"
    break;

  case 41: /* POP_SCOPE_MARKER: %empty  */
#line 344 "parser.ypp"
    {
        //todo understand
        _stack.pop_scope();       
    }
#line 1928 "parser.tab.cpp"
    break;

  case 42: /* CHECK_TYPE_MARKER: Exp  */
#line 350 "parser.ypp"
          {
        if(notBool(yyvsp[0].type)) errorMismatch(yylineno);
        //TODO: UNDERSTAND
       // string label = cbf.genLabel();
       // cbf.emit("CHECK_TYPE_MARKER: genLabel");
       // bpVector($1.trueList, label); // we want same label as before, hence do not delete label.
        yyval.falseList = yyvsp[0].falseList;
        yyval.trueList = yyvsp[0].trueList;
        }
#line 1942 "parser.tab.cpp"
    break;

  case 43: /* ExpList: Exp  */
#line 362 "parser.ypp"
    { 
    yyval.type = yyvsp[0].type; 
    //TODO: understand

    (yyval.trueListList).push_back(yyvsp[0].trueList); 
    (yyval.falseListList).push_back(yyvsp[0].falseList);
    }
#line 1954 "parser.tab.cpp"
    break;

  case 44: /* ExpList: Exp COMMA ExpList  */
#line 370 "parser.ypp"
    {
        //TODO: ADD and Understand
        yyval.type = join(join(yyvsp[-2].type, ","),yyvsp[0].type);
        

        yyval.llvm_name = yyvsp[-2].llvm_name + "," + yyvsp[0].llvm_name;
        (yyvsp[0].trueListList).insert((yyvsp[0].trueListList).begin(), yyvsp[-2].trueList);
        yyval.trueListList = yyvsp[0].trueListList;
        (yyvsp[0].falseListList).insert((yyvsp[0].falseListList).begin(), yyvsp[-2].falseList);
        yyval.falseListList = yyvsp[0].falseListList;
    }
#line 1970 "parser.tab.cpp"
    break;

  case 45: /* Type: INT  */
#line 384 "parser.ypp"
          { yyval.type = yyvsp[0].type; }
#line 1976 "parser.tab.cpp"
    break;

  case 46: /* Type: BYTE  */
#line 385 "parser.ypp"
           { yyval.type = yyvsp[0].type; }
#line 1982 "parser.tab.cpp"
    break;

  case 47: /* Type: BOOL  */
#line 386 "parser.ypp"
           { yyval.type = yyvsp[0].type; }
#line 1988 "parser.tab.cpp"
    break;

  case 48: /* Exp: LPAREN Exp RPAREN  */
#line 389 "parser.ypp"
                        {
        yyval.falseList = yyvsp[-1].falseList;
        yyval.llvm_name = yyvsp[-1].llvm_name;
        yyval.trueList = yyvsp[-1].trueList;
        yyval.type = yyvsp[-1].type;
        }
#line 1999 "parser.tab.cpp"
    break;

  case 49: /* Exp: Exp MD_BINOP Exp  */
#line 395 "parser.ypp"
                                      {
         if(notIntOrByte(yyvsp[-2].type,yyvsp[0].type)) errorMismatch(yylineno); yyval.type = biggerType(yyvsp[-2].type, yyvsp[0].type);
         //TODO : understand
            yyval.llvm_name = rgs.freshVar();
            validateBinop(string(yyvsp[-1].name), yyvsp[0].llvm_name);
            
            yyval.llvm_name = rgs.freshVar();
            
            cbf.emit(yyval.llvm_name + " = " + opcode_to_cmd(yyvsp[-1].name, yyval.type) + " i32 " + yyvsp[-2].llvm_name + ", " + yyvsp[0].llvm_name);
            if(strcmp(yyval.type, "BYTE") == 0)
            {
                string new_var = rgs.freshVar();
                cbf.emit(new_var + " = and i32 "+ yyval.llvm_name +", 255");
                yyval.llvm_name = new_var;
            }
            
          }
#line 2021 "parser.tab.cpp"
    break;

  case 50: /* Exp: Exp PM_BINOP Exp  */
#line 412 "parser.ypp"
                                      {
         if(notIntOrByte(yyvsp[-2].type,yyvsp[0].type)) errorMismatch(yylineno); yyval.type = biggerType(yyvsp[-2].type, yyvsp[0].type);
            yyval.llvm_name = rgs.freshVar();
            yyval.type = biggerType(yyvsp[-2].type, yyvsp[0].type);
            cbf.emit(yyval.llvm_name + " = " + opcode_to_cmd(string(yyvsp[-1].name), string(yyval.type)) + " i32 " + yyvsp[-2].llvm_name + ", " + yyvsp[0].llvm_name);
            if(strcmp(yyval.type, "BYTE") == 0)
            {
                string new_reg = rgs.freshVar();
                cbf.emit(new_reg + " = and i32 "+ yyval.llvm_name +", 255");
                yyval.llvm_name = new_reg;
            }
        }
#line 2038 "parser.tab.cpp"
    break;

  case 51: /* Exp: ID  */
#line 424 "parser.ypp"
         {
        _stack.validateId(string(yyvsp[0].name),yylineno); 
        yyval.type = _stack.getType(string(yyvsp[0].name)).data();
        yyval.llvm_name = _stack.getLlvmName(string(yyvsp[0].name));
           //TODO: check if correct
           /* if(strcmp($$.type, "BOOL") == 0)
            {
                string compare_reg = rgs.freshVar();
                cbf.emit(compare_reg + " = icmp eq i32 1, " + $$.llvm_name);
                int line = cbf.emit("br i1 " + compare_reg + ", label @, label @");

                $$.trueList = cbf.makelist({line, FIRST});
                $$.falseList = cbf.makelist({line, SECOND});
            }*/
        }
#line 2058 "parser.tab.cpp"
    break;

  case 52: /* Exp: Call  */
#line 439 "parser.ypp"
           {
         yyval.type=yyvsp[0].type; 
        yyval.name = yyvsp[0].name; 
        yyval.type = yyvsp[0].type;
        yyval.llvm_name = yyvsp[0].llvm_name;
    }
#line 2069 "parser.tab.cpp"
    break;

  case 53: /* Exp: NUM  */
#line 445 "parser.ypp"
          { yyval.type=yyvsp[0].type; 
        yyval.type = yyvsp[0].type;
        yyval.name = yyvsp[0].name;
        yyval.llvm_name = to_string(yyval.intVal);
        }
#line 2079 "parser.tab.cpp"
    break;

  case 54: /* Exp: NUM B  */
#line 450 "parser.ypp"
            {if(byteTooLarge(yyvsp[-1].intVal)) {errorByteTooLarge(yylineno, yyvsp[-1].strVal);}
          yyval.name = yyvsp[-1].name;
          yyval.type= yyvsp[0].type; 
          yyval.llvm_name = to_string(yyval.intVal);
          }
#line 2089 "parser.tab.cpp"
    break;

  case 55: /* Exp: STRING  */
#line 457 "parser.ypp"
    { 
        yyval.type=yyvsp[0].type;
        string global_var = rgs.freshVar(".g_ig_", true);
        yyval.llvm_name = rgs.freshVar();
        string str(yyvsp[0].strVal);
        str = str.substr(1, str.length() - 2);
        yyval.name = str.data();
        int len = strlen(yyval.name) + 1;
        cbf.emitGlobal(global_var + " = constant [" + to_string(str.length() + 1) + " x i8] c\"" + str + "\\00\"");
        cbf.emit(yyval.llvm_name + " = getelementptr ["+to_string(len)+" x i8], ["+to_string(len)+" x i8]* "+(global_var)+", i32 0, i32 0"); 
    }
#line 2105 "parser.tab.cpp"
    break;

  case 56: /* Exp: TRUE  */
#line 468 "parser.ypp"
           { yyval.type=yyvsp[0].type;
        yyval.type = yyvsp[0].type;
        yyval.llvm_name = VAR_EMPTY_STR; 
        }
#line 2114 "parser.tab.cpp"
    break;

  case 57: /* Exp: FALSE  */
#line 472 "parser.ypp"
            {
        yyval.type=yyvsp[0].type;
        yyval.llvm_name = string(VAR_EMPTY_STR); 
          }
#line 2123 "parser.tab.cpp"
    break;

  case 58: /* Exp: NOT Exp  */
#line 476 "parser.ypp"
              { if(notBool(yyvsp[0].type)) errorMismatch(yylineno); yyval.type = yyvsp[0].type;
            yyval.trueList = yyvsp[0].falseList;
            yyval.falseList = yyvsp[0].trueList;            
            yyval.llvm_name = string(VAR_EMPTY_STR); }
#line 2132 "parser.tab.cpp"
    break;

  case 59: /* $@10: %empty  */
#line 481 "parser.ypp"
    {
        if(notBool(yyvsp[-1].type)) errorMismatch(yylineno);
        bpVector(yyvsp[-1].trueList);
    }
#line 2141 "parser.tab.cpp"
    break;

  case 60: /* Exp: Exp AND $@10 Exp  */
#line 486 "parser.ypp"
    { 
        if(notBool(yyvsp[0].type)) errorMismatch(yylineno); 
        yyval.type=yyvsp[-3].type; 
        yyval.llvm_name = VAR_EMPTY_STR;
        yyval.trueList = yyvsp[0].trueList;
        yyval.falseList = cbf.merge(yyvsp[-3].falseList, yyvsp[0].falseList);
        }
#line 2153 "parser.tab.cpp"
    break;

  case 61: /* $@11: %empty  */
#line 494 "parser.ypp"
    {
        if(notBool(yyvsp[-1].type)) errorMismatch(yylineno); bpVector(yyvsp[-1].falseList);
    }
#line 2161 "parser.tab.cpp"
    break;

  case 62: /* Exp: Exp OR $@11 Exp  */
#line 497 "parser.ypp"
    {  
        if(notBool(yyvsp[0].type)) errorMismatch(yylineno); 
        yyval.type=yyvsp[-3].type; 
        yyval.falseList = yyvsp[0].falseList;
        yyval.llvm_name = VAR_EMPTY_STR;
        yyval.trueList = cbf.merge(yyvsp[-3].trueList, yyvsp[0].trueList);

    }
#line 2174 "parser.tab.cpp"
    break;

  case 63: /* Exp: Exp EQ_RELOP Exp  */
#line 505 "parser.ypp"
                                      { if(notIntOrByte(yyvsp[-2].type,yyvsp[0].type)) {errorMismatch(yylineno);} yyval.type = "BOOL";
        std::string branch_str = rgs.freshVar("branch");
        cbf.emit(branch_str + " = icmp " + opcode_to_cmd(yyvsp[-1].name, yyvsp[-2].type) + " i32 " + yyvsp[-2].llvm_name + ", " + yyvsp[0].llvm_name);
        int branch_location = cbf.emit("br i1 " + branch_str + ", label @, label @");
        yyval.trueList = cbf.makelist({branch_location, FIRST});
        yyval.falseList = cbf.makelist({branch_location, SECOND});
        yyval.llvm_name = string(VAR_EMPTY_STR); }
#line 2186 "parser.tab.cpp"
    break;

  case 64: /* Exp: Exp RE_RELOP Exp  */
#line 512 "parser.ypp"
                                      { if(notIntOrByte(yyvsp[-2].type,yyvsp[0].type)) {errorMismatch(yylineno);} yyval.type = "BOOL";
        std::string branch_str = rgs.freshVar("branch");
        cbf.emit(branch_str + " = icmp " + opcode_to_cmd(yyvsp[-1].name, yyvsp[-2].type) + " i32 " + yyvsp[-2].llvm_name + ", " + yyvsp[0].llvm_name);
        int branch_location = cbf.emit("br i1 " + branch_str + ", label @, label @");
        yyval.trueList = cbf.makelist({branch_location, FIRST});
        yyval.falseList = cbf.makelist({branch_location, SECOND});
        yyval.llvm_name = VAR_EMPTY_STR; }
#line 2198 "parser.tab.cpp"
    break;

  case 65: /* Exp: LPAREN Type RPAREN Exp  */
#line 519 "parser.ypp"
                             {   
        if(notIntOrByte(yyvsp[-2].type,yyvsp[0].type)) 
        {
            errorMismatch(yylineno);
        }
        yyval.type = yyvsp[-2].type;
        yyval.llvm_name = rgs.freshVar();
        yyval.name = yyvsp[0].name;
        }
#line 2212 "parser.tab.cpp"
    break;


#line 2216 "parser.tab.cpp"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 530 "parser.ypp"

char* join(char* s1, char* s2)
{
    
    int str_len=strlen(s1)+strlen(s2);
    char* joined_str = (char*)malloc(sizeof(char)*(str_len+1));
    strcpy(joined_str,s1);
    strcat(joined_str,s2);
    
    //not freeing memory, might be a problem atm.

    return joined_str;
}

bool notBool( char* type)
{
    return strcmp(type,"BOOL")!=0;
}

bool byteTooLarge(int value)
{
    return value > 255;

}
bool typesDontMatch(  char* LHS_type,  char* RHS_type)
{
    if (strcmp(LHS_type,RHS_type)!=0 && ( (strcmp(LHS_type,"INT")!=0) || (strcmp(RHS_type,"BYTE")!=0) ) )
    {
        return true;
    }
    else
    {
    return false;
    }
}

bool notIntOrByte( char* converter_type,  char* converted_type)
{
    
    if((strcmp(converter_type,"INT")==0 && strcmp(converted_type,"BYTE")==0)
         ||(strcmp(converter_type,"BYTE")==0 && strcmp(converted_type,"INT")==0)
         ||(strcmp(converter_type,"INT")==0 && strcmp(converted_type,"INT")==0)
         ||(strcmp(converter_type,"BYTE")==0 && strcmp(converted_type,"BYTE")==0))
         {
            
            return false;
         }
    return true;
}

bool isVoid()
{
    string func_ret_type = _stack.getCurrentfunctionreturnType();
    return strcmp(func_ret_type.data(),"VOID")==0;
}

char* biggerType(char* first, char* second)
{
    return strcmp(second,"BYTE")==0?second:first;
}

int main()
{
    return yyparse();
}

void yyerror( const char*  s ) 
{
    errorSyn(yylineno);
}
