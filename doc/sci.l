.TH SCI 1 local
.SH NAME
sci \- Scheme interpreter
.SH SYNTAX
.B sci
[ option ]
.SH DESCRIPTION
The 
.B sci
command invokes
a Scheme interpreter.  The language accepted by this interpreter
is that defined in the essential portions of the
.I
Revised\v'-0.3m'4\v'0.3m' Report on the Algorithmic Language Scheme,
with minor constraints and some additions.  The
Scheme interpreter is written in Scheme which has then been compiled using
the Scheme-to-C compiler, \fBscc\fR.
.SH OPTIONS
These options are accepted by 
.B sci.
.TP 15
.B -e
Echo text read from the standard input file on the standard output file.
.TP 15
.B -emacs
Scheme interpreter is controlled by GNU emacs.
.TP 15
.B -nh
Do not print the interpreter version header on the standard output file.
.TP 15
.B -np
Do not prompt for input from the standard input file on the standard output
file.
.TP 15
.B -q
Do not print the result of each expression evaluation.
.TP 15
\fB-scgc   \fIstatflag\fR
Enables garbage collection statistics.  If set to 1, then garbage collection
statistics will be printed.  The default is 0, that will result in no
statistics.
.TP 15
\fB-sch  \fIheap\fR
Specifies the initial size of the heap in megabytes.  The default heap size is
4 MB.  The maximum heap size allowed is 1000 MB.
.TP 15
\fB-scl \fIpercent\fR
Specifies the percent of the heap allocated after a generational garbage
collection that will force a full collection.  The default is 40%.
.TP 15
\fB-scm  \fImain\fR
Specifies the function that should be used instead of the predefined "main".
The function name must be entered in the correct case, i.e. letters typically 
upshifted.
.TP 15
\fB-scmh  \fIheap\fR
Specifies the maximum heap size in megabytes.  The default is five times the
initial size of the heap.
.SH ENVIRONMENT VARIABLES
The items controlled by \fI-sc..\fR flags can also be controlled by environment
variables.  If both the flag and the environment variable are provided, then
the flag's value will be used.
.TP 15
.B SCGCINFO
Controls the reporting of garbage collection statistics to the standard error
file.  If set to 1, then garbage collection statistics will be printed.  The
default setting is 0 that will not print the statistics.
.TP 15
.B SCHEAP
Specifies the initial size of the heap in megabytes.  The default heap size 
is 4 MB.  The maximum heap size allowed is 1000 MB.
.TP 15
.B SCLIMIT
Specifies the percent of the heap allocated after a generational garbage
collection that will force a full collection.  The default is 40%.
.TP 15
.B SCMAXHEAP
Specifies the maximum size of the heap in megabytes.  The default value is
five times the initial heap size.
.SH FILES
The interpreter is one a.out file with the name \fIsci\fR.  All files
associated with the interpreter are found in the
directory \fI.../schemetoc/scrt\fB.
.SH SEE ALSO
.PP
Harold Abelson and Gerald Jay Sussman with Julie Sussman,
.I
Structure and Interpretation of Computer Programs,
The MIT Press.
.PP
William Clinger and Jonathan Rees (Editors),
.I
Revised\v'-0.3m'4\v'0.3m' Report on the Algorithmic Language Scheme,
LISP Pointers, Volume IV, Number 3, July-September 1991.  PostScript for
this report is included in the software distribution.
.PP
Jerry D. Smith,
.I
An Introduction to Scheme,
Prentice Hall, Inc.  Chapter notes for using this text with Scheme->C are
included in the software distribution.
.PP
R. Kent Dybvig,
.I
The SCHEME Programming Language,
Prentice Hall, Inc.
.PP
Daniel P. Friedman and Matthias Felleisen,
.I
The Little LISPer,
MIT Press.
.PP
Joel F. Bartlett,
.I
Scheme->C  a Portable Scheme-to-C Compiler,
WRL Research Report 89/1.
.PP
Additional documentation is included in the software distribution.
.PP
scc(1)
.SH QUESTIONS, COMMENTS, AND COMPLAINTS
http://alioth.debian.org/projects/scheme2c/
