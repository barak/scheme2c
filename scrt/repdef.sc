;;; Scheme->C
;;;
;;; This file contains external definitions for use in compiling the
;;; the interpreter.

;*           Copyright 1989-1993 Digital Equipment Corporation
;*                         All Rights Reserved
;*
;* Permission to use, copy, and modify this software and its documentation is
;* hereby granted only under the following terms and conditions.  Both the
;* above copyright notice and this permission notice must appear in all copies
;* of the software, derivative works or modified versions, and any portions
;* thereof, and both notices must appear in supporting documentation.
;*
;* Users of this software agree to the terms and conditions set forth herein,
;* and hereby grant back to Digital a non-exclusive, unrestricted, royalty-free
;* right and license under any changes, enhancements or extensions made to the
;* core functions of the software, including but not limited to those affording
;* compatibility with other hardware or software environments, but excluding
;* applications which incorporate this software.  Users further agree to use
;* their best efforts to return to Digital any such changes, enhancements or
;* extensions that they make and inform Digital of noteworthy uses of this
;* software.  Correspondence should be provided to Digital at:
;* 
;*                       Director of Licensing
;*                       Western Research Laboratory
;*                       Digital Equipment Corporation
;*                       250 University Avenue
;*                       Palo Alto, California  94301  
;* 
;* This software may be distributed (but not offered for sale or transferred
;* for compensation) to third parties, provided such third parties agree to
;* abide by the terms and conditions of this notice.  
;* 
;* THE SOFTWARE IS PROVIDED "AS IS" AND DIGITAL EQUIPMENT CORP. DISCLAIMS ALL
;* WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF
;* MERCHANTABILITY AND FITNESS.   IN NO EVENT SHALL DIGITAL EQUIPMENT
;* CORPORATION BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
;* DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
;* PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
;* ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
;* SOFTWARE.

(define-external *DEBUG-ON-ERROR* scdebug)

(define-external *READING-STDIN* screp)

(define-external *RESULT* scdebug)

(define-external (ABORT) sc)

(define-external (BACKTRACE-ERROR-HANDLER id format-string . args) scdebug)

(define-external (CHARREADY file) sc)

(define-external (CLEANUP-UNREFERENCED) scrt4)

(define-external (COND-MACRO exp) scexpnd1)

(define-external CURRENT-INPUT-PORT-VALUE scrt5)

(define-external CURRENT-OUTPUT-PORT-VALUE scrt5)

(define-external (DOBACKTRACE start stop lines port) scdebug)

(define-external (EXPAND x) scexpand)

(define-external (FCLOSE file) sc)

(define-external (FFLUSH file) sc)

(define-external (FGETC file) sc)

(define-external (FILENO file) sc)

(define-external (FOPEN name access) sc)

(define-external (FORMATNUMBER number type length) sc)

(define-external (FPUTC character file) sc)

(define-external (INPUTREADY mask) sc)

(define-external (INSTALL-EXPANDER keyword function) scexpand)

(define-external (ISLIST l min . max) scexpand)

(define-external (JUMP-TO-SCHEME2C . x) screp)

(define-external (LET-MACRO exp) scexpnd2)

(define-external (ERROR-DISPLAY x) sc)

(define-external (ON-INTERRUPT sig) scdebug)

(define-external OPEN-FILE-PORTS scrt5)

(define-external (OSEXIT code) sc)

(define-external (OSSIGNAL signal handler) sc)

(define-external (OSSYSTEM command) sc)

(define-external PROCEED scdebug)

(define-external (QUASIQUOTATION d exp) scqquote)

(define-external (READ-DATUM port) scrt7)

(define-external (READNUMBER string type) sc)

(define-external (REMOVEFILE name) sc)

(define-external (RENAME old-name new-name) sc)

(define-external (SCHEME-MODE) sc)

(define-external (SET-SCHEME-MODE! mode) sc)

(define-external SYSTEM-FILE-MASK scrt6)

(define-constant SIG_IGN 1)

(define-constant SIGINT 2)

;;; Return the current value of sc_stacktrace.  It is not defined as a C
;;; external as the compiler emitted extern might conflict with the one
;;; in objects.h.

(define-in-line (STACKTRACE) ((lap () (S2CUINT_TSCP "sc_stacktrace"))))

(define-external STDIN sc)

(define-external STDOUT sc)

(define-external STDERR sc)

(define-external (TMPNAM) sc)

(define-external TRACE-LEVEL scdebug)

(define-external UNDEFINED "sc" "undefined")

(define-external (VALID-SCHEME-POINTER? x) "" "sc_schemepointer")

(define-external WHENFREED "sc" "whenfreed")

(define-external (WRITE/DISPLAY obj readable port) scrt7)
