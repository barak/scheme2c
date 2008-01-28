/* SCHEME->C */

/****************/
/* SPARC-SunOS4 */
/****************/

#define SPARC
#define SUNOS4

/* callcc.c */
#undef  COPY_STACK_BEFORE_LONGJMP

/* cio.c */
#undef  POSIX
#undef  SYSV
#undef  SYSV4
#undef  HAVE_TIMES

/* objects.h */
#define BIGENDIAN 1
#undef  COMPACTPUSHTRACE
#undef  COMPACTPOPTRACE
#undef  NEED_MACROS_ARGS

/* scinit.c */
#define IMPLEMENTATION_MACHINE	"SPARC"
#define IMPLEMENTATION_CPU	"SPARC"
#define IMPLEMENTATION_OS	"SunOS 4.x"
#undef  IMPLEMENTATION_FS
#undef  STDERR_ISNT_UNBUFFERED

/*
 * The sc_jmp_buf buffer contains the following items:
 * %o6-%o7, %g1-%g7, %l0-%l7, %i0-%i7, %y,  <signal mask -- 1 word>
 * 0-4,     8-32,    36-64,   68-96,   100, 104
 */
typedef int sc_jmp_buf[2+7+8+8+1+1];	/* heap.c, objects.h, sparc.s */

#undef  DOUBLE_ALIGN			/* heap.h, objects.h */
#undef  STACK_GROWS_POSITIVE		/* callcc.c, objects.h, scinit.c */
#define MATHTRAPS 1			/* mtraps.c, objects.h, sparc.s */

typedef int S2CINT;			/* Signed pointer size integer */
typedef unsigned S2CUINT;		/* Unsigned pointer size interger */

typedef int PAGELINK;			/* 32-bit sc_pagelink values */
#define MAXS2CINT  0x7fffffff		/* Maximum value of an S2CINT */
#define MSBS2CUINT 0x80000000		/* S2CUINT with 1 in the MSB */

#define STACKPTR(x) ((x) = (sc_processor_register(0)))

/* be a server */
#define CHECKSTACK 1			/* objects.h */
#undef  S2CSIGNALS			/* cio.c */
#define TIMESLICE 1			/* cio.c, cio.h, objects.h */
