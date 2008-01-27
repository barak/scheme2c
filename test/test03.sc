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

(module test03)

(define-external (chk testnum result expected) testchk)

(define (test03)

    ;;; 6.3  Pairs and Lists
    
    (chk 101 (pair? '()) #f)
    (chk 102 (pair? '#()) #f)
    (chk 103 (pair? '(1 2)) #t)
    (chk 104 (pair? '#(1 2)) #f)
    (chk 105 (pair? 'x) #f)
    (chk 106 (pair? "x") #f)
    (chk 107 (pair? '#\a) #f)
    (chk 108 (pair? (lambda (x) x)) #f)
    (chk 109 (pair? #f) #f)
    (chk 110 (pair? #t) #f)
    (chk 111 (pair? -1) #f)
    (chk 112 (pair? 0) #f)
    (chk 113 (pair? 1) #f)
    (chk 114 (pair? -1.5) #f)
    (chk 115 (pair? 0.0) #f)
    (chk 116 (pair? 1.5) #f)

    (chk 121 (null? '()) #t)
    (chk 122 (null? '#()) #f)
    (chk 123 (null? '(1 2)) #f)
    (chk 124 (null? '#(1 2)) #f)
    (chk 125 (null? 'x) #f)
    (chk 126 (null? "x") #f)
    (chk 127 (null? '#\a) #f)
    (chk 128 (null? (lambda (x) x)) #f)
    (chk 129 (null? #f) #f)
    (chk 130 (null? #t) #f)
    (chk 131 (null? -1) #f)
    (chk 132 (null? 0) #f)
    (chk 133 (null? 1) #f)
    (chk 134 (null? -1.5) #f)
    (chk 135 (null? 0.0) #f)
    (chk 136 (null? 1.5) #f)

    (chk 201 (list? '()) #t)
    (chk 202 (list? '#()) #f)
    (chk 203 (list? '(1 2)) #t)
    (chk 204 (list? '#(1 2)) #f)
    (chk 205 (list? 'x) #f)
    (chk 206 (list? "x") #f)
    (chk 207 (list? '#\a) #f)
    (chk 208 (list? (lambda (x) x)) #f)
    (chk 209 (list? #f) #f)
    (chk 210 (list? #t) #f)
    (chk 211 (list? -1) #f)
    (chk 212 (list? 0) #f)
    (chk 213 (list? 1) #f)
    (chk 214 (list? -1.5) #f)
    (chk 215 (list? 0.0) #f)
    (chk 216 (list? 1.5) #f)
    (chk 217 (list? '(a . b)) #f)
    (chk 218 (list? (let ((x (list 'a 'b 'c))) (set-cdr! x x) x)) #f)

    (chk 401 (list) '())
    (chk 402 (list 1) '(1))
    (chk 403 (list 1 2 3 4 5) '(1 2 3 4 5))

    (chk 411 (cons* 1) 1)
    (chk 412 (cons* 1 2) '(1 . 2))
    (chk 413 (cons* 1 2 3) '(1 2 . 3))
    (chk 414 (cons* 1 2 3 4) '(1 2 3 . 4))
    (chk 415 (cons* 1 2 3 4 '()) '(1 2 3 4))

    (chk 421 (car (cons 'car 'cdr)) 'car)
    (chk 422 (cdr (cons 'car 'cdr)) 'cdr)

    (let ((cx (cons (cons 'caar 'cdar)  (cons 'cadr 'cddr))))
	 (chk 431 (caar cx) 'caar)
	 (chk 432 (cadr cx) 'cadr)
	 (chk 433 (cdar cx) 'cdar)
	 (chk 434 (cddr cx) 'cddr))

    (let ((cx (cons (cons (cons 'caaar 'cdaar) (cons 'cadar 'cddar))
	       (cons (cons 'caadr 'cdadr) (cons 'caddr 'cdddr)))))
	 (chk 441 (caaar cx) 'caaar)
	 (chk 442 (caadr cx) 'caadr)
	 (chk 443 (cadar cx) 'cadar)
	 (chk 444 (caddr cx) 'caddr)
	 (chk 445 (cdaar cx) 'cdaar)
	 (chk 446 (cdadr cx) 'cdadr)
	 (chk 447 (cddar cx) 'cddar)
	 (chk 448 (cdddr cx) 'cdddr))

    (let ((cx (cons (cons (cons (cons 'caaaar 'cdaaar) (cons 'cadaar 'cddaar))
	             (cons (cons 'caadar 'cdadar) (cons 'caddar 'cdddar)))
	       (cons (cons (cons 'caaadr 'cdaadr) (cons 'cadadr 'cddadr))
	             (cons (cons 'caaddr 'cdaddr) (cons 'cadddr 'cddddr))))))
	 (chk 451 (caaaar cx) 'caaaar)
	 (chk 452 (caaadr cx) 'caaadr)
	 (chk 453 (caadar cx) 'caadar)
	 (chk 454 (caaddr cx) 'caaddr)
	 (chk 455 (cadaar cx) 'cadaar)
	 (chk 456 (cadadr cx) 'cadadr)
	 (chk 457 (caddar cx) 'caddar)
	 (chk 458 (cadddr cx) 'cadddr)

	 (chk 461 (cdaaar cx) 'cdaaar)
	 (chk 462 (cdaadr cx) 'cdaadr)
	 (chk 463 (cdadar cx) 'cdadar)
	 (chk 464 (cdaddr cx) 'cdaddr)
	 (chk 465 (cddaar cx) 'cddaar)
	 (chk 466 (cddadr cx) 'cddadr)
	 (chk 467 (cdddar cx) 'cdddar)
	 (chk 468 (cddddr cx) 'cddddr))

    (let ((cx (cons 'car 'cdr)))
	 (chk 471 (set-car! cx 1) 1)
	 (chk 472 cx '(1 . cdr))
	 (chk 473 (set-cdr! cx 2) 2)
	 (chk 474 cx '(1 . 2)))

    (chk 481 (length '()) 0)
    (chk 482 (length '(1)) 1)
    (chk 483 (length '(1 2 3)) 3)

    (chk 491 (append '() '(1 2 3)) '(1 2 3))
    (chk 492 (append '(1 2 3) '()) '(1 2 3))
    (chk 493 (append '(1) '(2 3)) '(1 2 3))
    (chk 494 (append '(1 2 3) '(4 5 6)) '(1 2 3 4 5 6))
    (chk 495 (append) '())
    (chk 496 (append '(1 2)) '(1 2))
    (chk 497 (append '(1 2) '(3 4) '(5 6)) '(1 2 3 4 5 6))
    (chk 498 (append '(1 2) '(3 4) '(5 6) '(7 8) '(9 10))
	 '(1 2 3 4 5 6 7 8 9 10))

    (chk 501 (reverse '()) '())
    (chk 502 (reverse '(1)) '(1))
    (chk 503 (reverse '(1 2 3)) '(3 2 1))

    (chk 511 (list-tail '(0 1 2 3) 0) '(0 1 2 3))
    (chk 512 (list-tail '(0 1 2 3) 1) '(1 2 3))
    (chk 513 (list-tail '(0 1 2 3) 2) '(2 3))

    (chk 521 (list-ref '(0 1 2 3) 0) 0)
    (chk 522 (list-ref '(0 1 2 3) 1) 1)
    (chk 523 (list-ref '(0 1 2 3) 2) 2)

    (chk 531 (last-pair (cons 'a 'b)) '(a . b))
    (chk 532 (last-pair '(0 1 2 3 4)) '(4))

    (chk 541 (memq 0 '(0 1 2 3 4)) '(0 1 2 3 4))
    (chk 542 (memq 3 '(0 1 2 3 4)) '(3 4))
    (chk 543 (memq 5 '(0 1 2 3 4)) #f)

    (chk 551 (memv 0 '(0 1 2 3 4)) '(0 1 2 3 4))
    (chk 552 (memv 3 '(0 1 2 3 4)) '(3 4))
    (chk 553 (memv 5 '(0 1 2 3 4)) #f)

    (chk 561 (member 0 '(0 1 2 3 4)) '(0 1 2 3 4))
    (chk 562 (member 3 '(0 1 2 3 4)) '(3 4))
    (chk 563 (member 5 '(0 1 2 3 4)) #f)
    (chk 564 (member "zot" '('a 1 #f 'zot "zott" "zot" 'zot)) '("zot" 'zot))

    (chk 571 (assq 0 '((0 zero) (1 one) (2 two))) '(0 zero))
    (chk 572 (assq 2 '((0 zero) (1 one) (2 two))) '(2 two))
    (chk 573 (assq 4 '((0 zero) (1 one) (2 two))) #f)

    (chk 581 (assv 0 '((0 zero) (1 one) (2 two))) '(0 zero))
    (chk 582 (assv 2 '((0 zero) (1 one) (2 two))) '(2 two))
    (chk 583 (assv 4 '((0 zero) (1 one) (2 two))) #f)

    (chk 591 (assoc 0 '((0 zero) (1 one) (2 two))) '(0 zero))
    (chk 592 (assoc 2 '((0 zero) (1 one) (2 two))) '(2 two))
    (chk 593 (assoc 4 '((0 zero) (1 one) (2 two))) #f)
    (chk 594 (assoc '(1 2) '((1 one) ((1 2) (one two)) (2 two)))
	 '((1 2) (one two)))

    (chk 601 (remq 1 '()) '())
    (chk 602 (remq 1 '(1 1 1 1 1 1)) '())
    (chk 603 (remq 1 '(1 2 1 2 1 2)) '(2 2 2))

    (chk 611 (remv 1 '()) '())
    (chk 612 (remv 1 '(* 1 1 1 1 1 1)) '(*))
    (chk 613 (remv 1 '(1 2 1 2 1 2)) '(2 2 2))

    (chk 621 (remove '(1) '()) '())
    (chk 622 (remove '(1) '((1) (1) (1) (1) (1) (1))) '())
    (chk 623 (remove '(1) '((1) 2 (1) 2 (1) 2)) '(2 2 2))

    (let ((cx (list '* 1 1 1 1 1 1))
	  (l2 (list 2 1 2 1 2 1 2)))
	 (chk 631 (remq! 1 '()) '())
	 (chk 632 (remq! 1 cx) '(*))
	 (chk 633 cx '(*))
	 (chk 634 (remq! 1 l2) '(2 2 2 2))
	 (chk 635 l2 '(2 2 2 2)))

    (let ((l1 (list 1 1 1 1 1 1))
	  (l2 (list 2 1 2 1 2 1 2)))
         (chk 641 (remv! 1 '()) '())
         (chk 642 (remv! 1 l1) '())
         (chk 643 l1 '(1 1 1 1 1 1))
         (chk 644 (remv! 1 l2) '(2 2 2 2))
	 (chk 645 l2 '(2 2 2 2)))

    (let ((l1 (list '(1) '(1) '(1) '(1) '(1) '(1)))
	  (l2 (list 2 '(1) 2 '(1) 2 '(1) 2)))
         (chk 641 (remove! '(1) '()) '())
         (chk 642 (remove! '(1) l1) '())
         (chk 643 l1 '((1) (1) (1) (1) (1) (1)))
         (chk 644 (remove! '(1) l2) '(2 2 2 2))
	 (chk 645 l2 '(2 2 2 2))))
