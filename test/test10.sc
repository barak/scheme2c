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

(module test10)

(define-external (chk testnum result expected) testchk)

(define (test10)

    (chk 660 (>= -2 -2) #T)
    (chk 661 (>= -2 -1.4) #F)
    (chk 662 (>= -2 2) #F)
    (chk 663 (>= -2 2.4) #F)
    (chk 664 (>= -1.4 -2) #T)
    (chk 665 (>= -1.4 -1.4) #T)
    (chk 666 (>= -1.4 2) #F)
    (chk 667 (>= -1.4 2.4) #F)
    (chk 668 (>= 2 -2) #T)
    (chk 669 (>= 2 -1.4) #T)
    (chk 670 (>= 2 2) #T)
    (chk 671 (>= 2 2.4) #F)
    (chk 672 (>= 2.4 -2) #T)
    (chk 673 (>= 2.4 -1.4) #T)
    (chk 674 (>= 2.4 2) #T)
    (chk 675 (>= 2.4 2.4) #T)

    (chk 680 (MIN -2 -2) -2)
    (chk 681 (MIN -2 -1.4) -2)
    (chk 682 (MIN -2 2) -2)
    (chk 683 (MIN -2 2.4) -2)
    (chk 684 (MIN -1.4 -2) -2)
    (chk 685 (MIN -1.4 -1.4) -1.4)
    (chk 686 (MIN -1.4 2) -1.4)
    (chk 687 (MIN -1.4 2.4) -1.4)
    (chk 688 (MIN 2 -2) -2)
    (chk 689 (MIN 2 -1.4) -1.4)
    (chk 690 (MIN 2 2) 2)
    (chk 691 (MIN 2 2.4) 2)
    (chk 692 (MIN 2.4 -2) -2)
    (chk 693 (MIN 2.4 -1.4) -1.4)
    (chk 694 (MIN 2.4 2) 2)
    (chk 695 (MIN 2.4 2.4) 2.4)

    (chk 700 (MAX -2 -2) -2)
    (chk 701 (MAX -2 -1.4) -1.4)
    (chk 702 (MAX -2 2) 2)
    (chk 703 (MAX -2 2.4) 2.4)
    (chk 704 (MAX -1.4 -2) -1.4)
    (chk 705 (MAX -1.4 -1.4) -1.4)
    (chk 706 (MAX -1.4 2) 2)
    (chk 707 (MAX -1.4 2.4) 2.4)
    (chk 708 (MAX 2 -2) 2)
    (chk 709 (MAX 2 -1.4) 2)
    (chk 710 (MAX 2 2) 2)
    (chk 711 (MAX 2 2.4) 2.4)
    (chk 712 (MAX 2.4 -2) 2.4)
    (chk 713 (MAX 2.4 -1.4) 2.4)
    (chk 714 (MAX 2.4 2) 2.4)
    (chk 715 (MAX 2.4 2.4) 2.4)

    (chk 720 (POSITIVE? -2) #F)
    (chk 721 (POSITIVE? -1.6) #F)
    (chk 722 (POSITIVE? -1.4) #F)
    (chk 723 (POSITIVE? 0) #F)
    (chk 724 (POSITIVE? 0.) #F)
    (chk 725 (POSITIVE? 1.6) #T)
    (chk 726 (POSITIVE? 2) #T)
    (chk 727 (POSITIVE? 2.4) #T)

    (chk 730 (ZERO? -2) #F)
    (chk 731 (ZERO? -1.6) #F)
    (chk 732 (ZERO? -1.4) #F)
    (chk 733 (ZERO? 0) #T)
    (chk 734 (ZERO? 0.) #T)
    (chk 735 (ZERO? 1.6) #F)
    (chk 736 (ZERO? 2) #F)
    (chk 737 (ZERO? 2.4) #F)

    (chk 740 (NEGATIVE? -2) #T)
    (chk 741 (NEGATIVE? -1.6) #T)
    (chk 742 (NEGATIVE? -1.4) #T)
    (chk 743 (NEGATIVE? 0) #F)
    (chk 744 (NEGATIVE? 0.) #F)
    (chk 745 (NEGATIVE? 1.6) #F)
    (chk 746 (NEGATIVE? 2) #F)
    (chk 747 (NEGATIVE? 2.4) #F)

    (chk 750 (ABS -2) 2)
    (chk 751 (ABS -1.6) 1.6)
    (chk 752 (ABS -1.4) 1.4)
    (chk 753 (ABS 0) 0)
    (chk 754 (ABS 0.) 0.)
    (chk 755 (ABS 1.6) 1.6)
    (chk 756 (ABS 2) 2)
    (chk 757 (ABS 2.4) 2.4)
    (if (member (list-ref (implementation-information) 3) '("VAX" "R2000" "SPARC"))
	(chk 758 (ABS -536870912) 536870912.))

    (chk 760 (FLOOR -2) -2)
    (chk 761 (FLOOR -1.6) -2.)
    (chk 762 (FLOOR -1.4) -2.)
    (chk 763 (FLOOR 0) 0)
    (chk 764 (FLOOR 0.) 0.)
    (chk 765 (FLOOR 1.6) 1.)
    (chk 766 (FLOOR 2) 2)
    (chk 767 (FLOOR 2.4) 2.)

    (chk 770 (CEILING -2) -2)
    (chk 771 (CEILING -1.6) -1.)
    (chk 772 (CEILING -1.4) -1.)
    (chk 773 (CEILING 0) 0)
    (chk 774 (CEILING 0.) 0.)
    (chk 775 (CEILING 1.6) 2.)
    (chk 776 (CEILING 2) 2)
    (chk 777 (CEILING 2.4) 3.))
