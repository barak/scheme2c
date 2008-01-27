;;;	Hello, World example from Oliver Jones' book in Scheme->C

(module hello
    (main main)
    (with xlib))

(define (HELLO-WORLD)
    (let* ((hello "Hello, World")
	   (hi "Hi!")
	   (dpy (let ((x (xopendisplay "")))
		     (if (null-pointer? x)
			 (error 'hello-world "DISPLAY is not defined"))
		     x))
	   (screen (xdefaultscreen dpy))
	   (background (xwhitepixel dpy screen))
	   (foreground (xblackpixel dpy screen))
	   (window (xcreatesimplewindow dpy (xdefaultrootwindow dpy)
		       200 300 350 250 5 foreground background))
	   (gc (xcreategc dpy window 0 (make-xgcvalues)))
	   (event (make-xevent)))

	  (xstorename dpy window
	      "Hello, World  in Scheme->C using X11's Xlib")
	  (xseticonname dpy window "hello")
	  (xsetbackground dpy gc background)
	  (xsetforeground dpy gc foreground)
	  (xselectinput dpy window
	      (bit-or buttonpressmask keypressmask exposuremask))
	  (xmapraised dpy window)
	  (let loop ()
	       (ynextevent dpy event)
	       (cond ((eq? (xevent-type event) expose)
		      (xdrawimagestring (xevent-xexpose-display event)
			  (xevent-xexpose-window event) gc 50 50
			  hello (string-length hello))
		      (loop))
		     ((eq? (xevent-type event) mappingnotify)
		      (xrefreshkeyboardmapping event)
		      (loop))
		     ((eq? (xevent-type event) buttonpress)
		      (xdrawimagestring (xevent-xbutton-display event)
			  (xevent-xbutton-window event) gc
			  (xevent-xbutton-x event) (xevent-xbutton-y event)
			  hi (string-length hi))
		      (loop))
		     ((and (eq? (xevent-type event) keypress)
			   (equal? (ylookupstring event) "q"))
		      (xfreegc dpy gc)
		      (xdestroywindow dpy window)
		      (xclosedisplay dpy))
		     (else (loop))))))

(define (MAIN clargs) (hello-world))
