#
#  Scheme->C compiler and runtime tests.
#

SCC = ../scsc/scc
SCCFLAGS = -g

n = n must be defined

SRCDIR = ../../test

.SUFFIXES:
.SUFFIXES: .sc .c .o

batch-c = test01.c test02.c test03.c test04.c test05.c \
	  test06.c test07.c test08.c test09.c test10.c \
	  test11.c test12.c test13.c test14.c test15.c \
	  test16.c test17.c test18.c test19.c test20.c \
	  test21.c test22.c test23.c

batch-o = test01.o test02.o test03.o test04.o test05.o \
	  test06.o test07.o test08.o test09.o test10.o \
	  test11.o test12.o test13.o test14.o test15.o \
	  test16.o test17.o test18.o test19.o test20.o \
	  test21.o test22.o test23.o

progs =	  test   test50 test51 test52 test53 test54 \
	  test01 test02 test03 test04 test05 \
	  test06 test07 test08 test09 test10 \
	  test11 test12 test13 test14 test15 \
	  test16 test17 test18 test19 test20 \
	  test21 test22 test23

alltests= test.sc   testchk.sc \
	  test01.sc test02.sc test03.sc test04.sc test05.sc \
	  test06.sc test07.sc test08.sc test09.sc test10.sc \
	  test11.sc test12.sc test13.sc test14.sc test15.sc \
	  test16.sc test17.sc test18.sc test19.sc test20.sc \
	  test21.sc test22.sc test23.sc \
	  test55.sc

source =  test.sc   testchk.sc \
	  test01.sc test02.sc test03.sc test04.sc test05.sc \
	  test06.sc test07.sc test08.sc test09.sc test10.sc \
	  test11.sc test12.sc test13.sc test14.sc test15.sc \
	  test16.sc test17.sc test18.sc test19.sc test20.sc \
	  test20-input.sc     test20-make.sc \
	  test21.sc test22.sc test23.sc \
	  test50.sc test51.sc test52.sc test53.sc test54.sc test54c.c \
	  test55.sc \
	  alltests.sc

.sc.c:
	${SCC} -C ${SCCFLAGS} $*.sc

.c.o:
	${SCC} -c ${SCCFLAGS} $*.c

test:	test.c test.o testchk.c testchk.o ${batch-c} ${batch-o}
	${SCC} -o test ${SCCFLAGS} test.o testchk.o ${batch-o}

testn:	testchk.c testchk.o 
	${SCC} -i ${SCCFLAGS} -o test${n} test${n}.sc testchk.o

test50:	test50.c test50.o
	${SCC} -o test50 ${SCCFLAGS} test50.o

test51:	test51.c test51.o
	${SCC} -o test51 ${SCCFLAGS} test51.o

test52:	test52.c test52.o
	${SCC} -o test52 ${SCCFLAGS} test52.o

test53:	test53.sc
	${SCC} -i -o test53 ${SCCFLAGS} test53.sc

test54:	test54.c test54.o test54c.o testchk.o
	${SCC} -o test54 test54.o test54c.o testchk.o

test55: test55.c test55.o testchk.o
	${SCC} -o test55 test55.o testchk.o

clean:
	rm -f *.o *.BAK *.CKP core *.S2C

clean-sc-to-c:
	rm -f ${batch-c} test.c testchk.c test50.c test51.c test52.c test53.c \
	      test54.c

noprogs:
	rm -f ${progs}

all:
	$(MAKE) "SCC = ${SCC}" "SCCFLAGS = ${SCCFLAGS}" \
	     test test50 test51 test52 test54
	$(MAKE) "SCC = ${SCC}" "SCCFLAGS = ${SCCFLAGS}" "n = 53" testn

alltests.sc: ${alltests}
	cat ${alltests} > alltests.sc

srclinks:
	for x in ${source}; \
	    do ln -s ${SRCDIR}/$$x $$x;\
	done

autotest: test test50 test54
	./test && ./test50 && ./test54
