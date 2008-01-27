#
# This file is used to make the Scheme->C system for multiple processor types.
#

# Architecture specific directories and links to the source files are
# constructed by the following commands which follow:

forANY:
	-mkdir ${CPU}
	cp ports/makefile ${CPU}
	-mkdir ${CPU}/scsc
	cat ports/${CPU}/makefile-head scsc/makefile >${CPU}/scsc/makefile
	cd ${CPU}/scsc; make srclinks
	-mkdir ${CPU}/scrt
	cat ports/${CPU}/makefile-head scrt/makefile >${CPU}/scrt/makefile
	cd ${CPU}/scrt; make srclinks
	-mkdir ${CPU}/server
	cat ports/${CPU}/makefile-head scrt/makefile >${CPU}/server/makefile
	cd ${CPU}/server; make srclinks
	-mkdir ${CPU}/test
	cat ports/${CPU}/makefile-head test/makefile >${CPU}/test/makefile
	cd ${CPU}/test; make srclinks
	-mkdir ${CPU}/cdecl
	cat ports/${CPU}/makefile-head cdecl/makefile >${CPU}/cdecl/makefile
	cd ${CPU}/cdecl; make srclinks
	-mkdir ${CPU}/xlib
	cat ports/${CPU}/makefile-head xlib/makefile >${CPU}/xlib/makefile
	cd ${CPU}/xlib; make srclinks

forAOSF:
	make "CPU=AOSF" forANY
	cp ports/AOSF/aosf.s AOSF/scrt
	cp ports/AOSF/options.h AOSF/scrt
	cp ports/AOSF/aosf.s AOSF/server
	cp ports/AOSF/options-server.h AOSF/server/options.h
	rm AOSF/xlib/X.cdecl
	cp ports/AOSF/X.cdecl AOSF/xlib

forDECMIPS:
	make "CPU=DECMIPS" forANY
	cp ports/DECMIPS/mips.s DECMIPS/scrt
	cp ports/DECMIPS/options.h DECMIPS/scrt
	cp ports/DECMIPS/mips.s DECMIPS/server
	cp ports/DECMIPS/options-server.h DECMIPS/server/options.h

forHP300:
	make "CPU=HP300" forANY
	cp ports/HP300/hp300.s HP300/scrt
	cp ports/HP300/options.h HP300/scrt
	cp ports/HP300/hp300.s HP300/server
	cp ports/HP300/options-server.h HP300/server/options.h

forHP700:
	make "CPU=HP700" forANY
	cp ports/HP700/hp700.s HP700/scrt
	cp ports/HP700/options.h HP700/scrt
	cp ports/HP700/hp700.s HP700/server
	cp ports/HP700/options-server.h HP700/server/options.h

forMAC:
	make "CPU=MAC" forANY
	rm -r MAC/scsc
	rm -r MAC/cdecl
	rm -r MAC/xlib
	rm -r MAC/server
	cp ports/MAC/README MAC
	cp ports/MAC/options.h MAC/scrt
	echo "#define MACSCI 1" > MAC/scrt/cio-MACSCI.c
	cat MAC/scrt/cio.c >> MAC/scrt/cio-MACSCI.c
	cp ports/MAC/pack MAC/scrt
	cp ports/MAC/unpack.c MAC/scrt

forSGIMIPS:
	make "CPU=SGIMIPS" forANY
	cp ports/SGIMIPS/mips.s SGIMIPS/scrt
	cp ports/SGIMIPS/options.h SGIMIPS/scrt
	cp ports/SGIMIPS/mips.s SGIMIPS/server
	cp ports/SGIMIPS/options-server.h SGIMIPS/server/options.h
	cp ports/SGIMIPS/ranlib SGIMIPS

forSONYMIPS:
	make "CPU=SONYMIPS" forANY
	cp ports/SONYMIPS/mips.s SONYMIPS/scrt
	cp ports/SONYMIPS/options.h SONYMIPS/scrt
	cp ports/SONYMIPS/mips.s SONYMIPS/server
	cp ports/SONYMIPS/options-server.h SONYMIPS/server/options.h

forVAX:
	make "CPU=VAX" forANY
	cp ports/VAX/vax.s VAX/scrt
	cp ports/VAX/options.h VAX/scrt
	cp ports/VAX/vax.s VAX/server
	cp ports/VAX/options-server.h VAX/server/options.h

forWIN16:
	make "CPU=WIN16" forANY
	rm -r WIN16/scsc
	rm -r WIN16/scrt
	rm -r WIN16/cdecl
	rm -r WIN16/xlib
	cp ports/WIN16/README WIN16
	cp ports/WIN16/options-server.h WIN16/server/options.h
	cp ports/WIN16/*.def WIN16/server
	cp ports/WIN16/*.mak WIN16/server

# Clean out working files.

clean:
	rm -f *.BAK *.CKP SC-TO-C*
	cd doc; make clean
	cd scrt; make clean
	cd scsc; make clean
	cd test; make clean
	cd cdecl; make clean
	cd xlib; make clean

# Clean up C source files generated from Scheme source.

clean-sc-to-c:
	cd scrt; make clean-sc-to-c
	cd scsc; make clean-sc-to-c
	cd test; make clean-sc-to-c
	cd cdecl; make clean-sc-to-c
	cd xlib: make clean-sc-to-c

# Delete programs and libraries.

noprogs:
	cd scrt; make noprogs
	cd scsc; make noprogs
	cd test; make noprogs
	cd cdecl; make clean-sc-to-c
	cd xlib; make clean-sc-to-c

# Write the tar tape for distribution.

TARFILES = CHANGES README makefile \
	   `cd doc;make tarfiles` \
	   `cd gnuemacs;make tarfiles` \
	   `cd ports;make tarfiles` \
	   `cd scrt;make tarfiles` \
	   `cd scsc;make tarfiles` \
	   `cd test;make tarfiles` \
	   `cd cdecl;make tarfiles` \
	   `cd xlib;make tarfiles`

TARFLAGS = -cl

tartape:
	tar ${TARFLAGS} ${TARFILES}

tarlog:
	tar tvf ${TARTAPE} > ${TARLOG}

tarZ:
	make "TARFLAGS=-clf tartape-${DATE}" tartape
	make "TARTAPE=tartape-${DATE}" "TARLOG=tartapelog-${DATE}" tarlog
	cp tartape-${DATE} tt-${DATE}
	compress tt-${DATE}

