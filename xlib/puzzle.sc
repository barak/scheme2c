;;;	A simple 4x4 puzzle game.  Click on a tile to move it into the
;;;	adjacent empty space.  Type control-c to exit.

(module puzzle
    (main main)
    (with xlib))

(define (MAIN clargs) (puzzle))

(define XDEBUG 0)	;;; Set to 1 to synchronize requests.

(define (PUZZLE)
    (let* ((dpy (let ((x (xopendisplay "")))
		     (if (null-pointer? x)
			 (error 'hello-world "DISPLAY is not defined"))
		     x))
	   (old-reset (let ((old-reset reset))
			   (set! reset
				 (lambda ()
					 (xclosedisplay dpy)
					 (set! reset old-reset)
					 (reset)))
			   (xsynchronize dpy xdebug)
			   (clear-window-methods)
			   old-reset))
	   (top-window (make-windows dpy))
	   (control-c (list->string (list (integer->char 3))))
	   (event (make-xevent)))

	  (xmapsubwindows dpy top-window)
	  (xmapraised dpy top-window)

	  (let loop ()
	       (ynextevent dpy event)
	       (let ((event-type (xevent-xany-type event))
		     (event-window (xevent-xany-window event)))
		    (cond ((and (eq? event-type expose)
				(zero? (xevent-xexpose-count event)))
			   (send event-window 'expose event)
			   (loop))
			  ((eq? event-type buttonpress)
			   (send event-window 'buttonpress event)
			   (loop))
			  ((and (eq? event-type keypress)
				(equal? (ylookupstring event) control-c))
			   (set! reset old-reset)
		           (xclosedisplay dpy))
			  (else (loop)))))))

(define (MAKE-WINDOWS dpy)
    (let* ((font-struct (xloadqueryfont dpy "8x13bold"))
	   (tile-border 5)
	   (tile-size (* 2 (xtextwidth font-struct "XX" 2)))
	   (top-size (+ (* tile-border 5) (* tile-size 4)))
	   (tile-numbers '(10 15 12  3 13 8 7  1 2 14 6  4 9 5 11))
	   (screen (xdefaultscreen dpy))
	   (white (xwhitepixel dpy screen))
	   (black (xblackpixel dpy screen)) 
	   (top-window (xcreatesimplewindow dpy (xdefaultrootwindow dpy)
			   100 100 top-size top-size 5 black white)))
	  
	  (xstorename dpy top-window "puzzle")
	  (xseticonname dpy top-window "puzzle")
	  (xsetnormalhints dpy top-window
	      (let ((hints (make-xsizehints)))
		   (xsizehints-min_width! hints top-size)
		   (xsizehints-max_width! hints top-size)
		   (xsizehints-min_height! hints top-size)
		   (xsizehints-max_height! hints top-size)
		   (xsizehints-flags! hints (+ pminsize pmaxsize))
		   hints))
	  (xselectinput dpy top-window (+ keypressmask exposuremask))
	  
	  (make-zero-tile dpy font-struct tile-size tile-border top-window
	      black white)
	  (let loop ((tiles tile-numbers) (x 0) (y 1))
	       (unless (= x 4)
		       (cond ((= y 4)
			      (loop tiles (+ x 1) 0))
			     (else
			      (make-tile dpy font-struct tile-size
				  tile-border top-window x y (car tiles)
				  black white)
			      (loop (cdr tiles) x (+ y 1))))))
	  (set-window-method! top-window 'expose
	      (lambda (event) (xclearwindow dpy top-window)))
	  top-window))

(define ZERO-X 0)
(define ZERO-Y 0)
(define ZERO-WINDOW #f)

(define (MAKE-ZERO-TILE dpy font-struct tile-size tile-border top-window
	    black white)    
    (let ((window (xcreatesimplewindow dpy top-window
		      tile-border tile-border
		      tile-size tile-size 0 white white)))
	 
	 (xselectinput dpy window (+ keypressmask exposuremask))
	 (set! zero-x 0)
	 (set! zero-y 0)
	 (set! zero-window window)
	 (set-window-method! window 'expose
	     (lambda (event) (xclearwindow dpy window)))))

(define (MAKE-TILE dpy font-struct tile-size tile-border top-window
	    x y tile-number black white)
    
    (define (TILE->PIXEL x) (+ tile-border (* x (+ tile-border tile-size))))
    
    (let* ((window (xcreatesimplewindow dpy top-window
		       (tile->pixel x) (tile->pixel y)
		       tile-size tile-size 0 black black))
	   (gc (xcreategc dpy window 0 (make-xgcvalues)))
	   (text (format "~s" tile-number))
	   (text-width (xtextwidth font-struct text (string-length text)))
	   (text-height (quotient
			    (cadr (xgetfontproperty font-struct xa_point_size))
			    10))
	   (text-x (quotient (- tile-size text-width) 2))
	   (text-y (+ text-height (quotient (- tile-size text-height) 2))))
	  
	  (xselectinput dpy window
	      (+ keypressmask (+ exposuremask buttonpressmask)))
	  (xsetbackground dpy gc black)
	  (xsetforeground dpy gc white)
	  (xsetfont dpy gc (xfontstruct-fid font-struct))
	  (set-window-method! window 'expose
	      (lambda (event)
		      (xclearwindow dpy window)
		      (xdrawstring dpy window gc text-x text-y text
			  (string-length text))))
	  (set-window-method! window 'buttonpress
	      (lambda (event)
		      (when  (= (+ (abs (- x zero-x)) (abs (- y zero-y))) 1)
			     (xmovewindow dpy window (tile->pixel zero-x)
				 (tile->pixel zero-y))
			     (xmovewindow dpy zero-window
				 (tile->pixel x) (tile->pixel y))
			     (let ((zx zero-x)
				   (zy zero-y))
				  (set! zero-x x)
				  (set! zero-y y)
				  (set! x zx)
				  (set! y zy)))))))
				       
(define WINDOW-METHODS '())

(define (CLEAR-WINDOW-METHODS) (set! window-methods '()))

(define (SET-WINDOW-METHOD! window event-type method)
    (set! window-methods
	  (cons (list (cons window event-type) method) window-methods)))

(define (SEND window event-type event)
    (let ((x (assoc (cons window event-type) window-methods)))
	 (if x (apply (cadr x) (list event)))))
