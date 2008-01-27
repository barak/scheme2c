;;;
;;; readprint test script
;;;

;;; boolean

#t
#T
#f
#F

;;; identifier

apple
Apple
\apple
\1+
+
-
a.b

;;; number 

1
-1
+1
+#b11
+#o11
+#xa1
#B11
#O11
#XA1
1.3
-1.3
1.3E2
-1.3E2

;;; character

#\a
#\A
#\tab
#\newline
#\linefeed
#\formfeed
#\return
#\space
#\SPAce
#\\
#\ 		;;; A space follows the \
#\		;;; A tab follows the \

;;; string

""
"This is a string"
"This is a string with \"embedded\" quote marks"
"This string covers
two lines"

;;; lists

()
(a)
(a . b)
(a b c d)
(a . (b . (c . (d . ()))))
((a b)(c d)(e f)(g h))
( a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l
  m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x
  y z a b c d e f g h i j k l)

;;; vector

#()
#(1)
#(1 2 3 4)
#(#(1 2) #(2 3) #(3 4))
#( a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l
   m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x
   y z a b c d e f g h i j k l)

;;; quote and quasiquote

'a
'(1 2 3)
,b
,@c
`(a b c)
`(a ,b ,@c)


