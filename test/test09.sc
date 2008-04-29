;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
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
