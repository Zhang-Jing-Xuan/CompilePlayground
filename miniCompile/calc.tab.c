
/*  A Bison parser, made from calc.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TOK_SEMICOLON	257
#define	TOK_ADD	258
#define	TOK_SUB	259
#define	TOK_MUL	260
#define	TOK_DIV	261
#define	TOK_EQ	262
#define	TOK_INT	263
#define	TOK_FLOAT	264
#define	TOK_IDENT	265
#define	TOK_PRINTID	266
#define	TOK_PRINTEX	267
#define	TOK_EXIT	268
#define	TOK_MAIN	269
#define	TOK_OPENCURLY	270
#define	TOK_CLOSECURLY	271
#define	TOK_IDENT_ERR	272
#define	TOK_NUM	273
#define	TOK_FNUM	274

#line 1 "calc.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int linenum;
int yylex();
int search(char name[]);
void insert(char name[], int type, char value[]);
void printTab();
int yyerror(char *s);
void yyerror2(int type, char *s, char b[]);
void insertVal(char value[], int posi);
void valAssign(int modifier, char s1[], char s3[]);

struct symtab{
	char name[20];
	int type; // 1 is int, 2 is float
	char value[20];
};

struct symtab tab[20];
int ptr = 0;


#line 35 "calc.y"
typedef union{
	char name[20];
    int int_val;

	struct strVariable{
		int intVar;
		float floatVar;
	}variable;

} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		39
#define	YYFLAG		-32768
#define	YYNTBASE	21

#define YYTRANSLATE(x) ((unsigned)(x) <= 274 ? yytranslate[x] : 28)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     6,     7,     8,    12,    15,    18,    21,    24,    25,
    29,    33,    36,    39,    43,    47,    51,    55,    57,    59,
    61
};

static const short yyrhs[] = {    15,
    16,    22,    24,    17,     0,     0,     0,    23,     3,    22,
     0,     9,    11,     0,     9,    18,     0,    10,    11,     0,
    10,    18,     0,     0,    25,     3,    24,     0,    11,     8,
    26,     0,    12,    11,     0,    13,    26,     0,    26,     4,
    26,     0,    26,     7,    26,     0,    26,     5,    26,     0,
    26,     6,    26,     0,    11,     0,    27,     0,    19,     0,
    20,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    56,    58,    65,    66,    69,    84,    90,   104,   111,   112,
   115,   129,   143,   156,   177,   198,   217,   237,   261,   264,
   269
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","TOK_SEMICOLON",
"TOK_ADD","TOK_SUB","TOK_MUL","TOK_DIV","TOK_EQ","TOK_INT","TOK_FLOAT","TOK_IDENT",
"TOK_PRINTID","TOK_PRINTEX","TOK_EXIT","TOK_MAIN","TOK_OPENCURLY","TOK_CLOSECURLY",
"TOK_IDENT_ERR","TOK_NUM","TOK_FNUM","prog","vardefs","vardef","stmts","stmt",
"expr","RAW", NULL
};
#endif

static const short yyr1[] = {     0,
    21,    21,    22,    22,    23,    23,    23,    23,    24,    24,
    25,    25,    25,    26,    26,    26,    26,    26,    26,    27,
    27
};

static const short yyr2[] = {     0,
     5,     0,     0,     3,     2,     2,     2,     2,     0,     3,
     3,     2,     2,     3,     3,     3,     3,     1,     1,     1,
     1
};

static const short yydefact[] = {     2,
     0,     3,     0,     0,     9,     0,     5,     6,     7,     8,
     0,     0,     0,     0,     0,     3,     0,    12,    18,    20,
    21,    13,    19,     1,     9,     4,    11,     0,     0,     0,
     0,    10,    14,    16,    17,    15,     0,     0,     0
};

static const short yydefgoto[] = {    37,
     5,     6,    14,    15,    22,    23
};

static const short yypact[] = {     7,
     8,    11,    -3,     5,     6,    22,-32768,-32768,-32768,-32768,
    18,    16,   -10,    12,    25,    11,   -10,-32768,-32768,-32768,
-32768,    -2,-32768,-32768,     6,-32768,    -2,   -10,   -10,   -10,
   -10,-32768,     0,     0,-32768,-32768,    30,    31,-32768
};

static const short yypgoto[] = {-32768,
    17,-32768,     9,-32768,   -17,-32768
};


#define	YYLAST		34


static const short yytable[] = {    27,
    19,    28,    29,    30,    31,    30,    31,     7,    20,    21,
    33,    34,    35,    36,     8,     9,    11,    12,    13,     3,
     4,     1,    10,     2,    16,    17,    18,    25,    24,    38,
    39,     0,    26,    32
};

static const short yycheck[] = {    17,
    11,     4,     5,     6,     7,     6,     7,    11,    19,    20,
    28,    29,    30,    31,    18,    11,    11,    12,    13,     9,
    10,    15,    18,    16,     3,     8,    11,     3,    17,     0,
     0,    -1,    16,    25
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/local/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 2:
#line 58 "calc.y"
{
		char *t ="Parsing Error";
		yyerror2(3,t,"");
	  ;
    break;}
case 5:
#line 70 "calc.y"
{

	    int flag;
		char *t;
	    flag = search(yyvsp[0].name);

		if(flag == -1){
			insert(yyvsp[0].name, 1, "0");
		}else{
			t = "Identifier already defined - ";
			yyerror2(3,t, yyvsp[0].name);
		}

	  ;
    break;}
case 6:
#line 85 "calc.y"
{
		char *t ="Invalid Identifier - ";
		yyerror2(3,t,yyvsp[0].name);
	  ;
    break;}
case 7:
#line 90 "calc.y"
{

	    int flag;
		char *t;
	    flag = search(yyvsp[0].name);

		if(flag == -1){
			insert(yyvsp[0].name, 2, "0.0");
		}else{
			t = "Identifier already defined - ";
			yyerror2(3,t,yyvsp[0].name);
		}

	  ;
    break;}
case 8:
#line 105 "calc.y"
{
		char *t ="Invalid Identifier - ";
		yyerror2(3,t,yyvsp[0].name);
	  ;
    break;}
case 11:
#line 117 "calc.y"
{
		int modifier;
		char val[15];
		if(yyvsp[0].variable.intVar != 0) {
			modifier = 1;
			sprintf(val, "%d", yyvsp[0].variable.intVar);
		}else if(yyvsp[0].variable.floatVar != 0){
			modifier = 2;
			sprintf(val, "%f", yyvsp[0].variable.floatVar);
		}
		valAssign(modifier, yyvsp[-2].name, val);
	  ;
    break;}
case 12:
#line 130 "calc.y"
{
		//todo change print to file
		int flag;
		char *t;
	    flag = search(yyvsp[0].name);

		if(flag == -1){
			t = "Identifier not defined - ";
			yyerror2(3,t, yyvsp[0].name);
		}else{
			printf("%s\n", tab[flag].value);
		}
	  ;
    break;}
case 13:
#line 144 "calc.y"
{
		if(yyvsp[0].variable.intVar != 0){
			printf("%d", yyvsp[0].variable.intVar);
		}
		else{
			printf("%f", yyvsp[0].variable.floatVar);
		}
	;
    break;}
case 14:
#line 158 "calc.y"
{
		// char *t;
		// t = " + ";
		// yyerror2(2,t, NULL);
        struct strVariable temp;

		if(yyvsp[-2].variable.intVar != 0 && yyvsp[0].variable.intVar != 0) {
			temp.floatVar = 0;
			temp.intVar = yyvsp[-2].variable.intVar + yyvsp[0].variable.intVar;
		}else if(yyvsp[-2].variable.floatVar != 0 && yyvsp[0].variable.floatVar != 0) {
			temp.intVar = 0;
			temp.floatVar = yyvsp[-2].variable.floatVar + yyvsp[0].variable.floatVar;
		}else {
			char *t = "Type mismatch";
			yyerror2(3,t, "");
		}
		
		yyval.variable = temp;
	  ;
    break;}
case 15:
#line 179 "calc.y"
{
		// char *t;
		// t = " / ";
		// yyerror2(2,t, NULL);
        struct strVariable temp1;

		if(yyvsp[-2].variable.intVar != 0 && yyvsp[0].variable.intVar != 0) {
			temp1.floatVar = 0;
			temp1.intVar = yyvsp[-2].variable.intVar / yyvsp[0].variable.intVar;
		}else if(yyvsp[-2].variable.floatVar != 0 && yyvsp[0].variable.floatVar != 0) {
			temp1.intVar = 0;
			temp1.floatVar = yyvsp[-2].variable.floatVar / yyvsp[0].variable.floatVar;
		}else {
			char *t = "Type mismatch";
			yyerror2(3,t, "");
		}
		
		yyval.variable = temp1;
	  ;
    break;}
case 16:
#line 199 "calc.y"
{
		struct strVariable temp2;

		int flag;
		if(yyvsp[-2].variable.intVar != 0 && yyvsp[0].variable.intVar != 0) {
			temp2.floatVar = 0;
			temp2.intVar = yyvsp[-2].variable.intVar - yyvsp[0].variable.intVar;
		}else if(yyvsp[-2].variable.floatVar != 0 && yyvsp[0].variable.floatVar != 0) {
			temp2.intVar = 0;
			temp2.floatVar = yyvsp[-2].variable.floatVar - yyvsp[0].variable.floatVar;
		}else {
			char *t = "Type mismatch";
			yyerror2(3,t, "");
		}
		
		yyval.variable = temp2;

	  ;
    break;}
case 17:
#line 218 "calc.y"
{
		//$$ = $1 * $3;
		
		struct strVariable temp;

		int flag;
		if(yyvsp[-2].variable.intVar != 0 && yyvsp[0].variable.intVar != 0) {
			temp.floatVar = 0;
			temp.intVar = yyvsp[-2].variable.intVar * yyvsp[0].variable.intVar;
		}else if(yyvsp[-2].variable.floatVar != 0 && yyvsp[0].variable.floatVar != 0) {
			temp.intVar = 0;
			temp.floatVar = yyvsp[-2].variable.floatVar * yyvsp[0].variable.floatVar;
		}else {
			char *t = "Type mismatch";
			yyerror2(3,t, "");
		}
		
		yyval.variable = temp;
	  ;
    break;}
case 18:
#line 238 "calc.y"
{
		int flag;
		char *t;
	    flag = search(yyvsp[0].name);
		
		struct strVariable temp;

		if(flag == -1){
			t = "Identifier not defined - ";
			yyerror2(3,t, yyvsp[0].name);
		}else{
			if(tab[flag].type == 1){
				temp.intVar = atoi(tab[flag].value);
				temp.floatVar = 0;
			}
			else {
				temp.intVar = 0;
				temp.floatVar = atof(tab[flag].value);
			}
		}
		
		yyval.variable = temp;
	  ;
    break;}
case 20:
#line 266 "calc.y"
{
		yyval.variable = yyvsp[0].variable;
	;
    break;}
case 21:
#line 270 "calc.y"
{
		yyval.variable = yyvsp[0].variable;
	;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/local/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 277 "calc.y"



void valAssign(int modifier, char s1[], char s3[]){
	int flag,flag2 = 0;
	char temp[20];

	flag = search(s1);

	if(flag == -1){
		char *t ="Identifier Not present - ";
		yyerror2(3,t,s1);
	}else{
		switch(modifier){
			case 1:
				if(tab[flag].type == 1) flag2 = 1;
				break;

			case 2:
				if(tab[flag].type == 2) flag2 = 1;
				break;
		}
		if(flag2 == 1){
			insertVal(s3, flag);
		}else{
			char *t ="Wrong Type Error - ";
			yyerror2(3,t,s3);
		}
	}
}

int yyerror(char *s)
{
	printf("Syntax Error on line %d\n%s\n",linenum, s);
	return 0;
}

void yyerror2(int type, char *s, char b[])
{
	//todo change print to file
	switch(type){
		case 1:
			printf("Syntax Error on line - %d\n%s\n",linenum, s);
			break;
		case 2:
			printf("Lexical Error on line - %d: %s\n",linenum, s);
			break;
		case 3:
			printf("Line - %d: %s%s\n",linenum, s, b);
			break;
	}

	exit(0);
}

int search(char name[]){

	int i;
	int flag = -1;

	for(i = 0; i < ptr; i++){
		if(strcmp(tab[i].name, name) == 0){
			flag = i;
			break;
		}
	}

	return flag;

}

void insert(char name[], int type, char value[]){

	strcpy(tab[ptr].name, name);
	strcpy(tab[ptr].value, value);
	tab[ptr].type = type;

	ptr++;

	printTab();
}

void insertVal(char value[], int posi){

	strcpy(tab[posi].value, value);

	printTab();

}

void printTab(){

	int i;

	for(i = 0; i < ptr; i++){

	//use for testing
		/*printf("Name - %s, value - %s, type - ", tab[i].name, tab[i].value);
		if(tab[i].type == 1) printf("int\n");
		else if(tab[i].type == 2) printf("float\n");*/
	}
}

int main()
{
	//todo remove clear
    system("clear");
    yyparse();
    return 0;
}