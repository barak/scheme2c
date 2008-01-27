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

(define (TEST55)
    
    ;;; Write length and levels.
    
    (for-each
	(lambda (v n)
		(set-write-level! v)
		(set-write-length! n)
		(format #t "~s ~s	~s~%" v n
			'(if (member x y) (+ (car x) 3)
			     '(foo . #(a b c d "Baz")))))
	'(0 1 1 1 1 2 2 2 3 3 3 #f)
	'(1 1 2 3 4 1 2 3 2 3 4 #f))
    (newline)
    
    ;;; Circularity detection.
    
    (set-write-circle! #t)
    (let* ((x (list 1 2 3 4 5))
	   (y (make-vector 5 x)))
	  (set-cdr! (last-pair x) x)
	  (vector-set! y 4 y)
	  (write y))
    (newline)
    (newline)
    
    ;;; Pretty-printing
    
    (set-write-pretty! #t)
    (write '(for-each
		(lambda (v n)
			(set-write-level! v)
			(set-write-length! n)
			(format #t "~s ~s	~s~%" v n
				'(if (member x y) (+ (car x) 3)
				     '(foo . #(a b c d "Baz")))))
		'(0 1 1 1 1 2 2 2 3 3 3 #f)
		'(1 1 2 3 4 1 2 3 2 3 4 #f)))
    (newline)
    (newline)
    
    (set-write-pretty! #f)
    (pp '(for-each
	     (lambda (v n)
		     (set-write-level! v)
		     (set-write-length! n)
		     (format #t "~s ~s	~s~%" v n
			     '(if (member x y) (+ (car x) 3)
				  '(foo . #(a b c d "Baz")))))
	     '(0 1 1 1 1 2 2 2 3 3 3 #f)
	     '(1 1 2 3 4 1 2 3 2 3 4 #f)))
    (newline)
    #f)
