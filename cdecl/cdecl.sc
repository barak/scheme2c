;;; C declaration compiler.

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

;;; This module is the main driver.  Expressions in the files names in the
;;; command line will be compiled and the stub module will be written to
;;; the standard output port.

(module cdecl
    (main main)
    (with const
	  extern
	  typedef
	  screp))

;;; The following global variables hold lists of C declared items.

(define CDECL-CONSTANTS '())	;;; List of constants
(define CDECL-TYPES '())	;;; List of types
(define CDECL-READ-ONLY '())	;;; List of read-only objects
(define CDECL-DEFINE-ONLY '())	;;; List of internal definitions
(define CDECL-EXTERNS '())	;;; List of external functions

;;; Main program:
;;;
;;; 	cdecl  class  command  cdecl-files...
;;;
;;; where "class" is the name of this set of declarations and "command" is
;;; one of the following:
;;;
;;; 	-const			Emits constant definitions to the files
;;;				classCONSTANTS.sc and classCONSTANTS.sch.
;;;
;;;	-extern			Emits external procedures for each cdecl-file
;;;				containing extern definitions to files named
;;;				<cdecl-file-root>.sc and <cdecl-file-root>.sch.
;;;
;;;	-stubs			Emits stubs of form <C-procedure>* for all
;;;				C procedures to the file classSTUBS.sc.  This
;;;				allows the files produceded by -typedef to be
;;;				interpreted.
;;;
;;;	-typedef		Emits type definitions for structures to the
;;;				files <type-name>.sc and <type-name>.sch.
;;;				Emits all type checking functions and type
;;;				definitions for objects other than structs or
;;;				unions to classTYPES.sc and classTYPES.sch.
;;;
;;; The command is then followed by one or more files containing declarations.
;;; The declaration files normally have the file extension ".cdecl".

(define (MAIN clargs)
    (let* ((class (if (>= (length clargs) 4)
		      (cadr clargs)
		      (error 'MAIN
		      "cdecl class {-const|-extern|-typedef} cdecl-files...")))
	   (const-file-root (string-append class "CONSTANTS"))
	   (stubs-file-root (string-append class "STUBS"))
	   (type-file-root (string-append class "TYPES"))
	   (cdecl-stubs '())
	   (command (if (member (caddr clargs)
				'("-const" "-extern" "-stubs" "-typedef"))
			(caddr clargs)
	                (error 'MAIN "Unrecognized command: ~s"
			       (cddr clargs)))))
    (let loop ((files (cdddr clargs)))
	 (when files
	       (load-cdecl (car files))
	       (if (and (equal? command "-extern") cdecl-externs)
		   (emit-externs (reverse cdecl-externs)
		       (file-root (car files)) type-file-root))
	       (if (equal? command "-stubs")
		   (set! cdecl-stubs (append cdecl-externs cdecl-stubs)))
	       (loop (cdr files))))
    (if (equal? command "-const")
	(emit-consts (reverse cdecl-constants) cdecl-define-only
	    const-file-root))
    (if (equal? command "-stubs")
	(emit-stubs (reverse cdecl-stubs) stubs-file-root))
    (if (equal? command "-typedef")
	(emit-typedefs (reverse cdecl-types) cdecl-define-only
	    cdecl-read-only type-file-root))))

;;; Returns a string that is the root of the file name.

(define (FILE-ROOT file)
    (let loop ((fl (string->list file)))
	 (let ((x (member #\/ fl)))
	      (if x
		  (loop (cdr x))
		  (list->string
		      (let loop ((x fl))
			   (if (or (null? x) (equal? (car x) #\.))
			       '()
			       (cons (car x) (loop (cdr x))))))))))

;;; A declaration is loaded into the system by the following function.

(define (LOAD-CDECL file)
    (set! cdecl-externs '())
    (with-input-from-file
	file
	(lambda ()
		(let loop ((exp (read)))
		     (unless (eof-object? exp)
			     (case (and (pair? exp) (car exp))
				   ((sizeof)
				    (input-sizeof exp))
				   ((const)
				    (set! cdecl-constants
					  (cons (input-const exp)
						cdecl-constants)))
				   ((typedef)
				    (set! cdecl-types
					  (cons (input-typedef exp)
						cdecl-types)))
				   ((extern)
				    (set! cdecl-externs
					  (cons (input-extern exp)
						cdecl-externs)))
				   ((read-only)
				    (set! cdecl-read-only
					  (append (cdr exp)
						  cdecl-read-only)))
				   ((define-only)
				    (set! cdecl-define-only
					  (append (cdr exp)
						  cdecl-define-only)))
				   (else (error 'input-expressions
						"Unrecognized expression ~s"
						exp)))
			     (loop (read)))))))

