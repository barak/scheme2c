;;; The compilers "symbol table" is kept by recording an alist  associated
;;; with each identifier under the key SCC.  The function GET is used to
;;; access an item, and the function PUT is used to set an item.
;;;
;;; All property entries for all visible symbols (i.e. in *OBARRAY*) can be
;;; copied from one key to another by COPY-PLIST.  This is used to save and
;;; restore initial values.
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
