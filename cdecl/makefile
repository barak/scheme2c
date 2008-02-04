.SUFFIXES:
.SUFFIXES: .sc .c

SCSRC = cdecl.sc const.sc extern.sc typedef.sc
CSRC = cdecl.c const.c extern.c typedef.c
MISC = sizeof.c README document load.sc

SRCDIR = ../../cdecl

SCC = ../scsc/scc

.sc.c:
	${SCC} -C $*.sc

all:	
	$(MAKE) "SCC=${SCC}" "SRCDIR=${SRCDIR}" cdecl sizeof

cdecl:	${CSRC}
	${SCC} -o cdecl ${CSRC}

sizeof:	sizeof.c
	${CC} -o sizeof sizeof.c

clean:
	rm -f *.o *.CKP *.BAK *.S2C core

clean-sc-to-c:
	rm -f ${CSRC}

noprogs:
	rm -f cdecl sizeof

srclinks:
	for x in ${SCSRC} ${MISC}; \
	   do ln -s ${SRCDIR}/$$x $$x; \
	done

tarfiles:
	@echo " cdecl/*.sc cdecl/sizeof.c cdecl/README cdecl/document cdecl/makefile "

