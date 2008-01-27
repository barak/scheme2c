;;; Copyright Olin Shivers (1988).
;;; Please imagine a long, tedious, legalistic 5-page gnu-style copyright
;;; notice appearing here to the effect that you may use this code any
;;; way you like, as long as you don't charge money for it, remove this
;;; notice, or hold me liable for its results.

;;; This file implements the GNU Emacs interface with the Scheme->C 
;;; run-time interpreter.  Function, variable and mode names 
;;; are chosen such that conflicts with the standard GNU Emacs' interface
;;; with other inferior scheme processes will not result.
;;;
;;; Adapted from the files comint.el and cmuscheme.el originally written 
;;; by Olin Shivers (olin.shivers@cs.cmu.edu).

;;=========================================================================
;; Some suggestions for your .emacs file.
;;
;; ; If s2c-gnuemacs lives in some non-standard directory, you must tell
;; ; emacs where to get it. This may or may not be necessary.
;; (setq load-path (cons (expand-file-name "~jones/lib/emacs") load-path))
;;
;; ; Autoload (upon M-x sci) from file s2c-gnuemacs.el
;; (autoload 'sci "s2c-gnuemacs"
;;           "Run an inferior Scheme->C process."
;;           t)
;;
;; ; Files ending in ".sc" are Scheme source, 
;; ; so put their buffers in scheme-mode.
;; (setq auto-mode-alist 
;;       (cons '("\\.sc$" . scheme-mode)  
;;             auto-mode-alist))
;;
;; An example of key board binding customization:
;; Define C-c C-t to run my favorite command in inferior scheme mode:
;; (setq Scheme->C-mode-hook
;;       '((lambda () (define-key inferior-scheme-mode-map "\C-c\C-t"
;;                                'favorite-cmd))))
;;=========================================================================

(provide 's2c)
(require 'scheme)

;==========================================================================
; Brief Command Documentation:
; Scheme->C Mode Commands: 
;
; M-p	    s2c-previous-input    	 Cycle backward in input history
; M-n	    s2c-next-input  	    	 Cycle forward
; C-c r     s2c-previous-input-matching  Search backward in input history
; RET       s2c-send-input
; C-a       s2c-beginning-of-line        Beginning of line; skip prompt.
; C-d	    s2c-delchar-or-maybe-eof     Delete char unless at end of buff.
; C-c C-u   s2c-kill-input	    	 ^u
; C-c C-w   backward-kill-word    	 ^w
; C-c C-c   s2c-interrupt-subjob 	 ^c
; C-c C-z   s2c-stop-subjob	    	 ^z
; C-c C-\   s2c-quit-subjob	    	 ^\
; C-c C-o   s2c-kill-output		 Delete last batch of process output
; C-c C-r   s2c-show-output		 Show last batch of process output
;
; C-c C-k   s2c-kill-subjob		 No mercy.
; C-c C-f   s2c-continue-subjob		 Send CONT signal to buffer's process
;					 group. Useful if you accidentally
;					 suspend your process (with C-c C-z).
; Bound for RMS 
; M-P	    s2c-reverse-prompt-search	 Search backward for prompt
; M-N       s2c-forward-prompt-search	 Search forward for prompt
; C-c R     s2c-reverse-input-search     Search backward for prompt & string
; C-c S     s2c-forward-input-search     Search forward for prompt & string
;
; Scheme->C-mode-hook is the Scheme->C mode hook and is basically for 
; your keybindings.  Scheme->C-load-hook is run after loading in 
; this package.
;============================================================================

(defvar Scheme->C-mode-hook nil
  "*Hook for customizing Scheme->C mode.")
(defvar Scheme->C-mode-map nil)

(cond ((not Scheme->C-mode-map)
       (setq Scheme->C-mode-map (make-sparse-keymap))
       (define-key Scheme->C-mode-map "\ep" 's2c-previous-input)
       (define-key Scheme->C-mode-map "\en" 's2c-next-input)
       (define-key Scheme->C-mode-map "\ee" 'eval-expression)
       (define-key Scheme->C-mode-map "\C-m" 's2c-send-input)
       (define-key Scheme->C-mode-map "\C-d" 's2c-delchar-or-maybe-eof)
       (define-key Scheme->C-mode-map "\C-a" 's2c-beginning-of-line)
       (define-key Scheme->C-mode-map "\C-c\C-u" 's2c-kill-input)
       (define-key Scheme->C-mode-map "\C-c\C-w" 'backward-kill-word)
       (define-key Scheme->C-mode-map "\C-c\C-c" 's2c-interrupt-subjob)
       (define-key Scheme->C-mode-map "\C-c\C-z" 's2c-stop-subjob)
       (define-key Scheme->C-mode-map "\C-c\C-\\" 's2c-quit-subjob)
       (define-key Scheme->C-mode-map "\C-c\C-o" 's2c-kill-output)
       (define-key Scheme->C-mode-map "\C-c\C-k" 's2c-kill-subjob)
       (define-key Scheme->C-mode-map "\C-c\C-f" 's2c-continue-subjob)
       (define-key Scheme->C-mode-map "\C-cr" 's2c-previous-input-matching)
       (define-key Scheme->C-mode-map "\C-c\C-r" 's2c-show-output)
       (define-key Scheme->C-mode-map "\eP" 's2c-reverse-prompt-search)
       (define-key Scheme->C-mode-map "\eN" 's2c-forward-prompt-search)
       (define-key Scheme->C-mode-map "\C-cR" 's2c-reverse-input-search)
       (define-key Scheme->C-mode-map "\C-cS" 's2c-forward-input-search)
       (define-key scheme-mode-map "\e-\C-x" ;gnu convention
	 'scheme-send-definition)
       (define-key Scheme->C-mode-map "\C-cl"    'scheme-load-file)
       (scheme-mode-commands Scheme->C-mode-map)))

;; Install the process communication commands in the scheme-mode keymap.
(define-key scheme-mode-map "\e-\C-x" 'scheme-send-definition);gnu convention
(define-key scheme-mode-map "\C-ce"    'scheme-send-definition)
(define-key scheme-mode-map "\C-c\C-e" 'scheme-send-definition-and-go)
(define-key scheme-mode-map "\C-cr"    'scheme-send-region)
(define-key scheme-mode-map "\C-c\C-r" 'scheme-send-region-and-go)
(define-key scheme-mode-map "\C-cz"    'switch-to-scheme)
(define-key scheme-mode-map "\C-cl"    'scheme-load-file)

(setq display-mode-map Scheme->C-mode-map)

(defun Scheme->C-mode ()
  "Major mode for interacting with a Scheme->C process.

The following commands are available:
\\{display-mode-map}

A Scheme->C process can be fired up with M-x sci.

Customization: Entry to this mode runs the hooks on Scheme->C-mode-hook. 

You can send text to the inferior Scheme->C process from other buffers
containing Scheme source:
    switch-to-scheme switches the current buffer to the Scheme->C process 
    buffer.
    scheme-send-definition sends the current definition to the Scheme process.
    scheme-send-region sends the current region to the Scheme process.
    scheme-send-definition-and-go, and scheme-send-region-and-go, 
    switch to the Scheme process buffer after sending their text.

Commands:
Return after the end of the process' output sends the text from the 
    end of process to point.
Return before the end of the process' output copies the scheme expression
    ending at point to the end of the process' output, and sends it.
Delete converts tabs to spaces as it moves back.
Tab indents for Scheme; with argument, shifts rest of expression rigidly 
    with the current line.
C-M-q does Tab on each line starting within following expression.
Paragraphs are separated only by blank lines.  Semicolons start comments.
"
  (interactive)
  (let ((old-ring (and (assq 'input-ring (buffer-local-variables))
		       (boundp 'input-ring)
		       input-ring)))
    (kill-all-local-variables)
    (make-local-variable 's2c-last-input-end)
    (setq s2c-last-input-end (make-marker))
    (make-local-variable 's2c-last-input-match)
    (setq s2c-last-input-match "")
    (make-variable-buffer-local 'input-ring-size)   
    (make-local-variable 'input-ring)
    (make-local-variable 'input-ring-index)
    (setq input-ring-index 0)
    (make-variable-buffer-local 's2c-prompt-regexp) 
    (setq s2c-prompt-regexp "^[^>]*>+ *") 
    (make-variable-buffer-local 's2c-input-filter)
    (make-variable-buffer-local 'previous-pmark)
    (setq previous-pmark (make-marker))
    (make-variable-buffer-local 'last-input-is-null)
    (setq last-input-is-null nil)
    (make-variable-buffer-local 's2c-get-old-input)
    (setq s2c-get-old-input (function sc-get-old-input))
    (scheme-mode-variables)
    (setq major-mode 'Scheme->C-mode)
    (setq mode-name "Scheme->C")
    (setq mode-line-process '(": %s"))
    (use-local-map Scheme->C-mode-map)
    (run-hooks 'Scheme->C-mode-hook)
    (setq input-ring (if (ring-p old-ring) old-ring
		       (make-ring input-ring-size)))))

(defvar scheme-program-name "sci"
  "*Program invoked by the sci and run-sci commands")

(defun run-sci (arg)
  "Like run-scheme, except prompts for a command line."
  (interactive "sExtra arguments to Scheme->C: ")
  (switch-to-buffer
   (apply 'make-s2c (append (list "Scheme->C" scheme-program-name nil)
			       (s2c-args-to-list arg))))
  (insert-before-markers 
   (substitute-command-keys s2c-startup-message))
  (Scheme->C-mode)
  (setq previous-pmark 	
       (marker-position (process-mark (get-buffer-process (current-buffer))))))

(defun s2c-args-to-list (string)
  (let ((where (string-match "[ \t]" string)))
    (cond ((equal string "") '())
          ((null where) (list string))
	  ((not (= where 0))
	   (cons (substring string 0 where)
		 (s2c-args-to-list (substring string (+ 1 where)
						 (length string)))))
	  (t (let ((pos (string-match "[^ \t]" string)))
	       (if (null pos)
		   nil
		 (s2c-args-to-list (substring string pos
					      (length string)))))))))

(defvar s2c-startup-message
  "This is the Scheme->C process buffer.
Type \\[s2c-send-input] to evaluate the expression before point.
Type \\[s2c-interrupt-subjob] to abort evaluation.
Type \\[describe-mode] for more information.

"
  "String to insert into Scheme->C process buffer first time it is started.
Is processed with `substitute-command-keys' first.")

(defun sci (arg)
  "Run an inferior Scheme->C process, input and output via buffer *Scheme->C*.
With argument, it asks for a command line.  Take the program name from the
variable scheme-program-name.  Runs the hooks from Scheme->C-mode-hook.

\(Type \\[describe-mode] in the process buffer for a list of commands.)"
  (interactive "P")
  (if arg (call-interactively 'run-sci)
      (run-sci "")))

(defun scheme-send-region (start end)
  "Send the current region to the inferior Scheme->C process."
  (interactive "r")
  (send-region "Scheme->C" start end)
  (send-string "Scheme->C" "\n"))

(defun scheme-send-definition ()
  "Send the current definition to the inferior Scheme->C process."
  (interactive)
  (save-excursion
   (end-of-defun)
   (let ((end (point)))
     (beginning-of-defun)
     (scheme-send-region (point) end))))

(defun scheme-send-region-and-go (start end)
  "Send the current region to the inferior Scheme->C process,
and switch to the process buffer."
  (interactive "r")
  (scheme-send-region start end)
  (switch-to-scheme t))

(defun scheme-send-definition-and-go ()
  "Send the current definition to the inferior Scheme->C, 
and switch to the process buffer."
  (interactive)
  (scheme-send-definition)
  (switch-to-scheme t))

(defun s2c-send-input ()
  "Send input to process.  After the process output mark, sends all text
from the process mark to point as input to the process.  Before the
process output mark, calls value of variable s2c-get-old-input to retrieve
old input, copies it to the end of the buffer, and sends it.  A terminal
newline is also inserted into the buffer and sent to the process.   The 
input is entered into the input history ring, if value of variable 
s2c-input-filter returns T when called on the input."
  ;; Note that the input string does not include its terminal newline.
  (interactive)
  (let ((proc (get-buffer-process (current-buffer))))
    (if (not proc) (error "Current buffer has no process")
        (let* ((pmark (process-mark proc))
	       (pmark-val (marker-position pmark))
	       (input (if (>= (point) pmark-val)
			  (buffer-substring pmark (point))
			  (let ((copy (funcall s2c-get-old-input)))
			    (goto-char pmark)
			    (insert copy)
			    copy))))
	  (insert ?\n)
	  (process-send-string proc input)
	  (process-send-string proc "\n")
	  ;;; The follow code figures out the most sensible way to
	  ;;; record input history.
	  (cond ((= pmark-val (if (marker-position s2c-last-input-end)
				  (marker-position s2c-last-input-end)
				  -1))
		 ;; previous input doesn't have output (i.e. incomplete sexp)
		 (cond ((funcall s2c-input-filter input)
			(if last-input-is-null
			    (ring-insert input-ring input)
			    (if (>= (point) pmark-val)
				(ring-overwrite-insert input-ring
				      (buffer-substring previous-pmark 
							(- (point) 1)))
			        (ring-overwrite-insert input-ring input)))
			(setq last-input-is-null nil))
		       (last-input-is-null (setq previous-pmark pmark-val))))
		;; previous input was a complete sexp
		(t (cond ((funcall s2c-input-filter input)
			  (ring-insert input-ring input)
			  (setq previous-pmark pmark-val)
			  (setq last-input-is-null nil))
			 (t (setq previous-pmark pmark-val)
			    (setq last-input-is-null t)))))
	  (set-marker s2c-last-input-end (point))
	  (set-marker (process-mark proc) (point))))))

(defun sc-get-old-input ()
  "Snarf the Scheme expression ending at point"
  (save-excursion
    (let ((end (point)))
      (backward-sexp)
      (buffer-substring (point) end))))

(defvar scheme-source-modes '(scheme-mode)
  "*Used to determine if a buffer contains Scheme source code.
If it's loaded into a buffer that is in one of these major modes, it's
considered a scheme source file by scheme-load-file.  Used by this command
to determine defaults.")

(defvar scheme-prev-l/c-dir/file nil
  "Caches the (directory . file) pair used in the last scheme-load-file
command. Used for determining the default in the next one.")

(defun scheme-load-file (file-name)
  "Load a Scheme file into the inferior Scheme->C process."
  (interactive (s2c-get-source "Load Scheme file: " scheme-prev-l/c-dir/file
				  scheme-source-modes t)) ; T because LOAD 
                                                          ; needs an exact name
  (s2c-check-source file-name) ; Check to see if buffer needs saved.
  (setq scheme-prev-l/c-dir/file (cons (file-name-directory    file-name)
				       (file-name-nondirectory file-name)))
  (send-string "Scheme->C" (concat "(load \""
				file-name
				"\"\)\n"))
  (switch-to-scheme t))

(defun switch-to-scheme (eob-p)
  "Switch to the *scheme* buffer.
With argument, positions cursor at end of buffer."
  (interactive "P")
  (pop-to-buffer "*Scheme->C*")
  (cond (eob-p
	 (push-mark)
	 (goto-char (point-max)))))

(defun s2c-source-default (previous-dir/file source-modes)
  (cond ((and buffer-file-name (memq major-mode source-modes))
	 (cons (file-name-directory    buffer-file-name)
	       (file-name-nondirectory buffer-file-name)))
	(previous-dir/file)
	(t
	 (cons default-directory nil))))

(defun s2c-check-source (fname)
  (let ((buff (get-file-buffer fname)))
    (if (and buff
	     (buffer-modified-p buff)
	     (y-or-n-p (format "Save buffer %s first? "
			       (buffer-name buff))))
	;; save BUFF.
	(let ((old-buffer (current-buffer)))
	  (set-buffer buff)
	  (save-buffer)
	  (set-buffer old-buffer)))))

(defun s2c-get-source (prompt prev-dir/file source-regexp mustmatch-p)
  (let* ((def (s2c-source-default prev-dir/file source-regexp))
	 (defdir  (car def))
	 (deffile (cdr def))
	 (ans (read-file-name (if deffile (format "%s(default %s) "
						  prompt    deffile)
				  prompt)
			      defdir
			      (concat defdir deffile)
			      mustmatch-p)))
    (list (expand-file-name (substitute-in-file-name ans)))))

(defun make-s2c (name program &optional startfile &rest switches)
  (let* ((buffer (get-buffer-create (concat "*" name "*")))
	 (proc (get-buffer-process buffer)))
    ;; If no process, or nuked process, crank up a new one and put buffer in
    ;; Scheme->C mode. Otherwise, leave buffer and existing process alone.
    (cond ((or (not proc) (not (memq (process-status proc) '(run stop))))
	   (s2c-exec buffer name program startfile switches)
	   (save-excursion
	     (set-buffer buffer)
	     (Scheme->C-mode)))) ; Install local vars, mode, keymap, ...
    buffer))

(defun s2c-exec (buffer name command startfile switches)
  "Fires up a Scheme->C process in buffer.  Blasts any old process 
running in the buffer. Doesn't set the buffer mode."
  (save-excursion
    (set-buffer buffer)
    (let ((proc (get-buffer-process buffer)))	; Blast any old process.
      (if proc (delete-process proc)))
    ;; Crank up a new process
    (let ((proc (apply 'start-process name buffer (concat exec-directory "env")
		       (format "TERMCAP=emacs:co#%d:tc=unknown:"
			       (screen-width))
		       "TERM=emacs" "EMACS=t" "-" command switches)))
      ;; Feed it the startfile.
      (cond (startfile
	     ;;This is guaranteed to wait long enough
	     ;;but has bad results if Scheme->C does not prompt at all
	     ;;	     (while (= size (buffer-size))
	     ;;	       (sleep-for 1))
	     ;;I hope 1 second is enough!
	     (sleep-for 1)
	     (goto-char (point-max))
	     (insert-file-contents startfile)
	     (setq startfile (buffer-substring (point) (point-max)))
	     (delete-region (point) (point-max))
	     (process-send-string proc startfile)))
      ;; Jump to the end, and set the process mark.
      (goto-char (point-max))
      (set-marker (process-mark proc) (point)))
    buffer))

(defvar input-ring-size 30
  "Size of input history ring.")

(defvar s2c-input-filter 
  (function (lambda (str) (not (string-match "\\`\\s *\\'" str))))
  "Predicate for filtering additions to input history.
Only inputs answering true to this function are saved on the input
history list. Default is to save anything that isn't all whitespace")

(defun s2c-previous-input (arg)
  "Cycle backward through input history."
  (interactive "*p")
  (let ((len (ring-length input-ring)))
    (cond ((<= len 0)
	   (message "Empty input ring")
	   (ding))
	  ((not (s2c-after-pmark-p))
	   (message "Not after process mark")
	   (ding))
	  (t
	   (cond ((eq last-command 's2c-previous-input)
		  (delete-region (mark) (point))
		  (set-mark (point)))
		 (t                          
		  (setq input-ring-index
			(if (> arg 0) -1
			    (if (< arg 0) 1 0)))
		  (push-mark (point))))
	   (setq input-ring-index (s2c-mod (+ input-ring-index arg) len))
	   (message "%d" (1+ input-ring-index))
	   (insert (ring-ref input-ring input-ring-index))
	   (setq this-command 's2c-previous-input))
	  (t (ding)))))
	 
(defun s2c-next-input (arg)
  "Cycle forward through input history."
  (interactive "*p")
  (s2c-previous-input (- arg)))

(defvar s2c-last-input-match ""
  "Last string searched for by Scheme->C input history search, for defaulting.
Buffer local variable.") 

(defun s2c-reverse-input-matching (str)
  "Searches backward through input history for substring match"
  (interactive (let ((s (read-from-minibuffer 
			 (format "Command substring (default %s): "
				 s2c-last-input-match))))
		 (list (if (string= s "") s2c-last-input-match s))))
  (setq s2c-last-input-match str) ; update default
  (let ((str (regexp-quote str))
        (len (ring-length input-ring))
	(n 0))
    (while (and (<= n len) (not (string-match str (ring-ref input-ring n))))
      (setq n (+ n 1)))
    (cond ((<= n len) (s2c-previous-input (+ n 1)))
	  (t (error "Not found.")))))

(defun s2c-reverse-prompt-search ()
  "Search backward for previous occurrence of prompt and skip to end of line.
Search starts from beginning of current line."
  (interactive)
  (let ((p (save-excursion
	     (beginning-of-line)
	     (cond ((re-search-backward s2c-prompt-regexp (point-min) t)
		    (end-of-line)
		    (point))
		   (t nil)))))
    (if p (goto-char p)
	(error "No occurrence of prompt found"))))

(defun s2c-forward-prompt-search ()
  "Search forward for next occurrence of prompt and skip to end of line.
(prompt is anything matching regexp s2c-prompt-regexp)"
  (interactive)
  (if (re-search-forward s2c-prompt-regexp (point-max) t)
      (end-of-line)
      (error "No occurrence of prompt found")))

(defun s2c-reverse-input-search (str)
  "Search backward for occurrence of prompt followed by STRING.
STRING is prompted for, and is NOT a regular expression."
  (interactive (let ((s (read-from-minibuffer 
			 (format "Command (default %s): "
				 s2c-last-input-match))))
		 (list (if (string= s "") s2c-last-input-match s))))
  (setq s2c-last-input-match str) ; update default
  (let* ((r (concat s2c-prompt-regexp (regexp-quote str)))
	 (p (save-excursion
	      (beginning-of-line)
	      (cond ((re-search-backward r (point-min) t)
		     (end-of-line)
		     (point))
		    (t nil)))))
    (if p (goto-char p)
	(error "No match"))))

(defun s2c-forward-input-search (str)
  "Search forward for occurrence of prompt followed by STRING.
STRING is prompted for, and is NOT a regular expression."
  (interactive (let ((s (read-from-minibuffer 
			 (format "Command (default %s): "
				 s2c-last-input-match))))
		 (list (if (string= s "") s2c-last-input-match s))))
  (setq s2c-last-input-match str) ; update default
  (let* ((r (concat s2c-prompt-regexp (regexp-quote str)))
	 (p (save-excursion
	      (beginning-of-line)
	      (cond ((re-search-forward r (point-max) t)
		     (end-of-line)
		     (point))
		    (t nil)))))
    (if p (goto-char p)
	(error "No match"))))

(defun s2c-skip-prompt ()
  "Skip past the text matching regexp s2c-prompt-regexp. 
If this takes us past the end of the current line, don't skip at all."
  (let ((eol (save-excursion (end-of-line) (point))))
    (if (and (looking-at s2c-prompt-regexp)
	     (<= (match-end 0) eol))
	(goto-char (match-end 0)))))

(defun s2c-after-pmark-p ()
  "Is point after the process output marker?"
  ;; Since output could come into the buffer after we looked at the point
  ;; but before we looked at the process marker's value, we explicitly 
  ;; serialise. This is just because I don't know whether or not emacs
  ;; services input during execution of lisp commands.
  (let ((proc-pos (marker-position
		   (process-mark (get-buffer-process (current-buffer))))))
    (<= proc-pos (point))))

(defun s2c-beginning-of-line (arg)
  "Goes to the beginning of line, then skips past the prompt, if any.
If a prefix argument is given (\\[universal-argument]), then no prompt skip 
-- go straight to column 0.
The prompt skip is done by skipping text matching the regular expression
s2c-prompt-regexp, a buffer local variable.
If you don't like this command, reset C-a to beginning-of-line 
in your hook, s2c-mode-hook."
  (interactive "P")
  (beginning-of-line)
  (if (null arg) (s2c-skip-prompt)))

(defun s2c-kill-output ()
  "Kill all output from interpreter since last input."
  (interactive)
  (let ((pmark (process-mark (get-buffer-process (current-buffer)))))
    (kill-region s2c-last-input-end pmark)
    (goto-char pmark)    
    (insert "*** output flushed ***\n")
    (set-marker pmark (point))))

(defun s2c-show-output ()
  "Display start of this batch of interpreter output at top of window.
Also put cursor there."
  (interactive)
  (goto-char s2c-last-input-end)
  (backward-char)
  (beginning-of-line)
  (set-window-start (selected-window) (point))
  (end-of-line))

(defun s2c-interrupt-subjob ()
  "Interrupt the current subjob.  Kill current input at prompt first."
  (interactive)
  (s2c-kill-input)
  (interrupt-process nil t)
  (let ((pmark 
	 (process-mark (get-buffer-process (current-buffer)))))
    (goto-char (marker-position pmark))))


(defun s2c-kill-subjob ()
  "Send kill signal to the current subjob."
  (interactive)
  (kill-process nil t))

(defun s2c-quit-subjob ()
  "Send quit signal to the current subjob."
  (interactive)
  (quit-process nil t))

(defun s2c-stop-subjob ()
  "Stop the current subjob.
WARNING: if there is no current subjob, you can end up suspending
the top-level process running in the buffer. If you accidentally do
this, use \\[s2c-continue-subjob] to resume the process. (This
is not a problem with most shells, since they ignore this signal.)"
  (interactive)
  (stop-process nil t))

(defun s2c-continue-subjob ()
  "Send CONT signal to process buffer's process group.
Useful if you accidentally suspend the top-level process."
  (interactive)
  (continue-process nil t))

(defun s2c-kill-input ()
  "Kill all text from last stuff output by interpreter to point."
  (interactive)
  (let* ((pmark (process-mark (get-buffer-process (current-buffer))))
	 (p-pos (marker-position pmark)))
    (if (> (point) p-pos)
	(kill-region pmark (point)))))

(defun s2c-delchar-or-maybe-eof (arg)
  "Delete ARG characters forward, or send an EOF to proces if at end of buffer."
  (interactive "p")
  (if (eobp)
      (process-send-eof)
      (delete-char arg)))

;;;========================================================================
;;; Ring Code
;;;
;;; This code defines a ring data structure. A ring is a 
;;;     (hd-index tl-index . vector) 
;;; list. You can insert to, remove from, and rotate a ring. When the ring
;;; fills up, insertions cause the oldest elts to be quietly dropped.
;;;
;;; HEAD = index of the newest item on the ring.
;;; TAIL = index of the oldest item on the ring.
;;;
;;; These functions are used by the input history mechanism, but they can
;;; be used for other purposes as well.

(defun ring-p (x) 
  "T if X is a ring; NIL otherwise."
  (and (consp x) (integerp (car x))
       (consp (cdr x)) (integerp (car (cdr x)))
       (vectorp (cdr (cdr x)))))

(defun make-ring (size)
  "Make a ring that can contain SIZE elts"
  (cons 1 (cons 0 (make-vector (+ size 1) nil))))

(defun ring-plus1 (index veclen)
  "INDEX+1, with wraparound"
  (let ((new-index (+ index 1)))
    (if (= new-index veclen) 0 new-index)))

(defun ring-minus1 (index veclen)
  "INDEX-1, with wraparound"
  (- (if (= 0 index) veclen index) 1))

(defun ring-length (ring)
  (let ((hd (car ring)) (tl (car (cdr ring)))  (siz (length (cdr (cdr ring)))))
    (let ((len (if (<= hd tl) (+ 1 (- tl hd)) (+ 1 tl (- siz hd)))))
      (if (= len siz) 0 len))))

(defun ring-empty-p (ring)
  (= 0 (ring-length ring)))

(defun ring-insert (ring item)
  "Insert a new item onto the ring. If the ring is full, dump the oldest
item to make room."       
  (let* ((vec (cdr (cdr ring)))  
	 (len (length vec))
	 (new-hd (ring-minus1 (car ring) len)))
      (setcar ring new-hd)
      (aset vec new-hd item)
      (if (ring-empty-p ring) ;overflow -- dump one off the tail.
	  (setcar (cdr ring) (ring-minus1 (car (cdr ring)) len)))))

(defun ring-overwrite-insert (ring item)
  "Insert a new item onto the ring, overwriting the last entry 
where the previous item was inserted at."
  (if (ring-empty-p ring) 
      (ring-insert ring item)
      (let* ((vec (cdr (cdr ring)))  
	     (len (length vec))
	     (new-hd (car ring)))
	(setcar ring new-hd)
	(aset vec new-hd item))))

(defun s2c-mod (n m)
  "Returns N mod M. M is positive. Answer is guaranteed to be non-negative, 
and less than m."
  (let ((n (% n m)))
    (if (>= n 0) n
	(+ n
	   (if (>= m 0) m (- m)))))) ; (abs m)

(defun ring-ref (ring index)
  (let ((numelts (ring-length ring)))
    (if (= numelts 0) (error "indexed empty ring")
	(let* ((hd (car ring))  (tl (car (cdr ring)))  (vec (cdr (cdr ring)))
	       (index (s2c-mod index numelts))
	       (vec-index (s2c-mod (+ index hd) 
				      (length vec))))
	  (aref vec vec-index)))))
;;;=========================================================================


;;; Now do the user's customization...

(defvar Scheme->C-load-hook nil
  "This hook is run when s2c-gnuemacs is loaded in.
This is a good place to put keybindings.")
	
(run-hooks 'Scheme->C-load-hook)

