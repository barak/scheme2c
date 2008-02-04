#
#  Build the SCHEME->C compiler.
#
#  Copyright (c) 1988 Digital Equipment Corporation.  All rights reserved.

.SUFFIXES:
.SUFFIXES:	.o .c .sc .s

SCC = scc
SCCFLAGS = 

SRCDIR = ../../scsc
RTDIR = ../scrt
RT = ${RTDIR}/libsc.a

# Defaults for configuring scc and Xscc commands.

SCL = 40
SCMH = 20

scsc = main.sc closeana.sc lambdaexp.sc plist.sc transform.sc expform.sc \
       readtext.sc miscexp.sc macros.sc compile.sc lap.sc gencode.sc \
       callcode.sc lambdacode.sc misccode.sc

scc = main.c closeana.c lambdaexp.c plist.c transform.c expform.c \
      readtext.c miscexp.c macros.c compile.c lap.c gencode.c \
       callcode.c lambdacode.c misccode.c

sco = main.o closeana.o lambdaexp.o plist.o transform.o expform.o \
      readtext.o miscexp.o macros.o compile.o lap.o gencode.o \
      callcode.o lambdacode.o misccode.o

scsch = expform.sch gencode.sch lambdaexp.sch lap.sch miscexp.sch plist.sch

.SUFFIXES:
.SUFFIXES:	.o .sc .c

.sc.c:
	${SCC} -C $*.sc

.c.o:
	${CC} -c ${CFLAGS} -I${RTDIR} $*.c

sc-to-c:	${scc}

Xsccomp:	${scc} ${sco} ${RT}
	${CC} -o Xsccomp ${CFLAGS} ${sco} ${RT} -lm

Xmv:
	mv Xsccomp sccomp

port:
	$(MAKE) "CC = ${CC}" "CFLAGS = ${CFLAGS}" "SCC = echo"  Xsccomp Xmv

install-private:
	$(MAKE) "LIBDIR = ${DESTDIR}" "BINDIR = ${DESTDIR}" \
	     "OWNER = -o `whoami`" install

install:
	echo '#! /bin/csh -f' > ${BINDIR}/scc
	echo '${BINDIR}/sccomp -scl ${SCL} -scmh ${SCMH} \
	     -cc ${CC} -LIBDIR ${LIBDIR}/schemetoc $$argv' >> ${BINDIR}/scc
	chmod +x ${BINDIR}/scc
	cp sccomp ${BINDIR}

clean:
	rm -f ${sco} *.BAK *.CKP scltext.* *.S2C

clean-sc-to-c:
	rm -f ${scc}

noprogs:
	rm -f sccomp Xsccomp

all:
	$(MAKE) "SCC = ${SCC}" "RTDIR = ${RTDIR}" "CFLAGS = ${CFLAGS}" \
		Xsccomp Xmv

srclinks:
	for x in ${scsc} ${scc} ${scsch}; \
	    do ln -s ${SRCDIR}/$$x $$x;\
	done
	echo '#! /bin/csh -f' > scc
	echo `pwd`'/sccomp -scl ${SCL} -scmh ${SCMH} \
	     -cc ${CC} -LIBDIR ' `pwd`'/${RTDIR} $$argv' >> scc
	chmod +x scc
	echo '#! /bin/csh -f' > Xscc
	echo `pwd`'/Xsccomp -scl ${SCL} -scmh ${SCMH} \
	     -cc ${CC} -LIBDIR ' `pwd`'/${RTDIR} $$argv' >> Xscc
	chmod +x Xscc

tarfiles:
	@echo " scsc/*.sc scsc/*.c scsc/*.sch scsc/README scsc/makefile "

