;;; The top level of the Scheme compiler is implemented by this module.  The
;;; variables that are used outside this module are:
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


(module compile)

;;; External and in-line declarations.

(include "plist.sch")
(include "expform.sch")
(include "lambdaexp.sch")
(include "miscexp.sch")

;;; Top-level variables.

(define SC-INPUT '())		; List of open input files.

(define SC-SPLICE '())		; List of forms to "splice" into input.

(define SC-SOURCE-NAME '())	; Initial source file name.

(define SC-INCLUDE-DIRS '(""))	; List of directories for include to search.

(define SC-ICODE '())		; C written to this file.

(define SC-ERROR '())		; true ->  log errors to ICODE file.
    				; false -> log errors to STANDARD-OUPUT.
    
(define SC-ERROR-CNT 0)		; # of error messages reported.

(define SC-LOG '())		; List of events to log to the SC-ICODE file.
    				; The possible events are:
				;
				; SOURCE - source text.
			       	; MACRO - source following macro expansion.
			        ; EXPAND - initial tree.
				; CLOSED - closed procedures and variables
				; TRANSFORM - tree following boolean transform.
				; LAMBDA - lambda analysis information.
			        ; TREE - final tree and constants.
				; LAP - lap code.
				; PEEP - peep-hole optimization.

(define SC-STACK-TRACE #t)	; true -> emit stack tracing code
				; false -> don't emit stack tracing code.

(define SC-INTERPRETER #f)	; true -> building an interpreter, so ignore
				;         main clause in module.
				; false -> process module normally.

(define SC-LOG-DEFAULT '(source macro expand closed transform lambda tree))
				; Default list of events to log.

(define MODULE-NAME "") 	; Module name.

(define MODULE-NAME-UPCASE "")	; Upper case version of the module name.

(define MAIN-PROGRAM-NAME '())	; Main program name.

(define HEAP-SIZE 0)		; Default size of heap.

(define CURRENT-DEFINE-NAME 'top-level)
    				; Name of current DEFINE being processed.

(define TOP-LEVEL-SYMBOLS #t)	; List of top-level symbols.

(define WITH-MODULES '())	; List of additional modules used.

(define RESTORE-PLIST #f)	; Function to restore default initial values.

(define TRUE-ALPHA 'true-alpha) ; Alpha variable for #t

(define FALSE-ALPHA 'false-alpha)
    				; Alpha variable for #f

(define EMPTY-LIST-ALPHA 'empty-list-alpha)
    				; Alpha variable for ()

(define CONS-ALPHA '())		; Alpha variable for cons

(define UNDEFINED-ALPHA '())	; Alpha variable for undefined value

;;; Initialization of the entire compiler is triggered by the following
;;; function.  It is normally called once at the start of each compilation.

(define (INITIALIZE-COMPILE)
    ;;; Initialize the variables in expand.sc
    (set! lexical-free-vars '())
    (set! lexical-bound-vars '())
    (set! current-lambda-id 'top-level)
    
    ;;; Initialize the variables in miscexp.sc
    (set! quote-constants '())
    
    ;;; Initialize the variables in lap.sc
    (set! lap-code '())
    
    ;;; Initialize some of the variables in compile.sc
    (set! sc-log '())
    (set! sc-stack-trace #t)
    (set! sc-interpreter #f)

    ;;; Initialize the property list.
    (if restore-plist
	(restore-plist)
	(begin (create-plist predef-default)
	       (copy-plist 'scc 'initial-scc)    
	       (set! restore-plist
		     (let ((init-globals global-free-vars)
			   (init-seq     make-alpha-seq))
			  (lambda ()	       			   
				  (set! global-free-vars init-globals)
				  (set! make-alpha-seq init-seq)
				  (copy-plist 'initial-scc 'scc))))))
    
    ;;; Initialize the rest of the variables in compile.sc
    (set! sc-input '())
    (set! sc-splice '())
    (set! sc-include-dirs '(""))
    (set! sc-icode '())
    (set! sc-error '())
    (set! sc-error-cnt 0)
    (set! main-program-name '())
    (set! heap-size 0)
    (set! current-define-name 'top-level)
    (set! top-level-symbols #t)
    (set! with-modules '())
    (set! undefined-alpha (bound '$_undefined))
    (set! cons-alpha (bound 'cons))
    (set! module-name ""))

;;; As property list initialization takes a while, it is done only once and a
;;; copy is saved.

(define (CREATE-PLIST predef-file)
    (set! module-name "*initialize*")
    (copy-plist 'null-property 'scc)
    (set! global-free-vars '())
    (set! make-alpha-seq 0)
    
    ;;; Initialize for #T, #F, and ().
    (set-id-vname! 'true-alpha "TRUEVALUE")
    (set-id-use! 'true-alpha 'constant)
    (set-id-value! 'true-alpha #t)
    (set-id-vname! 'false-alpha "FALSEVALUE")
    (set-id-use! 'false-alpha 'constant)
    (set-id-value! 'false-alpha #f)
    (set-id-vname! 'empty-list-alpha "EMPTYLIST")
    (set-id-use! 'empty-list-alpha 'constant)
    (set-id-value! 'empty-list-alpha '())
    
    ;;; Initialize for miscexp.t
    (put 'lap	      'expand lap-exp   )
    (put 'quote	      'expand quote-exp )
    (put 'set!        'expand set!-exp  )
    (put 'if          'expand if-exp    )
    (put 'define      'expand define-exp)
    
    ;;; Initialize for macros.t
    (put 'quasiquote  	    'macro (old-macro quasiquote-macro))
    (put 'cond	      	    'macro (old-macro cond-macro))
    (put 'case	      	    'macro (old-macro case-macro))
    (put 'and	      	    'macro (old-macro and-macro))
    (put 'or	      	    'macro (old-macro or-macro))
    (put 'not		    'macro (old-macro not-macro))
    (put 'begin	      	    'macro (old-macro begin-macro))
    (put 'let	      	    'macro (old-macro let-macro))
    (put 'let*        	    'macro (old-macro let*-macro))
    (put 'letrec    	    'macro (old-macro letrec-macro))
    (put 'do	   	    'macro (old-macro do-macro))
    (put 'when		    'macro (old-macro when-macro))
    (put 'unless	    'macro (old-macro unless-macro))
    (put 'quote	   	    'macro quote-macro)
    (put 'lap 	  	    'macro lap-macro)
    (put 'module    	    'macro quote-macro)
    (put 'include   	    'macro quote-macro)
    (put 'define-external   'macro quote-macro)
    (put 'define-c-external 'macro quote-macro)
    (put 'define	    'macro define-macro)
    (put 'define-macro      'macro define-macro-macro)
    (put 'define-constant   'macro define-constant-macro)
    (put 'eval-when	    'macro eval-when-macro)
    (put 'lambda	    'macro lambda-macro)
    
    ;;; Initialize for lambdaexp.sc
    (put 'lambda 'expand lambda-exp)
    
    ;;; Initialize for lap.sc
    (load-plist-lap)
    
    ;;; Initialize using the predef file 
    (set! sc-input (list (open-input-file predef-file)))
    (let ((x (read-text)))
	 (if (not (eof-object? x))
	     (report-error "Illegal predefinition form:" x)))
    (close-port (car sc-input))
    (set! sc-input '())
    (set! make-alpha-seq (max make-alpha-seq 2000))

    ;;; Initialize alpha variables which point into the predef file.
    (set! undefined-alpha (bound '$_undefined))
    (set! cons-alpha (bound 'cons))
    (set! module-name ""))
  
;;; The  compiler is invoked by the procedure SC which takes the following
;;; required argument:
;;;
;;;	input		source file name to compile.  The suffix ".sc"  is 
;;;			added to it to form the actual file name.
;;;
;;; and the following optional arguments:
;;;
;;;	icode		file for C intermediate code.  If it is supplied,
;;;			then the suffix ".c" will be added to form the file
;;;			name.  If it is not supplied then it will be
;;;			constructed by appending the suffix ".c" to the source
;;;			file name.
;;;
;;;	ERROR 		error messages are to be written to the icode file.  If
;;;			it is not supplied, then errors will be written to the
;;;			standard output device.
;;;
;;;	LOG		log the default events to the icode file.  If it is
;;;			not specified, then no events will be logged.
;;;
;;;	(LOG events...)	log the specified events to the icode file.  If it is
;;;			not specified, then no events will be logged.
;;;
;;;	NOTRACE		don't emit code for stack back stack.  If it is not
;;;			specified, then stack trace back code will be emitted.
;;;
;;;	PREDEF file	source file for predefined functions.  If it is
;;;			specified, then a suffix of ".sc" will be
;;;			appended.  If is is not specified, then the "standard"
;;;			predefinition file will be used.		
		
(define (SC input . output) 
    (initialize-compile)
    (if (symbol? input) (set! input (string-downcase (symbol->string input))))
    (set! sc-source-name (string-append input ".sc"))
    (set! sc-input (list (open-input-file sc-source-name)))
    (cond ((and output (output-port? (car output)))
	   (set! sc-icode (car output))
	   (set! output (cdr output)))
          ((or (null? output) (pair? (car output))
	       (memq (car output) '(error log profile predef)))
	   (set! sc-icode (open-output-file (string-append input ".c"))))
	  ((or (symbol? (car output)) (string? (car output)))
	   (set! sc-icode
		 (open-output-file (string-append (if (symbol? (car output))
					  (string-downcase
					      (symbol->string (car output)))
					  (car output)) ".c")))
	   (set! output (cdr output))))
    (do ((output output (cdr output))
	 (flag '())
	 (options '() (cons flag options)))
	((null? output) (docompile))
	(set! flag (car output))
	(cond ((memq flag options)
	       (report-error "Duplicate option:" flag))
	      ((eq? flag 'error)
	       (set! sc-error #t))
	      ((eq? flag 'log)
	       (set! sc-log sc-log-default))
	      ((and (pair? flag) (eq? (car flag) 'log))
	       (set! sc-log (cdr flag))
	       (set! flag 'log))
	      ((eq? flag 'notrace)
	       (set! sc-stack-trace #f))
	      ((and (eq? flag 'predef) (cdr output))
	       (create-plist
		   (string-append (if (symbol? (cadr output))
				      (string-downcase
					  (symbol->string (cadr output)))
				      (cadr output))
		       ".sc"))
	       (set! output (cdr output)))
	      (else (report-error "Unrecognized option:" flag))))
    (close-sc-files)
    'sc-done)

;;; The following function is called to assure that all the files used by SC
;;; are closed.

(define (CLOSE-SC-FILES)
    (let ((cifo (lambda (f)
			(if (and f (not (eq? f (current-output-port))))
			    (close-port f)))))
	 (for-each cifo sc-input)
	 (set! sc-input '())
	 (set! sc-splice '())
	 (set! sc-include-dirs '(""))
	 (cifo sc-icode)
	 (set! sc-icode '())))

;;; SCL is an alternative to SC and is provided for testing.  It allows one to
;;; specify a list of expressions to compile.  They will be written to the file
;;; "scltext.sc" and then SC will be invoked.  The default logging will be
;;; enabled.

(define (SCL . expl)
    (let ((file 'scltext))
	 (cond ((and expl (pair? (car expl)))
		(let ((port (open-output-file "scltext.sc")))
		     (write '(module test) port)
		     (newline port)
		     (for-each (lambda (exp) (write exp port) (newline port))
				expl)
		     (close-output-port port)))
	       (expl
		(set! file (car expl))))
	 (sc file (current-output-port) 'log)))

;;; Event logging is tested for the by the following boolean.

(define (LOG? event) (memq event sc-log))

;;; Once all the files are open, the actual compilation is directed by the
;;; following function.
    		  
(define (DOCOMPILE)
    (let ((forms '()))
	 (if sc-log (format sc-icode "/* ***** Expand Forms *****~%"))
	 (set! forms (expand-forms))
	 (if (log? 'expand) (pp$t-list forms sc-icode))

	 (if sc-log (format sc-icode "   ***** Transformations *****~%"))
	 (for-each analyze-closures1a forms)
	 (for-each analyze-closures1b forms)
	 (set! forms (map transform forms))
	 
	 (if sc-log (format sc-icode "   ***** Closure Analysis *****~%"))
	 (for-each analyze-closures2 forms)
	 (if (log? 'lambda)
	     (for-each
		 (lambda (tree)
			 (walk-$tree
			     (lambda (l)
				     (if ($lambda? l)
					 (begin (print-lambda-info
						    ($lambda-id l)
						    sc-icode)
						(newline sc-icode))))
			     tree))
		 forms))
	 (if (log? 'tree)
	     (begin (pp$t-list forms sc-icode)
		    (newline sc-icode)
		    (pretty-print-$tree quote-constants sc-icode)
		    (newline sc-icode)))
	 
	 (if sc-log (format sc-icode "   ***** Code Generation ***** */~%"))
	 (if (zero? sc-error-cnt) (generate-code forms))))

;;; Error messages are written in a standard form to the error file by the
;;; following function.  It will also keep a count of the number of errors.

(define (REPORT-ERROR msg . ls)
    (if (not sc-error) (set! sc-error (current-output-port)))
    (format sc-error "***** ERROR - ~a ~a" current-define-name msg)
    (for-each (lambda (l) (format sc-error " ~a" l)) ls)
    (newline sc-error)
    (set! sc-error-cnt (+ 1 sc-error-cnt)))

;;; Warning messages are written in a standard form to the error file by the
;;; following function.

(define (REPORT-WARNING msg . ls)
    (if (not sc-error) (set! sc-error (current-output-port)))
    (format sc-error "***** WARNING - ~a ~a" current-define-name msg)
    (for-each (lambda (l) (format sc-error " ~a" l)) ls)
    (newline sc-error))

;;; $TREE pretty-printer.

(define (PRETTY-PRINT-$TREE tree out)
    (let ((indent (write-count out))
	  (left (- (write-width out) (write-count out))))
	 (cond ((and ($call? tree) ($lambda? ($call-func tree)))
		(let ((lid  ($lambda-id ($call-func tree))))
		     (pretty-print-$tree
			  `(<apply>
			       ,($call-tail tree)
			       ,lid
			       ,@(pp$t-lambda-bind (lambda-reqvars lid)
				     (lambda-optvars lid) ($call-argl tree))
			       ,@($lambda-body ($call-func tree)))
			  out)))
	       ((or (not (pair? tree)) (>= (print-in tree left) 0))
		(write tree out))
	       ((and (eq? (car tree) '<apply>)
		     (>= (print-in (list (car tree) (cadr tree) (caddr tree))
			     left)
			 0))
		(format out "(~S ~S ~S" (car tree) (cadr tree) (caddr tree))
		(for-each
		    (lambda (x)
			    (newline out)
			    (set-write-count! out (+ indent 1))
			    (pretty-print-$tree x out))
		    (cdddr tree))
		(format out ")"))
	       ((and (memq (car tree) '($define $if $lambda))
		     (>= (print-in (list (car tree) (cadr tree)) left) 0))
		(format out "(~S ~S" (car tree) (cadr tree))
		(for-each
		    (lambda (x)
			    (newline out)
			    (set-write-count! out (+ indent 5))
			    (pretty-print-$tree x out))
		    (cddr tree))
		(format out ")"))
	       (else
		    (format out "(")
		    (pretty-print-$tree (car tree) out)
		    (let loop ((tree (cdr tree)))
			 (cond ((pair? tree)
				(newline out)
				(set-write-count! out (+ indent 2))
				(pretty-print-$tree (car tree) out)
				(loop (cdr tree)))
			       (tree
				(newline out)
				(set-write-count! out (+ indent 2))
				(display ". " out)
				(pretty-print-$tree tree out))))
		    (format out ")")))))

(define (PP$T-LAMBDA-BIND reqvars optvars vals)
    (cond ((null? reqvars)
	   (if optvars
	       `((,(car optvars) <- ,vals))
	       '()))
	  (else
	   (cons `(,(car reqvars) <- ,(car vals))
		 (pp$t-lambda-bind (cdr reqvars) optvars (cdr vals))))))

(define (PP$T-LIST forms out)
    (for-each (lambda (form) (pretty-print-$tree form out) (newline out))
	forms))

;;; Space out to a certain column on an output port.

(define (SET-WRITE-COUNT! out cnt)
    (do ((i (- cnt (write-count out)) (- i 1)))
	((<= i 0))
	(write-char #\space out)))

;;; See if an object "s" will print in "len" characters or less.  It will
;;; return the number of characters left, or a negative number if the object
;;; won't fit.

(define (PRINT-IN s len)
    (if (not (negative? len))
	(begin (if (vector? s) (set! s (vector->list s)))
	       (if (pair? s)
		   (print-in (cdr s) (- (print-in (car s) len) 1))
		   (- len (string-length (format "~s" s)))))
	len))

;;; Down case a string.

(define (STRING-DOWNCASE s)
    (do ((i (- (string-length s) 1) (- i 1))
	 (t (make-string (string-length s))))
	((= i -1) t)
	(string-set! t i (char-downcase (string-ref s i)))))

;;; Return the first "n" items of list "l".

(define (LIST-HEAD l n)
    (if (zero? n) '() (cons (car l) (list-head (cdr l) (- n 1)))))
