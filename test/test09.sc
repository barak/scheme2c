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

(module test09)

(define-external (chk testnum result expected) testchk)

(define (test09)

    (chk 540 (* -2 -2) 4)
    (chk 541 (* -2 -1.4) 2.8)
    (chk 542 (* -2 2) -4)
    (chk 543 (* -2 2.4) -4.8)
    (chk 544 (* -1.4 -2) 2.8)
    (chk 545 (* -1.4 -1.4) 1.96)
    (chk 546 (* -1.4 2) -2.8)
    (chk 547 (* -1.4 2.4) -3.36)
    (chk 548 (* 2 -2) -4)
    (chk 549 (* 2 -1.4) -2.8)
    (chk 550 (* 2 2) 4)
    (chk 551 (* 2 2.4) 4.8)
    (chk 552 (* 2.4 -2) -4.8)
    (chk 553 (* 2.4 -1.4) -3.36)
    (chk 554 (* 2.4 2) 4.8)
    (chk 555 (* 2.4 2.4) 5.76)

    (chk 560 (/ -2 -2) 1)
    (chk 561 (/ -2 -1.4) 1.428571428571429)
    (chk 562 (/ -2 2) -1)
    (chk 563 (/ -2 2.4) -.8333333333333334)
    (chk 564 (/ -1.4 -2) .7)
    (chk 565 (/ -1.4 -1.4) 1.)
    (chk 566 (/ -1.4 2) -.7)
    (chk 567 (/ -1.4 2.4) -.5833333333333334)
    (chk 568 (/ 2 -2) -1)
    (chk 569 (/ 2 -1.4) -1.428571428571429)
    (chk 570 (/ 2 2) 1)
    (chk 571 (/ 2 2.4) .8333333333333334)
    (chk 572 (/ 2.4 -2) -1.2)
    (chk 573 (/ 2.4 -1.4) -1.714285714285714)
    (chk 574 (/ 2.4 2) 1.2)
    (chk 575 (/ 2.4 2.4) 1.)

    (chk 580 (< -2 -2) #F)
    (chk 581 (< -2 -1.4) #T)
    (chk 582 (< -2 2) #T)
    (chk 583 (< -2 2.4) #T)
    (chk 584 (< -1.4 -2) #F)
    (chk 585 (< -1.4 -1.4) #F)
    (chk 586 (< -1.4 2) #T)
    (chk 587 (< -1.4 2.4) #T)
    (chk 588 (< 2 -2) #F)
    (chk 589 (< 2 -1.4) #F)
    (chk 590 (< 2 2) #F)
    (chk 591 (< 2 2.4) #T)
    (chk 592 (< 2.4 -2) #F)
    (chk 593 (< 2.4 -1.4) #F)
    (chk 594 (< 2.4 2) #F)
    (chk 595 (< 2.4 2.4) #F)

    (chk 600 (<= -2 -2) #T)
    (chk 601 (<= -2 -1.4) #T)
    (chk 602 (<= -2 2) #T)
    (chk 603 (<= -2 2.4) #T)
    (chk 604 (<= -1.4 -2) #F)
    (chk 605 (<= -1.4 -1.4) #T)
    (chk 606 (<= -1.4 2) #T)
    (chk 607 (<= -1.4 2.4) #T)
    (chk 608 (<= 2 -2) #F)
    (chk 609 (<= 2 -1.4) #F)
    (chk 610 (<= 2 2) #T)
    (chk 611 (<= 2 2.4) #T)
    (chk 612 (<= 2.4 -2) #F)
    (chk 613 (<= 2.4 -1.4) #F)
    (chk 614 (<= 2.4 2) #F)
    (chk 615 (<= 2.4 2.4) #T)

    (chk 620 (= -2 -2) #T)
    (chk 621 (= -2 -1.4) #F)
    (chk 622 (= -2 2) #F)
    (chk 623 (= -2 2.4) #F)
    (chk 624 (= -1.4 -2) #F)
    (chk 625 (= -1.4 -1.4) #T)
    (chk 626 (= -1.4 2) #F)
    (chk 627 (= -1.4 2.4) #F)
    (chk 628 (= 2 -2) #F)
    (chk 629 (= 2 -1.4) #F)
    (chk 630 (= 2 2) #T)
    (chk 631 (= 2 2.4) #F)
    (chk 632 (= 2.4 -2) #F)
    (chk 633 (= 2.4 -1.4) #F)
    (chk 634 (= 2.4 2) #F)
    (chk 635 (= 2.4 2.4) #T)

    (chk 640 (> -2 -2) #F)
    (chk 641 (> -2 -1.4) #F)
    (chk 642 (> -2 2) #F)
    (chk 643 (> -2 2.4) #F)
    (chk 644 (> -1.4 -2) #T)
    (chk 645 (> -1.4 -1.4) #F)
    (chk 646 (> -1.4 2) #F)
    (chk 647 (> -1.4 2.4) #F)
    (chk 648 (> 2 -2) #T)
    (chk 649 (> 2 -1.4) #T)
    (chk 650 (> 2 2) #F)
    (chk 651 (> 2 2.4) #F)
    (chk 652 (> 2.4 -2) #T)
    (chk 653 (> 2.4 -1.4) #T)
    (chk 654 (> 2.4 2) #T)
    (chk 655 (> 2.4 2.4) #F))
