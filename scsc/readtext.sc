;;; The functions in this file read the program text, expand text macros, and
;;; process all MODULE, INCLUDE, DEFINE-EXTERNAL, DEFINE-C-EXTERNAK and
;;; DEFINE-MACRO directives. The function READ-TEXT is called to read each
;;; S-expression from the source files(s).  It will return the eof-object when
;;; all text has been read.
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

(module readtext)

;;; External definitions.

(include "plist.sch")
(include "expform.sch")

(define (READ-TEXT)
    (let ((form '()))
	 (if sc-splice
	     (begin (set! form (car sc-splice))
		    (set! sc-splice (cdr sc-splice)))
	     (begin (set! form (sc-expand (read-from-sc-input)))
		    (if (log? 'macro)
			(begin (pretty-print-$tree form sc-icode)
			       (newline sc-icode)))))
	 (case (and (pair? form) (car form))
	       ((define-external)
		(do-define-external form)
		(read-text))
	       ((define-c-external)
		(do-define-c-external form)
		(read-text))
	       ((define-macro)
		(read-text))
	       ((module)
		(do-module form)
		(read-text))
	       ((include)
		(do-include form)
		(read-text))
	       ((define-constant)
		(read-text))
	       ((eval-when)
		(if (memq 'compile (cadr form))
		    (eval (cons 'begin (cddr form))))
		(read-text))
	       (else  (cond ((and (pair? form)
				  (pair? (car form))
				  (eq? (caar form) 'lambda)
				  (null? (cadar form)))
			     (set! sc-splice (append (cddar form) sc-splice))
			     (read-text))
			    (else (if (equal? module-name "")
				      (begin (set! module-name
						   (substring sc-source-name 0
						       (- (string-length
							      sc-source-name)
							  3)))
					     (report-warning
						 "Module name defaults to:"
						 module-name)))
				  form))))))

(define (READ-FROM-SC-INPUT)
    (do ((form (read (car sc-input)) (read (car sc-input))))
	((or (and (eof-object? form) (null? (cdr sc-input)))
	     (not (eof-object? form)))
	 (if (log? 'source)
	     (begin (pretty-print-$tree form sc-icode)
		    (newline sc-icode)))
	 form)
	(close-port (car sc-input))
	(set! sc-splice (cadr sc-input))
	(set! sc-input (cddr sc-input))))

;;; Macro expansion is done by this code.  It is based upon the ideas in
;;; "Expansion-Passing Style: Beyond Conventional Macros", 1986 ACM Conference
;;; on Lisp and Functional Programming.

(define (SC-EXPAND x) (sc-initial-expander x sc-initial-expander))

(define (SC-INITIAL-EXPANDER x e)
    (let ((e1 (cond ((symbol? x) *sc-identifier-expander*)
		    ((not (pair? x)) (lambda (x e) x))
		    ((symbol? (car x))
		     (let ((func (get (car x) 'macro)))
			  (if (procedure? func)
			      func
			      *sc-application-expander*)))
		    (else *sc-application-expander*))))
	 (e1 x e)))

(define (SC-EXPAND-ONCE x) (sc-initial-expander x (lambda (x e) x)))

(define (*SC-IDENTIFIER-EXPANDER* x e)
    (let ((constant (get x 'macro)))
	 (if (pair? constant) (car constant) x)))

(define (*SC-APPLICATION-EXPANDER* x e)
    (if (islist x 1)
	(map (lambda (x) (e x e)) x)
	(expand-error '*SC-APPLICATION-EXPANDER* x)))

(define (INSTALL-SC-EXPANDER keyword function)
    (put keyword 'macro function))

;;; External functions and variables which follow Scheme's conventions are
;;; defined by the following form:
;;;
;;;	(DEFINE-EXTERNAL var module)
;;;
;;;	(DEFINE-EXTERNAL var TOP-LEVEL)
;;;
;;;	(DEFINE-EXTERNAL var TOP-LEVEL module)
;;;
;;;	(DEFINE-EXTERNAL var "module" "name")
;;;
;;;	(DEFINE-EXTERNAL (func args...) module)
;;;
;;;	(DEFINE-EXTERNAL (func args...) "module" "name")

(define (DO-DEFINE-EXTERNAL exp)
    (cond ((and (islist exp 3 3) (symbol? (cadr exp)) (symbol? (caddr exp)))
	   (let* ((var    (cadr exp))
		  (hex    (lchexname var))
		  (module (lchexname (caddr exp))))
		 (if (eq? (caddr exp) 'top-level)
		     (newv var 'use 'top-level 'module 'top-level
			   'vname (string-append (hex28 "" hex) "_v"))
		     (newv var 'use 'global 'module module
		           'vname (string-append (hex28 module hex) "_v")))))
	  ((and (islist exp 4 4) (symbol? (cadr exp))
		(eq? 'top-level (caddr exp)) (symbol? (cadddr exp)))
	   (let* ((var    (cadr exp))
		  (hex    (lchexname var))
		  (module (lchexname (cadddr exp))))
		 (newv var 'use 'top-level 'module top-level
		       'vname (string-append (hex28 "" hex) "_v"))
		 (if (not (member module with-modules))
		     (set! with-modules (append with-modules (list module))))))
	  ((and (islist exp 4 4) (symbol? (cadr exp)) (string? (caddr exp))
		(string? (cadddr exp)))
	   (let* ((var    (cadr exp))
		  (module (caddr exp))
		  (vname  (cadddr exp)))
		 (if (not (equal? module ""))
		     (set! vname (string-append module "_" vname)))
		 (newv var 'use 'global 'module module 'vname vname)))
	  ((and (islist exp 3 3) (pair? (cadr exp)) (symbol? (caadr exp))
		(symbol? (caddr exp)))
	   (let* ((func   (caadr exp))
		  (vars   (cdadr exp))
		  (hex    (lchexname func))
		  (module (lchexname (caddr exp)))
		  (id     ($lambda-id
			      (exp-form `(lambda ,vars) exp-form)))
		  (alpha  '()))
		 (set! alpha (newv func 'use 'global 'module module
				   'vname
				   (string-append (hex28 module hex) "_v")
				   'cname
				   (string-append (hex28 module hex))))
		 (set-id-lambda! alpha id)
		 (set-lambda-generate! id 'procedure)
		 (set-lambda-name! id alpha)))
	  ((and (islist exp 4 4) (pair? (cadr exp)) (symbol? (caadr exp))
		(string? (caddr exp)))
	   (let* ((func   (caadr exp))
		  (vars   (cdadr exp))
		  (module (caddr exp))
		  (cname  (cadddr exp))
		  (id    ($lambda-id
			     (exp-form `(lambda ,vars) exp-form)))
		  (alpha '()))
		 (if (not (equal? module ""))
		     (set! cname (string-append module "_" cname)))
		 (set! alpha (newv func 'use 'global 'module module
				   'cname cname))
		 (set-id-lambda! alpha id)
		 (set-lambda-generate! id 'procedure)
		 (set-lambda-name! id alpha)))
	  (else (expand-error 'define-external exp))))

;;; External variables and functions which follow C's conventions are defined
;;; by the following forms:
;;;
;;;	(DEFINE-C-EXTERNAL var type "name")
;;;
;;;	(DEFINE-C-EXTERNAL (var type ...) type "name")
;;;
;;;	(DEFINE-C-EXTERNAL (var type ... . type) type "name")
;;;
;;; where "type" is one of the following: tscp, pointer, array, void, char,
;;; int, shortint, longint, unsigned, shortunsigned longunsigned, float or
;;; double.  Argument conversion is determined by the type specifications as
;;; follows:
;;;
;;; 	pointer	argument may be a string, procedure, or a number.  The address
;;;		of the first character of the string will be provided.  The
;;;		code address of a procedure will be provided.  The integer
;;;		value of a number will be provided.
;;;
;;;	array	treated as a pointer
;;;
;;;     char    argument is a character.  Its value will be supplied.
;;;
;;;	int	argument is a number.  Its int value will be supplied.
;;;     shortint
;;;	longint
;;;
;;;	unsigned  argument is a number.  Its value will be supplied.
;;;     shortunsigned
;;;     longunsigned
;;;
;;;	float   argument is a number.  Its float value will be supplied.
;;;
;;;	double	argument is a number.  Its double value will be supplied.
;;;
;;;	tscp	argument is any Scheme value which will be passed as is.
;;;
;;;	void	not allowed.
;;;
;;; Result conversion is as follows:
;;;
;;;	pointer	the pointer result (an unsigned value) is returned as a number.
;;;
;;;	array	treated as a pointer.
;;;
;;;     char    the character result is returned as a character.
;;;
;;;	int	the integer result is returned as a number.
;;;     shortint
;;;     longint
;;;
;;;	unsigned  the unsigned result is returned as a number.
;;;     shortunsigned
;;;	longunsigned
;;;
;;;	float	the float result is returned as a number.
;;;
;;;	double	the double result is returned as a number.
;;;
;;;	tscp	the result is returned as is.
;;;
;;;	void	no result is returned.

(define (DO-DEFINE-C-EXTERNAL exp)
    (if (islist exp 4 4)
	(let ((form (cadr exp))
	      (c-type (caddr exp))
	      (cname (cadddr exp))
	      (c-type? (lambda (x)
			       (memq x
				     '(pointer array char int shortint longint
				       unsigned shortunsigned longunsigned
				       float double tscp)))))
	     (cond ((and (symbol? form) (c-type? c-type))
		    (newv form 'use 'global 'module "" 'vname cname
			  'type c-type))
		   ((and (pair? form) (symbol? (car form))
			 (or (c-type? c-type) (eq? c-type 'void)))
		    (let ((id ($lambda-id (exp-form `(lambda ,(cdr form))
					      exp-form)))
			  (alpha (newv (car form) 'use 'global 'module ""
				       'cname cname 'type c-type)))
			 (let loop ((req '()) (vars (cdr form)))
			      (cond ((null? vars)
				     (set-lambda-reqvars! id (reverse req)))
				    ((c-type? vars)
				     (set-lambda-reqvars! id (reverse req))
				     (set-lambda-optvars! id (list vars)))
				    ((and (pair? vars) (c-type? (car vars)))
				     (loop (cons (car vars) req) (cdr vars)))
				    (else (expand-error 'define-c-external
					      exp))))
			 (set-id-lambda! alpha id)
			 (set-lambda-generate! id 'procedure)
			 (set-lambda-name! id alpha)))
		   (else (expand-error 'define-c-external exp))))
	(expand-error 'define-c-external exp)))
	   
;;; Compile time text macros are defined by the form:
;;;
;;;	(DEFINE-MACRO id macro-expander)
;;;
;;; where "id" is the identifier which is to be expanded, and "macro-expander"
;;; is an expression which is evaluated by the compiler and returns the 
;;; function which does the macro expansion.  This function must be a function
;;; of two arguments, where the first is the expression containing the
;;; identifier, and the second is the function to use to recursively expand
;;; the expression.

(define (DO-DEFINE-MACRO exp)
    (if (and (islist exp 3 3) (symbol? (cadr exp)))
	(put (cadr exp) 'macro (eval (caddr exp) '()))
	(expand-error 'define-macro exp)))

;;; Source from additional files is included in the compilation by the
;;; INCLUDE form:
;;;
;;; (INCLUDE file)
;;;
;;; where file is a string which is the file name of the file containing the
;;; additional LISP source.

(define (DO-INCLUDE exp)
    
    (define (TRY-OPEN name)
	    (let ((result (catch-error (lambda () (open-input-file name)))))
		 (if (string? result) #f (car result))))
    
    (let ((file-name (and (islist exp 2 2) (string? (cadr exp)) (cadr exp))))
	 (if file-name
	     (let loop ((dirs sc-include-dirs))
		  (if dirs
		      (let ((port (try-open (string-append (car dirs)
						file-name))))
			   (if port
			       (begin (set! sc-input
					    (cons port (cons sc-splice
							     sc-input)))
				      (set! sc-splice '()))
			       (loop (cdr dirs))))
		      (report-error "Can't open INCLUDE file:" file-name)))
	     (expand-error 'include exp))))

;;; The module name for this compilation is defined by including one (and only
;;; one)  MODULE directive:
;;;
;;; (MODULE module-name
;;;	    [ (MAIN main-function) ]
;;;	    [ (HEAP heap-size)     ]
;;;	    [ (TOP-LEVEL function ... ) ]
;;;	    [ (WITH module-name ...) ] )
;;;
;;; where module-name is a symbol which is the name for the current module and
;;; main-program is an optional symbol which denotes the "main" program.

(define (DO-MODULE exp)
    (if (and (islist exp 2) (symbol? (cadr exp))
	     (not (eq? (cadr exp) 'top-level)))
	(begin	(if (equal? module-name "")
		    (begin (set! module-name (lchexname (cadr exp)))
			   (set! module-name-upcase
				 (symbol->string (cadr exp))))
		    (report-error "MODULE name is already defined as:"
			module-name))
		(for-each do-module-clauses (cddr exp)))
	(expand-error 'module exp)))

(define (DO-MODULE-CLAUSES clause)
    (cond ((and (islist clause 2 2) (eq? (car clause) 'main)
		(not main-program-name) (symbol? (cadr clause)))
	   (if (not sc-interpreter)
	       (set! main-program-name (cadr clause))))
	  ((and (islist clause 2 2) (eq? (car clause) 'heap)
		(integer? (cadr clause)) (positive? (cadr clause)))
	   (set! heap-size (cadr clause)))
	  ((and (islist clause 1) (eq? (car clause) 'top-level)
		(eq? top-level-symbols #t))
	   (set! top-level-symbols (cdr clause)))
	  ((and (islist clause 2) (eq? (car clause) 'with)
		(not with-modules))
	   (set! with-modules (map lchexname (cdr clause))))
	  (else (report-error "Illegal or duplicate MODULE clause"))))

;;; Constants may be defined by the form:
;;;
;;; (DEFINE-CONSTANT symbol value)

(define (DO-DEFINE-CONSTANT exp)
    (if (and (islist exp 3 3) (symbol? (cadr exp)))
	(begin (install-sc-expander (cadr exp) (list (eval (caddr exp) '())))
	       (eval exp))
	(expand-error 'define-constant exp)))
