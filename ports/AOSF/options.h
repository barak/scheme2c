/* SCHEME->C */

/*           Copyright 1989-1993 Digital Equipment Corporation
 *                         All Rights Reserved
 *
 * Permission to use, copy, and modify this software and its documentation is
 * hereby granted only under the following terms and conditions.  Both the
 * above copyright notice and this permission notice must appear in all copies
 * of the software, derivative works or modified versions, and any portions
 * thereof, and both notices must appear in supporting documentation.
 *
 * Users of this software agree to the terms and conditions set forth herein,
 * and hereby grant back to Digital a non-exclusive, unrestricted, royalty-free
 * right and license under any changes, enhancements or extensions made to the
 * core functions of the software, including but not limited to those affording
 * compatibility with other hardware or software environments, but excluding
 * applications which incorporate this software.  Users further agree to use
 * their best efforts to return to Digital any such changes, enhancements or
 * extensions that they make and inform Digital of noteworthy uses of this
 * software.  Correspondence should be provided to Digital at:
 * 
 *                       Director of Licensing
 *                       Western Research Laboratory
 *                       Digital Equipment Corporation
 *                       250 University Avenue
 *                       Palo Alto, California  94301  
 * 
 * This software may be distributed (but not offered for sale or transferred
 * for compensation) to third parties, provided such third parties agree to
 * abide by the terms and conditions of this notice.  
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND DIGITAL EQUIPMENT CORP. DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS.   IN NO EVENT SHALL DIGITAL EQUIPMENT
 * CORPORATION BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
 * ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
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

#define AOSF 1

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
typedef long unsigned S2CUINT;		/* Unsigned pointer size interger */

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

