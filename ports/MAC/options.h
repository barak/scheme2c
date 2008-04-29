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

#define CHECKSTACK	1	/* 0 = don't check stack height */
				/* 1 = check stack height */

#define TIMESLICE	1	/* 0 = don't time slice execution */
				/* 1 = time slice execution */

#define COMPACTPUSHTRACE 1	/* 0 = inline procedure entry checks.
				   1 = emit procedure call for procedure
				       entry checks.
				*/

#define COMPACTPOPTRACE 1	/* 0 = inline procedure exit cleanup.
				   1 = emit procedure call for procedure exit
				       cleanup.
				*/

#define S2CSIGNALS	1	/* 0 = Scheme->C doesn't handle signals */
				/* 1 = Scheme->C does handle signals */

#define	MATHTRAPS	0	/* 0 = don't detect fixed point overflow */
				/* 1 = recover on fixed point overflow */

/* Define only one of the supported processor types:

	AOSF		Alpha AXP OSF/1
	HP700		HP 9000/700
	MAC		Macintosh system 7.1 with Think-C 5.0
	MC680X0		HP 9000/300, Sun 3, Next
	MIPS		DECstation, SGI, Sony News
	VAX		Vax ULTRIX
	WIN16		Microsoft Windows 3.1
*/

#define MAC 1

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
typedef long unsigned S2CUINT;		/* Unsigned pointer size interger */

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
