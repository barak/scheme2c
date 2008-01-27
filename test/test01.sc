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

(module test01)

(define-external (chk testnum result expected) testchk)

(define (test01)
       
    ;;; 6.1  Booleans
     
    (chk 01 (boolean? '()) #f)
    (chk 02 (boolean? '#()) #f)
    (chk 03 (boolean? '(1 2)) #f)
    (chk 04 (boolean? '#(1 2)) #f)
    (chk 05 (boolean? 'x) #f)
    (chk 06 (boolean? "x") #f)
    (chk 07 (boolean? '#\a) #f)
    (chk 08 (boolean? (lambda (x) x)) #f)
    (chk 09 (boolean? #f) #t)
    (chk 10 (boolean? #t) #t)
    (chk 11 (boolean? -1) #f)
    (chk 12 (boolean? 0) #f)
    (chk 13 (boolean? 1) #f)
    (chk 14 (boolean? -1.5) #f)
    (chk 15 (boolean? 0.0) #f)
    (chk 16 (boolean? 1.5) #f)
   
    (chk 21 (not '()) #t)
    (chk 22 (not '#()) #f)
    (chk 23 (not '(1 2)) #f)
    (chk 24 (not '#(1 2)) #f)
    (chk 25 (not 'x) #f)
    (chk 26 (not "x") #f)
    (chk 27 (not '#\a) #f)
    (chk 28 (not (lambda (x) x)) #f)
    (chk 29 (not #f) #t)
    (chk 30 (not #t) #f)
    (chk 31 (not -1) #f)
    (chk 32 (not 0) #f)
    (chk 33 (not 1) #f)
    (chk 34 (not -1.5) #f)
    (chk 35 (not 0.0) #f)
    (chk 36 (not 1.5) #f))
