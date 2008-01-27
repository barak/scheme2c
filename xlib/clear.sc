;;;	Creates a clear window which covers the display.  Then writes speckles
;;;	in it.  A mouse click causes it to go away.

(module clear
    (main main)
    (with xlib))

(define-c-external (rand) int "rand")

(define (RANDOM)
    (quotient (rand) 4096))

(define (CLEAR display-name)
    (let* ((dpy (let ((x (xopendisplay display-name)))
		     (if (null-pointer? x)
			 (error 'hello-world "DISPLAY is not defined"))
		     x))
	   (screen (xdefaultscreen dpy))
	   (attributes (let ((x (make-xsetwindowattributes)))
			    (xsetwindowattributes-override_redirect! x 1)
			    (xsetwindowattributes-background_pixmap! x none)
			    x))
	   (height (xdisplayheight dpy screen))
	   (width (xdisplaywidth dpy screen))
	   (window (xcreatewindow dpy (xdefaultrootwindow dpy) 0 0
		       width height
		       0 copyfromparent copyfromparent
		       (type/value->pointer 'visualp copyfromparent)
		       (+ cwbackpixmap cwoverrideredirect)
		       attributes))
	   (gc (xcreategc dpy window 0 (make-xgcvalues)))
	   (event (make-xevent))
	   (old-reset reset))

	  (set! reset (lambda ()
			      (xclosedisplay dpy)
			      (set! reset old-reset)
			      (reset)))
	  (xsetforeground dpy gc (xblackpixel dpy screen))
	  (xselectinput dpy window (+ buttonpressmask exposuremask))
	  (xmapraised dpy window)
	  (let loop ()
	       (ynextevent dpy event)
	       (cond ((eq? (xevent-type event) expose)
		      (let loop ()
			   (xfillrectangle dpy window gc
			       (remainder (random) width)
			       (remainder (random) height) 1 1)
			   (if (eq? (xeventsqueued dpy queuedafterflush) 0)
			       (loop)))
		      (loop))
		     ((eq? (xevent-type event) buttonpress)
		      (set! reset old-reset)
		      (xfreegc dpy gc)
		      (xdestroywindow dpy window)
		      (xclosedisplay dpy))
		     (else (loop))))))

(define (MAIN clargs)
    (if (and (= (length clargs) 3) (equal? (cadr clargs) "-display"))
	(clear (caddr clargs))
	(clear "")))
