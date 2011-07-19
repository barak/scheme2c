;;; This file is the "main" program for the Scheme->C Scheme compiler.  It
;;; defines the implementation dependent information, a configuration
;;; function, and the "main" function which interpretes the command line
;;; arguments and drives the compiler.
;;;

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


(module MAIN
    (main scc)
    (with callcode
	  closeana
	  compile
	  expform
	  gencode
	  lambdacode
	  lambdaexp
	  lap
	  macros
	  misccode
	  miscexp
	  plist
	  readtext
	  transform))

(define SCC-VERSION "15mar93jfb")
				; Compiler version string.

(define FORCE-LD-OF-REP read-eval-print)
				; Assure that read-eval-print is available
				; for compiler debugging.

;;; The following top-level variables define the implementation dependent
;;; information:

(define PREDEF-DEFAULT "../scrt/predef.sc")
				; File holding the declarations for predefined
				; functions.

(define C-INCLUDE-FILE "objects.h")
				; #include file for the predefined functions.

(define C-INCLUDE-DIR "../scrt")
    				; directory containing #include file for
				; predefined functions.

(define SC-LIBRARY "../scrt/libs2c.a")
				; Scheme->C library file.

(define SC-LIBRARY_P "../scrt/libs2c_p.a")
				; Scheme->C profiled library file.

;;; When the compiler is invoked directly from the shell, the following
;;; function is invoked to control compilation.  It will interprete the flags,
;;; invoke the compiler and then exit.  Any compilation errors or Scheme errors
;;; will cause the process to abnormally terminate.
;;;
;;; The command format is:
;;;
;;; scc [ flags ] files...
;;;
;;; where the flags are:
;;;
;;;	-cc		C compiler
;;;
;;;	-C		compile the named Scheme programs and leave the
;;;			resulting C code in .c files.
;;;
;;;	-f flag value   set a compile time constant.  Equivilant to
;;;			(define-constant flag value).
;;;
;;;	-i		produce a Scheme interpreter as the output file.
;;;
;;;	-I directory	directory prefix to use for searching for #include
;;;			files.
;;;
;;;	-m module	specifies a module name which must be initialized
;;;			by the interpreter (see -I) as the source was
;;;			previously compiled.
;;;
;;;	-Ob		optimize C code by omitting bounds checks.
;;;
;;;	-Og		optimize C code by omitting stack trace-back code.
;;;
;;;	-On		optimize C code by assuming that all numbers are
;;;			fixed point.
;;;
;;;	-Ot		optimize C code by omitting type checks.
;;;
;;;	-pg		compile for gprof profiling.
;;;
;;;	-LIBDIR directory
;;;			directory containing "predef.sc", "objects.h",
;;;			"libs2c.a" and optionally "libs2c_p.a".
;;;
;;;	-log		log the default compiler events
;;;
;;;	-source		specific events to log.
;;;	-macro
;;;	-expand
;;;	-closed
;;;	-transform
;;;	-lambda
;;;	-tree
;;;	-lap
;;;	-peep
;;;
;;; All other flags will be passed to the C compiler unchanged.  Following
;;; the flags come source and object files which are to be compiled:
;;;
;;;	name.sc		Scheme source file which is to be compiled to
;;;			to name.c.
;;;
;;; All other files are passed to the C compiler unchanged.

(define MODULE-NAMES '())

(define INCLUDE-DIRS '(""))

(define (SCC clargs)
    (let ((flags '())
	  (interpreter #f)
	  (strace #t)
	  (c-only #f)
	  (c-flags '())
	  (sc-to-c.c "SC-TO-C.c")
	  (sc-to-c.o "SC-TO-C.o")
	  (directory-separator
	      (if (equal? (list-ref (implementation-information) 5)
			  "Microsoft Windows 3.x")
		  "\\"
		  "/"))
	  (log '())
	  (cc "cc"))

	 ;;; 1. Pick up the command line arguments.

	 (let loop ((args (cdr clargs)))
	      (if args
		  (let ((arg (car args)))
		       (cond ((and (equal? arg "-f") (cdr args) (cddr args))
			      (set! flags
				    (cons (string-append
					      "(define-constant "
					      (cadr args)
					      " "
					      (caddr args)
					      ")") flags))
			      (loop (cdddr args)))
			     ((equal? arg "-i")
			      (set! interpreter #t)
			      (loop (cdr args)))
			     ((and (equal? arg "-I") (cdr args))
			      (set! include-dirs
				    (append include-dirs
					    (list (string-append (cadr args)
						      "/"))))
			      (loop (cddr args)))
			     ((and (equal? arg "-m") (cdr args))
			      (set! module-names
				    (cons (cadr args) module-names))
			      (loop (cddr args)))
			     ((and (equal? arg "-LIBDIR") (cdr args))
			      (set! predef-default
				    (string-append (cadr args)
					directory-separator
					"predef.sc"))
			      (set! c-include-dir (cadr args))
			      (set! sc-library
				    (string-append (cadr args)
					directory-separator
					"libs2c.a"))
			      (set! sc-library_p
				    (string-append (cadr args)
					directory-separator
					"libs2c_p.a"))
			      (set! c-include-dir (cadr args))
			      (loop (cddr args)))
			     ((equal? arg "-log")
			      (set! log sc-log-default)
			      (loop (cdr args)))
			     ((assoc arg '(("-source" . source)
					   ("-macro" . macro)
					   ("-expand" . expand)
					   ("-closed" . closed)
					   ("-transform" . transform)
					   ("-lambda" . lambda)
					   ("-tree" . tree)
					   ("-lap" . lap)
					   ("-peep" . peep)))
			      =>
			      (lambda (flag)
				      (set! log (cons (cdr flag) log))
				      (loop (cdr args))))
			     ((equal? arg "-Ot")
			      (set! flags
				    (cons "(define-constant *type-check* #f)"
					  flags))
			      (loop (cdr args)))
			     ((equal? arg "-Ob")
			      (set! flags
				    (cons "(define-constant *bounds-check* #f)"
					  flags))
			      (loop (cdr args)))
			     ((equal? arg "-Og")
			      (set! strace #f)
			      (loop (cdr args)))
			     ((equal? arg "-On")
			      (set! flags
				    (cons "(define-constant *fixed-only* #t)"
					  flags))
			      (loop (cdr args)))
			     ((equal? arg "-C")
			      (set! c-only #t)
			      (loop (cdr args)))
			     ((and (equal? arg "-cc") (cdr args))
			      (set! cc (cadr args))
			      (loop (cddr args)))
			     (else (set! c-flags
					 (cons (do-c-flag arg flags log strace
						   interpreter)
					       c-flags))
				   (loop (cdr args)))))))

	 ;;; 2. If -C option was specified, then we're done here.

	 (if c-only (exit))

	 ;;; 3. If the -i option was specified, build the main program.

	 (set! reset
	       (let ((prev-reset reset))
		    (lambda ()
			    (catch-error
				(lambda ()
					(remove-file sc-to-c.c)
			    		(remove-file sc-to-c.o)))
			    (prev-reset))))
	 (if interpreter
	     (let ((fh (open-output-file sc-to-c.c)))
		  (format fh "#include \"~a/~a\"~%" c-include-dir
			  c-include-file)
		  (format fh "extern TSCP screp_read_2deval_2dprint();~%")
		  (format fh "int main(int argc, char **argv)~%")
		  (format fh "{~%")
		  (format fh
		  "   INITHEAP( 0, argc, argv, screp_read_2deval_2dprint );~%")
		  (map (lambda (m) (format fh "   ~a__init();~%" m))
		       (cons "screp" (reverse module-names)))
		  (format fh
	     "   screp_read_2deval_2dprint( sc_clarguments( argc, argv ) );~%")
		  (format fh "   SCHEMEEXIT();~%")
		  (format fh "}~%")
		  (close-output-port fh)
		  (set! c-flags (append c-flags (list sc-to-c.c)))))

	 ;;; 4. Flags processed and all .sc -> .c compiles done.   Invoke the
	 ;;; C compiler to do the rest.

	 (unless
	  (eq? 0
	       (system
		(apply string-append
		       `(,cc " -I" ,c-include-dir
			     ,@(map (lambda (x)
				      (string-append " " x))
				    (if (member "-c" c-flags)
					(reverse c-flags)
					(append (reverse c-flags)
						(if (member "-pg" c-flags)
						    `(,sc-library_p)
						    `(,sc-library))
						`("-lm" ,(if (= ((lap () (C_FIXED "STACK_OVERFLOW"))) 1)
							     "-lsigsegv"
							     "")))))))))
		 (reset))
	 (catch-error
	     (lambda ()
	 	     (remove-file sc-to-c.c)
	 	     (remove-file sc-to-c.o)))))

;;; Command line arguments which are not recognized as Scheme->C
;;; flags are processed by the following function which will
;;; return the argument to pass to the C compiler.

(define (DO-C-FLAG arg flags log strace interpreter)
    (let* ((len (string-length arg))
	   (root (substring arg 0 (max 0 (- len 3))))
	   (root.S2C (string-append root ".S2C"))
	   (root.c (string-append root ".c")))
	  (cond ((and (> len 3)
		      (string=?
			  (substring arg (- len 3) len)
			  ".sc"))
		 ;;; Compile an .sc file to a .c file.
		 (format #t "~a:~%" arg)
		 (initialize-compile)
		 (for-each
		     (lambda (flag)
			     (do-define-constant
				 (read (open-input-string
					   flag))))
		     flags)
		 (set! sc-include-dirs include-dirs)
		 (set! sc-input
		       (list (open-input-file arg)))
		 (set! sc-source-name arg)
		 (set! sc-icode (open-output-file root.S2C))
		 (set! sc-error stderr-port)
		 (set! sc-log log)
		 (set! sc-stack-trace strace)
		 (set! sc-interpreter interpreter)
		 (docompile)
		 (if (not (zero? sc-error-cnt)) (reset))
		 (set! module-names (cons module-name module-names))
		 (close-sc-files)
		 (rename-file root.S2C root.c)
		 root.c)
		;;; Pass argument to C.
		(else arg))))
