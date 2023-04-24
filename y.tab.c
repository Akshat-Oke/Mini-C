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
#line 1 "parser.y"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./util/AST.h"
#include "./util/symbol.h"
#include "./util/token.h"

char *currentFileName;
extern int level;
extern int lineno, col;

int yyerror(char *s);
Symbol* getSymbol(char* name, SymbolTable* table, Coordinate src, char* format, ...);
void compileError(Coordinate pos, int lexemeLength, char *format, ...);
int typeCheckAssign(TypeEnum t1, TypeEnum t2);
TypeEnum typeWiden(TypeEnum t1, TypeEnum t2);
void typeCheckUnary(Node* t);
void typeCheckArrayInitialiser(Type* elementType, Node* expr);
int yylex();

#line 94 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    K_INT = 258,                   /* K_INT  */
    K_FLOAT = 259,                 /* K_FLOAT  */
    K_CHAR = 260,                  /* K_CHAR  */
    FOR = 261,                     /* FOR  */
    WHILE = 262,                   /* WHILE  */
    ELSE = 263,                    /* ELSE  */
    IF = 264,                      /* IF  */
    SWITCH = 265,                  /* SWITCH  */
    CASE = 266,                    /* CASE  */
    RETURN = 267,                  /* RETURN  */
    CONTINUE = 268,                /* CONTINUE  */
    BREAK = 269,                   /* BREAK  */
    DEFAULT = 270,                 /* DEFAULT  */
    INTEGER = 271,                 /* INTEGER  */
    FLOAT = 272,                   /* FLOAT  */
    CHARACTER = 273,               /* CHARACTER  */
    STRING = 274,                  /* STRING  */
    PLUS_ASSIGN = 275,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 276,            /* MINUS_ASSIGN  */
    STAR_ASSIGN = 277,             /* STAR_ASSIGN  */
    SLASH_ASSIGN = 278,            /* SLASH_ASSIGN  */
    MOD_ASSIGN = 279,              /* MOD_ASSIGN  */
    IDENTIFIER = 280,              /* IDENTIFIER  */
    ERROR = 281,                   /* ERROR  */
    EOF_TOKEN = 282,               /* EOF_TOKEN  */
    IFX = 283,                     /* IFX  */
    AND = 284,                     /* AND  */
    OR = 285,                      /* OR  */
    GE = 286,                      /* GE  */
    LE = 287,                      /* LE  */
    EQ = 288,                      /* EQ  */
    NE = 289,                      /* NE  */
    INC = 290,                     /* INC  */
    DEC = 291,                     /* DEC  */
    UMINUS = 292,                  /* UMINUS  */
    ARR = 293                      /* ARR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define K_INT 258
#define K_FLOAT 259
#define K_CHAR 260
#define FOR 261
#define WHILE 262
#define ELSE 263
#define IF 264
#define SWITCH 265
#define CASE 266
#define RETURN 267
#define CONTINUE 268
#define BREAK 269
#define DEFAULT 270
#define INTEGER 271
#define FLOAT 272
#define CHARACTER 273
#define STRING 274
#define PLUS_ASSIGN 275
#define MINUS_ASSIGN 276
#define STAR_ASSIGN 277
#define SLASH_ASSIGN 278
#define MOD_ASSIGN 279
#define IDENTIFIER 280
#define ERROR 281
#define EOF_TOKEN 282
#define IFX 283
#define AND 284
#define OR 285
#define GE 286
#define LE 287
#define EQ 288
#define NE 289
#define INC 290
#define DEC 291
#define UMINUS 292
#define ARR 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "parser.y"

    int iValue;
    float fValue;
    char* sValue;
    IdStruct id;
    char cValue;
    int* sizes;
    Node* node;

#line 233 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_K_INT = 3,                      /* K_INT  */
  YYSYMBOL_K_FLOAT = 4,                    /* K_FLOAT  */
  YYSYMBOL_K_CHAR = 5,                     /* K_CHAR  */
  YYSYMBOL_FOR = 6,                        /* FOR  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_SWITCH = 10,                    /* SWITCH  */
  YYSYMBOL_CASE = 11,                      /* CASE  */
  YYSYMBOL_RETURN = 12,                    /* RETURN  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 14,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 15,                   /* DEFAULT  */
  YYSYMBOL_INTEGER = 16,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_CHARACTER = 18,                 /* CHARACTER  */
  YYSYMBOL_STRING = 19,                    /* STRING  */
  YYSYMBOL_PLUS_ASSIGN = 20,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 21,              /* MINUS_ASSIGN  */
  YYSYMBOL_STAR_ASSIGN = 22,               /* STAR_ASSIGN  */
  YYSYMBOL_SLASH_ASSIGN = 23,              /* SLASH_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 24,                /* MOD_ASSIGN  */
  YYSYMBOL_IDENTIFIER = 25,                /* IDENTIFIER  */
  YYSYMBOL_ERROR = 26,                     /* ERROR  */
  YYSYMBOL_EOF_TOKEN = 27,                 /* EOF_TOKEN  */
  YYSYMBOL_IFX = 28,                       /* IFX  */
  YYSYMBOL_AND = 29,                       /* AND  */
  YYSYMBOL_OR = 30,                        /* OR  */
  YYSYMBOL_GE = 31,                        /* GE  */
  YYSYMBOL_LE = 32,                        /* LE  */
  YYSYMBOL_EQ = 33,                        /* EQ  */
  YYSYMBOL_NE = 34,                        /* NE  */
  YYSYMBOL_35_ = 35,                       /* '>'  */
  YYSYMBOL_36_ = 36,                       /* '<'  */
  YYSYMBOL_37_ = 37,                       /* '+'  */
  YYSYMBOL_38_ = 38,                       /* '-'  */
  YYSYMBOL_39_ = 39,                       /* '*'  */
  YYSYMBOL_40_ = 40,                       /* '/'  */
  YYSYMBOL_INC = 41,                       /* INC  */
  YYSYMBOL_DEC = 42,                       /* DEC  */
  YYSYMBOL_UMINUS = 43,                    /* UMINUS  */
  YYSYMBOL_44_ = 44,                       /* '['  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_ARR = 46,                       /* ARR  */
  YYSYMBOL_47_ = 47,                       /* ';'  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* ','  */
  YYSYMBOL_51_ = 51,                       /* '='  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '}'  */
  YYSYMBOL_54_ = 54,                       /* ':'  */
  YYSYMBOL_55_ = 55,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_declarations = 58,              /* declarations  */
  YYSYMBOL_declaration = 59,               /* declaration  */
  YYSYMBOL_functionDecl = 60,              /* functionDecl  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_param_list = 62,                /* param_list  */
  YYSYMBOL_varInitialiser = 63,            /* varInitialiser  */
  YYSYMBOL_arrayInitialiser = 64,          /* arrayInitialiser  */
  YYSYMBOL_array_init_list = 65,           /* array_init_list  */
  YYSYMBOL_varDeclaration = 66,            /* varDeclaration  */
  YYSYMBOL_varType = 67,                   /* varType  */
  YYSYMBOL_varNames = 68,                  /* varNames  */
  YYSYMBOL_arraySpecifier = 69,            /* arraySpecifier  */
  YYSYMBOL_funcBody = 70,                  /* funcBody  */
  YYSYMBOL_71_2 = 71,                      /* $@2  */
  YYSYMBOL_stmtOrDecl = 72,                /* stmtOrDecl  */
  YYSYMBOL_stmt = 73,                      /* stmt  */
  YYSYMBOL_forStmt = 74,                   /* forStmt  */
  YYSYMBOL_75_3 = 75,                      /* $@3  */
  YYSYMBOL_forInit = 76,                   /* forInit  */
  YYSYMBOL_forCond = 77,                   /* forCond  */
  YYSYMBOL_forIter = 78,                   /* forIter  */
  YYSYMBOL_assignExpr = 79,                /* assignExpr  */
  YYSYMBOL_switchStmt = 80,                /* switchStmt  */
  YYSYMBOL_switchBody = 81,                /* switchBody  */
  YYSYMBOL_switches = 82,                  /* switches  */
  YYSYMBOL_cases = 83,                     /* cases  */
  YYSYMBOL_caseLabel = 84,                 /* caseLabel  */
  YYSYMBOL_caseType = 85,                  /* caseType  */
  YYSYMBOL_whileStmt = 86,                 /* whileStmt  */
  YYSYMBOL_blockStmt = 87,                 /* blockStmt  */
  YYSYMBOL_88_4 = 88,                      /* $@4  */
  YYSYMBOL_ifStmt = 89,                    /* ifStmt  */
  YYSYMBOL_expr = 90,                      /* expr  */
  YYSYMBOL_arrayExpr = 91,                 /* arrayExpr  */
  YYSYMBOL_callExpr = 92,                  /* callExpr  */
  YYSYMBOL_arg_list = 93,                  /* arg_list  */
  YYSYMBOL_returnStmt = 94,                /* returnStmt  */
  YYSYMBOL_continueStmt = 95,              /* continueStmt  */
  YYSYMBOL_breakStmt = 96                  /* breakStmt  */
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
#define YYLAST   442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
       2,     2,     2,    55,     2,     2,     2,     2,     2,     2,
      48,    49,    39,    37,    50,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    47,
      36,    51,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      41,    42,    43,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    80,    80,    83,    84,    87,    88,    89,    93,    92,
     136,   146,   154,   157,   161,   164,   166,   168,   169,   170,
     171,   179,   256,   256,   256,   258,   259,   261,   264,   267,
     270,   270,   274,   275,   276,   284,   285,   287,   289,   290,
     291,   292,   293,   294,   295,   296,   299,   299,   304,   305,
     306,   309,   310,   313,   314,   317,   325,   332,   339,   346,
     352,   360,   362,   364,   365,   368,   369,   370,   371,   374,
     376,   376,   378,   380,   380,   386,   387,   389,   390,   391,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   419,
     434,   474,   475,   476,   479,   480,   483,   485
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
  "\"end of file\"", "error", "\"invalid token\"", "K_INT", "K_FLOAT",
  "K_CHAR", "FOR", "WHILE", "ELSE", "IF", "SWITCH", "CASE", "RETURN",
  "CONTINUE", "BREAK", "DEFAULT", "INTEGER", "FLOAT", "CHARACTER",
  "STRING", "PLUS_ASSIGN", "MINUS_ASSIGN", "STAR_ASSIGN", "SLASH_ASSIGN",
  "MOD_ASSIGN", "IDENTIFIER", "ERROR", "EOF_TOKEN", "IFX", "AND", "OR",
  "GE", "LE", "EQ", "NE", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "INC",
  "DEC", "UMINUS", "'['", "']'", "ARR", "';'", "'('", "')'", "','", "'='",
  "'{'", "'}'", "':'", "'!'", "$accept", "program", "declarations",
  "declaration", "functionDecl", "$@1", "param_list", "varInitialiser",
  "arrayInitialiser", "array_init_list", "varDeclaration", "varType",
  "varNames", "arraySpecifier", "funcBody", "$@2", "stmtOrDecl", "stmt",
  "forStmt", "$@3", "forInit", "forCond", "forIter", "assignExpr",
  "switchStmt", "switchBody", "switches", "cases", "caseLabel", "caseType",
  "whileStmt", "blockStmt", "$@4", "ifStmt", "expr", "arrayExpr",
  "callExpr", "arg_list", "returnStmt", "continueStmt", "breakStmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -122,     4,    18,  -122,  -122,  -122,  -122,  -122,  -122,   -36,
       2,    -7,  -122,  -122,     8,  -122,    16,    23,   -41,    35,
      22,    62,     1,   212,  -122,  -122,  -122,    23,  -122,    19,
    -122,  -122,  -122,  -122,  -122,    20,   223,   223,   212,   223,
    -122,   384,  -122,  -122,    36,    68,  -122,   223,    51,   283,
    -122,    39,   384,    51,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,  -122,  -122,  -122,
     384,    31,  -122,   212,  -122,   398,   398,    59,    59,    59,
      59,    59,    59,   -32,   -32,    51,    51,   367,  -122,  -122,
     223,  -122,   384,  -122,   104,   384,    56,    57,    67,    71,
     223,  -122,  -122,    43,  -122,  -122,  -122,    77,    35,  -122,
    -122,    78,  -122,  -122,  -122,  -122,   384,    10,    79,    80,
      81,    83,  -122,   223,   223,   223,   384,  -122,  -122,   223,
    -122,  -122,  -122,  -122,  -122,   223,  -122,  -122,  -122,  -122,
     130,   304,   325,   346,   384,   157,   384,  -122,    85,  -122,
     207,   207,    84,  -122,   223,  -122,   129,    14,  -122,    91,
     384,   207,  -122,  -122,    87,    14,   207,   223,   256,  -122,
    -122,   207,  -122,   253,    92,  -122,  -122,  -122,   207,  -122
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,    22,    24,    23,     2,     3,     5,
       0,     0,     6,     7,    29,    25,    21,    12,    13,     0,
       0,     0,     0,     0,    29,    26,     8,     0,    10,     0,
      28,    77,    80,    78,    81,    79,     0,     0,     0,     0,
      15,    14,    98,    82,     0,     0,    27,   103,    83,     0,
      19,     0,    17,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     9,    11,
     101,     0,    97,     0,    16,    95,    96,    91,    92,    93,
      94,    90,    89,    85,    86,    87,    88,     0,    34,   100,
       0,    20,    18,    99,     0,   102,     0,     0,     0,     0,
     104,   106,   107,    79,    35,    73,    31,     0,     0,    32,
      41,     0,    42,    40,    36,    39,     0,    98,    82,     0,
       0,     0,    46,     0,     0,     0,   105,    56,    57,     0,
      34,    33,    37,    59,    60,     0,    38,    43,    45,    44,
      50,     0,     0,     0,    55,     0,    58,    49,     0,    48,
       0,     0,     0,    74,    52,    72,    75,    64,    61,     0,
      51,     0,    70,    71,     0,    63,    65,     0,    54,    76,
      62,    67,    66,     0,     0,    53,    68,    69,     0,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -122,  -122,  -122,  -122,  -122,  -122,  -122,   124,   -29,  -122,
      -1,     3,  -122,  -122,  -122,  -122,    15,   -96,  -122,  -122,
    -122,  -122,  -122,  -121,  -122,  -122,  -122,  -122,   -15,  -122,
    -122,  -122,  -122,  -122,   -23,   -92,   -88,  -122,  -122,  -122,
    -122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     8,     9,    44,    20,    15,    40,    51,
     107,   108,    16,    18,    68,    88,    94,   109,   110,   140,
     148,   159,   174,   111,   112,   158,   164,   165,   166,   167,
     113,   114,   130,   115,   116,    42,    43,    71,   119,   120,
     121
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    10,   117,    22,     3,    11,   118,    64,    65,    50,
      23,    12,    66,    48,    49,    52,    53,    29,    14,   149,
      21,     4,     5,     6,    70,   162,     4,     5,     6,   163,
      45,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    91,     7,    30,   175,   117,    13,
      92,   133,   134,   117,   155,   156,    17,   118,   117,   117,
      24,   135,   118,   118,    46,   169,    19,    95,    47,   117,
     172,    26,    27,   118,   117,   176,   117,   126,   118,   117,
      89,    90,   179,   118,   127,   128,   117,    28,    67,    73,
     118,    47,    74,    69,   129,    66,    62,    63,    64,    65,
     141,   142,   143,    66,   122,   123,   144,     4,     5,     6,
      96,    97,   146,    98,    99,   124,   100,   101,   102,   125,
      31,    32,    33,    34,   131,   132,   136,   137,   138,   103,
     139,   160,   154,     4,     5,     6,   157,   161,   168,   147,
     170,   178,    36,    25,   173,   145,    31,    32,    33,    34,
     171,   104,    37,     0,     0,   103,   105,   106,     0,    39,
       4,     5,     6,    96,    97,     0,    98,    99,    36,   100,
     101,   102,     0,    31,    32,    33,    34,     0,    37,     0,
       0,     0,   103,     0,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,   104,    37,     0,     0,     0,   105,
     153,     0,    39,    96,    97,     0,    98,    99,     0,   100,
     101,   102,     0,    31,    32,    33,    34,     0,    31,    32,
      33,    34,   103,     0,     0,     0,     0,    35,     0,    31,
      32,    33,    34,     0,     0,    36,     0,     0,    35,     0,
      36,     0,     0,     0,   104,    37,     0,     0,     0,   105,
      37,    36,    39,     0,    38,     0,     0,    39,     0,     0,
       0,    37,    31,    32,    33,    34,     0,     0,    39,     0,
       0,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    36,     0,     0,    66,     0,     0,
       0,     0,     0,     0,    37,     0,     0,   177,     0,     0,
       0,    39,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     0,     0,     0,    66,     0,     0,
       0,     0,    72,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,    66,     0,
       0,     0,     0,   150,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,     0,    66,
       0,     0,     0,     0,   151,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,     0,     0,
      66,     0,     0,     0,     0,   152,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,    66,    93,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,    66,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,    66
};

static const yytype_int16 yycheck[] =
{
      23,     2,    94,    44,     0,     2,    94,    39,    40,    38,
      51,    47,    44,    36,    37,    38,    39,    16,    25,   140,
      17,     3,     4,     5,    47,    11,     3,     4,     5,    15,
      27,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    73,    27,    45,   168,   140,    47,
      73,    41,    42,   145,   150,   151,    48,   145,   150,   151,
      25,    51,   150,   151,    45,   161,    50,    90,    48,   161,
     166,    49,    50,   161,   166,   171,   168,   100,   166,   171,
      49,    50,   178,   171,    41,    42,   178,    25,    52,    50,
     178,    48,    53,    25,    51,    44,    37,    38,    39,    40,
     123,   124,   125,    44,    48,    48,   129,     3,     4,     5,
       6,     7,   135,     9,    10,    48,    12,    13,    14,    48,
      16,    17,    18,    19,    47,    47,    47,    47,    47,    25,
      47,   154,    47,     3,     4,     5,    52,     8,    47,   140,
      53,    49,    38,    19,   167,   130,    16,    17,    18,    19,
     165,    47,    48,    -1,    -1,    25,    52,    53,    -1,    55,
       3,     4,     5,     6,     7,    -1,     9,    10,    38,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    48,    -1,
      -1,    -1,    25,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,
      53,    -1,    55,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    16,    17,
      18,    19,    25,    -1,    -1,    -1,    -1,    25,    -1,    16,
      17,    18,    19,    -1,    -1,    38,    -1,    -1,    25,    -1,
      38,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,
      48,    38,    55,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    48,    16,    17,    18,    19,    -1,    -1,    55,    -1,
      -1,    25,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    38,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    54,    -1,    -1,
      -1,    55,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    49,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    45,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    57,    58,     0,     3,     4,     5,    27,    59,    60,
      66,    67,    47,    47,    25,    63,    68,    48,    69,    50,
      62,    67,    44,    51,    25,    63,    49,    50,    25,    16,
      45,    16,    17,    18,    19,    25,    38,    48,    52,    55,
      64,    90,    91,    92,    61,    67,    45,    48,    90,    90,
      64,    65,    90,    90,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    44,    52,    70,    25,
      90,    93,    49,    50,    53,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    71,    49,
      50,    64,    90,    45,    72,    90,     6,     7,     9,    10,
      12,    13,    14,    25,    47,    52,    53,    66,    67,    73,
      74,    79,    80,    86,    87,    89,    90,    91,    92,    94,
      95,    96,    48,    48,    48,    48,    90,    41,    42,    51,
      88,    47,    47,    41,    42,    51,    47,    47,    47,    47,
      75,    90,    90,    90,    90,    72,    90,    66,    76,    79,
      49,    49,    49,    53,    47,    73,    73,    52,    81,    77,
      90,     8,    11,    15,    82,    83,    84,    85,    47,    73,
      53,    84,    73,    90,    78,    79,    73,    54,    49,    73
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    61,    60,
      62,    62,    62,    63,    63,    63,    64,    65,    65,    65,
      65,    66,    67,    67,    67,    68,    68,    69,    69,    69,
      71,    70,    72,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    75,    74,    76,    76,
      76,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    81,    82,    82,    83,    83,    83,    83,    84,
      85,    85,    86,    88,    87,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      92,    93,    93,    93,    94,    94,    95,    96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     2,     2,     0,     7,
       2,     4,     0,     2,     4,     4,     3,     1,     3,     1,
       3,     2,     1,     1,     1,     1,     3,     4,     3,     0,
       0,     4,     2,     3,     0,     1,     1,     2,     2,     1,
       1,     1,     1,     2,     2,     2,     0,    10,     1,     1,
       0,     1,     0,     1,     0,     3,     2,     2,     3,     2,
       2,     5,     3,     1,     0,     1,     2,     2,     3,     3,
       1,     1,     5,     0,     4,     5,     7,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     4,
       4,     1,     3,     0,     1,     2,     1,     1
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
  case 2: /* program: declarations EOF_TOKEN  */
#line 80 "parser.y"
                                {printf("Program end\n"); return 0;}
#line 1488 "y.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 83 "parser.y"
                                       { (yyval.node) = oprNode(OPR_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1494 "y.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 93 "parser.y"
                        {
                            Symbol* funcSymbol = install((yyvsp[-3].id).name, &identifiers, level, (yyvsp[-3].id).src);
                            if(funcSymbol->type){
                                compileError((yyvsp[-3].id).src, strlen((yyvsp[-3].id).name), "Function %s already declared", (yyvsp[-3].id).name);
                            }
                            Type* funcType = malloc(sizeof(Type));
                            funcSymbol->type = funcType;
                            funcType->sym = funcSymbol;
                            funcType->op = T_FUNCTION;
                            funcType->type = malloc(sizeof(Type));
                            funcType->type->op = (yyvsp[-4].iValue);
                            int numParams=0;
                            Node* temp = (yyvsp[-1].node);
                            while(temp){
                                numParams++;
                                if(temp->as.opr.nops == 3)
                                    temp = temp->as.opr.operands[1];
                                else temp = NULL;
                            }
                            funcType->size = numParams;
                            funcType->proto = malloc(sizeof(Type*) * numParams);
                            Node* param = (yyvsp[-1].node);
                            int i=0;
                            while(param){
                                if(param->as.opr.nops == 2){
                                    //last param
                                    // printf("Type of param is %d\n", param->as.opr.operands[0]->type);
                                    funcType->proto[i] = param->as.opr.operands[1]->as.symbol->type;
                                } else {
                                    funcType->proto[i] = param->as.opr.operands[2]->as.symbol->type;
                                }
                                i++;
                                if(param->as.opr.nops == 3)
                                    param = param->as.opr.operands[1];
                                else param = NULL;
                            }
                            beginScope();
                        }
#line 1537 "y.tab.c"
    break;

  case 9: /* functionDecl: varType IDENTIFIER '(' param_list ')' $@1 funcBody  */
#line 132 "parser.y"
                {
                    endScope();
                }
#line 1545 "y.tab.c"
    break;

  case 10: /* param_list: varType IDENTIFIER  */
#line 136 "parser.y"
                               {
                        Symbol* psym = install((yyvsp[0].id).name, &identifiers, level, (yyvsp[0].id).src);
                        (yyval.node) = oprNode(OPR_LIST, 2, (yyvsp[-1].iValue), identifierNode(psym)); 
                        printf("Found param %s\n", (yyvsp[0].id).name);
                        Type* paramType = malloc(sizeof(Type));
                        paramType->op = (yyvsp[-1].iValue);
                        paramType->type=NULL;
                        paramType->sym = psym;
                        psym->type = paramType;
                    }
#line 1560 "y.tab.c"
    break;

  case 11: /* param_list: param_list ',' varType IDENTIFIER  */
#line 146 "parser.y"
                                        {
                        printf("Found param %s\n", (yyvsp[0].id).name);
                        Symbol* psym = install((yyvsp[0].id).name, &identifiers, level, (yyvsp[0].id).src);
                        if(psym->type){
                            compileError((yyvsp[0].id).src, strlen((yyvsp[0].id).name), "Parameter %s already declared", (yyvsp[0].id).name);
                        }
                        (yyval.node) = oprNode(OPR_LIST, 3, (yyvsp[-3].node), identifierNode(psym), (yyvsp[-1].iValue));
                    }
#line 1573 "y.tab.c"
    break;

  case 12: /* param_list: %empty  */
#line 154 "parser.y"
      {(yyval.node)=NULL;}
#line 1579 "y.tab.c"
    break;

  case 13: /* varInitialiser: IDENTIFIER arraySpecifier  */
#line 157 "parser.y"
                                          {
                                    (yyval.node) = oprNode('=', 2, identifierNode(install((yyvsp[-1].id).name, &identifiers, level, (yyvsp[-1].id).src)), (yyvsp[0].node));
                                    printf("var init");
                                    }
#line 1588 "y.tab.c"
    break;

  case 14: /* varInitialiser: IDENTIFIER arraySpecifier '=' expr  */
#line 161 "parser.y"
                                         {
                                    (yyval.node) = oprNode('=', 3, identifierNode(install((yyvsp[-3].id).name, &identifiers, level, (yyvsp[-3].id).src)), (yyvsp[-2].node), (yyvsp[0].node));
                                    }
#line 1596 "y.tab.c"
    break;

  case 15: /* varInitialiser: IDENTIFIER arraySpecifier '=' arrayInitialiser  */
#line 164 "parser.y"
                                                     {(yyval.node) = oprNode('=', 3, identifierNode(install((yyvsp[-3].id).name, &identifiers, level, (yyvsp[-3].id).src)), (yyvsp[-2].node), (yyvsp[0].node));}
#line 1602 "y.tab.c"
    break;

  case 16: /* arrayInitialiser: '{' array_init_list '}'  */
#line 166 "parser.y"
                                          { (yyval.node) = (yyvsp[-1].node); (yyval.node)->exprType.op = T_ARRAY;}
#line 1608 "y.tab.c"
    break;

  case 17: /* array_init_list: expr  */
#line 168 "parser.y"
                      { (yyval.node) = oprNode(OPR_LIST, 1, (yyvsp[0].node));}
#line 1614 "y.tab.c"
    break;

  case 18: /* array_init_list: array_init_list ',' expr  */
#line 169 "parser.y"
                               { (yyval.node) = oprNode(OPR_LIST, 3, (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 1620 "y.tab.c"
    break;

  case 19: /* array_init_list: arrayInitialiser  */
#line 170 "parser.y"
                       { (yyval.node) = oprNode(OPR_LIST, 1, (yyvsp[0].node)); (yyval.node)->exprType.op = T_ARRAY;}
#line 1626 "y.tab.c"
    break;

  case 20: /* array_init_list: array_init_list ',' arrayInitialiser  */
#line 171 "parser.y"
                                           { (yyval.node) = oprNode(OPR_LIST, 3, (yyvsp[-2].node), (yyvsp[0].node), NULL); (yyval.node)->exprType.op = T_ARRAY;}
#line 1632 "y.tab.c"
    break;

  case 21: /* varDeclaration: varType varNames  */
#line 179 "parser.y"
                                 {
    (yyval.node) = oprNode(OPR_VAR_DECL, 1, (yyvsp[0].node));
    printf("Found var decl %d, \n", (yyvsp[0].node)->as.opr.type);
    //iterate through the list of variables and add them to the symbol table
    Node* varName = (yyvsp[0].node);
    while(varName != NULL) {
        Node* varInitialiser;
        if(varName->as.opr.type == OPR_LIST) {
            varInitialiser = varName->as.opr.operands[1];
            printf("Found list %d\n", varInitialiser->as.opr.type);
        } else {
            varInitialiser = varName;
        }
        printf("Found var decl for '%s', \n", varInitialiser->as.opr.operands[0]->as.symbol->name);
        Symbol* varSymbol = varInitialiser->as.opr.operands[0]->as.symbol;
        Symbol* installed = install(varSymbol->name, &identifiers, level, varSymbol->src);
        Coordinate src = varSymbol->src;
        if(installed->type){
            compileError(varSymbol->src, strlen(varSymbol->name), "Variable %s already declared", varSymbol->name);
        }
        Type* type = malloc(sizeof(Type));
        type->sym = installed;
        installed->type = type;
        type->op = (yyvsp[-1].iValue);
        int arrLastSize = -1;
        //check if this is an array
        if(varInitialiser->as.opr.operands[1] != NULL){
            Node* arraySpecifier = varInitialiser->as.opr.operands[1];
            Type* innerType = type;
            do {
                arrLastSize = arraySpecifier->as.opr.operands[1]->as.value->as.integer;
                //check if size is declared for dimensions other than first
                if(arrLastSize <= 0 && arraySpecifier->as.opr.operands[0] != NULL){
                    compileError(src, strlen(varSymbol->name), "Array dimensions except the first cannot be empty %d", arrLastSize);
                }
                Type* outerType = malloc(sizeof(Type));
                outerType->sym = installed;
                outerType->op = T_ARRAY;
                outerType->type = innerType;
                outerType->size = arrLastSize;
                innerType = outerType;
            } while((arraySpecifier = arraySpecifier->as.opr.operands[0]));
            installed->type=innerType;
        }

        // printf("\nType op of this var is %d\n", installed->type->op);
        
        //Check if there is an initialiser expression assignment
        if(varInitialiser->as.opr.nops == 3){
            Node* expr = varInitialiser->as.opr.operands[2];
            // printf("Found initialiser %d\n", expr->exprType);
            if(!typeCheckAssign(installed->type->op, expr->exprType.op)){
                compileError(src, strlen(varSymbol->name), "Type mismatch in variable initialisation %s", varSymbol->name);
            }
            //Check if string initialiser
            if(expr->type == NODE_LITERAL && expr->as.value->type == T_ARRAY){
                if(installed->type->op != T_ARRAY || installed->type->type->op != T_CHAR){
                    compileError(src, strlen(varSymbol->name), "Type mismatch (string must be char[]) in variable initialisation %s", varSymbol->name);
                }
            }
            //Check if the initialiser is an array
            if(expr->as.opr.type == OPR_LIST){
                //check every element type
                typeCheckArrayInitialiser(installed->type, expr);
            }

        }
        //Move forward to the next variable
        if(varName->as.opr.type == OPR_LIST){
            varName = varName->as.opr.operands[0];
        } else {
            varName = NULL;
        }
    }
}
#line 1712 "y.tab.c"
    break;

  case 22: /* varType: K_INT  */
#line 256 "parser.y"
               {(yyval.iValue) = T_INT;}
#line 1718 "y.tab.c"
    break;

  case 23: /* varType: K_CHAR  */
#line 256 "parser.y"
                                      {(yyval.iValue) = T_CHAR;}
#line 1724 "y.tab.c"
    break;

  case 24: /* varType: K_FLOAT  */
#line 256 "parser.y"
                                                              {(yyval.iValue) = T_FLOAT;}
#line 1730 "y.tab.c"
    break;

  case 26: /* varNames: varNames ',' varInitialiser  */
#line 259 "parser.y"
                                  {(yyval.node) = oprNode(OPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1736 "y.tab.c"
    break;

  case 27: /* arraySpecifier: arraySpecifier '[' INTEGER ']'  */
#line 261 "parser.y"
                                               {
                                        (yyval.node) = oprNode(OPR_LIST, 2, (yyvsp[-3].node), intNode((yyvsp[-1].iValue)));
                                    }
#line 1744 "y.tab.c"
    break;

  case 28: /* arraySpecifier: arraySpecifier '[' ']'  */
#line 264 "parser.y"
                             {
                            (yyval.node) = oprNode(OPR_LIST, 2, (yyvsp[-2].node), intNode(0));
                        }
#line 1752 "y.tab.c"
    break;

  case 29: /* arraySpecifier: %empty  */
#line 267 "parser.y"
      { (yyval.node) = NULL; }
#line 1758 "y.tab.c"
    break;

  case 30: /* $@2: %empty  */
#line 270 "parser.y"
              {beginScope();}
#line 1764 "y.tab.c"
    break;

  case 31: /* funcBody: '{' $@2 stmtOrDecl '}'  */
#line 272 "parser.y"
              {endScope();}
#line 1770 "y.tab.c"
    break;

  case 46: /* $@3: %empty  */
#line 299 "parser.y"
                 {beginScope();}
#line 1776 "y.tab.c"
    break;

  case 47: /* forStmt: FOR '(' $@3 forInit ';' forCond ';' forIter ')' stmt  */
#line 299 "parser.y"
                                                                          {
    endScope();

}
#line 1785 "y.tab.c"
    break;

  case 54: /* forIter: %empty  */
#line 314 "parser.y"
      {(yyval.node)=NULL;}
#line 1791 "y.tab.c"
    break;

  case 55: /* assignExpr: IDENTIFIER '=' expr  */
#line 317 "parser.y"
                                {
                printf("Found assign target\n");
                Symbol* sym = getSymbol((yyvsp[-2].id).name, identifiers, (yyvsp[-2].id).src, "Variable '%s' not declared", (yyvsp[-2].id).name);
                if(!typeCheckAssign(sym->type->op, (yyvsp[0].node)->exprType.op)){
                    compileError((yyvsp[-2].id).src, strlen((yyvsp[-2].id).name), "Type mismatch in assignment %s", (yyvsp[-2].id).name);
                }
                (yyval.node) = oprNode(OPR_ASSIGN, 2, identifierNode(sym), (yyvsp[0].node));
            }
#line 1804 "y.tab.c"
    break;

  case 56: /* assignExpr: IDENTIFIER INC  */
#line 325 "parser.y"
                     {
                Symbol* sym = getSymbol((yyvsp[-1].id).name, identifiers, (yyvsp[-1].id).src, "Variable '%s' not declared", (yyvsp[-1].id).name);
                if(sym->type->op != T_INT && sym->type->op != T_FLOAT){
                    compileError((yyvsp[-1].id).src, strlen((yyvsp[-1].id).name), "Only int and float can be incremented %s", (yyvsp[-1].id).name);
                }
                (yyval.node) = oprNode(OPR_INC, 1, identifierNode(sym));
            }
#line 1816 "y.tab.c"
    break;

  case 57: /* assignExpr: IDENTIFIER DEC  */
#line 332 "parser.y"
                     {
                Symbol* sym = getSymbol((yyvsp[-1].id).name, identifiers, (yyvsp[-1].id).src, "Variable '%s' not declared", (yyvsp[-1].id).name);
                if(sym->type->op != T_INT && sym->type->op != T_FLOAT){
                    compileError((yyvsp[-1].id).src, strlen((yyvsp[-1].id).name), "Only int and float can be decremented %s", (yyvsp[-1].id).name);
                }
                (yyval.node) = oprNode(OPR_DEC, 1, identifierNode(sym));
            }
#line 1828 "y.tab.c"
    break;

  case 58: /* assignExpr: arrayExpr '=' expr  */
#line 339 "parser.y"
                         {
                printf("Got array type as %d\n", (yyvsp[-2].node)->exprType.op);
                if(!typeCheckAssign((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op)){
                    compileError((yyvsp[-2].node)->src, (yyvsp[0].node)->src.length + (yyvsp[-2].node)->src.length, "Type mismatch in assignment to array");
                }
                (yyval.node) = oprNode(OPR_ASSIGN, 2, (yyvsp[-2].node), (yyvsp[0].node));
            }
#line 1840 "y.tab.c"
    break;

  case 59: /* assignExpr: arrayExpr INC  */
#line 346 "parser.y"
                    {
                if((yyvsp[-1].node)->exprType.op != T_INT && (yyvsp[-1].node)->exprType.op != T_FLOAT){
                    compileError((yyvsp[-1].node)->src, (yyvsp[-1].node)->src.length + 2, "Only int and float can be incremented");
                }
                (yyval.node) = oprNode(OPR_INC, 1, (yyvsp[-1].node));
            }
#line 1851 "y.tab.c"
    break;

  case 60: /* assignExpr: arrayExpr DEC  */
#line 352 "parser.y"
                    {
                if((yyvsp[-1].node)->exprType.op != T_INT || (yyvsp[-1].node)->exprType.op != T_FLOAT){
                    compileError((yyvsp[-1].node)->src, (yyvsp[-1].node)->src.length+2, "Only int and float can be decremented");
                }
                (yyval.node) = oprNode(OPR_DEC, 1, (yyvsp[-1].node));
            }
#line 1862 "y.tab.c"
    break;

  case 73: /* $@4: %empty  */
#line 380 "parser.y"
                        {beginScope();}
#line 1868 "y.tab.c"
    break;

  case 74: /* blockStmt: '{' $@4 stmtOrDecl '}'  */
#line 383 "parser.y"
                        {endScope();}
#line 1874 "y.tab.c"
    break;

  case 75: /* ifStmt: IF '(' expr ')' stmt  */
#line 386 "parser.y"
                                       {printf("Unmatched if statement\n");}
#line 1880 "y.tab.c"
    break;

  case 76: /* ifStmt: IF '(' expr ')' stmt ELSE stmt  */
#line 387 "parser.y"
                                     {printf("Matched if statement\n");}
#line 1886 "y.tab.c"
    break;

  case 77: /* expr: INTEGER  */
#line 389 "parser.y"
              {(yyval.node) = intNode((yyvsp[0].iValue));}
#line 1892 "y.tab.c"
    break;

  case 78: /* expr: CHARACTER  */
#line 390 "parser.y"
                {(yyval.node) = charNode((yyvsp[0].cValue)); }
#line 1898 "y.tab.c"
    break;

  case 79: /* expr: IDENTIFIER  */
#line 391 "parser.y"
                 { 
            Symbol* foundId = getSymbol((yyvsp[0].id).name, identifiers, (yyvsp[0].id).src, "Identifier '%s' not declared in this scope", (yyvsp[0].id).name);
            (yyval.node) = identifierNode(foundId);
            printf("Idenfitier base type is %d\n", (yyval.node)->exprType.ndim);
        }
#line 1908 "y.tab.c"
    break;

  case 80: /* expr: FLOAT  */
#line 396 "parser.y"
            {(yyval.node) = floatNode((yyvsp[0].fValue));}
#line 1914 "y.tab.c"
    break;

  case 81: /* expr: STRING  */
#line 397 "parser.y"
             {(yyval.node) = strNode((yyvsp[0].sValue), strlen((yyvsp[0].sValue))); printf("String here, %d\n", (yyval.node)->src.length);}
#line 1920 "y.tab.c"
    break;

  case 82: /* expr: callExpr  */
#line 398 "parser.y"
               {(yyval.node) = (yyvsp[0].node);}
#line 1926 "y.tab.c"
    break;

  case 83: /* expr: '-' expr  */
#line 399 "parser.y"
                            { (yyval.node) = oprNode('-', 1, (yyvsp[0].node)); typeCheckUnary((yyvsp[0].node)); (yyval.node)->exprType.op = (yyvsp[0].node)->exprType.op;}
#line 1932 "y.tab.c"
    break;

  case 84: /* expr: '!' expr  */
#line 400 "parser.y"
                            { (yyval.node) = oprNode('!', 1, (yyvsp[0].node)); typeCheckUnary((yyvsp[0].node)); (yyval.node)->exprType.op = (yyvsp[0].node)->exprType.op;}
#line 1938 "y.tab.c"
    break;

  case 85: /* expr: expr '+' expr  */
#line 401 "parser.y"
                    { (yyval.node) = oprNode('+', 2, (yyvsp[-2].node), (yyvsp[0].node));     (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 1944 "y.tab.c"
    break;

  case 86: /* expr: expr '-' expr  */
#line 402 "parser.y"
                    { (yyval.node) = oprNode('-', 2, (yyvsp[-2].node), (yyvsp[0].node));     (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 1950 "y.tab.c"
    break;

  case 87: /* expr: expr '*' expr  */
#line 403 "parser.y"
                    { (yyval.node) = oprNode('*', 2, (yyvsp[-2].node), (yyvsp[0].node));     (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 1956 "y.tab.c"
    break;

  case 88: /* expr: expr '/' expr  */
#line 404 "parser.y"
                    { (yyval.node) = oprNode('/', 2, (yyvsp[-2].node), (yyvsp[0].node));     (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 1962 "y.tab.c"
    break;

  case 89: /* expr: expr '<' expr  */
#line 405 "parser.y"
                    { (yyval.node) = oprNode('<', 2, (yyvsp[-2].node), (yyvsp[0].node));     (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 1968 "y.tab.c"
    break;

  case 90: /* expr: expr '>' expr  */
#line 406 "parser.y"
                    { (yyval.node) = oprNode('>', 2, (yyvsp[-2].node), (yyvsp[0].node));     (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 1974 "y.tab.c"
    break;

  case 91: /* expr: expr GE expr  */
#line 407 "parser.y"
                   { (yyval.node) = oprNode(OPR_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));   (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 1980 "y.tab.c"
    break;

  case 92: /* expr: expr LE expr  */
#line 408 "parser.y"
                   { (yyval.node) = oprNode(OPR_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));   (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 1986 "y.tab.c"
    break;

  case 93: /* expr: expr EQ expr  */
#line 409 "parser.y"
                   { (yyval.node) = oprNode(OPR_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));   (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 1992 "y.tab.c"
    break;

  case 94: /* expr: expr NE expr  */
#line 410 "parser.y"
                   { (yyval.node) = oprNode(OPR_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));   (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 1998 "y.tab.c"
    break;

  case 95: /* expr: expr AND expr  */
#line 411 "parser.y"
                    { (yyval.node) = oprNode(OPR_AND, 2, (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 2004 "y.tab.c"
    break;

  case 96: /* expr: expr OR expr  */
#line 412 "parser.y"
                   { (yyval.node) = oprNode(OPR_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));   (yyval.node)->exprType.op = typeWiden((yyvsp[-2].node)->exprType.op, (yyvsp[0].node)->exprType.op);}
#line 2010 "y.tab.c"
    break;

  case 97: /* expr: '(' expr ')'  */
#line 413 "parser.y"
                   { (yyval.node) = (yyvsp[-1].node);   (yyval.node)->exprType.op = (yyvsp[-1].node)->exprType.op;}
#line 2016 "y.tab.c"
    break;

  case 98: /* expr: arrayExpr  */
#line 414 "parser.y"
                {(yyval.node) = (yyvsp[0].node);       (yyval.node)->exprType.op = (yyvsp[0].node)->exprType.op;}
#line 2022 "y.tab.c"
    break;

  case 99: /* arrayExpr: expr '[' expr ']'  */
#line 419 "parser.y"
                                       {
        printf("Found array expression type %d\n", (yyvsp[-3].node)->exprType.ndim);
        if((yyvsp[-3].node)->exprType.op != T_ARRAY){
            compileError((yyvsp[-3].node)->src, (yyvsp[-3].node)->src.length + (yyvsp[-1].node)->src.length + 2, "Invalid indexing target. Only array types can be indexed.");
        }
        if((yyvsp[-1].node)->exprType.op != T_INT){
            compileError((yyvsp[-1].node)->src, (yyvsp[-1].node)->src.length, "Only int types can be used as indices.");
        }
        (yyval.node) = oprNode(OPR_ARRAY_INDEX, 2, (yyvsp[-3].node), (yyvsp[-1].node));
        (yyval.node)->exprType.op = (yyvsp[-3].node)->exprType.ndim == 1 ? (yyvsp[-3].node)->exprType.base : T_ARRAY;
        (yyval.node)->exprType.ndim = (yyvsp[-3].node)->exprType.ndim - 1;
        // $$->exprType.op = $1->exprType.op->type;
        (yyval.node)->src.length = (yyvsp[-3].node)->src.length + (yyvsp[-1].node)->src.length + 2;
    }
#line 2041 "y.tab.c"
    break;

  case 100: /* callExpr: IDENTIFIER '(' arg_list ')'  */
#line 434 "parser.y"
                                      {
                Symbol* callee = lookup((yyvsp[-3].id).name, identifiers);
                if(!callee){
                    // compileError("Error: Function '%s' not defined", $1);
                    compileError((yyvsp[-3].id).src, strlen((yyvsp[-3].id).name), "Function '%s' not defined", (yyvsp[-3].id).name);
                }
                if(callee->type->op != T_FUNCTION){
                    compileError((yyvsp[-3].id).src, strlen((yyvsp[-3].id).name), "Identifier '%s' is not a function", (yyvsp[-3].id).name);
                }
                (yyval.node) = oprNode(OPR_CALL, 1, identifierNode(callee), (yyvsp[-1].node));
                (yyval.node)->exprType.op = callee->type->type->op;
                //Type check all parameters
                Node *param = (yyvsp[-1].node);
                int i=callee->type->size-1;
                printf("Starting with %d params\n", i);
                if(param){
                    printf("here\n");
                    while(param->as.opr.nops==2 && i >= 0){
                        printf("Comparing with original type %d\n", param->as.opr.operands[1]->exprType.op);
                        if(!typeCheckAssign(callee->type->proto[i]->op, param->as.opr.operands[1]->exprType.op)){
                            compileError(param->as.opr.operands[1]->src, param->as.opr.operands[1]->src.length, "Type mismatch in function call to '%s'", (yyvsp[-3].id).name);
                        }
                        param = param->as.opr.operands[0];
                        i--;
                    }
                    printf("Comparing with original type %d %d\n", param->exprType.op, i);
                    if(i<0) {
                            compileError((yyvsp[-3].id).src, strlen((yyvsp[-3].id).name), "Too many parameters in function call to '%s'", (yyvsp[-3].id).name);
                    }
                    if(!typeCheckAssign(callee->type->proto[i]->op, param->exprType.op)){
                        compileError((yyvsp[-3].id).src, strlen((yyvsp[-3].id).name), "Type mismatch in function call to '%s'", (yyvsp[-3].id).name);
                    }
                    i--;
                }
                if(i >= 0){
                    compileError((yyvsp[-3].id).src, strlen((yyvsp[-3].id).name), "Too few parameters in function call to '%s'; expected %d", (yyvsp[-3].id).name, callee->type->size);
                }
                printNode((yyval.node));
    }
#line 2085 "y.tab.c"
    break;

  case 101: /* arg_list: expr  */
#line 474 "parser.y"
               {(yyval.node) = (yyvsp[0].node);}
#line 2091 "y.tab.c"
    break;

  case 102: /* arg_list: arg_list ',' expr  */
#line 475 "parser.y"
                        {(yyval.node) = oprNode(OPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 2097 "y.tab.c"
    break;

  case 103: /* arg_list: %empty  */
#line 476 "parser.y"
      {(yyval.node) = NULL;}
#line 2103 "y.tab.c"
    break;

  case 106: /* continueStmt: CONTINUE  */
#line 483 "parser.y"
                       {(yyval.node) = oprNode(OPR_CONTINUE, 0);}
#line 2109 "y.tab.c"
    break;

  case 107: /* breakStmt: BREAK  */
#line 485 "parser.y"
                 {(yyval.node) = oprNode(OPR_BREAK, 0);}
#line 2115 "y.tab.c"
    break;


#line 2119 "y.tab.c"

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

#line 487 "parser.y"

void typeCheckArrayInitialiser(Type* elementType, Node* expr){
    Node* exprList = expr;
    /* printf("Starting array %d\n", elementType->type->op, exprList); */
    if(exprList == NULL) return;
    //if it is not a list, this is the last element
    if(exprList->as.opr.nops == 1){
        Node* insideElement = exprList->as.opr.operands[0];
        printf("Checking 1) %d %d\n", elementType->type->op, insideElement->exprType.op);
        if(!typeCheckAssign(elementType->type->op, insideElement->exprType.op)){
            compileError( insideElement->src,  insideElement->src.length, "Invalid array element type");
        }
        if(insideElement->as.opr.type == OPR_LIST){
            typeCheckArrayInitialiser(elementType->type, insideElement);
        }
    } else {
        //this is a list, so check the second operand
        //if it is a list, it will be checked recursively
        /* printf("Checking %d %d\n", elementType->type->op, exprList->as.opr.operands[1]->exprType.op); */
        Node* localElement = exprList->as.opr.operands[1];
        if(localElement->exprType.op != elementType->type->op){
            compileError(localElement->src, localElement->src.length, "Invalid array element type 2");
        }
        if(localElement->as.opr.type == OPR_LIST){
            typeCheckArrayInitialiser(elementType->type, exprList->as.opr.operands[1]);
        }
        //advance to next element in list
        typeCheckArrayInitialiser(elementType, exprList->as.opr.operands[0]);
    }
}
void typeCheckUnary(Node* node){
    int invalid = 0;
    switch(node->type){
        case NODE_LITERAL:
            //cannot operate on strings
            invalid = (node->as.value->type == T_ARRAY);
            break;
        case NODE_SYMBOL:
            //cannot operate on arrays
            invalid = (node->as.symbol->type->op == T_ARRAY);
            break;
        case NODE_OPR:
            //cannot operate on arrays
            invalid = (node->exprType.op == T_ARRAY);
            break;
        default:
            invalid = 1;
            break;
    }
    if(invalid){
        Coordinate src;
        src.line=lineno;
        src.col = col;
        compileError(src, 1, "Invalid operand type");
    }
}
/* Type check two types
   Tries to widen a type to match the other,
   otherwise raises compileError.
 */
int typeCheckAssign(TypeEnum varType, TypeEnum exprType){
    //exprType cannot larger than varType
    if(varType != T_ARRAY && exprType == T_ARRAY){
        return 0;
    }
    if(varType == T_ARRAY && exprType != T_ARRAY){
        return 0;
    }

    if(exprType == T_FLOAT && varType != T_FLOAT){
        return 0;
    }
    return 1;
}

TypeEnum typeWiden(TypeEnum t1, TypeEnum t2){
    //arrays are not allowed
    if(t1 == T_ARRAY || t2 == T_ARRAY){
        return -1;
    }
    if(t1 == T_FLOAT || t2 == T_FLOAT){
        return T_FLOAT;
    }
    if(t1 == T_INT || t2 == T_INT){
        return T_INT;
    }
    if(t1 == T_CHAR || t2 == T_CHAR){
        return T_CHAR;
    }
    return -1;
}


void point_at_in_line(int lineno, int from, int to);

Symbol* getSymbol(char* name, SymbolTable* table, Coordinate src, char* format, ...){
    Symbol* foundIdentifier = lookup(name, table);
    if(!foundIdentifier){
        va_list args;
        va_start(args, format);
        fprintf(stderr, ANSI_COLOR_BOLD "%s[%d:%d] " ANSI_COLOR_RESET, currentFileName, src.line, src.col);
        fprintf(stderr, "Error: ");
        vfprintf(stderr, format, args);
        fprintf(stderr, "\n");
        point_at_in_line(src.line-1, src.col -1 , src.col + strlen(name) -1 );
        va_end(args);
        exit(1);
    }
    return foundIdentifier;
}


/**
    * Prints a message to stderr and exits the program
    * @param format The format string
    * @param ... The arguments to the format string
*/
void compileError(Coordinate src, int lexemeLength, char* format, ...){
    va_list args;
    va_start(args, format);
    fprintf(stderr, ANSI_COLOR_BOLD "%s[%d:%d] " ANSI_COLOR_RESET, currentFileName, src.line, src.col);
    fprintf(stderr, "Error: ");
    vfprintf(stderr, format, args);
    fprintf(stderr, "\n");
    point_at_in_line(src.line-1, src.col -1 , src.col + lexemeLength -1 );
    va_end(args);
    exit(1);
}
/* int main(int argc, char* argv[]){
    return 0;
} */
/* int yyerror(char *s){
  exit(1);
  return 1;
} */
