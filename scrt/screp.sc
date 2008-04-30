;;; This file implements the basic "read-eval-print" for SCHEME->C.  The
;;; interpreter is designed so that it can be run either "stand-alone", or
;;; embedded in some application.  Initialization of this module will assure
;;; that the entire library is initialized.

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


(module screp
    (top-level 
	RESET EXIT TOP-LEVEL READ-EVAL-PRINT LOAD LOADQ LOADE
	*SCHEME2C-RESULT*)
    (with scdebug sceval scexpand scexpnd1 scexpnd2 scqquote))

(include "repdef.sc")

;;; The function RESET will return to the current READ-EVAL-PRINT loop (or
;;; terminate signaling an error condition.

(define RESET #f)

;;; The function TOP-LEVEL will return to the outer most interpreter.

(define TOP-LEVEL #f)

;;; The function EXIT will return from the current READ-EVAL-PRINT loop.  At
;;; the top-level, it will terminate the Scheme process.  It accepts an
;;; return code.

(define (DEFAULT-EXIT . x)
    (if (null? x)
	(osexit 0)
	(if (number? (car x))
	    (osexit (car x))
	    (error 'EXIT "Argument is not an INTEGER: ~s" (car x)))))

(define EXIT #f)

(set! exit default-exit)

(set! reset (lambda () (default-exit 1)))

;;; The global flag *EMACSCHEME* indicates whether the interpreter is running
;;; in GNU emacs.

(define  *EMACSCHEME* #f)

;;; The global flag *READING-STDIN* indicates that the interpreter is reading
;;; stdin.  If control-c is pressed while this is true, then the debugger
;;; is not entered and a reset is performed.

(define *READING-STDIN* #f)

;;; The entry point to this module is the following function.  On entry it
;;; saves the current EXIT, RESET, TRACE-LEVEL, and keyboard interrupt
;;; handler.  After arming the keyboard interrupt, it passes control
;;; to the next step, REP.  On return from that function, the saved values
;;; will be restored and then the function will exit.
;;;
;;; The function is called with an optional list of options.  They are:
;;;
;;;	ECHO	-		echo the input on the output file.
;;;	"-e"
;;;	QUIET	-		do not print the result on the output file.
;;;	"-q"
;;;	PROMPT  "prompt" / #f	prompt input with the string "prompt".
;;;	"-np"			do not prompt input.
;;;	HEADER	"header" / #f	print the "header" on entry.
;;;	"-nh"			do not print header.
;;;	LOAD			LOAD / LOADE /LOADQ from current input.
;;;     RESULT  value		value to return unless overridden by proceed.
;;;	ENV	alist		interpreter environment.
;;;     "-emacs"		GNU emacs mode 

(define (READ-EVAL-PRINT . flags)
    (letrec ((save-exit exit)
	     (save-reset reset)
	     (save-interrupt (and (not (memq 'load flags))
				  (signal sigint sig_ign)))
	     (save-trace trace-level)
	     (input current-input-port-value)
	     (output current-output-port-value)
	     (echoinput (or (member 'echo flags) (member "-e" flags)))
	     (quiet (or (member 'quiet flags) (member "-q" flags)))
	     (prompt (let ((x (member 'prompt flags)))
			  (cond (x (cadr x))
				((member "-np" flags) #f)
				(else "> "))))
	     (header (let ((x (member 'header flags)))
			  (cond (x (cadr x))
				((member "-nh" flags) #f)
				(else
				 (format "~a -- ~a -- ~a ~a"
					 (car (implementation-information))
					 (cadr (implementation-information))
					 "Copyright 1989-1993 Hewlett-Packard"
					 "Development Company")))))
	     (env (let ((x (member 'env flags)))
		       (if x (cadr x) '())))
	     (load (memq 'load flags))
	     (return-value (let ((x (member 'result flags)))
				(if x (cadr x) #f)))
	     
	     ;;; Exit function and proceed functions.
	     (MAKE-EXIT
		 (lambda (exit-here)
			 (set! proceed
			       (lambda x (if x (set! return-value (car x)))
				       (exit-here #f)))
			 (set! exit
			       (lambda x
				       (exit-here (if (null? x) #f (car x)))))
			 #t))
	     
	     ;;; Reset function.
	     (MAKE-RESET
		 (lambda (reset-here)
			 (if (not load)
			     (set! reset
				   (let ((save-exit exit))
					(lambda ()
						(set! exit save-exit)
						(reset-here #f)))))
			 #t))
	     
	     ;;; One-time initialization code to set up TOP-LEVEL, backtracing
	     ;;; error handler, and trap handlers.
	     (ONE-TIME-INITIALIZATION
		 (lambda ()
			 (set-scheme-mode! 'interactive)
			 (set! *emacscheme* (member "-emacs" flags))
			 (set! top-level
			       (let ((top-reset reset))
				    (lambda ()
					    (set! *debug-on-error* #t)
					    (set! reset top-reset)
					    (reset))))
			 (set! *error-handler* backtrace-error-handler)
			 (set! *debug-on-error* #t))))
	    
	    ;;; Function body starts here.
	    (if (call-with-current-continuation make-exit)
		(begin (if (call-with-current-continuation make-reset)
			   (begin (if (and (not load)
					   (not (eq? save-interrupt sig_ign)))
				      (signal sigint on-interrupt))
				  (if echoinput (echo input output))
				  (if header
				      (format stdout-port "~a~%" header)))
			   (begin (set! current-input-port-value input)
				  (set! current-output-port-value output)
				  (set! trace-level save-trace)))
		       (if (and (not top-level) (not load))
			   (one-time-initialization))
		       (rep env (if load (current-input-port) stdin-port)
			    stdout-port prompt quiet)))
	    (unless load (signal sigint save-interrupt))
	    (if echoinput (echo input #f))
	    (set! exit save-exit)
	    (set! reset save-reset)
	    (set! trace-level save-trace)
	    return-value))

;;; Flushes white space characters from the input file.

(define (FLUSH-WHITE inport)
    (let ((c (and (char-ready? inport) (peek-char inport))))
	 (if (and c (not (eof-object? c)) (char-whitespace? c))
	     (begin (read-char inport)
		    (flush-white inport)))))

;;; REP is called from READ-EVAL-PRINT to actually read the commands once
;;; the initial environment is set up.

(define (REP env inport outport prompt quiet)
    (let loop ((exp #f))
	 (flush-white inport)
	 (if (and prompt (not (char-ready? inport))) (display prompt outport))
	 (set! *reading-stdin* (eq? inport stdin-port))
	 (set! exp (read inport))
	 (set! *reading-stdin* #f)
	 (cond ((eof-object? exp)
		(if prompt (newline outport)))
	       ((and (pair? exp) (memq (car exp) '(module include)))
		(flush-white inport)
		(if (not quiet)
		    (format outport "~s form ignored~%" (car exp)))
		(loop #f))
	       (else (if *emacscheme* (newline outport))
		     (set! exp (eval exp env))
		     (flush-white inport)
		     (if (not quiet) (format outport "~s~%" exp))
		     (loop #f)))))

;;; Expressions within files are loaded by the following functions.

(define (LOAD file-name)
    (with-input-from-file
	file-name
	(lambda () (read-eval-print 'header #f 'prompt #f 'load)))
    file-name)

(define (LOADQ file-name)
    (with-input-from-file
	file-name
	(lambda () (read-eval-print 'header #f 'prompt #f 'quiet 'load)))
    file-name)

(define (LOADE file-name)
    (with-input-from-file
	file-name
	(lambda () (read-eval-print 'header #f 'prompt #f 'echo 'load)))
    file-name)

;;; When Scheme->C is a server embedded in a client program, the client
;;; evaluates a Scheme expression by calling the procedure SCHEME2C.
;;;
;;;  input_expression:	the address of a null terminated string of ASCII
;;;			characters that is the Scheme expression to evaluate.
;;;
;;; The procedure returns a list of three items, reflecting the evaluation:
;;;
;;;  status:		0	expression evaluated normally.  The value is
;;;				saved in *SCHEME2C-RESULT* and also written to
;;;				stdout-port.
;;;
;;;			1	an error occurred.  The error message is
;;;				written to stderr-port.  If no previous error
;;;				is latched, then the stack trace is written to
;;;				stderr-port and the associated environments are
;;;				in the list *ERROR-ENV*.  The client should
;;;				evaluate (RESET-ERROR) when done examining the
;;;				error state.
;;;
;;;			2	an internal error occurred.  The error message
;;;				is reported via stderr-port.  No further
;;;				execution is possible.
;;;
;;;			3	computation timed out.  Evaluate (PROCEED)
;;;				to continue execution.  Evaluate (PROCEED?)
;;;				to cause a breakpoint when execution resumes.
;;;
;;;			4	a procedure entry breakpoint occurred.  The
;;;				call is written to stderr-port and the
;;;				associated environments are in the list
;;;				*BPT-ENV*.  The procedure stack trace can be
;;;				viewed by evaluating (BACKTRACE).   The
;;;				procedure arguments are in *ARGS*.
;;;				Evaluate (PROCEED) to continue execution, or
;;;				(RESET-BPT) to abort.
;;;
;;;			5	a procedure exit breakpoint occurred.  The
;;;				result is written to the stderr-port and
;;;			        saved in *RESULT*.  The environments are
;;;				in the list *BPT-ENV*.  Evaluate (PROCEED)
;;;				to continue execution, (PROCEED exp) to
;;;				continue returning a new value, or
;;;				(RESET-BPT) to abort.
;;;
;;;			N.B.  Additional breakpoints will not occur while
;;;			      examining the state of a breakpoint.
;;;
;;;  result:		a null terminated string of ASCII characters that is
;;;			the contents of the string port stdout-port, i.e. the
;;;			standard output port.
;;;
;;;  error:		a null terminated string of ASCII characters that is
;;;			the contents of the string port stderr-port, i.e. the
;;;			error output port.

(define (SCHEME2C input-expr)
    
    (define (EXECUTE return)
	    (set! return-to-scheme2c return)
	    (set! scheme2c-status 0)
	    (set! stdin-port (open-input-string input-expr))
	    (return-to-scheme2c (eval (read stdin-port))))
    
    (set! *scheme2c-result* (call-with-current-continuation execute))
    (if (zero? scheme2c-status) (write *scheme2c-result* stdout-port))
    (list scheme2c-status (get-output-string stdout-port)
	  (get-output-string stderr-port)))

(define RETURN-TO-SCHEME2C #f)

(define SCHEME2C-STATUS #f)

(define *SCHEME2C-RESULT* #f)

;;; This is called to "upexit" to SCHEME2C with an optional value and status.

(define (JUMP-TO-SCHEME2C . x)
    (case (length x)
	  ((0) (set! scheme2c-status 0)
	       (return-to-scheme2c #f))
	  ((1) (set! scheme2c-status 0)
	       (return-to-scheme2c (car x)))
	  ((2) (set! scheme2c-status (cadr x))
	       (return-to-scheme2c (car x)))))
