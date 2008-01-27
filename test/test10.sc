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
