/* SCHEME->C */

/* Copyright (c) 1989-1993 Hewlett-Packard Development Company, L.P.
 *		All Rights Reserved

 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */


/* This file defines compilation options for a specific implementation */

#define CHECKSTACK	0	/* 0 = don't check stack height */
				/* 1 = check stack height */

#define TIMESLICE	0	/* 0 = don't time slice execution */
				/* 1 = time slice execution */

#define COMPACTPUSHTRACE 0	/* 0 = inline procedure entry checks.
				   1 = emit procedure call for procedure
				       entry checks.
				*/

#define COMPACTPOPTRACE 0	/* 0 = inline procedure exit cleanup.
				   1 = emit procedure call for procedure exit
				       cleanup.
				*/

#define S2CSIGNALS	1	/* 0 = Scheme->C doesn't handle signals */
				/* 1 = Scheme->C does handle signals */

#define	MATHTRAPS	1	/* 0 = don't detect fixed point overflow */
				/* 1 = recover on fixed point overflow */

/* Define only one of the supported processor types:

	AOSF		Alpha AXP OSF/1
	HP700		HP 9000/700
	MAC		Macintosh system 7.1 with Think-C 5.0
	MC680X0		HP 9000/300, Sun 3, Next
	MIPS		DECstation, SGI, Sony News
	VAX		Vax ULTRIX
 	FREEBSD		x86 FreeBSD
*/

#define AOSF 1
#define HP700 1
#define MAC 1
#define MC680X0 1
#define MIPS 1
#define VAX 1
#define FREEBSD 1

/* Attributes of the selected architecture:

   The following four macros define specific aspects of the system.  They
   are defined as strings, or specifically undefined:

	IMPLEMENTATION_MACHINE	machine type
	IMPLEMENTATION_CPU	cpu type
	IMPLEMENTATION_OS	operating system
	IMPLEMENTATION_FS	file system

   Big endian vs. little endian:

	BIGENDIAN		defined to 1 to denote bigendian systems

   Alignment:

	DOUBLE_ALIGN		defined to 1 to force doubles to be aligned on
				an even S2CINT boundary

   Macro expansion:

	NEED_MACRO_ARGS		defined to 1 to declare a macro like X() as
				X(dummy)

   The types S2CINT and S2CUINT are defined to be signed and unsigned integers
   that are the same size as pointers.  This is the basic "word" used by
   Scheme->C.

   The machine state when a continuation is created is captured in the
   sc_jmp_buf data structure.

   STACKPTR( x ) is a define that stores the address of the stack pointer
   in x.

   Unix flavors:

	POSIX			POSIX.1 compliant
	SYSV			System V or derivative
	SYSV4			System V release 4 (also define SYSV, POSIX)
*/

/**************/
/*    AOSF    */
/**************/

#ifdef AOSF
#define IMPLEMENTATION_MACHINE	"Alpha AXP"
#undef  IMPLEMENTATION_CPU	
#define IMPLEMENTATION_OS	"OSF/1"
#undef  IMPLEMENTATION_FS

typedef long int S2CINT;		/* Signed pointer size integer */
typedef long unsigned S2CUINT;		/* Unsigned pointer size integer */

typedef int PAGELINK;			/* 32-bit sc_pagelink values */
#define MAXS2CINT  0x7fffffffffffffffL	/* Maximum value of an S2CINT */
#define MSBS2CUINT 0x8000000000000000L	/* S2CUINT with 1 in the MSB */

typedef long int sc_jmp_buf[ 9 ]; /* The buffer contains the following items:
				     s0-s6	saved registers
				     ra		return address
				     sp	        stack pointer
				  */

#define STACKPTR( x ) x = sc_getsp()
extern  S2CINT*  sc_getsp();

#define NEED_MACRO_ARGS 1
#endif

/***************/
/*    HP700    */
/***************/

#ifdef HP700

#ifdef __hp9000s700
#define IMPLEMENTATION_MACHINE	"HP9000/700"
#else
#ifdef __hp9000s800
#define IMPLEMENTATION_MACHINE	"HP9000/800"
#endif
#endif

#define IMPLEMENTATION_CPU	"HP-PA"

#define BIGENDIAN 1

#define DOUBLE_ALIGN 1

typedef int S2CINT;			/* Signed pointer size integer */
typedef unsigned S2CUINT;		/* Unsigned pointer size integer */

typedef int PAGELINK;			/* 32-bit sc_pagelink values */
#define MAXS2CINT  0x7fffffff		/* Maximum value of an S2CINT */
#define MSBS2CUINT 0x80000000		/* S2CUINT with 1 in the MSB */

#define STACKPTR(x) ((x) = (sc_processor_register (30)))

#define STACK_GROWS_POSITIVE 1

#endif

#ifdef __hpux
#define IMPLEMENTATION_OS	"HP-UX"
#undef  IMPLEMENTATION_FS

#include <setjmp.h>
typedef jmp_buf sc_jmp_buf;

#define SYSV 1
#define POSIX 1

#endif

/***************/
/*   FREEBSD   */
/***************/

#ifdef FREEBSD
#define IMPLEMENTATION_MACHINE	"Generic PC"
#define IMPLEMENTATION_CPU	"Intelx86"
#define IMPLEMENTATION_OS	"FreeBSD"
#undef  IMPLEMENTATION_FS

typedef int S2CINT;		/* Signed pointer size integer */
typedef unsigned S2CUINT;	/* Unsigned pointer size integer */

typedef int PAGELINK;		/* 32-bit sc_pagelink values */
#define MAXS2CINT  0x7fffffff	/* Maximum value of an S2CINT */
#define MSBS2CUINT 0x80000000	/* S2CUINT with 1 in the MSB */

#define STACKPTR( x ) x = sc_processor_register( 0 )

#include <setjmp.h>
typedef jmp_buf sc_jmp_buf;

/* Horrid kludge.  See callcc.c for the full story: */
#define LAZY_STACK_POP 1
#define LAZY_STACK_INCREMENT 4

#endif

/*************/
/*    MAC    */
/*************/

#ifdef MAC
#define IMPLEMENTATION_MACHINE	"Apple Macintosh"
#define IMPLEMENTATION_CPU	"680x0"
#define IMPLEMENTATION_OS	"7.1"
#undef  IMPLEMENTATION_FS

#define BIGENDIAN 1

typedef long int S2CINT;		/* Signed pointer size integer */
typedef long unsigned S2CUINT;		/* Unsigned pointer size integer */

typedef short int PAGELINK;		/* 16-bit sc_pagelink values */
#define MAXS2CINT  0x7fffffffL		/* Maximum value of an S2CINT */
#define MSBS2CUINT 0x80000000L		/* S2CUINT with 1 in the MSB */

#include <setjmp.h>
typedef jmp_buf sc_jmp_buf;
#undef TRUE
#undef FALSE

#define STACKPTR( x ) x = sc_getsp()
extern  S2CINT*  sc_getsp();

#define SCHEAP 1
#define SCMAXHEAP 15
#endif

/****************/
/*   MC680X0    */
/****************/ 

#ifdef MC680X0
#define IMPLEMENTATION_CPU	"680x0"

#define BIGENDIAN 1

typedef int S2CINT;			/* Signed pointer size integer */
typedef unsigned S2CUINT;		/* Unsigned pointer size integer */

typedef int PAGELINK;			/* 32-bit sc_pagelink values */
#define MAXS2CINT  0x7fffffff		/* Maximum value of an S2CINT */
#define MSBS2CUINT 0x80000000		/* S2CUINT with 1 in the MSB */

#define STACKPTR(x) ((x) = (sc_processor_register (15)))

#ifdef __hp9000s400
#define IMPLEMENTATION_MACHINE	"HP9000/400"
#else
#ifdef __hp9000s300
#define IMPLEMENTATION_MACHINE	"HP9000/300"
#endif
#endif

/* HP-UX dependent conditionalizations performed above.  */

#endif

/**************/
/*    MIPS    */
/**************/

#ifdef MIPS
#define IMPLEMENTATION_MACHINE	"DECstation"
#define IMPLEMENTATION_CPU	"Rx000"
#define IMPLEMENTATION_OS	"ULTRIX"
#undef  IMPLEMENTATION_FS

#define DOUBLE_ALIGN 1

typedef int S2CINT;			/* Signed pointer size integer */
typedef unsigned S2CUINT;		/* Unsigned pointer size integer */

typedef int PAGELINK;			/* 32-bit sc_pagelink values */
#define MAXS2CINT  0x7fffffff		/* Maximum value of an S2CINT */
#define MSBS2CUINT 0x80000000		/* S2CUINT with 1 in the MSB */

#ifndef MIPSEL
#define BIGMIPS 1
#define BIGENDIAN 1
#undef  IMPLEMENTATION_MACHINE
#define IMPLEMENTATION_MACHINE	"Big Endian MIPS"
#undef  IMPLEMENTATION_OS

/* Not sure what the correct conditionalization is here -- NEWS-OS
   5.xx defines both "sony" and "sonyrisc", but apparently NEWS-OS
   4.xx defines "sony_mips", because the previous version of Scheme->C
   was conditionalized on "sony_mips" which is *not* defined by
   NEWS-OS 5.xx.  If there's an intersection between the symbols
   defined by 4.xx and 5.xx then a member of that intersection should
   be used for the conditionalization; otherwise test for both.
*/
#ifdef sonyrisc

#undef  IMPLEMENTATION_MACHINE
#define IMPLEMENTATION_MACHINE	"Sony MIPS"
#undef  IMPLEMENTATION_CPU
#define IMPLEMENTATION_CPU	"R3000"
#undef  IMPLEMENTATION_OS
#define IMPLEMENTATION_OS	"NEWS-OS"

#ifdef SYSTYPE_SYSV

#define SYSV4 1
#define SYSV 1
#define POSIX 1

/* This can be implemented but requires generalizing the signal
   handler to know about SYSV4 siginfo structure.
*/

#undef  MATHTRAPS
#define MATHTRAPS 0

#define NEED_MACRO_ARGS 1

#define COPY_STACK_BEFORE_LONGJMP 1

#endif
#endif
#endif

#include <setjmp.h>
typedef jmp_buf sc_jmp_buf;

#define STACKPTR( x ) x = sc_processor_register( 29 )
#endif

/*************/
/*    VAX    */
/*************/

#ifdef VAX
#define IMPLEMENTATION_MACHINE	"VAX"
#undef  IMPLEMENTATION_CPU
#define IMPLEMENTATION_OS	"ULTRIX"
#undef  IMPLEMENTATION_FS

typedef int S2CINT;			/* Signed pointer size integer */
typedef unsigned S2CUINT;		/* Unsigned pointer size integer */

typedef int PAGELINK;			/* 32-bit sc_pagelink values */
#define MAXS2CINT  0x7fffffff		/* Maximum value of an S2CINT */
#define MSBS2CUINT 0x80000000		/* S2CUINT with 1 in the MSB */

typedef int sc_jmp_buf[ 16 ];	/* The buffer contains the following items:
				   R2-R11	saved registers
				   SIGM		saved signal mask
				   SP		stack pointer on entry to
				   		setjmp
				   PSW		PSW word from stack frame
				   AP		saved argument ptr from frame
				   FP		saved frame ptr from frame
				   PC		saved program cntr from frame
				*/

#define STACKPTR( x ) x = sc_processor_register( 14 )
#endif

