;;; The compilers "symbol table" is kept by recording an alist  associated
;;; with each identifier under the key SCC.  The function GET is used to
;;; access an item, and the function PUT is used to set an item.
;;;
;;; All property entries for all visible symbols (i.e. in *OBARRAY*) can be
;;; copied from one key to another by COPY-PLIST.  This is used to save and
;;; restore initial values.
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

(module plist)

(define (GET id key)
    (let ((pl (assq key (or (getprop id 'scc) '()))))
	 (if pl (cdr pl) '())))

(define (PUT id key value)
    (let* ((pl (or (getprop id 'scc) '()))
	   (oldvalue (assq key pl)))
	  (if oldvalue
	      (set-cdr! oldvalue value)
	      (putprop id 'scc (cons (cons key value) pl)))
	  value))

(define (COPY-PLIST src-key dest-key)
    (do ((i (- (vector-length *obarray*) 1) (- i 1)))
	((= i -1))
	(for-each
	    (lambda (var)
		    (putprop var dest-key
			(let loop ((val (getprop var src-key)))
			     (if (pair? val)
				 (cons (loop (car val))
				       (loop (cdr val)))
				 val))))
	    (vector-ref *obarray* i))))
