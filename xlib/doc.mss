Using the X11 C library from Scheme->C
--------------------------------------

One of the goals of the Scheme->C project has been to produce a Lisp which is
able to co-exist with other languages.  One use for such a language is as
"glue" for constructing X window applications. As a first step down this path,
a set of interfaces to X11's Xlib have been generated.  These allow a Scheme
programmer to execute X applications written in Scheme within the Scheme
interpreter, or as stand-alone Scheme programs.


An Example
----------

Before going into any detail, an example is in order.  This example is a Scheme
version of the initial sample program from Oliver Jones' book, "Introduction to
the X Window System":

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
	  (xstorename dpy window "Hello, World  in Scheme->C using Xlib")
	  (xseticonname dpy window "hello")
	  (xsetbackground dpy gc background)
	  (xsetforeground dpy gc foreground)
	  (xselectinput dpy window (+ buttonpressmask
	  			      (+ keypressmask exposuremask)))
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
			   (equal? (ylookupstring+ event) "q"))
		      (xfreegc dpy gc)
		      (xdestroywindow dpy window)
		      (xclosedisplay dpy))
		     (else (loop))))))

(define (MAIN clargs) (hello-world))

The window system operations are confined to the procedure HELLO-WORLD.  It
starts with a LET* construct which sequentially binds variables.  DPY is bound
to the display pointer returned by xopendisplay, which is an interface
procedure to XOpenDisplay.  As with other Xlib interfaces to Scheme, the caller
provides a Scheme string when a null-terminated string is expected.  Since
XOpenDisplay returns a single value, it is returned as the value of
xopendisplay. Where possible, the values returned by the Xlib interfaces are
type tagged to allow runtime type checking.  Thus on a successful call to
xopendisplay, one gets back a dotted-pair of the form:  (DISPLAYP . 272961004).
If the display couldn't be opened, then xopendisplay would return (DISPLAYP .
0) and the predicate NULL-POINTER? would return #T.

The creation of the graphics context GC shows two more facets of the Xlib
interface.  First, since all interfaces are type checked as much as possible,
xcreategc wants not just any pointer, but a pointer to an XGCValues struct as
one of its arguments.  In order to create an instance of that struct, one calls
make-xgcvalues which returns a dotted pair of the form: (XGCVALUESP . "").
There, the identifier identifies the type of object, and the string is the
object.

Following the creation of an XEvent struct, the window is decorated, events
selected, and then the window is mapped.  In the call to xselectevent, one can
see the one-to-one translation between Xlib constants and case-insensitive
Scheme globals.

Following this setup is the event loop.  Here, one can see structure access in
action.  The function xevent-type extracts the type from an XEvent structure.
Once the particular event type has been discovered, the appropriate access
functions can be used.  Thus on a button press event, the coordinates of the
button can be extracted by xevent-xbutton-x and xevent-xbutton-y.  It also
contains one example of the use of an augmented interface, the call to
ylookupstring. Here, a simplified version of XLookupString returns the key
string in a straight-forward manner.  To differentiate such functions from the
standard Xlib interfaces, they have the x in their name replaced by y.


Xlib Constants
--------------

Having given a flavor of the Xlib interfaces in this example, it is now
appropriate to examine their translation to Scheme in detail. The simplest
items are those which are unsigned integer constants. These are found in such
files as X.h, Xatom.h, and Xutil.h.  These are translated on a one-to-one basis
to top level Scheme values which have the same name and value.  Inspite of the
fact that Scheme is insensitive to case, this translation has only caused
problems in translating the constants found in Xkeysym.h.  There, there are
symbols for upper case letters of the form XK_A and symbols for lower case
letters of the form XK_a.  In order to get around this, XK_A is represented as
xk_a and XK_a is represented as xk_lca.


Simple Data Types
-----------------

Many objects in Xlib are defined by the type XID which in turn is defined as an
unsigned long value.  Examples of such objects are Window, Drawable, Font,
Pixmap, Cursor, Colormap, GContext, and KeySym.  These are represented in
Scheme as positive integers.


Unions and Structs
------------------

The Scheme interfaces provide functions to create and access user visible Xlib
structs and unions.  For example, Xcolor which is defined as:

	typedef  struct{
	    	 unsigned long pixel;
	         unsigned short red, green, blue;
		 char flags;
	         char pad;
	} XColor;

is handled within Scheme as follows.  An instance of an XColor struct is
represented by a pair consisting of the type tag XCOLORP (denoting a pointer to
an XColor struct) and either a string or a number.  The first form is used to
represent an XColor structure within the Scheme system, and the second is used
to denote one within Xlib.

An instance of XColor is created by the function:

	(MAKE-XCOLOR)

which returns a pair of the form:  (XCOLORP . "").  Any object may be tested to
see if it is a pointer to an XColor struct by:

	(ISA-XCOLORP? <any>)

For example, (ISA-XCOLORP? (MAKE-XCOLOR)) evaluates to #T.

Fields within an XColor struct may be accessed by the following functions:

	(XCOLOR-PIXEL <xcolor>)
	(XCOLOR-RED <xcolor>)
	(XCOLOR-GREEN <xcolor>)
	(XCOLOR-BLUE <xcolor>)
	(XCOLOR-FLAGS <xcolor>)
	(XCOLOR-PAD <xcolor>)

Fields within an XColor struct may be set by:

	(XCOLOR-PIXEL! <xcolor> <value>)
	(XCOLOR-RED! <xcolor> <value>)
	(XCOLOR-GREEN! <xcolor> <value>)
	(XCOLOR-BLUE! <xcolor> <value>)
	(XCOLOR-FLAGS! <xcolor> <value>)
	(XCOLOR-PAD! <xcolor> <value>)


Simple Arrays
-------------

A simple array is an array whose elements are not union or struct objects.
Such array types have names ending in A.  For example, UNSIGNEDA is type of an
array of unsigned integers.  One can make an new instance of an array of
unsigned integers by:

	(MAKE-UNSIGNEDA <length>)

test if an object is a pointer to such an array by:

	(ISA-UNSIGNEDAP? <any>)

and determine the number of objects in the array by:

	(UNSIGNEDA-LENGTH <unsignedap>)

Entries in such an array can be accessed by:

	(UNSIGNEDA <unsignedap> <index>)

and values set in entries by:

	(UNSIGNEDA! <unsignedap> <index> <value>)

Finally, one can convert between lists and arrays by:

	(UNSIGNEDA->UNSIGNED-LIST <unsignedap>)
	(UNSIGNED-LIST->UNSIGNEDA <list of unsigned numbers>)

Another type of array often used with Xlib is CHARA which is an array of
unsigned 8-bit integers.  Similar creation and access procedures exist for it.


Arrays of Struct and Union types
--------------------------------

Functions for operating on arrays of structures are defined in a similar
manner.  Here though, functions are not defined which allow access to fields in
the structures while they are in the array.  Thus for the type XColor, the
following functions are defined:

	(XCOLORA-LENGTH <xcolorap>)
	(XCOLORA->XCOLOR-LIST <xcolorap>)
	(XCOLOR-LIST->XCOLORA <list of xcolorp>)


Available X11 Data Definitions
------------------------------

Using these techniques, the data definitions found in the following files have
been converted:

	X.h
	Xatom.h   
	Xlib.h
	Xresource.h
        Xutil.h
	cursorfont.h
	keysymdef.h  	(LATIN1 and DEC Private are only options)


Utility Functions
-----------------

Several utility functions have been constructed to assist the user in
manipulating pointers and bit masks for the Xlib interfaces.  They are:

(NULL-POINTER? <x>)
	predicate which returns #T iff <x> is a null pointer.

(POINTER-TYPE <x>)
	returns the type name of the pointer <x>.

(POINTER-VALUE <x>)
	returns the pointer value of the pointer <x>.

(TYPE/VALUE->POINTER type value)
	constructs a pointer with type <type> and value <value>.  This
	function is commonly used to construct "magic" pointer values, such
	as visual pointer with the value copyfromparent for a call to
	xcreatewindow.


Xlib Procedure Interfaces
-------------------------

Having described the data representation conventions, it is now appropriate to
turn to the procedure interfaces.  Using a few simple conventions, access to
all procedures defined in the book "X Window System" by Gettys, Newman, and
Scheifler has been provided from Scheme.  Efforts have been made to not change
how these functions act so that existing documentation can be used.

The argument passing conventions are:

	- Xlib arguments which are null terminated strings can be
	  supplied as Scheme strings.

	- Xlib arguments which return a value of known size are
	  omitted.  For example, one does not call xnextevent with a
	  pointer to an XEvent object.  However, one must provide the
	  the return arguments for XAllocColorCells as the array and
	  its length are computed at runtime.

	- Xlib arguments which are pointers to some object must be of
	  the correct object type.  

The value return conventions are:

	- Xlib procedures which do not return a value, return #F.

	- Xlib procedures which return a single value, return it.

	- Xlib procedures which return multiple values return them as
	  a list.

	- Xlib procedures which return a pointer to a null terminated
	  string return a Scheme string, unless the user must call to
	  XFree to return the string in which case a charAP pointer is
	  returned.


Augmented Xlib Procedure Interfaces
-----------------------------------

As earlier noted, a few functions have been augmented by adding additional
procedural interfaces.  These procedures are identified by the fact that their
names start with Y rather than X.  In some cases, the Xlib versions still
exist, but in others they do not as the interface was not appropriate for
access from Scheme.  The functions that exist to date are:

(YFREE <any-pointer>)
	returns storage, where <any-pointer> is either a tagged or
	untagged pointer.

(YQUERYTREE <display-ptr> <window>)
	returns a list of three	elements:  the root window, the parent
	window of <window>, and a list of the children of <window>.

(YGETATOMNAME <display-ptr> <atom>)
	returns a string which is the name of <atom>.

(YLISTPROPERTIES <display-ptr> <window>)
	returns a list of atoms which indicate the properties that are
	associated with <window>.

(YLISTFONTS <display-ptr> <pattern> <maxnames>)
	returns a list of font names (less than or equal to <maxnames>
	in length) which match <pattern>.

(YLISTFONTSWITHINFO <display-ptr> <pattern> <maxnames>)
	returns a list of  lists (less than or equal to	<maxnames> in
	length) which match <pattern>.  Each list element is a list
	of a font name and an XFontstruct.

(YSETFONTPATH <display-ptr> <directories>)
	sets the font search path to the list of strings
	<directories>.

(YGETFONTPATH <display-ptr>)
	returns the list of directories which is the current font
	search path.

(YLISTINSTALLEDCOLORMAPS <display-ptr> <window>)
	returns a list of the currently installed colormaps.

(YNEXTEVENT <display-ptr> <event>)
	returns the next event in the event structure <event>.

(YSELECT <display-ptr> <input-port>... <seconds> <microseconds>)
	waits up to <seconds> <microseconds> for events for <display-ptr>
	or input on one of the <input-port>'s.  If events arrive then
	<display-ptr> is returned, if input arrives then the appropriate
	<input-port> is returned, otherwise #F is returned. 

(YGETMOTIONEVENTS <display-ptr> <window> <start> <stop>)
	returns a list of motion events.  Each event is a list of
	three elements:  time, x-position, and y-position.

(YSETSTANDARDPROPERTIES <display-ptr> <window> <name> <icon_string>
			<icon_pixmap> <commands> <hints>)
	sets the <window>'s standard properties.  Arguments are as
	expected by XSetStandardProperties, except that <commands> is
	a list of strings.

(YFETCHNAME <display-ptr> <window>)
	returns the <window>'s name or #F if it is unnamed.

(YGETICONNAME <display-ptr> <window>)
	returns the <window> icon's name or #F if it is unnamed.

(YSETCOMMAND <display-ptr> <window> <commands>)
	sets the <window>'s commands to the list of strings
	<commands>.

(YGETWMHINTS <display-ptr> <window>)
	returns either the XWMHints for <window> or #F when no hints
	have been provided.

(YSETICONSIZES <display-ptr> <window> <iconsizelist>)
	sets the icon sizes to the list of XIconSize structures.

(YGETICONSIZES <display-ptr> <window>)
	returns either a list of XIconSize hints, or #F when no hints
	have been provided.

(YSETCLASSHINT <display-ptr> <window> <name-class>)
	sets the <window> class hint to the list of two strings
	<name-class>.

(YGETCLASSHINT <display-ptr> <window>)
	returns either a list of <window> name and class, or #F when
	no class hints have been supplied.

(YLOOKUPSTRING <event>)
	returns the keyboard string associated with the event.

(YLOOKUPSTRING <event> #T)
(YLOOKUPSTRING <event> #T <xcomposestatus>)
	returns a list consisting of the keyboard string and the
	KeySym associated with the event.

(YLOOKUPSTRING <event> #F <xcomposestatus>)
	returns a list of the keyboard string associated with the
	event and #F.

(YRMGETRESOUCE <data-base> <name> <class>)
	return #F if the item is not in the database, or its value.
	Only String values are supported.

(YRMMERGEDATABASES <new-data-base> <existing-data-base>)
	merges two databases and returns the resulting database.


Primitive Xlib Interface
------------------------

When you want to get your hands directly on the C interface to Xlib,
you may.  For each Xlib procedure Proc, Proc* is the name of the
primitive procedure.


Availability
------------

The Xlib interfaces are found in Scheme->C interpreters named scixl.  Libraries
containing the interfaces scxl.a.  In order to correctly link with the
interfaces, a compiled program must include a (with xlib) clause in its module
expression.  When a program is compiled which uses these interfaces, warnings
will be generated as there are no external declarations.  Stand-alone programs
produced in this manner are large as they contain all the Xlib interfaces.

Smaller programs can be produced by having the application include the inline
versions of the interfaces found in the .sch files and then linking with the
appropriate object files.
