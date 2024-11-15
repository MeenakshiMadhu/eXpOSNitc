/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "splparser.y"

#include "data.h"
#include "spl.h"
#include "file.h"
#include "node.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#line 82 "y.tab.c"

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
    ALIAS = 258,                   /* ALIAS  */
    DEFINE = 259,                  /* DEFINE  */
    DO = 260,                      /* DO  */
    ELSE = 261,                    /* ELSE  */
    ENDIF = 262,                   /* ENDIF  */
    ENDWHILE = 263,                /* ENDWHILE  */
    IF = 264,                      /* IF  */
    RETURN = 265,                  /* RETURN  */
    IRETURN = 266,                 /* IRETURN  */
    LOAD = 267,                    /* LOAD  */
    STORE = 268,                   /* STORE  */
    THEN = 269,                    /* THEN  */
    WHILE = 270,                   /* WHILE  */
    HALT = 271,                    /* HALT  */
    REG = 272,                     /* REG  */
    NUM = 273,                     /* NUM  */
    ASSIGNOP = 274,                /* ASSIGNOP  */
    ARITHOP1 = 275,                /* ARITHOP1  */
    ARITHOP2 = 276,                /* ARITHOP2  */
    RELOP = 277,                   /* RELOP  */
    LOGOP = 278,                   /* LOGOP  */
    NOTOP = 279,                   /* NOTOP  */
    ID = 280,                      /* ID  */
    BREAK = 281,                   /* BREAK  */
    CONTINUE = 282,                /* CONTINUE  */
    CHKPT = 283,                   /* CHKPT  */
    READ = 284,                    /* READ  */
    READI = 285,                   /* READI  */
    PRINT = 286,                   /* PRINT  */
    STRING = 287,                  /* STRING  */
    INLINE = 288,                  /* INLINE  */
    BACKUP = 289,                  /* BACKUP  */
    RESTORE = 290,                 /* RESTORE  */
    LOADI = 291,                   /* LOADI  */
    GOTO = 292,                    /* GOTO  */
    CALL = 293,                    /* CALL  */
    ENCRYPT = 294,                 /* ENCRYPT  */
    PORT = 295,                    /* PORT  */
    MULTIPUSH = 296,               /* MULTIPUSH  */
    MULTIPOP = 297,                /* MULTIPOP  */
    UMIN = 298                     /* UMIN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ALIAS 258
#define DEFINE 259
#define DO 260
#define ELSE 261
#define ENDIF 262
#define ENDWHILE 263
#define IF 264
#define RETURN 265
#define IRETURN 266
#define LOAD 267
#define STORE 268
#define THEN 269
#define WHILE 270
#define HALT 271
#define REG 272
#define NUM 273
#define ASSIGNOP 274
#define ARITHOP1 275
#define ARITHOP2 276
#define RELOP 277
#define LOGOP 278
#define NOTOP 279
#define ID 280
#define BREAK 281
#define CONTINUE 282
#define CHKPT 283
#define READ 284
#define READI 285
#define PRINT 286
#define STRING 287
#define INLINE 288
#define BACKUP 289
#define RESTORE 290
#define LOADI 291
#define GOTO 292
#define CALL 293
#define ENCRYPT 294
#define PORT 295
#define MULTIPUSH 296
#define MULTIPOP 297
#define UMIN 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "splparser.y"

    struct tree *n;

#line 225 "y.tab.c"

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
  YYSYMBOL_ALIAS = 3,                      /* ALIAS  */
  YYSYMBOL_DEFINE = 4,                     /* DEFINE  */
  YYSYMBOL_DO = 5,                         /* DO  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_ENDIF = 7,                      /* ENDIF  */
  YYSYMBOL_ENDWHILE = 8,                   /* ENDWHILE  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_IRETURN = 11,                   /* IRETURN  */
  YYSYMBOL_LOAD = 12,                      /* LOAD  */
  YYSYMBOL_STORE = 13,                     /* STORE  */
  YYSYMBOL_THEN = 14,                      /* THEN  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_HALT = 16,                      /* HALT  */
  YYSYMBOL_REG = 17,                       /* REG  */
  YYSYMBOL_NUM = 18,                       /* NUM  */
  YYSYMBOL_ASSIGNOP = 19,                  /* ASSIGNOP  */
  YYSYMBOL_ARITHOP1 = 20,                  /* ARITHOP1  */
  YYSYMBOL_ARITHOP2 = 21,                  /* ARITHOP2  */
  YYSYMBOL_RELOP = 22,                     /* RELOP  */
  YYSYMBOL_LOGOP = 23,                     /* LOGOP  */
  YYSYMBOL_NOTOP = 24,                     /* NOTOP  */
  YYSYMBOL_ID = 25,                        /* ID  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_CHKPT = 28,                     /* CHKPT  */
  YYSYMBOL_READ = 29,                      /* READ  */
  YYSYMBOL_READI = 30,                     /* READI  */
  YYSYMBOL_PRINT = 31,                     /* PRINT  */
  YYSYMBOL_STRING = 32,                    /* STRING  */
  YYSYMBOL_INLINE = 33,                    /* INLINE  */
  YYSYMBOL_BACKUP = 34,                    /* BACKUP  */
  YYSYMBOL_RESTORE = 35,                   /* RESTORE  */
  YYSYMBOL_LOADI = 36,                     /* LOADI  */
  YYSYMBOL_GOTO = 37,                      /* GOTO  */
  YYSYMBOL_CALL = 38,                      /* CALL  */
  YYSYMBOL_ENCRYPT = 39,                   /* ENCRYPT  */
  YYSYMBOL_PORT = 40,                      /* PORT  */
  YYSYMBOL_MULTIPUSH = 41,                 /* MULTIPUSH  */
  YYSYMBOL_MULTIPOP = 42,                  /* MULTIPOP  */
  YYSYMBOL_UMIN = 43,                      /* UMIN  */
  YYSYMBOL_44_ = 44,                       /* ';'  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* ':'  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_body = 52,                      /* body  */
  YYSYMBOL_definelistpad = 53,             /* definelistpad  */
  YYSYMBOL_definelist = 54,                /* definelist  */
  YYSYMBOL_definestmt = 55,                /* definestmt  */
  YYSYMBOL_stmtlist = 56,                  /* stmtlist  */
  YYSYMBOL_stmt = 57,                      /* stmt  */
  YYSYMBOL_expr = 58,                      /* expr  */
  YYSYMBOL_ifpad = 59,                     /* ifpad  */
  YYSYMBOL_elsepad = 60,                   /* elsepad  */
  YYSYMBOL_whilepad = 61,                  /* whilepad  */
  YYSYMBOL_reglist = 62,                   /* reglist  */
  YYSYMBOL_ids = 63                        /* ids  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   307

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
      45,    47,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    44,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    29,    29,    36,    41,    42,    45,    48,    56,    59,
      64,    76,    88,    93,    99,   105,   109,   112,   115,   118,
     121,   124,   132,   140,   143,   150,   153,   156,   164,   167,
     170,   173,   181,   188,   195,   199,   202,   207,   210,   213,
     216,   219,   224,   227,   230,   233,   236,   239,   244,   249,
     254,   261,   264,   269,   272
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
  "\"end of file\"", "error", "\"invalid token\"", "ALIAS", "DEFINE",
  "DO", "ELSE", "ENDIF", "ENDWHILE", "IF", "RETURN", "IRETURN", "LOAD",
  "STORE", "THEN", "WHILE", "HALT", "REG", "NUM", "ASSIGNOP", "ARITHOP1",
  "ARITHOP2", "RELOP", "LOGOP", "NOTOP", "ID", "BREAK", "CONTINUE",
  "CHKPT", "READ", "READI", "PRINT", "STRING", "INLINE", "BACKUP",
  "RESTORE", "LOADI", "GOTO", "CALL", "ENCRYPT", "PORT", "MULTIPUSH",
  "MULTIPOP", "UMIN", "';'", "'('", "','", "')'", "':'", "'['", "']'",
  "$accept", "body", "definelistpad", "definelist", "definestmt",
  "stmtlist", "stmt", "expr", "ifpad", "elsepad", "whilepad", "reglist",
  "ids", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    59,    40,    44,    41,    58,    91,
      93
};
#endif

#define YYPACT_NINF (-67)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -67,    12,   217,    19,   -67,    -9,   -67,   -10,    -4,    -1,
       0,   -67,     3,   -67,   -67,    23,    -3,   -18,    30,    46,
      56,    69,   -12,    -3,   -67,    41,    70,    88,    32,   110,
     111,   -12,    94,    95,    -3,    -3,   217,   -67,   264,    -3,
      -3,   -67,   117,   -67,   132,   -67,   -67,    -3,    -3,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   131,   255,
     134,   -67,   -67,    -3,   137,   138,   146,   178,   178,    29,
      16,   -67,   -14,    -3,    -3,    -3,    -3,    61,   284,   -11,
     153,    65,   247,   -67,   -67,   -67,   251,   -67,   -67,   -67,
     108,   151,   152,   -67,   -67,   172,   259,   198,   -67,     7,
     136,   217,   217,   179,   204,   -67,    -3,    -3,    -3,   178,
     180,   187,   -67,   -67,    92,   135,   -67,   192,    33,    42,
      47,   -67,   -67,   -67,   -67,   194,   217,   195,   -67,   196,
     213,   216,   -67,   176,   -67,   -67,   -67,   -67,   219,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     3,     1,     0,    48,     0,     0,     0,
       0,    50,     0,    54,    45,     0,     0,    53,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     9,     0,     0,
       0,    46,     0,     4,     0,    19,    20,     0,     0,    23,
      41,    53,    42,    34,    21,    22,    25,    26,     0,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    24,     0,    32,    33,    31,
      52,     0,     0,    44,    43,     0,     0,    37,    38,    39,
      40,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,    11,    10,     0,     0,     6,     0,     0,     0,
       0,    51,    35,    36,    49,     0,     0,     0,     7,     0,
       0,     0,    12,     0,    14,    16,    17,    18,     0,    13
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,   -67,   -67,   -67,   -67,   -30,   -36,   -15,   -67,   -67,
     -67,   -66,    84
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     3,    43,    36,    37,    38,    39,   126,
      40,    91,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      71,    52,    92,    13,    14,    13,    15,   103,    59,   104,
      16,    51,     4,    51,    13,    14,    44,    15,    24,    69,
      70,    16,    51,    42,    77,    78,    95,    73,    74,    24,
      53,    34,    81,    82,    45,    35,    73,    74,    75,    76,
      46,    50,    34,   121,    47,    48,    35,    49,    86,    73,
      74,    75,    76,    73,    74,    75,    76,    96,    97,    98,
      99,   100,    73,    74,    75,    76,    94,    73,    74,    75,
      76,   114,   115,    60,    54,   101,    93,    63,    71,    71,
     129,    73,    74,    75,    76,    73,    74,    75,    76,   130,
      55,   118,   119,   120,   131,     5,   133,    71,   124,   125,
      56,     6,     7,     8,     9,    10,    58,    11,    12,    13,
      14,   106,    15,    57,    61,    66,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    62,    32,    33,    64,    65,    34,     5,    67,
      68,    35,    79,   127,     6,     7,     8,     9,    10,    80,
      11,    12,    13,    14,   109,    15,    73,    74,    75,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    83,    32,    33,    85,     5,
      34,    87,    88,   138,    35,     6,     7,     8,     9,    10,
      89,    11,    12,    13,    14,    90,    15,   105,   110,   111,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   112,    32,    33,    74,
       5,    34,   117,   116,   122,    35,     6,     7,     8,     9,
      10,   123,    11,    12,    13,    14,   128,    15,   132,   134,
     135,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   136,    32,    33,
     137,     0,    34,   139,     0,     0,    35,    73,    74,    75,
      76,    73,    74,    75,    76,    73,    74,    75,    76,    73,
      74,    75,    76,    72,    73,    74,    75,    76,     0,   102,
       0,     0,     0,   107,     0,     0,     0,   108,     0,    84,
       0,     0,     0,   113,    73,    74,    75,    76
};

static const yytype_int16 yycheck[] =
{
      36,    16,    68,    17,    18,    17,    20,    18,    23,    20,
      24,    25,     0,    25,    17,    18,    25,    20,    32,    34,
      35,    24,    25,     4,    39,    40,    40,    20,    21,    32,
      48,    45,    47,    48,    44,    49,    20,    21,    22,    23,
      44,    18,    45,   109,    45,    45,    49,    44,    63,    20,
      21,    22,    23,    20,    21,    22,    23,    72,    73,    74,
      75,    76,    20,    21,    22,    23,    50,    20,    21,    22,
      23,   101,   102,    32,    44,    14,    47,    45,   114,   115,
      47,    20,    21,    22,    23,    20,    21,    22,    23,    47,
      44,   106,   107,   108,    47,     3,   126,   133,     6,     7,
      44,     9,    10,    11,    12,    13,    22,    15,    16,    17,
      18,    46,    20,    44,    44,    31,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    44,    41,    42,    25,    25,    45,     3,    45,
      45,    49,    25,     8,     9,    10,    11,    12,    13,    17,
      15,    16,    17,    18,    46,    20,    20,    21,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    44,    41,    42,    44,     3,
      45,    44,    44,     7,    49,     9,    10,    11,    12,    13,
      44,    15,    16,    17,    18,    17,    20,    44,    47,    47,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    44,    41,    42,    21,
       3,    45,    18,    44,    44,    49,     9,    10,    11,    12,
      13,    44,    15,    16,    17,    18,    44,    20,    44,    44,
      44,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    44,    41,    42,
      44,    -1,    45,    44,    -1,    -1,    49,    20,    21,    22,
      23,    20,    21,    22,    23,    20,    21,    22,    23,    20,
      21,    22,    23,    19,    20,    21,    22,    23,    -1,     5,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    46,    -1,    44,
      -1,    -1,    -1,    44,    20,    21,    22,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    52,    53,    54,     0,     3,     9,    10,    11,    12,
      13,    15,    16,    17,    18,    20,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    41,    42,    45,    49,    56,    57,    58,    59,
      61,    63,     4,    55,    25,    44,    44,    45,    45,    44,
      18,    25,    58,    48,    44,    44,    44,    44,    63,    58,
      32,    44,    44,    45,    25,    25,    63,    45,    45,    58,
      58,    57,    19,    20,    21,    22,    23,    58,    58,    25,
      17,    58,    58,    44,    44,    44,    58,    44,    44,    44,
      17,    62,    62,    47,    50,    40,    58,    58,    58,    58,
      58,    14,     5,    18,    20,    44,    46,    46,    46,    46,
      47,    47,    44,    44,    56,    56,    44,    18,    58,    58,
      58,    62,    44,    44,     6,     7,    60,     8,    44,    47,
      47,    47,    44,    56,    44,    44,    44,    44,     7,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    59,    60,
      61,    62,    62,    63,    63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     4,     5,     2,     1,
       4,     4,     6,     8,     6,     4,     7,     7,     7,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     3,     2,
       2,     3,     3,     3,     2,     5,     5,     3,     3,     3,
       3,     2,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* body: definelistpad stmtlist  */
#line 29 "splparser.y"
                                {
                                    codegen((yyvsp[0].n));
                                    out_linecount++;
                                    fprintf(fp, "HALT");
                                }
#line 1395 "y.tab.c"
    break;

  case 3: /* definelistpad: definelist  */
#line 36 "splparser.y"
                                {
                                    add_predefined_constants();
                                }
#line 1403 "y.tab.c"
    break;

  case 6: /* definestmt: DEFINE ID NUM ';'  */
#line 45 "splparser.y"
                                                {
                                                    insert_constant((yyvsp[-2].n)->name, (yyvsp[-1].n)->value);
                                                }
#line 1411 "y.tab.c"
    break;

  case 7: /* definestmt: DEFINE ID ARITHOP1 NUM ';'  */
#line 48 "splparser.y"
                                                {
                                                    if (node_getType((yyvsp[-2].n)) == NODE_SUB)
                                                        insert_constant((yyvsp[-3].n)->name, -1 * (yyvsp[-1].n)->value);
                                                    else
                                                        insert_constant((yyvsp[-3].n)->name, (yyvsp[-1].n)->value);
                                                }
#line 1422 "y.tab.c"
    break;

  case 8: /* stmtlist: stmtlist stmt  */
#line 56 "splparser.y"
                                                {
                                                    (yyval.n) = create_nontermNode(NODE_STMTLIST, (yyvsp[-1].n), (yyvsp[0].n));
                                                }
#line 1430 "y.tab.c"
    break;

  case 9: /* stmtlist: stmt  */
#line 59 "splparser.y"
                                                {
                                                    (yyval.n) = (yyvsp[0].n);
                                                }
#line 1438 "y.tab.c"
    break;

  case 10: /* stmt: expr ASSIGNOP expr ';'  */
#line 64 "splparser.y"
                                                {
                                                    if (node_getType((yyvsp[-3].n)) == NODE_REG || node_getType((yyvsp[-3].n)) == NODE_ADDR_EXPR)
                                                    {
                                                        (yyvsp[-2].n)->value = 2;
                                                        (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-3].n), (yyvsp[-1].n), NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d: Invalid operands in assignment!!\n", linecount);
                                                        exit(0);
                                                    }
                                                }
#line 1455 "y.tab.c"
    break;

  case 11: /* stmt: expr ASSIGNOP PORT ';'  */
#line 76 "splparser.y"
                                                {
                                                    if (node_getType((yyvsp[-3].n)) == NODE_REG || node_getType((yyvsp[-3].n)) == NODE_ADDR_EXPR)
                                                    {
                                                        (yyvsp[-2].n)->value = 2;
                                                        (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-3].n), (yyvsp[-1].n), NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d: Invalid operands in assignment!!\n",  linecount);
                                                        exit(0);
                                                    }
                                                }
#line 1472 "y.tab.c"
    break;

  case 12: /* stmt: ifpad expr THEN stmtlist ENDIF ';'  */
#line 88 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-5].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                            pop_alias();
                                                            depth--;
                                                        }
#line 1482 "y.tab.c"
    break;

  case 13: /* stmt: ifpad expr THEN stmtlist elsepad stmtlist ENDIF ';'  */
#line 94 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-7].n), (yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n));
                                                            pop_alias();
                                                            depth--;
                                                        }
#line 1492 "y.tab.c"
    break;

  case 14: /* stmt: whilepad expr DO stmtlist ENDWHILE ';'  */
#line 99 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-5].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                            pop_alias();
                                                            depth--;
                                                            flag_break--;
                                                        }
#line 1503 "y.tab.c"
    break;

  case 15: /* stmt: ALIAS ID REG ';'  */
#line 105 "splparser.y"
                                                        {
                                                            push_alias((yyvsp[-2].n)->name, (yyvsp[-1].n)->value);
                                                            (yyval.n) = NULL;
                                                        }
#line 1512 "y.tab.c"
    break;

  case 16: /* stmt: LOAD '(' expr ',' expr ')' ';'  */
#line 109 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                        }
#line 1520 "y.tab.c"
    break;

  case 17: /* stmt: STORE '(' expr ',' expr ')' ';'  */
#line 112 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                        }
#line 1528 "y.tab.c"
    break;

  case 18: /* stmt: LOADI '(' expr ',' expr ')' ';'  */
#line 115 "splparser.y"
                                                        {
                                                            (yyval.n) = create_tree((yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                        }
#line 1536 "y.tab.c"
    break;

  case 19: /* stmt: RETURN ';'  */
#line 118 "splparser.y"
                                                        {
                                                            (yyval.n) = (yyvsp[-1].n);
                                                        }
#line 1544 "y.tab.c"
    break;

  case 20: /* stmt: IRETURN ';'  */
#line 121 "splparser.y"
                                                        {
                                                            (yyval.n) = (yyvsp[-1].n);
                                                        }
#line 1552 "y.tab.c"
    break;

  case 21: /* stmt: BREAK ';'  */
#line 124 "splparser.y"
                                                        {
                                                            if (flag_break == 0)
                                                            {
                                                                printf("\n%d: break or continue should be used inside while!!\n", linecount);
                                                                exit(0);
                                                            }
                                                            (yyval.n)=(yyvsp[-1].n);
                                                        }
#line 1565 "y.tab.c"
    break;

  case 22: /* stmt: CONTINUE ';'  */
#line 132 "splparser.y"
                                            {
                                                if (flag_break==0)
                                                {
                                                    printf("\n%d: break or continue should be used inside while!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1578 "y.tab.c"
    break;

  case 23: /* stmt: HALT ';'  */
#line 140 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1586 "y.tab.c"
    break;

  case 24: /* stmt: INLINE STRING ';'  */
#line 143 "splparser.y"
                                            {
                                                int temp;
                                                (yyvsp[-1].n)->name++;
                                                temp = strlen((yyvsp[-1].n)->name);
                                                (yyvsp[-1].n)->name[temp - 1] = '\0';
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1598 "y.tab.c"
    break;

  case 25: /* stmt: CHKPT ';'  */
#line 150 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1606 "y.tab.c"
    break;

  case 26: /* stmt: READ ';'  */
#line 153 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1614 "y.tab.c"
    break;

  case 27: /* stmt: READI ids ';'  */
#line 156 "splparser.y"
                                            {
                                                if (node_getType((yyvsp[-1].n)) != NODE_REG || !isAllowedRegister((yyvsp[-1].n)->value))
                                                {
                                                    printf("\n%d: Invalid operand in read!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1627 "y.tab.c"
    break;

  case 28: /* stmt: PRINT expr ';'  */
#line 164 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1635 "y.tab.c"
    break;

  case 29: /* stmt: BACKUP ';'  */
#line 167 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), NULL, NULL, NULL);
                                            }
#line 1643 "y.tab.c"
    break;

  case 30: /* stmt: RESTORE ';'  */
#line 170 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), NULL, NULL, NULL);
                                            }
#line 1651 "y.tab.c"
    break;

  case 31: /* stmt: ENCRYPT ids ';'  */
#line 173 "splparser.y"
                                            {
                                                if (node_getType((yyvsp[-1].n)) != NODE_REG || !isAllowedRegister((yyvsp[-1].n)->value))
                                                {
                                                    printf("\n%d: Invalid operand in encrypt!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1664 "y.tab.c"
    break;

  case 32: /* stmt: GOTO ID ';'  */
#line 181 "splparser.y"
                                            {
                                                if (lookup_constant(node_getName((yyvsp[-1].n))) != NULL) // if the address to jump to is a predefined value in constants file
                                                    (yyval.n) = create_tree((yyvsp[-2].n), substitute_id((yyvsp[-1].n)), NULL, NULL);
                                                else
                                                    (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                                (yyval.n)->value = linecount; // Hack to show line numbers in case of syntax errors
                                            }
#line 1676 "y.tab.c"
    break;

  case 33: /* stmt: CALL ID ';'  */
#line 188 "splparser.y"
                                            {
                                                if(lookup_constant(node_getName((yyvsp[-1].n))) != NULL) // if the address to jump to is a predefined value in constants file
                                                    (yyval.n) = create_tree((yyvsp[-2].n), substitute_id((yyvsp[-1].n)), NULL, NULL);
                                                else
                                                    (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                                (yyval.n)->value = linecount; // Hack to show line numbers in case of syntax errors
                                            }
#line 1688 "y.tab.c"
    break;

  case 34: /* stmt: ID ':'  */
#line 195 "splparser.y"
                                            {
                                                label_add(node_getName((yyvsp[-1].n)));
                                                (yyval.n) = create_nontermNode(NODE_LABEL_DEF, (yyvsp[-1].n), NULL);
                                            }
#line 1697 "y.tab.c"
    break;

  case 35: /* stmt: MULTIPUSH '(' reglist ')' ';'  */
#line 199 "splparser.y"
                                                {
                                                    (yyval.n) = create_tree((yyvsp[-4].n), (yyvsp[-2].n), NULL, NULL);
                                                }
#line 1705 "y.tab.c"
    break;

  case 36: /* stmt: MULTIPOP '(' reglist ')' ';'  */
#line 202 "splparser.y"
                                                {
                                                    (yyval.n) = create_tree((yyvsp[-4].n), (yyvsp[-2].n), NULL, NULL);
                                                }
#line 1713 "y.tab.c"
    break;

  case 37: /* expr: expr ARITHOP1 expr  */
#line 207 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1721 "y.tab.c"
    break;

  case 38: /* expr: expr ARITHOP2 expr  */
#line 210 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1729 "y.tab.c"
    break;

  case 39: /* expr: expr RELOP expr  */
#line 213 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1737 "y.tab.c"
    break;

  case 40: /* expr: expr LOGOP expr  */
#line 216 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1745 "y.tab.c"
    break;

  case 41: /* expr: ARITHOP1 NUM  */
#line 219 "splparser.y"
                                            {
                                                if (node_getType((yyvsp[-1].n)) == NODE_SUB)
                                                    (yyvsp[0].n)->value = (yyvsp[0].n)->value * -1;
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1755 "y.tab.c"
    break;

  case 42: /* expr: NOTOP expr  */
#line 224 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[0].n), NULL, NULL);
                                            }
#line 1763 "y.tab.c"
    break;

  case 43: /* expr: '[' expr ']'  */
#line 227 "splparser.y"
                                            {
                                                (yyval.n) = create_nontermNode(NODE_ADDR_EXPR, (yyvsp[-1].n), NULL);
                                            }
#line 1771 "y.tab.c"
    break;

  case 44: /* expr: '(' expr ')'  */
#line 230 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1779 "y.tab.c"
    break;

  case 45: /* expr: NUM  */
#line 233 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1787 "y.tab.c"
    break;

  case 46: /* expr: ids  */
#line 236 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1795 "y.tab.c"
    break;

  case 47: /* expr: STRING  */
#line 239 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1803 "y.tab.c"
    break;

  case 48: /* ifpad: IF  */
#line 244 "splparser.y"
                                            {
                                                depth++;
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1812 "y.tab.c"
    break;

  case 49: /* elsepad: ELSE  */
#line 249 "splparser.y"
                                            {
                                                pop_alias();
                                            }
#line 1820 "y.tab.c"
    break;

  case 50: /* whilepad: WHILE  */
#line 254 "splparser.y"
                                            {
                                                depth++;
                                                flag_break++;
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1830 "y.tab.c"
    break;

  case 51: /* reglist: REG ',' reglist  */
#line 261 "splparser.y"
                                            {
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[0].n), NULL, NULL);
                                            }
#line 1838 "y.tab.c"
    break;

  case 52: /* reglist: REG  */
#line 264 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1846 "y.tab.c"
    break;

  case 53: /* ids: ID  */
#line 269 "splparser.y"
                                            {
                                                (yyval.n) = substitute_id((yyvsp[0].n));
                                            }
#line 1854 "y.tab.c"
    break;

  case 54: /* ids: REG  */
#line 272 "splparser.y"
                                            {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1862 "y.tab.c"
    break;


#line 1866 "y.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 276 "splparser.y"


int yyerror (char *msg)
{
    return fprintf (stderr, "%d: %s\n", linecount, msg);
}
