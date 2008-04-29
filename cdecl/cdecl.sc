;;; C declaration compiler.

;* Copyright (c) 1989-1993 Hewlett-Packard Development Company, L.P.
;*		All Rights Reserved

;* Permission is hereby granted, free of charge, to any person obtaining a
;* copy of this software and associated documentation files (the "Software"),
;* to deal in the Software without restriction, including without limitation
;* the rights to use, copy, modify, merge, publish, distribute, sublicense,
;* and/or sell copies of the Software, and to permit persons to whom the
;* Software is furnished to do so, subject to the following conditions:
;* 
;* The above copyright notice and this permission notice shall be included in
;* all copies or substantial portions of the Software.
;* 
;* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
;* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
;* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
;* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
;* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
;* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
;* DEALINGS IN THE SOFTWARE.

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

