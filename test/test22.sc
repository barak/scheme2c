;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;

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

(module test22)

(define-external (chk test-number result expected) testchk)

(define (FSM1 l)
    (letrec ((s1 (lambda (l c)
			 (set! c (+ c 1))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 1 c))))))
	     (s2 (lambda (l c)
			 (set! c (+ c 1))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 2 c))))))
	     (s3 (lambda (l c)
			 (set! c (+ c 1))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 3 c))))))
	     (s4 (lambda (x) x)))
	    (s1 l 0)))

(define (FSM2 l)
    (letrec ((s1 (lambda (l c)
			 (case (car l)
			       ((a) (s1 (cdr l) (+ c 1)))
			       ((b) (s2 (cdr l) (+ c 1)))
			       ((c) (s3 (cdr l) (+ c 1)))
			       (else (s4 (list 1 (+ c 1)))))))
	     (s2 (lambda (l c)
			 (case (car l)
			       ((a) (s1 (cdr l) (+ c 1)))
			       ((b) (s2 (cdr l) (+ c 1)))
			       ((c) (s3 (cdr l) (+ c 1)))
			       (else (s4 (list 2 (+ c 1)))))))
	     (s3 (lambda (l c)
			 (case (car l)
			       ((a) (s1 (cdr l) (+ c 1)))
			       ((b) (s2 (cdr l) (+ c 1)))
			       ((c) (s3 (cdr l) (+ c 1)))
			       (else (s4 (list 3 (+ c 1)))))))
	     (s4 (lambda (x) x)))
	    (s1 l 0)))

(define (FSM3 l)
    (letrec ((s1 (lambda (l)
			 (case (car l)
			       ((a) (s1 (cdr l)))
			       ((b) (s2 (cdr l)))
			       ((c) (s3 (cdr l)))
			       (else #f))))
	     (s2 (lambda (l)
			 (case (car l)
			       ((a) (s1 (cdr l)))
			       ((b) (s2 (cdr l)))
			       ((c) (s3 (cdr l)))
			       (else #f))))
	     (s3 (lambda (l)
			 (case (car l)
			       ((a) (s1 (cdr l)))
			       ((b) (s2 (cdr l)))
			       ((c) (s3 (cdr l)))
			       (else #t)))))
	    (s1 l)))

(define (FSM4 l)
    (letrec ((save '())
    	     (s1 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () l))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 1 c))))))
	     (s2 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () l))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 2 c))))))
	     (s3 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () l))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 3 c))))))
	     (s4 (lambda (x) x)))
	    (s1 l 0)))

(define (FSM5 l)
    (letrec ((save '())
    	     (s1 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () c))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 1 c))))))
	     (s2 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () c))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 2 c))))))
	     (s3 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () c))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 3 c))))))
	     (s4 (lambda (x) x)))
	    (s1 l 0)))
	   
(define (TEST22)
    
    (chk 1 (fsm1 '(d)) '(1 1))
    (chk 2 (fsm1 '(a b c d)) '(3 4))
    
    (chk 10 (fsm2 '(d)) '(1 1))
    (chk 11 (fsm2 '(a b c d)) '(3 4))
    
    (chk 20 (fsm3 '(d)) #f)
    (chk 21 (fsm3 '(c d)) #t)
    
    (chk 30
	 (let l1 ((l '((1 2 3) (4 5 6 7) (8 9))) (m '()))
	      (if l
		  (let l2 ((sl (car (apply (lambda () l) '()))) (c 0))
		       (if sl
			   (l2 (cdr sl) (+ (apply (lambda () c) '()) 1))
			   (l1 (cdr l) (append m (list c)))))
		  m))
	 '(3 4 2))
    
    (chk 40 (fsm4 '(d)) '(1 1))
    (chk 41 (fsm4 '(a b c d)) '(3 4))
    
    (chk 50 (fsm5 '(d)) '(1 1))
    (chk 51 (fsm5 '(a b c d)) '(3 4))

)
