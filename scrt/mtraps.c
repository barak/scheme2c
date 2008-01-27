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

#if MATHTRAPS

#include "objects.h"
#include "heap.h"
#include "apply.h"
#include "/usr/include/signal.h"

#ifdef MIPS
#ifdef BIGMIPS
#include <sys/inst.h>
#include <sys/sbd.h>
#else
#include <mips/inst.h>
#include <mips/cpu.h>
#endif
#endif

/* Arithmetic traps are handled by the following machine dependent code.
   Overflow on exact computation results in the correct, but inexact result
   being returned.  All other arithmetic traps are considered to be errors.
*/

static void  emulate_branch();

/* sc_trap_handler is a generalized fault handler for TRAP and FLOATING POINT
   exceptions.
*/

sc_trap_handler (sig,code,scp)
	int sig, code;
	struct sigcontext *scp;
{
#ifdef MIPS
	unsigned long opcode, func, rs, rt, rd;
	union mips_instruction branch_inst, exception_inst;
#endif

	/**********************************
   	     Unrecoverable exceptions
	 **********************************/
#ifdef MIPS
	if (sig == SIGTRAP)   {
		if (code == BRK_DIVZERO) 
			/***** divide by zero exception ****/
			sc_error ( "?????", "Divide by zero", EMPTYLIST );
		else if (code == BRK_OVERFLOW)
			/** overflow check **/
			sc_error ( "????", "Overflow", EMPTYLIST );
		else if (code == BRK_RANGE)
			/** range error check **/
			sc_error ( "????", "Out of range", EMPTYLIST );
		else    /** other misc types of bpt errors */
			sc_error ( "????", "Break point or branch error",
				   EMPTYLIST );
	}
#endif
#ifdef VAX
	if  (sig == SIGFPE)  {
	   if  (code == FPE_INTDIV_TRAP  ||  code == FPE_FLTDIV_FAULT  ||
		code == FPE_FLTDIV_TRAP)
		     /***** divide by zero exception *****/
		     sc_error ( "?????", "Divide by zero", EMPTYLIST );
	   if  (code == FPE_FLTOVF_TRAP  ||  code == FPE_FLTOVF_FAULT)
		     /***** floating point overflow *****/
		     sc_error ( "?????", "Overflow", EMPTYLIST );
	   if  (code == FPE_FLTUND_FAULT  ||  code == FPE_FLTUND_TRAP)
		     /***** floating point underflow *****/
		     sc_error ( "?????", "Underflow", EMPTYLIST );
	   sc_error ("?????", "Floating point exception: %s",
		     LIST1( C_FIXED( code ) ) );
	}
#endif	
	
	/***************************************
	  other possibly recoverable exceptions
	 ***************************************/
#ifdef MIPS
	if (scp->sc_cause & CAUSE_BD) {
		branch_inst.word = *(unsigned long *) scp->sc_pc ; 
		exception_inst.word = *(unsigned long *) (scp->sc_pc + 4); 
		/* printf ("it was a branch delay.\n"); */
	}
	else  { exception_inst.word = *(unsigned long *) (scp->sc_pc); 
	       /* printf ("it wasn't a branch delay.\n");  */ 
	}

	opcode = exception_inst.j_format.opcode;  /* get opcode field */

	switch (opcode)  {
	      case spec_op:
		func = exception_inst.r_format.func;  /* get function field */
		switch (func)   {
		      case add_op:  
			if (sig == SIGFPE && code == EXC_OV)  {
				/**** integer add overflow ***/
				rs = exception_inst.r_format.rs;
				rt = exception_inst.r_format.rt;
				rd = exception_inst.r_format.rd;

				scp->sc_regs[rd] = 
				(unsigned int) 
				FLTV_FLT( (double) FIXED_C(scp->sc_regs[rs]) + 
					  (double) FIXED_C(scp->sc_regs[rt])
					 );
	
				if (scp->sc_cause & CAUSE_BD) 
					emulate_branch(scp, branch_inst);
				else 
					scp->sc_pc += 4;
			}
			else sc_error ("+", 
			       "unknown floating point exception code", 0);

			break;

		      case sub_op:
			if (sig == SIGFPE && code == EXC_OV)  {
				/**** integer sub overflow ****/
				rs = exception_inst.r_format.rs;
				rt = exception_inst.r_format.rt;
				rd = exception_inst.r_format.rd;

				scp->sc_regs[rd] = 
				(unsigned int)
				FLTV_FLT( (double) FIXED_C(scp->sc_regs[rs]) -
					  (double) FIXED_C(scp->sc_regs[rt])
					 );

				if (scp->sc_cause & CAUSE_BD) 
					emulate_branch(scp, branch_inst);
				else 
					scp->sc_pc += 4;
			}
			else sc_error ("-", 
			       "Unknown floating point exception code", 0);

			break;			
			
		      default:
			sc_error ("UNKNOWN",
			"Other instructions of type special not decoded",0);
			break;
		}   /* close switch (func) */
		break;

	      case bcond_op:
		sc_error ("sc_trap_handler", "BCOND op decoded", 0);
		break;
	      case j_op:
	        sc_error ("sc_trap_handler", "J op decoded", 0);
		break;
	      case jal_op:
		sc_error ("sc_trap_handler", "JAL op decoded",0);
		break;
	      default:
		sc_error ("sc_trap_handler", "Other opcodes not decoded", 0);
		break;
	}
#endif

}

/* emulate_branch modifies the value of the program counter in the 
   signal context structure (sc_pc) to the target of the branch instruction.  
*/

#ifdef MIPS

static void emulate_branch(scp, branch_inst)
	struct sigcontext *scp;
	union mips_instruction branch_inst;
  {
	  unsigned long target = branch_inst.j_format.target,
	                opcode = branch_inst.j_format.opcode,
	                pc = *(unsigned long *) scp->sc_pc,
	                func, rs;
	  
	  /***********************************************
	      note: the current implementation only 
	      takes care of jr and j branch instructions.
	      Other cases can be added as need arises.
	   ***********************************************/

	  switch (opcode)  {
		case spec_op:
		  func = branch_inst.r_format.func;   /* get function field */
		  rs = branch_inst.r_format.rs;   /* reg with branch addr */
		 
		  switch (func)  {
			case jr_op:  
			  /**** branch instruction is jump register ****/
			     /* set program counter to be target of *
			      * branch instruction.                 *
			      *                                     */
			  scp->sc_pc = scp->sc_regs[rs]; 
			  break;
			case jalr_op:  
			  sc_error ("emulate_branch", 
				    "Branch instruction is JALR", 0);
			  break;
			default:
			  sc_error ("emulate_branch", 
				    "Special inst not decoded", 0);
			  break;
		  }
		  break;
		  
		case j_op:  
		  /**** jump instruction ****/
		    /* new pc is calculated by left shifting target field 
		       2 bits and combining result with high 4 bits of 
		       current pc
		     */
		  target = target<<2;
		  scp->sc_pc = (unsigned long) ((pc & 036000000000) | target);
		  break;
		case jal_op:
		  sc_error ("emulate_branch",
			    "Branch instruction is jal", 0);
		  break;
		default:
		  sc_error ("emulate_branch",
			    "Instruction not decoded", 0);
		  break;
	  }
  }	  
#endif

#endif

/* The following function is called during initialization to enable the
   arithmetic trap handlers.
*/

void  sc_arm_mathtraps()  {
#if MATHTRAPS
	signal(SIGFPE, sc_trap_handler);
#if MIPS
	signal(SIGTRAP, sc_trap_handler);
#endif
#endif
}
