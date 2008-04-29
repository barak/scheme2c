;;; Following the expansion of the program, program optimization via
;;; transformation is done by this module.  Boolean expressions are "short-
;;; circuited, and some applications of lambda expressions are rearranged.  For
;;; more information on these transformations, consult section 3.4 of "ORBIT:
;;; An Optimizing Compiler for Scheme", 1986 ACM Compiler Conference.
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

(module transform)

;;; External and in-line declarations.

(include "plist.sch")
(include "expform.sch")
(include "lambdaexp.sch")
(include "miscexp.sch")

;;; Each form is transformed by calling the TRANSFORM function.  The value
;;; returned is the new form.

(define  TRANSFORM-STACK '())

(define (TRANSFORM exp)
    (let ((was transform-stack))
	 (set! transform-stack (cons exp transform-stack))
	 (let ((result (transformx exp)))
	      (set! transform-stack was)
	      result)))

(define (TRANSFORMX exp)
    (cond (($call? exp)
	   (set-$call-func! exp (transform ($call-func exp)))
	   (set-$call-argl! exp (map transform ($call-argl exp)))
	   (if ($lambda? ($call-func exp)) (transform-call-lambda exp) exp))
	  (($lambda? exp)
	   (let ((old-current-lambda-id current-lambda-id))
		(set! current-lambda-id ($lambda-id exp))
		(set-$lambda-body! exp (map transform ($lambda-body exp)))
		(set! current-lambda-id old-current-lambda-id)
		exp))
	  (($if? exp)
	   (or (transform-if1 exp)
	       (begin (set-$if-test! exp (transform ($if-test exp)))
		      (set-$if-true! exp (transform ($if-true exp)))
		      (set-$if-false! exp (transform ($if-false exp)))
		      (transform-if2 exp))))
	  (($define? exp)
	   (set-$define-exp! exp (transform ($define-exp exp)))
	   exp)
	  (($set? exp)
	   (set-$set-exp! exp (transform ($set-exp exp)))
	   exp)
	  (else exp)))

;;; When a $IF is detected, the following function checks for possible
;;; transformations on the whole expression.  If they can be made, then the
;;; resulting expression will be transformed and then returned.  If no such
;;; transformations can be done, then #F will be returned.

(define (TRANSFORM-IF1 exp)
    (let ((test ($if-test exp))
	  (ift  ($if-true exp))
	  (iff  ($if-false exp)))
	 (set! transform-stack (cons (list 'if1 exp) transform-stack)) ;;; ***
	 (cond ((and ($call? test) ($lambda? ($call-func test)))
		; (if (let ((...))...a) b c) => (let ((...))...(if a b c))
		(log-before exp)
		(let ((last (last-pair ($lambda-body ($call-func test)))))
		     (set-car! last `($if ,(car last) ,ift ,iff))
		     (transform (log-after test))))
	       ((and ($if? test) (eq? ($if-true test) true-alpha)
		     (eq? ($if-false test) false-alpha))
		; (if (if a #t #f) b c) => (if a b c)
		(log-before exp)
		(set-$if-test! exp ($if-test test))
		(transform (log-after exp)))
	       ((and ($if? test) (eq? ($if-true test) false-alpha)
		     (eq? ($if-false test) true-alpha))
		; (if (if a #f #t) b c) => (if a c b)
		(log-before exp)
		(set-$if-test! exp ($if-test test))
		(set-$if-true! exp iff)
		(set-$if-false! exp ift)
		(transform (log-after exp)))
	       (($if? test)
		; (if (if a b c) d e) => (if a (if b d e) (if c d e))
		;                     => ((lambda (x y) (if a
		;					    (if b (x) (y))
		;					    (if c (x) (y))))
		;			  (lambda () d) (lambda () e))
		(log-before exp)
		(let* ((lxy   (lambda-exp '(lambda (x y)) '()))
		       (lxyid ($lambda-id lxy))
		       (x     (car (lambda-reqvars lxyid)))
		       (y     (cadr (lambda-reqvars lxyid)))
		       (ld    (lambda-exp '(lambda ()) '()))
		       (le    (lambda-exp '(lambda ()) '())))
		      (set-$lambda-body! ld (list ift))
		      (set-$lambda-body! le (list iff))
                      (set-$lambda-body! lxy
                          `(($if ,($if-test test)
                                ($if ,($if-true test)
                                     ($call () ,x)
				     ($call () ,y))
                                ($if ,($if-false test)
                                     ($call () ,x)
                                     ($call () ,y)))))
		      (name-a-lambda x ld)
		      (name-a-lambda y le)
		      (transform (log-after `($call () ,lxy ,ld ,le)))))
	       ((and (symbol? test) (eq? (id-type test) 'boolean)
		     (eq? ift test))
		; (if a a b) => (if a #t y) when a is a boolean result
		(log-before exp)
		(set-$if-true! exp true-alpha)
		(transform (log-after exp)))
	       ((and (symbol? test) (eq? (id-type test) 'boolean)
		     (eq? iff test))
		; (if a b a) => (if a b #f) when a is a boolean result
		(log-before exp)
		(set-$if-false! exp false-alpha)
		(transform (log-after exp)))
	       ((and (eq? ($lap-type ($call-func test)) 'boolean)
		     (or (and (eq? ift true-alpha) (eq? iff false-alpha))
			 (and (eq? ift false-alpha) (eq? iff true-alpha))))
		; (if (lap-boolean) #t #f) => (lap-boolean)
		; (if (lap-boolean) #f #t) => (not (lap-boolean))
		(log-before exp)
		(if (eq? iff true-alpha)
		    (let ((lap ($call-func test)))
		         (set-$lap-body! lap
			     `((boolean (not ,(cadar ($lap-body lap))))))))
		(transform (log-after test)))
	       (else #f))))

;;; Simplifications on a transformed if form are done by the following
;;; function.  The result will be the final transformed expression.

(define (TRANSFORM-IF2 exp)
    (let ((test ($if-test exp))
	  (ift  ($if-true exp))
	  (iff  ($if-false exp)))
	 (set! transform-stack (cons (list 'if2 exp) transform-stack)) ;;; ***
	 (cond ((not ($if? exp)) exp)
	       ((and (symbol? test) (eq? (id-use test) 'constant))
		; test is a constant, so evaluate at compile time.
		(log-before exp)
		(transform-if2 (log-after (if (id-value test) ift iff))))
	       ((or (eq? test true-alpha) (eq? test false-alpha))
		; test is "#t" or "#f" whose values are known.
		(log-before exp)
		(transform-if2 (log-after (if (eq? test true-alpha) ift iff))))
	       ((and (symbol? test) ($if? ift) (eq? ($if-test ift) test))
		; (if a (if a b c) d) => (if a b d)
		(log-before exp)
		(set-$if-true! exp ($if-true ift))
		(transform-if2 (log-after exp)))
	       ((and (symbol? test) ($if? iff) (eq? ($if-test iff) test))
		; (if a b (if a c d)) => (if a b d)
		(log-before exp)
		(set-$if-false! exp ($if-false iff))
		(transform-if2 (log-after exp)))
	       (else exp))))

;;; When a transformation is going to be made, the following routine is called
;;; to log the result.

(define (LOG-BEFORE exp)
    (if (log? 'transform)
	(begin (pretty-print-$tree exp sc-icode)
	       (format sc-icode " => ~%"))))

;;; Once a transformation has been made, the result is logged by the following
;;; function.

(define (LOG-AFTER exp)
    (if (log? 'transform)
	(begin (pretty-print-$tree exp sc-icode)
	       (format sc-icode "~%~%")))
    exp)

;;; When a LAMBDA expression is apply'ed, some of the lambda bindings may be
;;; eliminated by using the value being bound instead.

(define (TRANSFORM-CALL-LAMBDA exp)
    (let* ((lid     ($lambda-id ($call-func exp)))
	   (alist   (transform-lambda-bind (lambda-reqvars lid)
			($call-argl exp)))
	   (vars    (map (lambda (var-value) (car var-value)) alist))
	   (values  (map (lambda (var-value) (cadr var-value)) alist))
	   (body    ($lambda-body ($call-func exp)))
	   (redo    #f)
	   (newvars '())
	   (newargl '())
	   (sublis  '()))
	  (set! transform-stack (cons (list 'tcl exp) transform-stack)) ;;; ***
          (for-each (lambda (var-val)
                            (let ((id (car var-val)))
                                 (set-id-refs! id 0)
                                 (set-id-calls! id 0)))
              alist)
	  (if vars 
	      (for-each (lambda (exp) (count-lambda-var-uses vars exp)) body))
	  (for-each
	      (lambda (var)
		      (let* ((value (car values))
			     (old-new (transform-lambda-var var value body)))
			   (cond ((eq? old-new 'no-value)
				  (set! value old-new))
				 ((eq? old-new 'no-change))
				 ((eq? old-new 'boolean)
				  (set! redo #t))
				 ((eq? (car old-new) 'both)
				  (set! value (cadr old-new))
				  (set! sublis (cons (cddr old-new) sublis)))
				 (else
				  (set! sublis (cons old-new sublis))
				  (set! var '())))
			   (if var
			       (begin (set! newvars (cons var newvars))
				      (set! newargl (cons value newargl))))
			   (set! values (cdr values))))
	      vars)
	  (if sublis (set! body (transform-var-to-value lid body sublis)))
	  (cond ((and (null? newvars) (= (length body) 1))
		 (if (log? 'transform)
		     (format sc-icode "Lambda ~A collapsed~%" lid))
		 (set-lambda-generate! lid 'inline)
		 (set! exp (car body)))
		(else
		 (set-lambda-reqvars! lid newvars)
		 (set-$call-argl! exp newargl)
		 exp))
	  (if (or sublis redo) (transform exp) exp)))

;;; Build an a-list of the lambda variables and their initial bindings.
	       
(define (TRANSFORM-LAMBDA-BIND vars values)
    (cond ((null? vars)
	   '())
	  ((pair? vars)
	   (cons (list (car vars) (car values))
		 (transform-lambda-bind (cdr vars) (cdr values))))))

;;; Count the variable uses for a list of variables in an expression.  The
;;; counts maintained are ID-REFS and ID-CALLS. 

(define (COUNT-LAMBDA-VAR-USES vars exp)
    (cond ((symbol? exp)
	   (if (memq exp vars) (set-id-refs! exp (+ 1 (id-refs exp)))))
	  (($define? exp)
	   (count-lambda-var-uses vars ($define-exp exp)))
	  (($call? exp)
	   (let ((func ($call-func exp)))
		(for-each (lambda (a) (count-lambda-var-uses vars a))
		    ($call-argl exp))
		(cond (($lambda? func)
		       (count-lambda-var-uses vars ($call-func exp)))
		      ((memq func vars)
		       (set-id-calls! func (+ 1 (id-calls func)))))))
	  (($set? exp)
	   (count-lambda-var-uses vars ($set-exp exp)))
	  (($lambda? exp)
	   (for-each (lambda (e) (count-lambda-var-uses vars e))
	       ($lambda-body exp)))
	  (($if? exp)
	   (count-lambda-var-uses vars ($if-test exp))
	   (count-lambda-var-uses vars ($if-true exp))
	   (count-lambda-var-uses vars ($if-false exp)))))

;;; Once the usage counts have been obtained, the following function is called
;;; to decide whether substitution is in order.  If so, then it will return
;;; either "no-value" which indicates that the value is not needed, or a list
;;; of old and new values to be substitued for in the expression, or
;;; "no-change" indicating that nothing is to be changed.

(define (TRANSFORM-LAMBDA-VAR var value exp)
    (let ((refs	  (id-refs var))
	  (calls  (id-calls var))
	  (id     ($lambda-id value))
	  (body	  ($lambda-body value))
	  (memvarlist (lambda (var symbols)
			  (do ((symbols symbols (cdr symbols))
			       (found #f (or found (eq? (car symbols)
							 var))))
			      ((or (not symbols)
				   (not (symbol? (car symbols))))
			       (and found (null? symbols)))))))
	 (cond ((or (id-set! var) (id-display var))
		; If the lambda var is set or heap allocated, then it is best
		; left alone.
		'no-change)
	       ((and ($lambda? value) (= calls 1) (zero? refs))
		; A lambda expression which is called once should be moved to
		; the point of call.
		(log-transform var " replaced by lambda " id)
		(list var value))
	       ((and body (zero? refs) (= 1 (length body)) (symbol? (car body))
		     (not (id-display (car body)))
		     (null? (lambda-reqvars id)) (null? (lambda-optvars id)))
		; A function with no arguments which returns the value of a
		; symbol which is not heap allocated can have all calls to it
		; replaced with the actual symbol.
		(log-transform `($call () ,var) " replaced by " (car body))
		(list `($call () ,var) (car body)))
	       ((and (symbol? value)
		     (or (eq? value true-alpha)
			 (eq? value false-alpha)
			 (eq? (id-use value) 'constant)
			 (and (eq? (id-use value) 'lexical)
			      (not (id-display value))
			      (not (id-set! value)))))
		; A constant or a lexical variable which is not set and not
		; closed may be substituted for.
		(log-transform var " replaced by " value)
		(list var value))
	       ((and ($if? (car exp)) (= refs 1) (zero? calls)
		     (or (eq? ($if-test (car exp)) var)
			 (memvarlist var ($call-argl ($if-test (car exp))))))
		; An expression which is then used as the test in an initial IF
		; can be substituted for.  The test is either the variable, or
		; a variable to a function which is the test which only has
		; variables as arguments.
		(log-transform var " replaced by " value)
		(list var value))
	       ((and ($call? (car exp)) (= refs 1) (zero? calls)
		     (memvarlist var ($call-argl (car exp))))
		; An expression which is used once as an argument to an inital
		; function may be substituted for if the arguments to the
		; function are all symbols.
		(log-transform var " replaced by " value)
		(list var value))
	       ((and ($call? value) ($lap? ($call-func value))
		     (not (id-type var)) 
		     (pair? (car (last-pair ($lap-body ($call-func value)))))
		     (eq? (caar (last-pair ($lap-body ($call-func value))))
			  'boolean))
		; A variable which is bound to a logical boolean can have
		; it's type noted.
		(set-id-type! var 'boolean)
		'boolean)
	       (else 'no-change))))

;;; Transformations done when lambda expressions are apply'ed are logged by the
;;; following function.

(define (LOG-TRANSFORM . exp)
    (if (log?  'transform)
        (begin (for-each (lambda (e) (format sc-icode "~A" e)) exp)
	       (newline sc-icode))))

;;; Once the transformations have been figured out, the actual substitutions
;;; can be made.  Note the one special case where a lambda expression replaces
;;; its variable in a call.  This will require that TRANSFORM-CALL-LAMBDA be
;;; recursively invoked as more transformations may be possible.

(define (TRANSFORM-VAR-TO-VALUE lid exp sublis)
    (let ((old-new (assoc exp sublis)))
	 (cond (old-new
		       (transform-var-to-value lid (cadr old-new) sublis))
	       (($call? exp)
		(let* ((old ($call-func exp))
		       (new (transform-var-to-value lid old sublis)))
		      (set-$call-func! exp new)
		      (set-$call-argl! exp
			  (transform-var-to-value lid ($call-argl exp) sublis))
		      (if (or (eq? old new) (not ($lambda? new)))
			  exp
			  (transform-call-lambda exp))))
	       ((and (pair? exp) (not ($lap? exp)))
		(if ($lambda? exp) (set! lid ($lambda-id exp)))
		(set-car! exp (transform-var-to-value lid (car exp) sublis))
		(set-cdr! exp (transform-var-to-value lid (cdr exp) sublis))
		exp)
	       (else exp))))
