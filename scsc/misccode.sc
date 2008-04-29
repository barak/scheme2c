;;; Code generator for symbols and $set, $if, and $define expressions.
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

(module misccode)

;;; External and in-line declarations.

(include "plist.sch")
(include "expform.sch")
(include "lambdaexp.sch")
(include "miscexp.sch")
(include "gencode.sch")
(include "lap.sch")

;;; identifier
;;;
;;; Load it's value into the location.

(define (SYMBOL-GENC loc exp bindings)
    (let ((var (lookup exp bindings))
	  (c-type (and (eq? (id-use exp) 'global) (id-type exp))))
	 (cond ((eq? loc 'no-value)
		#f)
	       (c-type
		(emit-lap
		    `(SET ,(vname loc)
			  ,(case (if (id-lambda exp) 'pointer c-type)
				 ((char) `(CHAR_TSCP ,var))
				 ((int shortint longint)
				  `(S2CINT_TSCP (_S2CINT ,var)))
				 ((unsigned shortunsigned longunsigned)
				  `(S2CUINT_TSCP (_S2CUINT ,var)))
				 ((pointer array) `(POINTER_TSCP ,var))
				 ((tscp) var)
				 ((float) `(DOUBLE_TSCP (CDOUBLE ,var)))
				 ((double) `(DOUBLE_TSCP ,var))
				 (else (report-error
					   "Cannot load value of"
					   (id-printname exp)))))))
	       (else (emit-lap `(SET ,(vname loc) ,var))))))

;;; ($define var exp)
;;;
;;; Emit code to declare the global variable, evaluate its initial value,
;;; and inform the run-time system of its existence.
		    
(define ($DEFINE-GENC loc exp bindings)
    (let* ((name  ($define-id exp))
	   (body  ($define-exp exp))
	   (temp  (make-c-global))
	   (string-name (symbol->string (id-printname name))))
	  (set! current-define-name (id-printname name))
	  (emit-global-lap `(DEFTSCP ,(vname name)))
	  (if (not (or (eq? top-level-symbols #t)
		       (memq (id-printname name) top-level-symbols)))
	      (set! string-name
		    (string-append module-name-upcase "_" string-name)))
	  (emit-global-lap `(DEFCSTRING ,(vname temp) (CSTRING ,string-name)))
	  (set! current-define-string temp)
	  (exp-genc 'tos body bindings)
	  (set-id-external! name #t)
	  (emit-lap `(INITIALIZEVAR ,(vname temp) (ADR ,(vname name)) tos))
	  (set! current-define-name 'top-level)))

;;; ($set var exp)
;;;
;;; Emit code for expression and store it in var.  Note the special case
;;; for procedures.

(define ($SET-GENC loc exp bindings)
    (let* ((var ($set-id exp))
	   (set (if (var-in-stack var)
		    'SETGEN
		    (if (var-is-top-level var)
			'SETGENTL
			'SET)))
	   (c-type (and (eq? (id-use var) 'global) (id-type var))))
	  (cond ((and (id-lambda var)
		      (not (eq? (lambda-generate (id-lambda var))
				'closed-procedure)))
		 (exp-genc 'no-value ($set-exp exp) bindings))
		(c-type
		 (let ((temp (if (eq? loc 'no-value) 'tos (use-lap-temp))))
		      (exp-genc temp ($set-exp exp) bindings)
		      (emit-lap `(SET tos ,(vname temp)))
		      (emit-lap
			  `(SET ,(lookup var bindings)
			    ,(case c-type
				   ((char) '(TSCP_CHAR tos))
				   ((int) '(INT (TSCP_S2CINT tos)))
				   ((tscp) 'tos)
				   ((shortint) '(SHORTINT (TSCP_S2CINT tos)))
				   ((longint) '(LONGINT (TSCP_S2CINT tos)))
				   ((unsigned)
				    '(UNSIGNED (TSCP_S2CUINT tos)))
				   ((shortunsigned)
				    '(SHORTUNSIGNED (TSCP_S2CUINT tos)))
				   ((longunsigned)
				    '(LONGUNSIGNED (TSCP_S2CUINT tos)))
				   ((pointer array) '(TSCP_POINTER tos))
				   ((float) '(CFLOAT (TSCP_DOUBLE tos)))
				   ((double) '(TSCP_DOUBLE tos)))))
		      (unless (eq? temp 'tos)
			      (emit-lap `(SET ,(vname loc) ,(vname temp)))
			      (drop-lap-temp temp))))
		(else (let ((temp (if (eq? set 'setgen) (use-lap-temp) 'tos)))
			   (exp-genc temp ($set-exp exp) bindings)
			   (if (eq? loc 'no-value)
			       (emit-lap `(,SET ,(lookup var bindings) ,temp))
			       (emit-lap
				   `(SET ,(vname loc)
					 (,SET ,(lookup var bindings) ,temp))))
			   (unless (eq? temp 'tos) (drop-lap-temp temp)))))))

;;; ($if test true false)
;;;
;;; Emit code for $if expression.  If the test condition has been performed
;;; before, then optimization can be done by taking the one leg that is
;;; known to be true and ignoring the other one that is known to be false.

(define ($IF-GENC loc exp bindings)
  (let ((test ($if-test exp))
	(true ($if-true exp))
	(false ($if-false exp)))
    (if (and ($call? test)
	     ($lap? ($call-func test))
	     (not (args-set!? ($call-argl test))))
	(begin 
	  (cond (($call-tested-true-before? test)
		 (exp-genc loc true bindings))
		(($call-tested-false-before? test)
		 (exp-genc loc false bindings))
		(else ($if-genc-no-optimize loc exp bindings test))))
	($if-genc-no-optimize loc exp bindings #f))))

;;; Generate code for evaluating the test and then branching appropriately.
;;; The branch condition will be reversed when the true leg is returning a
;;; variable value.

(define ($IF-GENC-NO-OPTIMIZE loc exp bindings add-test)
    (let* ((l1 (make-label))
	   (l2 (make-label))
	   (test ($if-test exp))
	   (true ($if-true exp))
	   (false ($if-false exp))
	   (t/f-reversed #f)
	   (tleg-condition '(()))
	   (fleg-condition '(()))
	   (save-condition global-condition-info)
	   (temp (if (eq? loc 'tos) (use-lap-temp) loc)))
	  (exp-genc 'tos test bindings)
	  (cond ((and (symbol? true) (memq loc '(return no-value)))
		 (emit-lap `(IF (TRUE tos) ,l1))
		 (set! false true)
		 (set! true ($if-false exp))
		 (set! t/f-reversed #t))
		(else (emit-lap `(IF (FALSE tos) ,l1))))
	  (if add-test
	      (add-condition add-test (not t/f-reversed)))
	  (exp-genc temp true bindings)
	  (set! tleg-condition global-condition-info)
	  (set! global-condition-info save-condition)
	  (if add-test
	      (add-condition add-test t/f-reversed))
	  (if (or (not (eq? loc 'no-value)) (not (symbol? false)))
	      (begin (if (not (eq? loc 'return)) (emit-lap `(GOTO ,l2)))
		     (emit-lap `(LABEL ,l1))
		     (exp-genc temp false bindings)
		     (if (not (eq? loc 'return)) (emit-lap `(LABEL ,l2))))
	      (emit-lap `(LABEL ,l1)))
	  (when (eq? loc 'tos)
		(emit-lap `(SET tos ,(vname temp)))
		(drop-lap-temp temp))
	  (set! fleg-condition global-condition-info)
	  (set! global-condition-info save-condition)
	  (cond ((if-leg-has-no-return? true)
		 (combine-with-global-condition-info fleg-condition))
		((if-leg-has-no-return? false)
		 (combine-with-global-condition-info tleg-condition))
		(else
		 (combine-with-global-condition-info 
		  (intersect2 tleg-condition fleg-condition))))))

;; The following are operations that pertain to code optimization by 
;; elimination of unnecessary $if test conditions that have been tested 
;; for already.

(define (CONDITION-INFO-TRUE-LIST x) (car x))

(define (CONDITION-INFO-FALSE-LIST x) (cdr x))

(define (STORE-CONDITION-INFO id)
  (put id 'condition-info global-condition-info))

(define (RETRIEVE-CONDITION-INFO id)
  (let ((stored-info (get id 'condition-info)))
       (if stored-info
	   stored-info
           empty-condition-info)))

(define (UPDATE-CONDITION-INFO id)
  (let ((stored-info (get id 'condition-info)))
    (if (null? stored-info)
	(put id 'condition-info global-condition-info)
	(put id 'condition-info 
	     (intersect2 stored-info global-condition-info)))))

(define (COMBINE-WITH-GLOBAL-CONDITION-INFO  info . info-list)
  (if (null? info-list)
      (set! global-condition-info (combine2 info global-condition-info))
      (combine-with-global-condition-info (combine2 info (car info-list)) 
					  (cdr info-list))))

(define (COMBINE2 info1 info2)
  (cons (list-combination (condition-info-true-list info1)
			  (condition-info-true-list info2))
	(list-combination (condition-info-false-list info1)
			  (condition-info-false-list info2))))

(define (LIST-COMBINATION lst1 lst2)
  (if (null? lst2)
      lst1
      (list-combination (append `(,(car lst2))
				(remove (car lst2) lst1))
			(cdr lst2))))

(define (INTERSECT-WITH-GLOBAL-CONDITION-INFO  info . info-list)
  (if (null? info-list)
      (set! global-condition-info (intersect2 info global-condition-info))
      (intersect-with-global-condition-info (intersect2 info (car info-list))
					    (cdr info-list))))

(define (INTERSECT2 info1 info2)
  (cons (list-intersection (condition-info-true-list info1)
			   (condition-info-true-list info2))
	(list-intersection (condition-info-false-list info1)
			   (condition-info-false-list info2))))

(define (LIST-INTERSECTION lst1 lst2)
  (if (null? lst1)
      '()
      (if (member (car lst1) lst2)
	  (append `(,(car lst1)) (list-intersection (cdr lst1) lst2))
	  (list-intersection (cdr lst1) lst2))))

(define (STORED-CONDITIONS-INTERSECTION lid-list)
  (define (iter info info-list)
    (if (null? info-list)
	info
	(iter (intersect2 info (car info-list)) (cdr info-list))))
  (let ((stored-info-list (remove '() 
			   (map (lambda (lid) (retrieve-condition-info lid))
				lid-list))))
    (if (null? stored-info-list)
	empty-condition-info
	(iter (car stored-info-list) (cdr stored-info-list)))))

(define ($CALL-TESTED-TRUE-BEFORE? test)
  (member test (condition-info-true-list global-condition-info)))

(define ($CALL-TESTED-FALSE-BEFORE? test)
  (member test (condition-info-false-list global-condition-info)))

(define (ADD-CONDITION test t/f-flag)
  (if t/f-flag 
      ; add true condition
      (set! global-condition-info
	    (cons (append `(,test) 
			  (remove test 
				  (condition-info-true-list 
				   global-condition-info)))
	           (condition-info-false-list global-condition-info)))
      ; otherwise add false condition
      (set! global-condition-info
	    (cons  (condition-info-true-list global-condition-info)
                   (append `(,test) 
			  (remove test 
				  (condition-info-false-list 
				   global-condition-info)))))))

(define (ARGS-SET!? argl)
  (if (null? argl)
      #f
      (let ((first-arg (car argl))
	    (rest-args (cdr argl)))
	   (if (symbol? first-arg)
	       (or (not (or (eq? (id-use first-arg) 'LEXICAL)
			    (eq? (id-use first-arg) 'CONSTANT)))
		   (id-set! first-arg)
		   (args-set!? rest-args))
	       #t))))

(define (IF-LEG-HAS-NO-RETURN? leg)
  (and ($call? leg) 
       (member ($call-func leg) `(,error-id ,$_car-error-id ,$_cdr-error-id))))
