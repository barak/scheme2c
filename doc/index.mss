@Define(Index=Text, Columns 2, ColumnMargin .25 in, Boxed, Fill, Indent 0,
        Spacing 1)

@Style(FontFamily <TimesRoman>, Singlesided)

@Begin(Heading)
Scheme->C Index to the
Revised@+(4) Report on the Algorithmic Language Scheme
15 March 1993
@End(Heading)

@Begin(Index)

@b(Implementation Notes)

@t(Scheme->C) is an implementation of the language Scheme as
described in the @i[Revised@+(4) Report on the Algorithmic Language
Scheme] (@i[LISP Pointers], Volume IV, Number 3, July-September 1991).

The implementation is known to not conform to the required portions of
the report in the following ways:

@begin(itemize)
The syntax for numbers reflects the underlying C implementation.
Scheme programs may not use the numeric prefixes @t(#i)
and @t(#e), and numbers may not contain @t(#) as a digit.

Numerical input and output uses the facilities of the
underlying C implementation.  As a result, the constraints of
section 6.5.6 may not be satisfied.

As /, quotient, and remainder depend upon C's behavior for
negative fixed arguments (which is undefined), those doing ports
must verify their correct operation.

Implementations that do not handle arithmetic overflow traps
may return incorrect results when an overflow occurred during
the operation.

The control flow of compiled programs is constrained by the
underlying C implementation.  As a result, some tail calls are not compiled as
tail calls.
@end(itemize)

The implementation has been extended beyond the report in the
following ways:

@begin(itemize)

@begin(verbatim)
@r(Additional procedures:)
@t(
%list->record
%record
%record->list
%record-length
%record-lookup-method
%record-methods
%record-methods-set!
%record-ref    %record-set!
%record?
after-collect
backtrace
bit-and        bit-lsh
bit-not        bit-or
bit-rsh        bit-xor
c-byte-ref     c-byte-set!
c-double-ref   c-double-set!
c-float-ref    c-float-set!
c-int-ref      c-int-set!
c-longint-ref  c-longint-set!
c-longunsigned-ref
c-longunsigned-set!
c-s2cuint-ref  c-s2cuint-set!
c-shortint-ref  
c-shortint-set!
c-shortunsigned-ref
c-shortunsigned-set!
c-sizeof-double
c-sizeof-float
c-sizeof-int   c-sizeof-long
c-sizeof-s2cuint
c-sizeof-short c-sizeof-tscp
c-string->string
c-tscp-ref     c-tscp-set!
c-unsigned-ref
c-unsigned-set!
catch-error    close-port
collect	       collect-all        
collect-info   cons*
define-system-file-task
echo
enable-sytem-file-tasks
error	       eval
exit
expand         expand-once
fixed->float   fixed?
float->fixed   float?
flush-buffer   format
get-output-string
getprop        getprop-all
implementation-information
last-pair
open-file
open-input-string
open-output-string
optimize-eval
port->stdio-file
pp
proceed        proceed?
putprop
read-eval-print
remove         remove!
remq           remq!
remv           remv!
remove-file    rename-file
reset
reset-bpt      reset-error
scheme-byte-ref
scheme-byte-set!
scheme-int-ref
scheme-int-set!
scheme-s2cuint-ref
scheme-s2cuint-set!
scheme-tscp-ref
scheme-tscp-set!
set-gcinfo!
set-generation-limit!
set-maximum-heap!
set-stack-size!
set-time-slice!
set-top-level-value!
set-write-circle!
set-write-length!
set-write-level!
set-write-pretty!
set-write-width!
signal
stack-size
string->uninterned-symbol
system
time-of-day
time-slice
top-level      
top-level-value
uninterned-symbol?
wait-system-file
weak-cons
when-unreferenced
write-circle    write-count
write-length    write-level
write-pretty	write-width
)
@end(verbatim)

@begin(verbatim)
@r(Additional syntax:)
@t(
bpt
define-c-external
define-constant
define-external
define-in-line
define-macro   include
module
trace          untrace
unbpt
unless         when
)
@end(verbatim)

@begin(verbatim)
@r(Additional variables:)
@t(
%record-prefix-char
%record-read
*args*         *bpt-env*
debug-output-port
*error-env*
*error-handler*
*frozen-objects*
*obarray*      *result*
*scheme2c-result*
stderr-port    stdin-port
stdout-port
trace-output-port
)
@end(verbatim)

@end(itemize)

@b(Index)

@t(") delimits strings.  Inside a string constant, a @t(") is represented
by @t(\"), and a @t(\) is represented by @t(\\).  Revised@+(4) 25.

@t(#() denotes the start of a vector.  Revised@+(4) 26.

@t(#\)@i(character) written notation for characters.  Revised@+(4) 24.

@t(#\formfeed) ASCII form feed character (#o14).  Revised@+(4) 24.

@t(#\linefeed) ASCII line feed character (#o12).  Revised@+(4) 24.

@t(#\newline) new line character (#o12).  Revised@+(4) 24.

@t(#\return) ASCII carriage return character (#o15).  Revised@+(4) 24.

@t(#\space) ASCII space character (#o40).  Revised@+(4) 24.

@t(#\tab) ASCII tab character (#o11).  Revised@+(4) 24.

@t(#b) binary radix  prefix.  Revised@+(4) 20.

@t(#d) decimal radix prefix.  Revised@+(4) 20.

@t(#f) boolean constant for false.  Note that while the empty list
@t[()] is also treated as a false value in conditional expressions,
it is not the same as @t(#f).  Revised@+(4) 13.

@t(#o) octal radix prefix.  Revised@+(4) 20.

@t(#t) boolean constant for true.  Revised@+(4) 13.

@t(#x) hex radix prefix.  Revised@+(4) 20.

(@t[%list->record] @i(list)) returns a newly created @i(record) whose
elements are the members of @i(list).

(@t[%record] @i(expression) ...) returns a newly created
@i(record) whose elements contain the given arguments.

(@t[%record->list] @i(record)) returns a newly created
@i(list) of the objects contained in the elements of
@i(record).

(@t[%record-length] @i(record)) returns the number of elements
in @i(record).

(@t[%record-lookup-method] @i(record) @i(method)) returns
either the @i(record)'s method @i(procedure) or @t(#f) when no method is
defined for the method named @i(method).  All records have
defaults for the following methods: 
@t(%to-display), @t(to-equal?), @t(%to-eval), and @t(%to-write).  

(@t[%record-methods] @i(record)) returns a list of @i(pairs)
that denote the methods for @i(record).  Each @i(pair) is composed of a
@i(symbol) denoting the method name and the method @i(procedure).

(@t[%record-methods-set!] @i(record) @i(methods)) sets the
methods associated with @i(record) to @i(methods), a @i(list) of method
@i(pairs).

@t[%record-prefix-char] is the character that denotes a
@i(record).

@t[%record-read] is a @i(procedure) that is called to read a
@i(record). When @t(read) encounters the value of
@t[%read-prefix-char] following a @t(#), it calls
@t(%record-read) with the current @i(input-port) as its
argument to input the record.  The value read is the value
returned by this procedure.

(@t[%record-ref] @i(record) @i(integer)) returns the contents of element
@i(integer) of @i(record).  The first element is 0.

(@t[%record-set!] @i(record) @i(integer)) sets element
@i(integer) of @i(record) to @i(expression).

(@t[%record?] @i(expression)) @i(predicate) that returns
@t[#t] when @i(expression) is a @i(record).

@t[%to-display] method to @t(display) a @i(record).  When
@t(display) encounters a record, it calls the record's
@t[%to-display] method with the following arguments:  the
record, the output port, the number of spaces to indent (or
@t[#f]), the number of levels to print (or @t[#f]), the length
of lists, vectors, or records to print (or @t[#f]), and a list
of pairs, vectors, and records already seen (or @t[#f]).  The
method returns either @t[#f] indicating no further action is
to be taken, or a pair indicating that the car of the pair
is to be output.  For example, if @t[%record-prefix-char] is
@t[#\~], the method could be: @t[(lambda (r port . ignore)
(display "#~" port) (list (%record->list r)))].

@t[%to-equal?] method to compare a @i(record) to any value
using @t(equal?).  The method @i(prediate) is called with the
@i(record) and the comparison value as its arguments.  The
default method is @t[eq?]. 

@t[%to-eval] method to evaluate a @i(record).  @t[Eval]
evaluates a @i(record) by returning the value of calling the
@i(record)'s @t[%to-eval] method with the @i(record) as the
argument.  The default method is @t[(lambda (x) x)].

@t[%to-write] method to @t(write) a @i(record).  When
@t(write) encounters a record, it calls the record's
@t[%to-write] method with the following arguments:  the
record, the output port, the number of spaces to indent (or
@t[#f]), the number of levels to print (or @t[#f]), the length
of lists, vectors, or records to print (or @t[#f]), and a list
of pairs, vectors, and records already seen (or @t[#f]).  The
method returns either @t[#f] indicating no further action is
to be taken, or a pair indicating that the car of the pair is
to be output.  For example, if @t[%record-prefix-char] is
@t[#\~], the method could be: @t[(lambda (r port . ignore)
(display "#~" port) (list (%record->list r)))].

@t(')@i(expression) abbreviation for (@t(quote) @i(expression)).  Revised@+(4)
7, 16.

(@t(*) @i(number) ...) returns the product of its arguments.
Revised@+(4) 21.

@t(*args*) arguments of the @i(procedure) when a breakpoint has been
hit.  The value of this symbol will be used as the arguments when the
user continues from the breakpoint.  See @t(bpt), @t(proceed).

@t(*bpt-env*) list of environments when a breakpoint is encountered
in an embedded @t[Scheme->C] system.

@t(*error-env*) list of environments when an error occurs in an
embedded @t[Scheme->C] system.

@t[*error-handler*] the error handling @i(procedure).  See @t(error).

@t[*frozen-objects*] list of objects that are never moved by the
garbage collector.  Scheme programs can use this to "lock down" objects
in memory before passing them to programs written in other languages.

@t(*obarray*) is a vector of lists of symbols.  It is used by
@t(read) to assure that symbols written and then read back in are
@t(eqv?).  See @i(interned), Revised@+(4) 18.

@t(*result*) result of the @i(procedure) when a breakpoint has been
hit.  The value of this symbol be returned as the value of the
@i(procedure) after the user continues from the breakpoint.  See
@t(bpt), @t(proceed).

@t(*scheme2c-result*) normal result of computation in an embedded
@t[Scheme->C] system.

@t(`)@i(back-quote-template) abbreviation for (@t(quasiquote)
@i(back-quote template)). Revised@+(4) 11.

@t[(] used to group and notate lists.  Revised@+(4) 5.

@t[()] the empty list.  Revised@+(4) 15.

@t[)] used to group and notate lists.  Revised@+(4) 5.

(@t(+) @i(number) ...) returns the sum of its arguments.
Revised@+(4) 21.

@t(,)@i(expression) abbreviation for (@t(unquote) @i(expression))
that causes the expression to be replaced by its value in the
@i(back-quote-template).  Revised@+(4) 11.

@t(,@@)@i(expression) abbreviation for (@t(unquote-splicing)
@i(expression)) that causes the expression to be evaluated and
"spliced" into the @i(back-quote-template). Revised@+(4) 11.

(@t(-) @i(number) @i(number) ...) with two or more arguments, this
returns the difference of its arguments, associating to the left.
With one argument it returns the additive inverse of the argument.
Revised@+(4) 21.

@t[-C] command line flag to @t(scc) that will cause the compiler to
compile the Scheme files @i(source)@t(.sc) to C source in @i(source)@t(.c).
No further processing is performed.

@t[-I] @i(directory) command line flag to @t(scc) to supply a
directory to be searched by @t(include) when it is looking for a
source file.  When multiple flags are supplied, the directories are
searched in the order that the flags are specified.

@t[-LIBDIR] @i(directory) command line flag to @t(scc) to supply the
@i(directory) containing the files: predef.sc, objects.h, libsc.a,
and optionally libsc_p.a.

@t[-Ob] command line flag to @t(scc) that controls bounds checking.
When it is supplied to the compiler, no bounds checking code for
@i(vector) or @i(string) accesses will be generated.  Supplying this
flag is equivalent to supplying the flags @t(-f '*bounds-check*'
'#f').

@t[-Og] command line flag to @t(scc) that controls the generation of
stack-trace debugging code. When it is supplied to the compiler,
stack-trace code will not be generated.

@t[-On] command line flag to @t(scc) that controls number
representation. When it is supplied to the compiler, all numbers will
be assumed to be @i(fixed) integers.  Supplying this flag is
equivalent to supplying the flags @t(-f '*fixed-only*' '#t').

@t[-Ot] command line flag to @t(scc) that controls type error
checking. When it is supplied, no error checking code will be
generated. Supplying this flag is equivalent to supplying the flags
@t(-f '*type-check*' '#f').

@t[-e] command line flag to @t(sci).  When it is supplied, all text
read on the standard input file will be echoed on the standard output
file.

@t[-emacs] command line flag to @t(sci).  When supplied, the
interpreter assumes that it is being run by GNU emacs.

@t[-i] command line flag to @t(scc) that will combine the source and
object files into a Scheme interpreter.  Module names for files other
than Scheme source files must be supplied using the @t[-m] command
line flag.

@t[-log] command line flag to @t(scc) to log information internal to
the compiler.  Each type of compiler information is denoted by one of
the flags: @t[-source], @t[-macro], @t[-expand], @t[-closed],
@t[-transform], @t[-lambda], @t[-tree], @t[-lap], @t[-peep].  The
flag @t[-log] is equivalent to specifying the flags: @t[-source],
@t[-macro], @t[-expand], @t[-closed], @t[-transform], @t[-lambda], and
@t[-tree].

@t[-m] @i(module) command line flag to @t(scc) to specify the name of
a module that must be initialized by calling the procedure
@i(module__init).  Note that the Scheme compiler will downshift the
alphabetic characters in module names supplied in the @t(module)
directive.  Modules are initialized in the order that the @t[-m] command
flags are specified.

@t[-nh] command line flag to @t(sci).  When it is supplied, the
interpreter version header will not be printed on the standard output
file.

@t[-np] command line flag to @t(sci).  When it is supplied, prompts
for input from standard input will not be printed on standard output.

@t[-q] command line flag to @t(sci).  When it is supplied, the result
of each expression evaluation will not be printed on standard output.

@t[-pg] command line flag to @t(scc) that will cause it to produce
profiled code for run-time measurement using @i(gprof).  The profiled
library will be used in lieu of the standard Scheme library.

@t[-scgc] @i(flag) command line flag to any Scheme program that
controls the reporting of garbage collection statistics.  If @i(flag)
is set to 1, then garbage collection statistics will be printed on
stderr.  This flag will override @t[SCGCINFO].

@t[-sch] @i(integer) command line flag to any Scheme program to set
the initial heap size in megabytes.  If it is not supplied, and the
@t[SCHEAP] environment variable was not set, and the program did not
have a default, then the implementation dependent default is used.
This flag will override @t[SCHEAP].

@t[-scl] @i(integer) command line flag to any Scheme program to set
the full collection limit.  When more than this percent of the heap
is allocated following a generational garbage collection, then a full
garbage collection will be done.  The default value is 40.  This flag
will override @t[SCLIMIT].

@t[-scm] @i(symbol) command line flag to any Scheme program to cause
execution to start at the procedure that is the value of @i(symbol),
rather than at the main program.  Note that the Scheme @t(read)
procedure typically upshifts alphabetic characters.  Thus, to start
execution in the Scheme interpreter, one would enter @t[-scm
READ-EVAL-PRINT] on the command line.

@t[-scmh] @i(integer) command line flag to any Scheme program to set
the maximum heap size in megabytes.  If it is not supplied, and the
@t[SCMAXHEAP] environment variable was not set, then the maximum heap
size is five times the initial heap size. This flag will override
@t[SCMAXHEAP].

@t(.) denotes a dotted-pair: (@i(obj) @t(.) @i(obj)).  Revised@+(4) 15.

@t(.sc) file name extension for @t[Scheme->C] source files.

(@t(/) @i(number) ...) with two or more arguments, this returns the
quotient of its arguments, associating to the left.  With one
argument it returns the multiplicative inverse of the argument.
Revised@+(4) 21.

@t(;) indicates the start of a comment.  The comment continues until
the end of the line.  Revised@+(4) 5.

(@t(<) @i(number) @i(number) @i(number) ...) @i(predicate) that returns
@t(#t) when the arguments are monotonically increasing.
Revised@+(4) 21.

(@t(<=) @i(number) @i(number) @i(number) ...) @i(predicate) that returns
@t(#t) when the arguments are monotonically nondecreasing.  Revised@+(4) 21.

(@t(=) @i(number) @i(number) @i(number) ...) @i(predicate) that returns
@t(#t) when the arguments are equal.
Revised@+(4) 21.

@t(=>) used in a @t(cond) conditional clause.  Revised@+(4) 9.

(@t(>) @i(number) @i(number) @i(number) ...) @i(predicate) that returns
@t(#t) when the arguments are monotonically decreasing.  Revised@+(4) 21.

(@t(>=) @i(number) @i(number) @i(number) ...) @i(predicate) that returns
@t(#t) when the arguments are monotonically nonincreasing. Revised@+(4) 21.

@t(\) tells @t(read) to treat the character that follows it as a
letter when reading a symbol.  If the character is a lower-case
alphabetic character, it will not be upshifted.  Revised@+(4) 18.

@t(\") represents a @t(") inside a string constant.  Revised@+(4) 25.

@t(\\) represents a @t(\) inside a string constant.  Revised@+(4) 25.

(@t(abs) @i(number)) returns the magnitude of its argument.  Revised@+(4) 21.

(@t(acos) @i(number)) returns the arccosine of its argument.
Revised@+(4) 23.

@t(after-collect) is a variable in the top level environment.
Following each garbage collection, if its value is not @t(#f),
then it is assumed to be a procedure and is called with three
arguments:  the heap size in bytes, the currently allocated
storage in bytes, and the allocation percentage that will
cause a full garbage collection.  The value returned by the
procedure is ignored.

@i(alist) a list of @i(pairs).  Revised@+(4) 17.

(@t(and) @i(expression) ...) @i(syntax) for a conditional expression.
Revised@+(4) 9.

(@t(append) @i(list) ...) returns a list consisting of the
elements of the first @i(list) followed by the elements of the other
@i(lists).  Revised@+(4) 17.

(@t(apply) @i(procedure) @i(arg-list)) calls the @i(procedure) with the
elements of @i(arg-list) as the actual arguments.  Revised@+(4) 27.

(@t(apply) @i(procedure) @i(obj) ... @i(arg-list)) calls the
@i(procedure) with the list (@t(append) (@t(list) @i(obj) ...)
@i(arg-list)) as the actual arguments.  Revised@+(4) 27.

(@t(asin) @i(number)) returns the arcsine of its argument.
Revised@+(4) 23.

(@t(assoc) @i(obj) @i(alist)) finds the first @i(pair) in @i(alist) whose
@t(car) field is @t(equal?) to @i(obj).  If no such @i(pair) exists, then
@t(#f) is returned.  Revised@+(4) 17.

(@t(assq) @i(obj) @i(alist)) finds the first @i(pair) in @i(alist) whose
@t(car) field is @t(eq?) to @i(obj).  If no such @i(pair) exists, then
@t(#f) is returned.  Revised@+(4) 17.

(@t(assv) @i(obj) @i(alist)) finds the first @i(pair) in @i(alist) whose
@t(car) field is @t(eqv?) to @i(obj).  If no such @i(pair) exists, then
@t(#f) is returned.  Revised@+(4) 17.

(@t(atan) @i(number)) returns the arctangent of its argument.
Revised@+(4) 23.

(@t(atan) @i(number) @i(number)) returns the arctangent of its arguments.
Revised@+(4) 23.

(@t[backtrace]) displays the call stack where a breakpoint occurred.

@i(back-quote-template) list or vector structure that may contain
@t(,)@i(expression) and @t(,@@)@i(expression) forms.  Revised@+(4) 11.

(@t(begin) @i(expression) ...) @i(syntax) where @i(expression)'s are
evaluated left to right and the value of the last @i(expression) is
returned. Revised@+(4) 10.

@i(bindings) a @i(list) whose elements are of the form: (@i(symbol)
@i(expression)), where the @i(expression) is the initial value to
place in the location bound to the @i(symbol). Revised@+(4) 10.

(@t[bit-and] @i(number) ...) returns an unsigned
number representing the bitwise and of its 32-bit arguments.

(@t[bit-lsh] @i(number) @i(integer)) returns an unsigned
number representing the 32-bit value @i(number) shifted left
@i(integer) bits.

(@t[bit-not] @i(number) ...) returns an unsigned number
representing the bitwise not of its 32-bit argument.

(@t[bit-or] @i(number) ...) returns an unsigned number representing
the bitwise inclusive or of its 32-bit arguments.

(@t[bit-rsh] @i(number) @i(integer)) returns an unsigned
number representing the 32-bit value @i(number) shifted right
@i(integer) bits.

(@t[bit-xor] @i(number) ...) returns an unsigned number representing
the bitwise exclusive or of its 32-bit arguments.

@i(body) one or more @i(expressions) that are be executed in
sequence. Revised@+(4) 10.

(@t(boolean?) @i(expression)) @i(predicate) that returns
@t(#t) if @i(expression) is @t(#t) or @t(#f).  Revised@+(4) 13.

(@t(bpt)) @i(syntax) to return a list of the procedures that have
been breakpointed.

(@t(bpt) @i(symbol)) @i(syntax) to set a breakpoint on the
@i(procedure) that is the value of @i(symbol).  Each entry and exit
of the @i(procedure) will provide the user with an opportunity to
examine and alter the current state of the computation.  For
interactive @t[Scheme->C] systems, the computation is continued by
entering control-D.  The computation may be terminated and a return
made to the top level of the interpreter by entering @t{(top-level)}.
In embedded @t[Scheme->C] systems, @t[(proceed)] is used to continue
the computation, and the computation is abandoned by evaluating
@t[(reset-error)].See @t(*args*), @t(*result*), @t(top-level),
@t(unbpt).

(@t(bpt) @i(symbol) @i(procedure)) @i(syntax) to set a conditional
breakpoint on the @i(procedure) that is the value of @i(symbol).  A
breakpoint occurs when (@t(apply) @i(procedure) @i(arguments))
returns a true value.

(@t(c-byte-ref) @i(c-pointer) @i(integer)) returns the byte at the
@i(integer) byte of @i(c-pointer) as a @i(number).

(@t(c-byte-set!) @i(c-pointer) @i(integer) @i(number)) sets the byte
at the @i(integer) byte of @i(c-pointer) to @i(number) and returns
@i(number) as its value.

(@t(c-double-ref) @i(c-pointer) @i(integer)) returns the double at
the @i(integer) byte of @i(c-pointer) as a @i(number).

(@t(c-double-set!) @i(c-pointer) @i(integer) @i(number)) sets the
double at the @i(integer) byte of @i(c-pointer) to @i(number) and
returns @i(number) as its value.

(@t(c-float-ref) @i(c-pointer) @i(integer)) returns the float at
the @i(integer) byte of @i(c-pointer) as a @i(number).

(@t(c-float-set!) @i(c-pointer) @i(integer) @i(number)) sets the
float at the @i(integer) byte of @i(c-pointer) to @i(number) and
returns @i(number) as its value.

(@t(c-int-ref) @i(c-pointer) @i(integer)) returns the int at the
@i(integer) byte of @i(c-pointer) as a @i(number).

(@t(c-int-set!) @i(c-pointer) @i(integer) @i(number)) sets the
int at the @i(integer) byte of @i(c-pointer) to @i(number) and
returns @i(number) as its value.

(@t(c-longint-ref) @i(c-pointer) @i(integer)) returns the long int at the
@i(integer) byte of @i(c-pointer) as a @i(number).

(@t(c-longint-set!) @i(c-pointer) @i(integer) @i(number)) sets the
long int at the @i(integer) byte of @i(c-pointer) to @i(number) and
returns @i(number) as its value.

(@t(c-longunsigned-ref) @i(c-pointer) @i(integer)) returns the
unsigned long at the @i(integer) byte of @i(c-pointer) as a
@i(number).

(@t(c-longunsigned-set!) @i(c-pointer) @i(integer) @i(number)) sets the
unsigned long at the @i(integer) byte of @i(c-pointer) to @i(number) and
returns @i(number) as its value.

@i(c-pointer) a @i(number) that is the address of a structure
outside the Scheme heap, or a @i(string) that is a C-structure within
the Scheme heap.

(@t(c-s2cuint-ref) @i(c-pointer) @i(integer)) returns the
S2CUINT at the @i(integer) byte of @i(c-pointer) as a
@i(number).

(@t(c-s2cuint-set!) @i(c-pointer) @i(integer) @i(number)) sets the
S2CUINT at the @i(integer) byte of @i(c-pointer) to @i(number) and
returns @i(number) as its value.

(@t(c-shortint-ref) @i(c-pointer) @i(integer)) returns the short int
at the @i(integer) byte of @i(c-pointer) as a @i(number).

(@t(c-shortint-set!) @i(c-pointer) @i(integer) @i(number)) sets the
short int at the @i(integer) byte of @i(c-pointer) to @i(number) and
returns @i(number) as its value.

(@t(c-shortunsigned-ref) @i(c-pointer) @i(integer)) returns the
unsigned short at the @i(integer) byte of @i(c-pointer) as a
@i(number).

(@t(c-shortunsigned-set!) @i(c-pointer) @i(integer) @i(number)) sets
the unsigned short at the @i(integer) byte of @i(c-pointer) to
@i(number) and returns @i(number) as its value.

@t(c-sizeof-double) size (in bytes) of the C type double.

@t(c-sizeof-float) size (in bytes) of the C type float.

@t(c-sizeof-int) size (in bytes) of the C type int.

@t(c-sizeof-long) size (in bytes) of the C type long.

@t(c-sizeof-s2cuint) size (in bytes) of the C type S2CUINT
that is defined by @t[Scheme->C] to be an unsigned integer the
same size as a pointer.

@t(c-sizeof-short) size (in bytes) of the C type short.

@t(c-sizeof-tscp) size (in bytes) of the C type TSCP that is
defined by @t[Scheme->C] to represent tagged Scheme pointers.

(@t(c-string->string) @i(c-pointer)) returns a Scheme @i(string) that
is a copy of the null-terminated string @i(c-pointer).

(@t(c-tscp-ref) @i(c-pointer) @i(integer)) returns the
TSCP at the @i(integer) byte of @i(c-pointer).

(@t(c-tscp-set!) @i(c-pointer) @i(integer) @i(expression)) sets the
TSCP at the @i(integer) byte of @i(c-pointer)
to @i(expression) and returns @i(expression) as its value.

(@t(c-unsigned-ref) @i(c-pointer) @i(integer)) returns the unsigned
at the @i(integer) byte of @i(c-pointer) as a @i(number).

(@t(c-unsigned-set!) @i(c-pointer) @i(integer) @i(number)) sets the
unsigned at the @i(integer) byte of @i(c-pointer) to @i(number) and
returns @i(number) as its value.

@i(c-type) @i(syntax) for declaring the type of a non-Scheme
procedure, procedure argument, or global.  The allowed types are:
@t(pointer), @t(array), @t(char), @t(int), @t(shortint), @t(longint),
@t(unsigned), @t(shortunsigned), @t(longunsigned), @t(float),
@t(double), @t(tscp), or @t(void).

(@t(car) @i(pair)) returns the contents of the @t(car) field of the
@i(pair).  Revised@+(4) 16.

(@t(caar) @i(pair)) returns (@t(car) (@t(car) @i(pair))).
Revised@+(4) 16.

(@t(ca...r) @i(pair)) compositions of @t(car) and @t(cdr).
Revised@+(4) 16.

(@t(call-with-current-continuation) @i(procedure)) calls @i(procedure)
with the current continuation as its argument.  Revised@+(4) 28.

(@t(call-with-input-file) @i(string) @i(procedure)) calls @i(procedure)
with the @i(port) that is the result of opening the file @i(string)
for input.  Revised@+(4) 29.

(@t(call-with-output-file) @i(string) @i(procedure)) calls @i(procedure)
with the @i(port) that is the result of opening the file @i(string)
for output.  Revised@+(4) 29.

(@t(case) @i(key) @i(clause) @i(clause) ...) @i(syntax) for a
conditional expression where @i(key) is any expression, and each
@i(clause) is of the form ((@i(datum) ...) @i(expression)
@i(expression) ...).  The last clause may be an "else clause" of the
form (@t(else)  @i(expression) @i(expression) ...).  Revised@+(4) 9.

(@t[catch-error] @i(procedure)) calls @i(procedure) with no
arguments.  If an error occurs while executing @i(procedure), return
a string containing the error message.  Otherwise return a @i(pair) whose
@t[car] contains the procedure's value.

(@t(cdr) @i(pair)) returns the contents of the @t(cdr) field of the
@i(pair).  Revised@+(4) 16.

(@t(cd...r) @i(pair)) compositions of @t(car) and @t(cdr).
Revised@+(4) 16.

(@t(cddddr) @i(pair)) returns (@t(cdr) (@t(cdr) (@t(cdr) (@t(cdr) @i(pair))))).
Revised@+(4) 16.

(@t(ceiling) @i(number)) returns the smallest integer that is not
smaller than its arguments.  Revised@+(4) 22.

@t(char) @i(syntax) for declaring a non-Scheme procedure, procedure
argument, or global variable as the C type @t[char].  When a @t[char]
value must be supplied, an expression of type @i(character) must be
supplied.  When a @t[char] value is returned, a value of type
@i(character) will be returned.

(@t(char->integer) @i(character)) returns an @i(integer) whose value
is the ASCII character code of @i(character).  Revised@+(4) 25.

(@t(char-alphabetic?) @i(character)) @i(predicate) that
returns @t(#t) when @i(character) is alphabetic.  Revised@+(4) 25.

(@t(char-ci<=?) @i(character) @i(character)) @i(predicate) that
returns @t(#t) when the first @i(character) is less than or equal to
the second @i(character).  Upper case and lower case letters are
treated as though they were the same character.  Revised@+(4) 25.

(@t(char-ci<?) @i(character) @i(character)) @i(predicate) that
returns @t(#t) when the first @i(character) is less than the second
@i(character).  Upper case and lower case letters are treated
as though they were the same character. Revised@+(4) 25.

(@t(char-ci=?) @i(character) @i(character)) @i(predicate) that
returns @t(#t) when the first @i(character) is equal to the
second @i(character). Upper case and lower case letters are
treated as though they were the same character.  Revised@+(4) 25.

(@t(char-ci>=?) @i(character) @i(character)) @i(predicate) that
returns @t(#t) when the first @i(character) is greater than or equal
to the second @i(character). Upper case and lower case letters are
treated as though they were the same character. Revised@+(4) 25.

(@t(char-ci>?) @i(character) @i(character)) @i(predicate) that
returns @t(#t) when the first @i(character) is greater than the
second @i(character). Upper case and lower case letters are treated
as though they were the same character. Revised@+(4) 25.

(@t(char-downcase) @i(character)) returns the lower case value of
@i(character).  Revised@+(4) 25.

(@t(char-lower-case?) @i(letter)) @i(predicate) that returns
@t(#t) when @i(letter) is lower-case.  Revised@+(4) 25.

(@t(char-numeric?) @i(character)) @i(predicate) that returns
@t(#t) when @i(character) is numeric.  Revised@+(4) 25.

(@t(char-ready?) @i(optional-input-port)) @i(predicate) that returns
@t(#t) when a character is ready on the @i(optional-input-port).
Revised@+(4) 30.

(@t(char-upcase) @i(character)) returns the upper case value of the
@i(character).  Revised@+(4) 25.

(@t(char-upper-case?) @i(letter)) @i(predicate) that returns
@t(#t) when @i(letter) is upper-case.  Revised@+(4) 25.

(@t(char-whitespace?) @i(character)) @i(predicate) that
returns @t(#t) when @i(character) is a whitespace character.
Revised@+(4) 25.

(@t(char<=?) @i(character) @i(character)) @i(predicate) that
returns @t(#t) when the first @i(character) is less than or equal to
the second @i(character).  Revised@+(4) 24.

(@t(char<?) @i(character) @i(character)) @i(predicate) that
returns @t(#t) when the first @i(character) is less than the second
@i(character).  Revised@+(4) 24.

(@t(char=?) @i(character) @i(character)) @i(predicate) that
returns @t(#t) when the first @i(character) is equal to the second
@i(character).  Revised@+(4) 24.

(@t(char>=?) @i(character) @i(character)) @i(predicate) that
returns @t(#t) when the first @i(character) is greater than or equal
to the second @i(character).  Revised@+(4) 24.

(@t(char>?) @i(character) @i(character)) @i(predicate) that
returns @t(#t) when the first @i(character) is greater than the
second @i(character).  Revised@+(4) 24.

(@t[char?] @i(expression)) @i(predicate) that returns @t(#t)
when @i(expression) is a @i(character).  Revised@+(4) 24.

@i(character) Scheme object that represents printed characters.  See
@t(#\)@i(character), @t(#\)@i(character-name), Revised@+(4) 24.

(@t(close-input-port) @i(input-port)) closes the file associated with
@i(input-port). Revised@+(4) 30.

(@t(close-output-port) @i(output-port)) closes the file associated
with @i(output-port).  Revised@+(4) 30.

(@t(close-port) @i(port)) closes the file associated with @i(port).

(@t(collect)) invokes the garbage collector to perform a generational
collection.  Normally, garbage collection is invoked automatically by
the Scheme system.

(@t(collect-all)) invokes the garbage collector to perform a
full collection.  Normally, garbage collection is invoked
automatically by the Scheme system.

(@t(collect-info)) returns a @i(list) containing information about
heap and prcessor usage.  The items in the list (and their position)
are: number of bytes currently allocated (0), current heap size in
bytes (1), application processor seconds (2), garbage collection
processor seconds (3), maximum heap size in bytes (4), full
collection limit percent (5).

@i(complex number) complex numbers are not supported in @t[Scheme->C].
Revised@+(4) 18.

(@t(complex?) @i(expression)) @i(predicate) that returns @t(#t) when
@i(expression) is a @i(complex number).  All @t[Scheme->C] @i(numbers)
are complex. Revised@+(4) 20.

(@t(cond) @i(clause) @i(clause) ...) @i(syntax) for a conditional
expression where each @i(clause) is of the form (@i(test)
@i(expression) ...) or (@i(test) @t(=>) @i(procedure)).  The last
@i(clause) may be of the form (@t(else) @i(expression) @i(expression)
 ...).  Revised@+(4) 9.

(@t(cons) @i(expression)@-(1) @i(expression)@-(2)) returns a newly
allocated @i(pair) that has @i(expression)@-(1) as its @t(car), and
@i(expression)@-(2) as its @t(cdr). Revised@+(4) 16.

(@t(cons*) @i(expression) @i(expression) ...) returns an object
formed by consing the @i(expressions) together from right to left. If
only one @i(expression) is supplied, then that @i(expression) is
returned.

(@t(cos) @i(number)) returns the cosine of its argument.  Revised@+(4)
23.

(@t(current-input-port)) returns the current default input @i(port).
Revised@+(4) 30.

(@t(current-output-port)) returns the current default output @i(port).
Revised@+(4) 30.

@t(debug-output-port) @i(port) used for interactive debugging output.
The default value is the same as @t(stderr-port).

(@t(define) @i(symbol) @i(expression)) @i(syntax) that
defines the value of @i(expression) as the value of either a
top-level symbol or a local variable.  Revised@+(4) 12.

(@t(define) (@i(symbol) @i(formals)) @i(body)) @i(syntax)
that defines a @i(procedure) that is either the value of a
top-level symbol or a local variable. Revised@+(4) 12.

(@t(define) (@i(symbol) @t(.) @i(formal)) @i(body)) @i(syntax) that
defines a @i(procedure) that is either the value of a top-level symbol
or a local variable. Revised@+(4) 12.

(@t(define-c-external) @i(symbol) @i(c-type) @i(string)) @i(syntax)
for a compiler declaration that defines @i(symbol) as a non-Scheme
global variable with the name @i(string) and the type @i(c-type).

(@t(define-c-external) (@i(symbol) @i(c-type)@-(1)...)
@i(c-type)@-(2) @i(string)) @i(syntax) for a compiler declaration
that defines @i(symbol) as a non-Scheme procedure with arguments of
the type specified in the list @i(c-type)@-(1).  The procedure's name
is @i(string) and it returns a value of type @i(c-type)@-(2).

(@t(define-c-external) (@i(symbol) @i(c-type)@-(1)... .
@i(c-type)@-(2)) @i(c-type)@-(3) @i(string)) @i(syntax) for a
compiler declaration that defines @i(symbol) as a non-Scheme
procedure that takes a variable number of arguments.  The types of
the initial arguments are specified by the  list @i(c-type)@-(1).
Any additional arguments must be of the type @i(c-type)@-(2).  The
procedure's name is @i(string) and it returns a value of type
@i(c-type)@-(3).

(@t(define-constant) @i(symbol) @i(expression)) @i(syntax) that
defines a macro that replaces all occurences of @i(symbol) with the
value of @i(expression), evaluated at the time of the definition.

(@t(define-external) @i(symbol)@-(1) @i(symbol)@-(2)) @i(syntax) for
a compiler declaration that @i(symbol)@-(1) is defined in @i(module)
@i(symbol)@-(2).

(@t(define-external) @i(symbol) @t(TOP-LEVEL)) @i(syntax) for a
compiler declaration that @i(symbol) is a top-level symbol.  Its
value is to be found via the @t(*obarray*).

(@t(define-external) @i(symbol)@-(1) @t(TOP-LEVEL) @i(symbol)@-(2))
@i(syntax) for a compiler declaration that @i(symbol)@-(1) is a
top-level symbol that is known to be defined in @i(module)
@i(symbol)@-(2).  Its value is to be found via the @t(*obarray*).

(@t(define-external) @i(symbol) @t("") @i(string)) @i(syntax) for a
compiler declaration that @i(symbol) has the external name
@i(string).

(@t(define-external) @i(symbol) @i(string)@-(1) @i(string)@-(2))
@i(syntax) for a compiler declaration that @i(symbol) is in the
@i(module) @i(string)@-(1) and has the external name
@i(string)@-(1)_@i(string)@-(2).

(@t(define-external) (@i(symbol)@-(1) @i(formals)) @i(symbol)@-(2))
@i(syntax) for a compiler declaration that @i(symbol)@-(1) is a
Scheme @i(procedure) defined in @i(module) @i(symbol)@-(2).

(@t(define-external) (@i(symbol)@-(1) @t(.) @i(formal))
@i(symbol)@-(2)) @i(syntax) for a compiler declaration that
@i(symbol)@-(1) is a Scheme @i(procedure) defined in @i(module)
@i(symbol)@-(2).

(@t(define-external) (@i(symbol) @i(formals)) @t("") @i(string))
@i(syntax) for a compiler declaration that @i(symbol) is a
@i(procedure) that has the external name @i(string).

(@t(define-external) (@i(symbol) @t(.) @i(formal)) @t("") @i(string))
@i(syntax) for a compiler declaration that @i(symbol) is a
@i(procedure) that takes a variable number of arguments and has the
external name @i(string).

(@t(define-external) (@i(symbol) @i(formals)) @i(string)@-(1)
@i(string)@-(2)) @i(syntax) for a compiler declaration that
@i(symbol) is a @i(procedure) in the @i(module) @i(string)@-(1) that
has the external name @i(string)@-(1)_@i(string)@-(2).

(@t(define-external) (@i(symbol) @t(.) @i(formal)) @i(string)@-(1)
@i(string)@-(2)) @i(syntax) for a compiler declaration that
@i(symbol) is a @i(procedure) in the @i(module) @i(string)@-(1) that
has the external name @i(string)@-(1)_@i(string)@-(2).

(@t(define-in-line) (@i(symbol) @i(formals)) @i(body)) @i(syntax)
that defines a @i(procedure) that is to be compiled "in-line".

(@t(define-in-line) (@i(symbol) @t(.) @i(formal)) @i(body))
@i(syntax) that defines a @i(procedure) that is to be compiled
"in-line".

(@t(define-macro) @i(symbol) (@t(lambda) (@i(form expander))
@i(expression) ...)) @i(syntax) that defines a macro expansion
procedure.  Macro expansion is done using the ideas expressed in
@i(Expansion-Passing Style: Beyond Conventional Macros), 1986 ACM
Conference on Lisp and Functional Programming, 143-150.

(@t(define-system-file-task) @i(file) @i(idle-task)
@i(file-task)) installs the @i(idle-task) and @i(file-task)
@i(procedures) for system file number @i(file).  When a Scheme
program reads from a port and no characters are internally
buffered, the @i(idle-task) for each system file is called.
Then, the @i(file-task) for each system file that has input
pending is called.  As long as no characters are available on
the Scheme port, the Scheme system will idle, calling the
@i(file-task) for each system file as input becomes available.
A system file task is removed by supplying @t(#f) as the
@i(idle-task) and @i(file-task).

(@t(delay) @i(expression)) @i(syntax) used together with the
procedure @t(force) to implement call by need.  Revised@+(4) 11.

(@t(display) @i(expression) @i(optional-output-port)) writes a
human-readable representation of @i(expression) to
@i(optional-output-port).  Revised@+(4) 31.

(@t[do] (@i(var) ...) (@i(test) @i(expression) ...) @i(command) ...)
@i(syntax) for an iteration construct.  Each @i(var) defines a local
variable and is of the form (@i(symbol) @i(init) @i(step)) or
(@i(symbol) @i(init)).  Revised@+(4) 11.

@t[double] @i(syntax) for declaring a non-Scheme procedure, procedure
argument, or global variable as the C type @t[double]. When a
@t[double] value must be supplied, an expression of type @i(number)
must be supplied.  When a @t[double] value is returned, a value of
type @i(number) is returned.

(@t(echo) @i(port)) turns off echoing on @i(port).

(@t(echo) @i(port) @i(output-port)) echos @i(port) on
@i(output-port).  All characters read from or written to @i(port)
are also written to @i(output-port).

@t(else) keyword in last @i(clause) of @t(cond) or @t(case) form.

@i(environment) the set of all variable bindings in effect at
some point in the program.  Revised@+(4) 6.

(@t(eof-object?) @i(expression)) @i(predicate) that returns
@t(#t) if @i(expression) is equal to the end of file object.
Revised@+(4) 30.

(@t(enable-system-file-tasks) @i(flag)) enables (@i(flag) is
@t(#t)) or disables (@i(flag) is @t(#f)) system file tasking
and returns the previous system file tasking state.  When the
value of flag is the symbol @t(wait), system file tasking is
enabled and the Scheme program is blocked until there are no
system file tasks.

(@t(eq?) @i(expression)@-(1) @i(expression)@-(2)) @i(predicate) that is
the finest test for equivalence between @i(expression)@-(1) and
@i(expression)@-(2).  Revised@+(4) 15.

(@t(equal?) @i(expression)@-(1) @i(expression)@-(2)) @i(predicate) that
is the coarsest test for equivalence between @i(expression)@-(1) and
@i(expression)@-(2).  Revised@+(4) 15.

(@t(eqv?) @i(expression)@-(1) @i(expression)@-(2)) @i(predicate) that is
the medium test for equivalence between @i(expression)@-(1) and
@i(expression)@-(2).  Revised@+(4) 13.

(@t[error] @i(symbol) @i(format-template) @i(expression) ...) reports
an error.  The procedure name is @i(symbol) and the error message is
produced by the @i(format-template) and optional @i(expressions).
The @i(procedure) error is equivalent to @t[(lambda x (apply
*error-handler* x))].  See @t(*error-handler*).

(@t[eval] @i(expression)) evaluates @i(expression).  Any macros in
@i(expression) are expanded before evaluation.

(@t[eval-when] @i(list) @i(expression) ...) @i(syntax) to evaluate
@i(expressions) when the current situation is in @i(list).  When this
form is evaluated by the Scheme interpreter and @t[eval] is a member
of the situation @i(list), then the expressions will be evaluated.
When this form is evaluated by the Scheme compiler and @t[compile] is
a member of the situation @i(list), then the expressions will be
evaluated within the compiler.  When this form is evaluated by the
Scheme compiler, and @t[load] is a member of the situation @i(list),
then the compiler will compile the form (@t[begin] @i(expression) ...)).

(@t[even?] @i(integer)) @i(predicate) that returns @t(#t) if
@i(integer) is even.  Revised@+(4) 21.

@i(exact) @ @ @i(fixed) numbers are exact, all other numbers are not.
Revised@+(4) 14.

(@t[exact->inexact] @i(number)) returns the @i(inexact) representation
of @i(number). Revised@+(4) 23.

(@t(exact?) @i(number)) @i(predicate) that returns @t(#t) if
@i(number) is @i(exact).  Revised@+(4) 21.

(@t(exit)) returns from the current @t[read-eval-print] procedure.

(@t(exp) @i(number)) returns exponential function of @i(number).
Revised@+(4) 22.

(@t(expand) @i(expression)) returns the value of @i(expression) after
all macro expansions.  See @t[define-macro].

(@t(expand-once) @i(expression)) returns the value of @i(expression)
after one macro expansion.  See @t[define-macro].

@i(expression) a Scheme construct that returns a value.  Revised@+(4) 7.

(@t[expt] @i[number]@-(1) @i[number]@-(2)) returns  @i[number]@-(1)
raised to the power @i[number]@-(2).  Revised@+(4) 23.

@t(fix) @i(format descriptor) for compatibility with Revised@+(3).

@i(fixed) @t[Scheme->C] internal representation for small @i(integer)s.  A
@i(fixed) value is represented in a "pointer size" word with two bits
used by the tag.  With 32-bit pointers, this yields a maximum value
of 536,870,911 and a minimum value of -536,870,912. 

(@t[fixed->float] @i(fixed)) returns the @i(float) representation of
@i(fixed).

(@t[fixed?] @i(expression)) @i(predicate) that returns @t[#t] when
@i(expression) is a @i(fixed).

@t[float] @i(syntax) for declaring a non-Scheme procedure, procedure
argument, or global variable as the C type @t[float]. When a
@t[float] value must be supplied, an expression of type @i(number)
must be supplied.  When a @t[float] value is returned, a value of
type @i(number) is returned.

@i(float) @t[Scheme->C] internal floating point representation.  This is
typically 64-bits.

(@t(float->fixed) @i(float)) returns the @i(fixed) @i(number)
that best represents the value of @i(float).

(@t[float?] @i(expression)) @i(predicate) that returns @t[#t]
if @i(expression) is a @i(float) value.

(@t[floor] @i[number]) returns the largest @i(integer) not larger than
@i(number).  Revised@+(4) 22.

(@t[flush-buffer] @i(optional-output-port)) forces output of all
characters buffered in @i(optional-output-port).

(@t[for-each] @i(procedure) @i(list) @i(list) ...) applies
@i(procedure) to each element of the @i(lists) in order.
Revised@+(4) 28.

(@t[force] @i(promise)) returns the forced value of a promise.
Revised@+(4) 28.

@i(formals) a @i(symbol) or a @i(list) of @i(symbols) that are the
arguments.  Revised@+(4) 8.

(@t(format) @t(#f) @i(format-template) @i(expression) ...) returns a
string that is the result of outputting the @i(expressions)
according to the @i(format-template).

(@t(format) @i(format-template) @i(expression) ...) returns a string
that is the result of outputting the @i(expressions) according to
the @i(format-template).

(@t(format) @i(output-port) @i(format-template) @i(expression) ...)
output the @i(expressions) to @i(output-port) according to the
@i(format-template).

(@t(format) @t[#t] @i(format-template) @i(expression) ...) output the
@i(expressions) to the current output port according to the
@i(format-template).

@i(format descriptor) a @i(list) that describes the type of output
conversion to be done by @t[number->string].  The supported forms are
(@t(int)), (@t(fix) @i(integer)), and (@t(sci) @i(integer)).
Revised@+(4) 21.

@i(format-template) a @i(string) consisting of format descriptors and
literal characters.  A format descriptor is @t[~] followed by some
other character.  When one is encountered, it is interpreted.  Literal
characters are output as is.  See @t[~a], @t[~A], @t[~c], @t[~C],
@t[~s], @t[~S], @t[~%], @t[~~].

(@t[gcd] @i(number) ...) returns the greatest common divisor of its
arguments.  Revised@+(4) 22.

(@t(get-output-string) @i(string-output-port)) returns the @i(string)
associated with @i(string-output-port).  The @i(string) associated
with the @i(string-output-port) is initially set to @t[""].

(@t(getprop) @i(symbol) @i(expression)) returns the value that has
the key @t(eq?) to @i(expression) from @i(symbol's) property list.  If
there is no value associated with @i(expression), then @t[#f] is
returned.

(@t(getprop-all) @i(symbol)) returns the @i(symbol's) property list.

(@t[implementation-information]) returns a list of string or
@t(#f) values containing information about the Scheme
implementation.  The list is of the form
(@i(implementation-name) @i(version) @i(machine) @i(processor)
@i(operating-system) @i(filesystem) @i(features) ...).

(@t[if] @i(expression)@-(1) @i(expression)@-(2)) @i(syntax) for a
conditional expression.  Revised@+(4) 8.

(@t[if] @i(expression)@-(1) @i(expression)@-(2) @i(expression)@-(3))
@i(syntax) for a conditional expression.  Revised@+(4) 8.

(@t[include] @i(string)) @i(syntax) to include the contents of the
file @i(string) at this point in the Scheme compilation.
Search directories may be specified by the @t[-I] command flag.

@i(inexact) @ @ @i(float) numbers are inexact.  Revised@+(4) 14.

(@t[inexact->exact] @i(number)) returns the @i(exact)
representation of @i(number).  Revised@+(4) 23.

(@t[inexact?] @i(number)) @i(predicate) that returns @t[#t] when
@i(number) is @i(inexact).  Revised@+(4) 21.

@i(input-port) Scheme object that can deliver characters on command.
Revised@+(4) 29.

(@t[input-port?] @i(expression)) @i(predicate) when returns @t[#t]
when @i(expression) is an @i(input-port).  Revised@+(4) 29.

@t[int] @i(syntax) for declaring a non-Scheme procedure, procedure
argument, or global variable as the C type @t[int].  When a @t[int]
value must be supplied, an expression of type @i(number) must be
supplied.  When a @t[int] value is returned, a value of type
@i(number) is returned.

@t(int) @i(format descriptor) for compatibility with Revised@+(3).

@i(integer) integers are represented by both @i(fixed) and @i(float) values.
Revised@+(4) 18.

(@t[integer->char] @i(integer)) returns the @i(character) whose ASCII
code is equal to @i(integer).  Revised@+(4) 25.

(@t[integer?] @i[expression]) @i(predicate) that returns @t[#t] when
@i(expression) is an @i(integer).  Revised@+(4) 20.

@i(interned) @ @ @i(symbols) that are contained in @t[*obarray*] are
interned.

(@t[lambda] @i(formals) @i(body)) the ultimate imperative, the
ultimate declarative.  Revised@+(4) 8.

(@t(last-pair) @i(list)) returns the last @i(pair) of @i(list).

(@t[lcm] @i(number) ...) returns the least common multiple of its
arguments.  Revised@+(4) 22.

(@t[length] @i(list)) returns the length of @i(list).  Revised@+(4)
17.

(@t[let] @i(bindings) @i(body)) @i(syntax) for a binding construct
that computes initial values before any bindings are done.
Revised@+(4) 10.

(@t[let] @i(symbol) @i(bindings) @i(body)) @i(syntax) for a general
looping construct. Revised@+(4) 11.

(@t[let*] @i(bindings) @i(body)) @i(syntax) for a binding construct
that computes initial values and performs bindings sequentially.
Revised@+(4) 10.

(@t[letrec] @i(bindings) @i(body)) @i(syntax) for a binding construct
that binds the variables before the initial values are computed.
Revised@+(4) 10.

@i(letter) an alphabetic @i(character).  Revised@+(4) 25.

@i(list) the empty list, or a @i(pair) whose @t[cdr] is a @i(list).
Revised@+(4) 16.

(@t[list] @i(expression) ...) returns a @i(list) of its arguments.
Revised@+(4) 17.

(@t[list?] @i(expression)) @i(predicate) that returns @t[#t]
when @i(expression) is a @i(list).  Revised@+(4) 16.

(@t[list->string] @i(list)) returns the string formed from the
@i(characters) in @i(list).  Revised@+(4) 26.

(@t[list->vector] @i(list)) returns a @i(vector) whose elements are the
members of @i(list).  Revised@+(4) 27.

(@t[list-ref] @i[list] @i[integer]) returns the @i(integer) element
of @i(list).  Elements are numbered starting at 0.  Revised@+(4) 17.

(@t[list-tail] @i[list] @i[integer]) returns the sublist of @i(list)
obtained by omitting the first @i(integer) elements.  Revised@+(4) 17.

(@t[load] @i(string)) loads the expressions in the file @i(string)
into the Scheme interpreter.  The results of the expressions are
printed on the current output port.  Revised@+(4) 31.

(@t[loade] @i(string)) loads the expressions in the file
@i(string) into the Scheme interpreter.  The contents of the
file and the results of the expressions are printed on the
current output port.

(@t[loadq] @i(string)) loads the expressions in the file @i(string)
into the Scheme interpreter.  The results of the expressions are not
printed.

(@t[log] @i[number]) returns the natural logarithm of @i[number].
Revised@+(4) 22.

@t[longint] @i(syntax) for declaring a non-Scheme procedure,
procedure argument, or global variable as the C type @t[long int].
When a @t[long int] value must be supplied, an expression of type
@i(number) must be supplied.  When a @t[long int] value is returned,
a value of type @i(number) is returned.

@t[longunsigned] @i(syntax) for declaring a non-Scheme procedure,
procedure argument, or global variable as the C type @t[long
unsigned]. When a @t[long unsigned] value must be supplied, an
expression of type @i(number) must be supplied.  When a @t[long
unsigned] value is returned, a value of type @i(number) is returned.

(@t[make-string] @i(integer)) returns a string of length @i(integer)
with unknown elements.  Revised@+(4) 25.

(@t[make-string] @i(integer) @i(char)) returns a string of length
@i(integer) with all elements initialized to @i(char).  Revised@+(4)
25.

(@t[make-vector] @i(integer)) returns a vector of length @i(integer)
with unknown elements.  Revised@+(4) 26.

(@t[make-vector] @i(integer) @i(expression)) returns a vector of
length @i(integer) with all elements set to @i(expression).
Revised@+(4) 26.

(@t[map] @i(procedure) @i(list) @i(list) ...) returns a @i(list)
constructed by applying @i(procedure) to each element of the
@i(lists).  The order of application is not defined.  Revised@+(4)
27.

(@t[max] @i(number) @i(number) ...) returns the maximum of its
arguments.  Revised@+(4) 21.

(@t[member] @i(expression) @i(list)) returns the first @i(sublist) of
@i(list) such that (@t[equal?] @i(expression) (@t[car]
@i(sublist))) is true. If no match occurs, then @t[#f] is returned.
Revised@+(4) 17.

(@t[memq] @i(expression) @i(list)) returns the first @i(sublist) of
@i(list) such that (@t[eq?] @i(expression) (@t[car] @i(sublist))) is
true. If no match occurs, then @t[#f] is returned.  Revised@+(4) 17.

(@t[memv] @i(expression) @i(list)) returns the first @i(sublist) of
@i(list) such that (@t[eqv?] @i(expression) (@t[car] @i(sublist))) is
true. If no match occurs, then @t[#f] is returned.  Revised@+(4) 17.

(@t[min] @i(number) @i(number) ...) returns the minimum of its
arguments.  Revised@+(4) 21.

(@t[module] @i(symbol) @i(clause) ...) @i(syntax) to declare module
information for the @t[Scheme->C] compiler.  The @i(module) form must
be the first item in the source file.  The module name is a
@i(symbol) that must be a legal C identifier.  Using this
information, the compiler is able to construct an object module that
is similar in structure to a Modula 2 module. Following the module
name come optional @i(clauses). If the module is to provide the
"main" program, then a @i(clause) of the form (@t[main] @i(symbol))
is provided that indicates that @i(symbol) is the initial
@i(procedure).  It will be invoked with one argument that is a
@i(list) of @i(strings) that are the arguments that the program was
invoked with.  A minimum (and default) heap size can be specified by
the @i(clause) (@t[HEAP] @i(integer)), where the size is specified in
megabytes.  The user may control that top-level @i(symbols) in this
module are visible as top-level @i(symbols) by including a @i(clause)
of the form (@t[top-level] @i(symbol) ...). If this clause occurs,
then only those @i(symbols) specified will be made top-level. All
other top-level @i(symbols) in the module will appear at the
top-level with names of the form: @i(module)_@i(symbol).  If a
@t[top-level] clause is not provided, then all top-level @i(symbols)
in the module will be made top-level. The final clause, (@t[with]
@i(symbol) ...) indicates that this module will be linked with other
modules.  Normally the intermodule linkages are automatically infered
by including all @i(modules) that have external references. However,
this mechanism is not sufficient to pick up those objects that are
only referenced at runtime.

(@t(modulo) @i(integer)@-(1) @i(integer)@-(2)) returns the modulo of its
arguments.  The sign of the result is the sign of the divisor.
Revised@+(4) 22.

(@t[negative?] @i(number)) @i(predicate) that returns @t[#t] when
@i(number) is negative.  Revised@+(4) 21.

(@t[newline] @i(optional-output-port)) outputs a newline character on
the @i(optional-output-port).  Revised@+(4) 31.

(@t[not] @i(expression)) @i(predicate) that returns @t[#t] when
@i(expression) is @t[#f] or @t[()].  Revised@+(4) 13.

(@t[null?] @i(expression)) @i(predicate) that returns @t[#t] when
@i(expression) is @t[()].  Revised@+(4) 16.

@i(number) @t[Scheme->C] has two internal representations for numbers:
@i(fixed) and @i(float).  When an arithmetic operation is to
be performed with a @i(float) argument, all arguments will be
converted to @i(float) as needed, and then the operation will be
performed.  Automatic conversion back to @i(fixed) is never done.
Revised@+(4) 18. 

(@t[number->string] @i(number) @i(format descriptor)) returns a
@i(string) that is the printed representation of @i(number) as
specified by @i(format descriptor).  For compatibility with
Revised@+(3).

(@t[number->string] @i(number)) returns a string with the printed
representation of the number.  Revised@+(4) 23.

(@t[number->string] @i(number) @i(radix)) returns a string with the
printed representation of the number in the given radix.  Radix must
be 2, 8, 10, or 16.  Revised@+(4) 23.

(@t[number?] @i(expression)) @i(predicate) that returns @t[#t] when
@i(expression) is a @i(number).  Revised@+(4) 20.

(@t[odd?] @i(integer)) @i(predicate) that returns @t[#t] when
@i(integer) is odd.  Revised@+(4) 21.

(@t[open-file] @i(string)@-(1) @i(string)@-(2)) returns a @i(port)
for file @i(string)@-(1) that is opened using the operating
system's @i(fopen) option  @i(string)@-(2).

(@t[open-input-file] @i(string)) returns an @i(input port) capable of
delivering characters from the file @i(string).  Revised@+(4) 30.

(@t[open-input-string] @i(string))  returns an @i(input port) capable
of delivering characters from the @i(string).

(@t[open-output-file] @i(string)) returns an @i(output port) capable
of delivering characters to the file @i(string).  Revised@+(4) 30.

(@t[open-output-string]) returns an @i(output port) capable of
delivering characters to a @i(string).  See @t[get-output-string].

(@t(optimize-eval) @i(option...)) controls the optimization done on
interpreted programs.  When no @i(option) is supplied, minimal optimization
is done.  When @t(call) is specified, calls to top-level procedures that
are not interpreted are optimized.  When @t(rewrite) is
specified, calls to top-level procedures that take variable
number of arguments are rewritten.  This option may cause some
breakpoints to be missed.  Both @t[call] and @t[rewrite] may
be specified.

@i(optional-input-port) if present, it must be an @i(input-port).  If
not present, then it is the value returned by @t(current-input-port).

@i(optional-output-port) if present, it must be an @i(output-port).  If
not present, then it is the value returned by @t(current-output-port).

(@t[or] @i(expression) ...) @i(syntax) for a conditional expression.
Revised@+(4) 9.

@i(pair) record structure with two fields: car and cdr.  Revised@+(4)
15.

(@t[pair?] @i(expression)) @i(predicate) that returns @t[#t] when
@i(expression) is a @i(pair).  Revised@+(4) 16.

(@t[peek-char] @i(optional-input-port)) returns a copy of the next
character available on  @i(optional-input-port).  Revised@+(4) 30.

@t[pointer] @i(syntax) for declaring a non-Scheme procedure,
procedure argument, or global varible as being some type of C
pointer.  When a value must be supplied, an expression of the type
@i(string), @i(procedure), or @i(number) is supplied.  This will
result in either the address of the first character of the
@i(string), the address of the code associated with the
@i(procedure), or the value of the number being used.  A @i(pointer)
value is returned as an non-negative @i(number).

@i(port) Scheme object that is capable of delivering or accepting
characters on demand.  Revised@+(4) 29.

(@t[port->stdio-file] @i(port)) returns the standard I/O FILE
pointer for @i(port), or @t[#f] if the @i(port) does not use
standard I/O.

(@t[positive?] @i(number)) @i(predicate) that returns @t[#t] when
@i(number) is positive.  Revised@+(4) 21.

(@t[pp] @i(expression) @i(optional-output-port)) pretty-prints
@i(expression) on @i(optional-output-port).

(@t[pp] @i(expression) @i[string]) pretty-prints @i(expression) to
the file @i(string).

@i(predicate) function that returns @t(#t) when the condition
is true, and @t(#f) when the condition is false.  Revised@+(4) 13.

(@t[procedure?] @i(expression)) @i(predicate) that returns @t[#t]
when @i(expression) is a @i(procedure).  Revised@+(4) 27.

(@t[proceed]) return from the innermost @t(read-eval-print) loop with
an unspecified value.

(@t[proceed]) resume the computation that previously timed out in an
embedded @t[Scheme->C] system, or was stopped at a breakpoint.

(@t[proceed] @i(expression))  return from the innermost
@t(read-eval-print) loop with @i(expression) as the value.  At the
outermost level, @i(expression) must be an @i(integer) as it will be
used as the argument for a call to the C library procedure
@i(exit).

(@t[proceed] @i(expression))  return @i(expression) as the value of a
procedure that stopped at a breakpoint.

(@t[proceed?]) force a breakpoint while resuming the computation that
previously timed out in an embedded @t[Scheme->C] system.

(@t[putprop] @i(symbol) @i(expression)@-(1) @i(expression)@-(2))
stores @i(expression)@-(2) using key @i(expression)@-(1) on
@i(symbol's) property list.  See @t[getprop].

(@t[quasiquote] @i(back-quote-template)) @i(syntax) for a @i(vector)
or @i(list) constructor.  Revised@+(4) 11.

(@t[quote] @i(expression)) @i(syntax) whose result is @i(expression).
Revised@+(4) 7.

(@t[quotient] @i(integer)@-(1) @i(integer)@-(2)) returns the quotient
of its arguments.  The sign is the sign of the product of its
arguments. Revised@+(4) 22.

(@t[rational?] @i(number)) predicate that returns @t[#t] when
its argument is a rational @i(number).  This is true for any
number in @t[Scheme->C].  Revised@+(4) 20.

(@t[read] @i(optional-input-port)) returns the next readable object
from @i(optional-input-port).  Revived@+(3) 30.

(@t[read-char] @i(optional-input-port)) returns the next character
from @i(optional-input-port), updating the @i(port) to point to the
next @i(character).  Revived@+(3) 30.

(@t[read-eval-print] @i(expression) ...) starts  a new
read-eval-print loop.  The optional @i(expressions) allow one to
specify the prompt or the header:  @t[PROMPT] @i(string) @t[HEADER]
@i(string).  Typing control-D at the prompt will terminate the
procedure.  See @t[reset], @t[exit], @t[eval], @t[proceed].

(@t[real?] @i(number)) predicate that returns @t[#t] when its
argument is a real @i(number).  This is true in @t[Scheme->C] for any
@i(number). Revised@+(4) 20.

@i(record) a heterogenous mutable structure whose elements are
indexed by @i(integers).  The valid indexes of a record are
the exact non-negative integers less than the length of the
record. A @i(record) differs from a @i(vector) in that a @i(record) may
have method @i(procedures) that control how it's output,
compared, and evaluated.

(@t[remainder] @i(integer)@-(1) @i(integer)@-(2)) returns the
remainder of its arguments.  The sign is the sign of
@i(integer)@-(1). Revised@+(4) 22.

(@t[remove] @i(expression) @i(list)) returns a new @i(list) that is a
copy of @i(list) with all items @t[equal?] to @i(expression) removed
from it.

(@t[remove!] @i(expression) @i(list)) returns @i(list) having deleted
all items @t[equal?] to @i(expression) from it.

(@t[remove-file] @i(string)) removes the file named @i(string).

(@t[remq] @i(expression) @i(list)) returns a new @i(list) that is a
copy of @i(list) with all items @t[eq?] to @i(expression) removed
from it.

(@t[remq!] @i(expression) @i(list)) returns @i(list) having deleted
all items @t[eq?] to @i(expression) from it.

(@t[remv] @i(expression) @i(list)) returns a new @i(list) that is a
copy of @i(list) with all items @t[eqv?] to @i(expression) removed
from it.

(@t[remv!] @i(expression) @i(list)) returns @i(list) having deleted
all items @t[eqv?] to @i(expression) from it.

(@t[rename-file] @i(string)@-(1) @i(string)@-(2)) changes the
name of the file named @i(string)@-(1) to @i(string)@-(2).

(@t[reset]) returns to the current @t[read-eval-print] loop.

(@t[reset-bpt]) indicates that the caller wishes to cancel the
resumption of computation at the point where a breakpoint occurred in
an embedded @t[Scheme->C] system.

(@t[reset-error]) indicates that the caller is finished examining the
last retained error state in an embedded @t[Scheme->C] system.

(@t[reverse] @i(list)) returns a new @i(list) with the elements of
@i(list) in reverse order.  Revised@+(4) 17.

(@t[round] @i(number)) returns @i(number) rounded to the closest
integer.  Revised@+(4) 22.

@t[S2CUINT] C type defined by @t[Scheme->C] to be an unsigned
integer that is the same size as a pointer.

@i(sc-pointer) a Scheme object that is represented by a tagged
pointer to one or more words of memory.

@t(sc...) all modules that compose the @t[Scheme->C] runtime system
have module names begining with the letters @t(sc).  All procedures
and external variables in these modules have names that begin with
@t(sc..._).

@t[scc] shell command to invoke the @t[Scheme->C] Scheme compiler.  See the
@t[man] page.

@t[SCGCINFO] environment variable that when set to 1 will log
garbage collection information on stderr.  This variable is
overridden by the @t[-scgc] command line flag.

@t[SCHEAP] environment variable that controls the initial heap size.
It is set to the desired size in megabytes.  If not set, then the
default in the main program will be used.  If a default size is not
supplied, then the implementation default is used.  This variable is
overridden by the @t[-sch] command line flag.

@t[SCLIMIT] environment variable that controls the amount of heap
retained after a generational garbage collection that will force a
full collection.  It is expressed as a percent of the heap.  The
default value is 40.  This variable is overridden by the
@t[-scl] command line flag.

@t[SCMAXHEAP] environment variable that controls the maximum heap
size.  It is set to the desired size in megabytes.  If not set and
the @t[-scmh] command line flag is not supplied, the maximum heap
size is five times the initial heap size. This variable is overridden
by the @t[-scmh] command line flag.

(@t(scheme-byte-ref) @i(sc-pointer) @i(integer)) returns the byte at
the @i(integer) byte of @i(sc-pointer) as a @i(number).

(@t(scheme-byte-set!) @i(sc-pointer) @i(integer) @i(number)) sets the
byte at the @i(integer) byte of @i(sc-pointer) to @i(number).  The
procedure returns @i(number) as its value.

(@t(scheme-int-ref) @i(sc-pointer) @i(integer)) return the int at the
@i(integer) byte of @i(sc-pointer) as a @i(number).

(@t(scheme-int-set!) @i(sc-pointer) @i(integer) @i(number)) sets the
int at the @i(integer) byte of @i(sc-pointer) to @i(number).  The
procedure returns @i(number) as its value.

(@t(scheme-s2cuint-ref) @i(sc-pointer) @i(integer)) returns the S2CUINT at
the @i(integer) byte of @i(sc-pointer).

(@t(scheme-s2cuint-set!) @i(sc-pointer) @i(integer) @i(expression)) sets
the S2CUINT at the @i(integer) byte of @i(sc-pointer) to @i(expression).
The procedure returns @i(expression) as its value.

(@t(scheme-tscp-ref) @i(sc-pointer) @i(integer)) returns the TSCP at
the @i(integer) byte of @i(sc-pointer).

(@t(scheme-tscp-set!) @i(sc-pointer) @i(integer) @i(expression)) sets
the TSCP at the @i(integer) byte of @i(sc-pointer) to @i(expression).
The procedure returns @i(expression) as its value.

@t(sci) shell command to invoke the @t[Scheme->C] Scheme interpreter.  See the
@t[man] page.

@t(sci) @i(format descriptor) for compatibility with Revised@+(3).

(@t[set!] @i(symbol) @i(expression)) @i(syntax) to set the location
bound to @i(symbol) to the value of @i(expression).  Revised@+(4) 9.

(@t[set-car!] @i(pair) @i(expression)) sets the car field of
@i(pair) to @i(expression).  Revised@+(4) 16.

(@t[set-cdr!] @i(pair) @i(expression)) sets the cdr field of
@i(pair) to @i(expression).  Revised@+(4) 16.

(@t[set-gcinfo!] @i(integer)) sets the flag controlling the printing of
garbage collection statistics to @i(integer).  See @t(-scgc).

(@t[set-generation-limit!] @i(integer)) sets the full collection
limit to @i(integer).  See @t(-scl).

(@t[set-maximum-heap!] @i(integer)) sets the maximum heap size to
@i(integer) megabytes.  See @t[-scmh].

(@t[set-stack-size!] @i(expression)) sets the size of the stack used
by @t[Scheme->C] to @i(expression) bytes.  This value is ignored if the
system does not do explicit stack overflow checking.

(@t[set-time-slice!] @i(expression)) sets the time slice used by the
@t[Scheme->C] to @i(expression) ticks. This value is decremented each
time a Scheme procedure is called, and the time slice expires when it
becomes zero.  This value is ignored if the system does not do
explicit time slicing.

(@t[set-top-level-value!] @i(symbol) @i(expression)) sets the
top-level location bound to @i(symbol) to value.

(@t[set-write-circle!] @i(boolean) @i(optional-output-port))
controls circular object detection on output to
@i(optional-output-port). If @i(boolean) is @t[#t], then
circular objects are printed as "...".  If @i(boolean) is
@t[#f], circular object detection is disabled.

(@t[set-write-length!] @i(integer) @i(optional-output-port))
sets the list and vector length limits of @i(optional-output-port) to
@i(integer).  Vectors and lists longer than @i(integer) have their
remaining elements printed as "...".

(@t[set-write-length!] @t[#f] @i(optional-output-port)) allows
arbitrary length list and vector printing on @i(optional-output-port).

(@t[set-write-level!] @i(integer) @i(optional-output-port))
sets the number of levels that nested vectors and lists are
printed on @i(optional-output-port) to @i(integer).  Vectors
and lists nesting deeper than this level are printed as "#".

(@t[set-write-level!] @t[#f] @i(optional-output-port)) allows
arbitrarily deep nested list and vector printing on @i(optional-output-port).

(@t[set-write-pretty!] @i(boolean) @i(optional-output-port))
controls "pretty-printing" on @i(optional-output-port).  If
@i(boolean) is @t[#t], then output is printed in a more readable form in
@t[write-width] wide lines.  A value of @t[#f] enables normal
output.

(@t[set-write-width!] @i(integer) @i(optional-output-port)) sets the
width of @i(optional-output-port) to @i(integer).

@t[shortint] @i(syntax) for declaring a non-Scheme procedure,
procedure argument, or global variable as the C type @t[short int].
When a @t[short int] value must be supplied, an expression of type
@i(number) must be supplied.  When a @t[short int] value is returned,
a value of type @i(number) is returned.

@t[shortunsigned] @i(syntax) for declaring a non-Scheme procedure,
procedure argument, or global variable as the C type @t[short
unsigned]. When a @t[unsigned short] value must be supplied, an
expression of type @i(number) must be supplied.  When a @t[short
unsigned] value is returned, a value of type @i(number) is returned.

(@t(sin) @i(number)) returns the sine of its argument.  Revised@+(4)
23.

(@t[signal] @i(number) @i(expression)) provides a signal handler for
the operating system dependent signal @i(number).  The @i(expression) is the
signal handler and is either a @i(procedure) or a @i(number).  When a
procedure is supplied, it is called with the signal number when the
signal is present.  Numeric handler values are interpreted by the
underlying operating system.  The previous value of the signal
handler is returned.

(@t(sqrt) @i(number)) returns the square root of its argument.
Revised@+(4) 23.  

(@t[stack-size]) returns the size in bytes of @t[Scheme->C]'s stack.

@t[stderr-port] @i(port) to output characters to stderr.

@t[stdin-port] @i(port) to input characters from stdin.

@t[stdout-port] @i(port) to output characters to stdout.

@i(string) sequence of @i(characters).  The valid indexes of a
@i(string) are exact non-negative integers less than the
length of the string.Revised@+(4) 25.

(@t[string] @i[char] ...) returns a newly allocated
@i(string) whose elements contain the given arguments.  Revised@+(4) 25.

(@t[string->list] @i(string)) returns a newly constructed @i(list)
that contains the elements of @i(string).  Revised@+(4) 25.

(@t[string->number] @i(string)) returns a number expressed by
@i(string).  If @i(string) is not a syntactically valid notation for
a number then it returns @t(#f).  Revised@+(4) 24.

(@t[string->number] @i(string) @i(number)) returns a number expressed
by @i(string) with @i(number) the default radix.  Radix must be 2, 8,
10, or 16. If @i(string) is not a syntactically valid notation for a
number then it returns @t(#f).  Revised@+(4) 24.

(@t[string->symbol] @i(string)) returns the interned @i(symbol) whose
name is @i(string).  Revised@+(4) 18.

(@t[string->uninterned-symbol] @i(string)) returns an uninterned
@i(symbol) whose name is string.

(@t[string-append] @i(string) @i(string) ...) returns a new
@i(string) whose @i(characters) are the concatenation of the of the
given @i(strings). Upper and lower case letters are treated as though
they were the same character. Revised@+(4) 26.

(@t[string-ci<=?] @i(string)@-(1) @i(string)@-(2)) @i(predicate)
that returns @t[#t] when @i(string)@-(1) is less than or equal to
@i(string)@-(2).  Upper and lower case letters are treated as though
they were the same character. Revised@+(4) 26.

(@t[string-ci<?] @i(string)@-(1) @i(string)@-(2)) @i(predicate) that
returns @t[#t] when @i(string)@-(1) is less than @i(string)@-(2).
Upper and lower case letters are treated as though they were the same
character. Revised@+(4) 26.

(@t[string-ci=?] @i(string)@-(1) @i(string)@-(2)) @i(predicate) that
returns @t[#t] when @i(string)@-(1) is equal to @i(string)@-(2).
Upper and lower case letters are treated as though they were the same
character. Revised@+(4) 26.

(@t[string-ci>=?] @i(string)@-(1) @i(string)@-(2)) @i(predicate)
that returns @t[#t] when @i(string)@-(1) is greater than or equal to
@i(string)@-(2).  Upper and lower case letters are treated as though
they were the same character. Revised@+(4) 26.

(@t[string-ci>?] @i(string)@-(1) @i(string)@-(2)) @i(predicate) that
returns @t[#t] when @i(string)@-(1) is greater than @i(string)@-(2).
Upper and lower case letters are treated as though they were the same
character. Revised@+(4) 26.

(@t[string-copy] @i(string)) returns a new @i(string) whose
@i(characters) are those of the given @i(string).  Revised@+(4) 26.

(@t[string-fill!] @i(string) @i(char)) stores @i(char) in
every element of @i(string).  Revised@+(4) 26.

(@t[string-length] @i(string)) returns the length of @i(string).
Revised@+(4) 25.

(@t[string-ref] @i(string) @i(integer)) returns @i(character) that
is the @i(integer) element of @i(string).  The first element is
0. Revised@+(4) 25.

(@t[string-set!] @i(string) @i(integer) @i(character)) sets the
@i(integer) element of @i(string) to @i(character).  The first
element is 0.  Revised@+(4) 26.

(@t[string<=?] @i(string)@-(1) @i(string)@-(2)) @i(predicate) that
returns @t[#t] when @i(string)@-(1) is less than or equal to
@i(string)@-(2).  Revised@+(4) 26.

(@t[string<?] @i(string)@-(1) @i(string)@-(2)) @i(predicate) that
returns @t[#t] when @i(string)@-(1) is less than @i(string)@-(2).
Revised@+(4) 26.

(@t[string=?] @i(string)@-(1) @i(string)@-(2)) @i(predicate) that
returns @t[#t] when @i(string)@-(1) is equal to @i(string)@-(2).
Revised@+(4) 26.

(@t[string>=?] @i(string)@-(1) @i(string)@-(2)) @i(predicate) that
returns @t[#t] when @i(string)@-(1) is greater than or equal to
@i(string)@-(2).  Revised@+(4) 26.

(@t[string>?] @i(string)@-(1) @i(string)@-(2)) @i(predicate) that
returns @t[#t] when @i(string)@-(1) is greater than @i(string)@-(2).
Revised@+(4) 26.

(@t[string?] @i(expression)) @i(predicate) that returns @t[#t] when
@i(expression) is a @i(string).  Revised@+(4) 25.

(@t[substring] @i(string) @i(integer)@-(1) @i(integer)@-(2)) returns
a @i(string) consisting of @i(integer)@-(2)-@i(integer)@-(1) elements
of @i(string) starting at element @i(integer)@-(1).  Revised@+(4) 26.

(@t[symbol?] @i(expression)) @i(predicate) that returns @t[#t] when
@i(expression) is a @i(symbol).  Revised@+(4) 18.

(@t[symbol->string] @i(symbol)) returns the name of @i(symbol) as a
@i(string).  Revised@+(4) 18.

@i(syntax) indicates a form that is evaluated in a manner that is
specific to the form.  Revised@+(4) 5.

(@t[system] @i(string)) issue the shell command contained in @i(string)
and return the result.  See the man page for the @t[system] procedure for 
details.

(@t(tan) @i(number)) returns the tangent of its argument.
Revised@+(4) 23.

(@t[time-of-day]) returns a system dependent @i(string)
representing the current time and date.

(@t[time-slice]) returns the current time slice value.

(@t[top-level]) returns control to the "top-level" @t[read-eval-print]
loop.

(@t[top-level-value] @i(symbol)) returns the value in the location
that is the "top-level" binding of @i(symbol).

(@t[trace]) returns a list of the procedures being traced.

(@t[trace] @i(symbol) @i(symbol) ...) enables tracing on the
@i(procedures) that are the values of the @i(symbols).

@t(trace-output-port) @i(port) used for trace output. The default
value is the same as @t(stdout-port).

(@t[transcript-off]) turns off the transcript.  Revised@+(4) 31.

(@t[transcript-on] @i(string)) starts a transcript on the file
@i(string).  Revised@+(4) 31.

(@t[truncate] @i(number)) returns the truncated value of @i(number).
Revised@+(4) 22.

@t[tscp] @i(syntax) for declaring a non-Scheme procedure, procedure
argument, or global variable as the C type @t[TSCP]. The type
@t[TSCP] is a tagged pointer to a Scheme object. When a @t[tscp]
value must be supplied, any expression may be supplied.  When a
@t[tscp] value is returned, any type of value may be returned.

(@t[unbpt]) @i(syntax) to remove all breakpoints.

(@t[unbpt] @i(symbol) @i(symbol) ...) @i(syntax) to remove
breakpoints from the named @i(procedures).

(@t[uninterned-symbol?] @i[symbol]) @i(predicate) that returns
@t[#t] if @i[symbol] is not @i[interned].

(@t[unless] @i(expression)@-(1) @i(expression)@-(2) ...) @i(syntax)
for a conditional form that is equivalent to (@t[if] (@t[not]
@i(expression)@-(1)) (@t[begin] @i(expression)@-(2) ...)).

(@t[unquote] @i[expression]) @i(syntax) to evaluate the expression
and replaces it in the @i(back-quote-template).  Revised@+(4) 12.

(@t[unquote-splicing] @i[expression]) @i(syntax) to evaluate the
expression and splices it into the @i(back-quote-template).
Revised@+(4) 12.

@t[unsigned] @i(syntax) for declaring a non-Scheme procedure,
procedure argument, or global variable as the C type @t[unsigned].
When a @t[unsigned] value must be supplied, an expression of type
@i(number) must be supplied.  When a @t[unsigned] value is returned,
a value of type @i(number) is returned.

(@t[untrace]) @i(syntax) to remove tracing from all @i(procedures).

(@t[untrace] @i(symbol) @i(symbol) ...) @i(syntax) to remove tracing from the
named @i(procedures).

@i(variable) Revised@+(4) 6.

@i(vector) a heterogenous mutable structure whose elements are
indexed by @i(integers).  The valid indexes of a vector are
the exact non-negative integers less than the length of the
vector. Revised@+(4) 26.

(@t[vector] @i[expression] ...) returns a newly allocated
@i(vector) whose elements contain the given arguments.
Revised@+(4) 27.

(@t[vector-fill!] @i(vector) @i(expression)) stores @i(expression) in
every element of @i(vector).  Revised@+(4) 27.

(@t(vector-length) @i(vector)) returns the number of elements in
@i(vector).  Revised@+(4) 27.

(@t[vector->list] @i(vector)) returns a newly created @i(list) of the
objects contained in the elements of the @i(vector).  Revised@+(4) 27.

(@t(vector-ref) @i(vector) @i(integer)) returns the contents of
element @i(integer) of @i(vector).  The first element is 0.
Revised@+(4) 27.

(@t(vector-set!) @i(vector) @i(integer) @i(expression)) sets element
@i(integer) of @i(vector) to @i(expression).  The first element is 0.
Revised@+(4) 27.

(@t[vector?] @i(expression)) @i(predicate) that returns @t[#t] when
@i(expression) is a @i(vector).  Revised@+(4) 26.

@t[void] @i(syntax) for declaring a non-Scheme procedure as returning
the C type @t[void].  The value of such a procedure may not be used.

(@t[wait-system-file] @i(expression)) waits for input on the file
with the system file number @i(expression).  When input is available,
the procedure returns.  If @i(expression) is equal to @t[#f], then
the procedure will not return until all tasks have been completed.

(@t[weak-cons] @i(expression)@-(1) @i(expression)@-(2)) returns a
newly allocated @i(pair) that has @i(expression)@-(1) as its @t(car),
and @i(expression)@-(2) as its @t(cdr).  If the garbage collector
discovers that pointers to an object only exist in the @t[car]'s of
@i(pair)s created by @t[weak-cons], then it may recover the object
and set the @t[car]'s in those @i(pair)s to @t[#f].

(@t[when] @i(expression)@-(1) @i(expression)@-(2) ...) @i(syntax) for
a conditional form that is equivalent to (@t[if] @i(expression)@-(1)
(@t[begin] @i(expression)@-(2) ...)).

(@t[when-unreferenced] @i(expression) @i(procedure)) applys
the clean-up procedure @i(procedure) (with the object
represented by @i(expression) as its argument) at some point in
the future when the object represented by @i(expression) is no
longer referenced by the program.  The procedure returns
either the cleanup procedure supplied by an earlier call to
@t[when-unreferenced], or @t(#f) when no cleanup procedure was
defined.

(@t[when-unreferenced] @i(expression) @t[#f]) returns either the
cleanup procedure for the object represented by
@i(expression) or @t(#f) when no cleanup procedure was
defined.  In either case, the Scheme system will take no
action when the object represented by @i(expression) is no
longer referenced by the program.

(@t[with-input-from-file] @i[string] @i[procedure]) opens the file
@i(string), makes its @i(port) the default @i(input-port), then
calls @i(procedure) with no arguments.  Revised@+(4) 30.

(@t[with-output-to-file]  @i[string] @i[procedure]) opens the file
@i(string), makes its @i(port) the default @i(output-port), then
calls @i(procedure) with no arguments.  Revised@+(4) 30.

(@t[write] @i(expression) @i(optional-output-port)) outputs
@i(expression) to @i(optional-output-port) in a machine-readable
form.  Revised@+(4) 31.

(@t[write-char] @i(character) @i(optional-output-port)) outputs
@i(character) to @i(optional-output-port).  Revised@+(4) 31.

(@t[write-circle] @i(optional-output-port)) returns a
@i(boolean) indicating whether circular objects are detected
when output to @i(optional-output-port).

(@t[write-count] @i(optional-output-port)) returns the number of
characters on the current line in @i(optional-output-port).

(@t[write-length] @i(optional-output-port)) returns either an
@i(integer) indicating the maximum length vector or list
printed on @i(optional-output-port), or @t[#f] indicating that
arbitrary length objects are printed on @i(optional-output-port).

(@t[write-level] @i(optional-output-port)) returns either an
@i(integer) indicating the maximum nesting depth of objects
that are printed on @i(optional-output-port), or @t[#f] indicating
that arbitrary depth objects are printed on @i(optional-output-port).

(@t[write-pretty] @i(optional-output-port)) returns a
@i(boolean) indicating whether pretty-printing is done on
@i(optional-output-port).

(@t[write-width] @i(optional-output-port)) returns the width of
@i(optional-output-port) in @i(characters).

(@t(zero?) @i(number)) predicate that returns @t(#t) when @i(number)
is zero.  Revised@+(4) 21.

@t(~%) @i(format descriptor) to output a newline character.

@t(~~) @i(format descriptor) to output a @t[~].

@t(~A) @i(format descriptor) to output the next @i(expression) using
@t(display).

@t(~a) @i(format descriptor) identical to @t[~A].

@t(~C) @i(format descriptor) to output the next @i(expression) (that
must be a @i(character)) using @t(write-char).

@t(~c) @i(format descriptor) identical to @t[~C].

@t(~S) @i(format descriptor) to output the next @i(expression) using
@t(write).

@t(~s) @i(format descriptor) identical to @t[~S].

@End(Index)
