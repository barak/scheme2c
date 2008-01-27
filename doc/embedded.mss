@make(article,form 1)
@style(fontfamily=TimesRoman)
@disable(contents)
@set(page=1)
@MajorHeading[Embedded Scheme->C -- 1 February 1993]

One of the major goals of @t(Scheme->C) was to build a Scheme
compiler and runtime system that could coexist with other programming
languages.  While this effort has been quite successful,
@t(Scheme->C) has not offered everything needed by applications that
wish to embed a Scheme server, feed it arbitrary expressions for
evaluation, yet remain responsive to additional requests.

For example, a database server might want to to evaluate arbitrary
Scheme expressions to verify record update operations, record access
rights, or provide data that is computed rather than being resident
in the database.  Or, an event driven application for a PC or a
Macintosh might like to embed Scheme.  

In order to safely execute in such a variety of environments, the
Scheme system must allow the application to handle external events on
a timely basis and place minimum requirements on the available system
services. In order to solve these problems, the 01feb93 release of
@t(Scheme->C) has been modified in the following areas.

Explicit Time Slicing - in order to return to the caller at regular
intervals, @t(Scheme->C) can be compiled with explicit time slicing.
On each procedure entry or backwards branch, a counter is
decremented. When the counter goes to 0, Scheme returns control to
the application program at the point where it was called.  At a later
time, the application has the option of continuing the previous
computation or starting a new computation.

Explicit Stack Overflow Checks - @t(Scheme->C) may be compiled with
explicit stack overflow checks.  This is necessary as many
environments have no other means for detecting a stack overflow which
could damage the embedding application or crash the personal
computer.

Request-response interaction - when used as an embedded server, all
interaction with Scheme is via one interface procedure.  Errors and
breakpoints are handled across this interface like any other type of
request.

Operating System independence - unlike previous releases,
@t(Scheme->C) does not assume the existence of a UNIX-like I/O
system.  Rather than directly calling the host I/O system, all
requests are via implementation specific routines in scrt/cio.c.  In
fact, an embedded @t(Scheme->C) server doesn't assume that the client
even has an I/O system.  Instead the stdout and stderr ports are
string output ports.

Previous releases of @t(Scheme->C) used operating system traps to
detect division by zero and keyboard interrupts.  Division by zero
errors are now explicitly tested for, and keyboard interrupt signals
are not used by embedded @t(Scheme->C) systems.

@heading[Application interface]

Applications evaluate a Scheme expression by calling the procedure
@t[scheme2c]:

@begin(programexample)

void  scheme2c( char *expression,
		int *status,
		char **result,
		char **error )
@end(programexample)

where @t[expression] is a pointer to a null terminated string of ASCII
characters that is the Scheme expression to evaluate.  When the procedure
returns, the result is stored in @t[status], @t[result], and
@t[error].  The value returned in @t[status] is interpreted as
follows:

@begin(itemize)

@t[0]: expression evaluated normally.  The value is saved in
@t[*SCHEME2C-RESULT*] within the Scheme system  and it is also
written to Scheme's stdout-port.

@t[1]: an error occurred.  The error message is written to Scheme's
stderr-port.  If no previous error is being examined, the stack trace
is written to Scheme's stderr-port and the associated environments
are in the list @t[*ERROR-ENV*].  The client should evaluate
@t[(RESET-ERROR)] when done examining the error state.  Note that if
additional errors occur before @t[(RESET-ERROR)] is evaluated, they
will not cause a stack dump, nor have the error environment saved.

@t[2]: an internal error in @t(Scheme->C) occurred.  The error
message is reported via Scheme's stderr-port.  No further execution
is possible.

@t[3]: the computation timed out.  Evaluate @t[(PROCEED)] to continue
execution.  Evaluate @t[(PROCEED?)] to cause a breakpoint  when execution
resumes.

@t[4]: a procedure entry breakpoint occurred.  The call arguments are
written to Scheme's stderr-port and the associated environments are
in the list @t[*BPT-ENV*]. The procedure stack trace can be viewed by
evaluating @t[(BACKTRACE)].   The procedure arguments are in
@t[*ARGS*]. Evaluate @t[(PROCEED)] to continue execution, or
@t[(RESET-BPT)] to abort.

@t[5]: a procedure exit breakpoint occurred.  The result is written
to Scheme's stderr-port and saved in @t[*RESULT*].  The environments
are in the list @t[*BPT-ENV*].  Evaluate @t[(PROCEED)] to continue
execution, @t[(PROCEED] @i(expression)@t[)] to continue returning a
new value, or @t[(RESET-BPT)] to abort.  Note that additional
breakpoints will not occur while examining the state of a breakpoint.
@end(itemize)

The value returned in @t[result] is pointer to a null terminated
string of ASCII characters that is the contents of Scheme's
stdout-port, i.e. the standard output port.  The value retirned in
@t[error] is a pointer to a null terminated string of ASCII
characters that is the contents of Scheme's stderr-port, i.e. the
error output port.

The size of stack used by an embedded Scheme system is set by
evaluating @t[(set-stack-size!] @i(expression)@t[)], where
@i(expression) is the size in bytes.  The current stack size can be
obtained by evaluating @t[(stack-size)].  Scheme reserves a portion
of this stack for error recovery, but this may be exceeded on some
implementations.  An application should verify that it has set the
stack correctly by evaluating an expression that forces a stack
overflow error and then verifying that the Scheme stack has not
overflowed into the application.

The Scheme time slice is set by evaluating @t[(set-time-slice!]
@i(expression)@t[)], where @i(expression) is the number of Scheme
procedure calls that should be made in a time slice.  Experiment to
find the right value for your application. The current time slice
value is obtained by evaluating @t[(time-slice)].

@heading(Sample embedded application)

A sample embedded Scheme application, @t[embedded], is found in the
directory @t[server].  A typescript of its execution shows how an
application should interact with an embedded Scheme system.

@begin(programexample)

csh 990 >embedded
Embedded Scheme->C Test Bed
0- (+ 1 2)
3
0-
@end(programexample)

The program prompts the user for a Scheme expression which is then
evaluated using @t[scheme2c].  The @t(result) and @t(error) messages
are then printed, followed by a prompt (incorporating the value of
@t[status]) for the next expression.

@begin(programexample)

0- (time-slice)
100000
0- (stack-size)
57000
0- (let loop ((i 0)) (loop (+ i 1)))
3- (proceed)
3- (proceed)
3- (proceed?)
(+ I 1) in ENV-0
(LOOP (+ I 1)) in ENV-1
(EVAL ...)
(EXECUTE [inside SCHEME2C] ...)
(SCREP_SCHEME2C ...)
4-
@end(programexample)

After obtaining the current time slice and stack size values, a
looping expression was entered.  Twice it timed out and was continued
by evaluating the expression @t[(proceed)].  The third time it timed
out, @t[(proceed?)] was entered to force a breakpoint.

@begin(programexample)

4- (list-ref *bpt-env* 0)
((I . 21345) (LOOP . #*PROCEDURE*) ($_0 . 0))
0- (proceed)
3- (proceed?)
(LOOP (+ I 1)) in ENV-0
(EVAL ...)
(EXECUTE [inside SCHEME2C] ...)
(SCREP_SCHEME2C ...)
4-  (list-ref *bpt-env* 0)
((I . 28476) (LOOP . #*PROCEDURE*) ($_0 . 0))
0- (reset-bpt)
#F
0-
@end(programexample)

The environment at the time of the breakpoint was examined to find
the value of @t(i) by looking at element 0, corresponding to
@t(env-0), of the list @t(*bpt-env*).  The program was then contined
by @t[(proceed)] and then @t(i) was examined at the end of the next
time slice to find out how much work was done.

@begin(programexample)

0- (let ((x 1) (y 2)) (+ x y z))
***** Z Top-level symbol is undefined
(+ X Y Z) in ENV-0
(EVAL ...)
(EXECUTE [inside SCHEME2C] ...)
(SCREP_SCHEME2C ...)
1- *bptenv*
***** *BPTENV* Top-level symbol is undefined
0- *error-env*
(((Y . 2) (X . 1)))
0- (reset-error)
#F
0-
@end(programexample)

An error occurred and then error environment was examined.  While
examining the error environment, another error occurred.  This simply
resulted in an error message.

@begin(programexample)

0- (define (f x) (* 2 x))
F
0- (bpt f)
F
0- (f 23)
0 -calls  - (F 23)
4- (proceed)
0 -returns- 46
5- (proceed)
46
0- (f 40)
0 -calls  - (F 40)
4- (f 10)
20
0- (proceed)
0 -returns- 80
5- (proceed 15)
15
0-
@end(programexample)

The final example shows the use of procedure breakpoints.  One thing
to note, is that breakpoints do not nest.

@heading[Adding Your Code to an Embedded Scheme->C System]

There are two ways to do this.  The easiest is to replace the
module scrtuser (in the files scrtuser.sc and scrtuser.c) and
then rebuild the embedded Scheme system.  An alternative is to
separately compile your modules, link them into your
application, and then explicitly initialize your modules after
Scheme has been initialized.  This is done by calling @t(scheme2c)
with an expression like "#t" and then calling your module
initialization procedures which have the form
@i(module-name)@t[__init].
