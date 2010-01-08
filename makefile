#
# This file is used to make the Scheme->C system for multiple processor types.
#

# Architecture specific directories and links to the source files are
# constructed by the following commands which follow:

default:
	@echo "make: *** no default target"
	@exit 1

forANY:
	rm -Rf ${CPU}
	+mkdir -p ${CPU}
	+cp ports/makefile ${CPU}/
	+mkdir -p ${CPU}/scsc
	+cat ports/${CPU}/makefile-head scsc/makefile >${CPU}/scsc/makefile
	$(MAKE) -C ${CPU}/scsc srclinks
	+mkdir -p ${CPU}/scrt
	+cat ports/${CPU}/makefile-head scrt/makefile >${CPU}/scrt/makefile
	$(MAKE) -C ${CPU}/scrt srclinks
	+mkdir -p ${CPU}/server
	+cat ports/${CPU}/makefile-head scrt/makefile >${CPU}/server/makefile
	$(MAKE) -C ${CPU}/server srclinks
	+mkdir -p ${CPU}/test
	+cat ports/${CPU}/makefile-head test/makefile >${CPU}/test/makefile
	$(MAKE) -C ${CPU}/test srclinks
	+mkdir -p ${CPU}/cdecl
	+cat ports/${CPU}/makefile-head cdecl/makefile >${CPU}/cdecl/makefile
	$(MAKE) -C ${CPU}/cdecl srclinks
	+mkdir -p ${CPU}/xlib
	+cat ports/${CPU}/makefile-head xlib/makefile >${CPU}/xlib/makefile
	$(MAKE) -C ${CPU}/xlib srclinks

forAOSF:
	$(MAKE) "CPU=AOSF" forANY
	cp ports/AOSF/aosf.s AOSF/scrt/
	cp ports/AOSF/options.h AOSF/scrt/
	cp ports/AOSF/aosf.s AOSF/server/
	cp ports/AOSF/options-server.h AOSF/server/options.h
	rm AOSF/xlib/X.cdecl
	cp ports/AOSF/X.cdecl AOSF/xlib/

forDECMIPS:
	$(MAKE) "CPU=DECMIPS" forANY
	cp ports/DECMIPS/mips.s DECMIPS/scrt/
	cp ports/DECMIPS/options.h DECMIPS/scrt/
	cp ports/DECMIPS/mips.s DECMIPS/server/
	cp ports/DECMIPS/options-server.h DECMIPS/server/options.h

forHP300:
	$(MAKE) "CPU=HP300" forANY
	cp ports/HP300/hp300.s HP300/scrt/
	cp ports/HP300/options.h HP300/scrt/
	cp ports/HP300/hp300.s HP300/server/
	cp ports/HP300/options-server.h HP300/server/options.h

forHP700:
	$(MAKE) "CPU=HP700" forANY
	cp ports/HP700/hp700.s HP700/scrt/
	cp ports/HP700/options.h HP700/scrt/
	cp ports/HP700/hp700.s HP700/server/
	cp ports/HP700/options-server.h HP700/server/options.h

forLINUX:
	$(MAKE) "CPU=LINUX" forANY
	cp ports/LINUX/linux.s LINUX/scrt/
	cp ports/LINUX/options.h LINUX/scrt/
	cp ports/LINUX/linux.s LINUX/server/
	cp ports/LINUX/options-server.h LINUX/server/options.h

forAMD64:
	$(MAKE) "CPU=AMD64" forANY
	cp ports/AMD64/linux.s AMD64/scrt/
	cp ports/AMD64/options.h AMD64/scrt/
	cp ports/AMD64/linux.s AMD64/server/
	cp ports/AMD64/options-server.h AMD64/server/options.h

forARM:
	$(MAKE) "CPU=ARM" forANY
	cp ports/ARM/arm.s ARM/scrt/
	cp ports/ARM/options.h ARM/scrt/

forSUNOS5:
	$(MAKE) "CPU=SUNOS5" forANY
	cp ports/SUNOS5/sparc.s SUNOS5/scrt/
	cp ports/SUNOS5/sparc-pragma.h SUNOS5/scrt/
	cp ports/SUNOS5/options.h SUNOS5/scrt/
	cp ports/SUNOS5/sparc.s SUNOS5/server/
	cp ports/SUNOS5/options-server.h SUNOS5/server/options.h

forSUNOS4:
	$(MAKE) "CPU=SUNOS4" forANY
	cp ports/SUNOS4/sparc.s SUNOS4/scrt/
	cp ports/SUNOS4/sparc-pragma.h SUNOS5/scrt/
	cp ports/SUNOS4/options.h SUNOS4/scrt/
	cp ports/SUNOS4/sparc.s SUNOS4/server/
	cp ports/SUNOS4/options-server.h SUNOS4/server/options.h

forMAC:
	$(MAKE) "CPU=MAC" forANY
	rm -r MAC/scsc
	rm -r MAC/cdecl
	rm -r MAC/xlib
	rm -r MAC/server
	cp ports/MAC/README MAC/
	cp ports/MAC/options.h MAC/scrt/
	echo "#define MACSCI 1" > MAC/scrt/cio-MACSCI.c
	cat MAC/scrt/cio.c >> MAC/scrt/cio-MACSCI.c
	cp ports/MAC/pack MAC/scrt/
	cp ports/MAC/unpack.c MAC/scrt/

forSGIMIPS:
	$(MAKE) "CPU=SGIMIPS" forANY
	cp ports/SGIMIPS/mips.s SGIMIPS/scrt/
	cp ports/SGIMIPS/options.h SGIMIPS/scrt/
	cp ports/SGIMIPS/mips.s SGIMIPS/server/
	cp ports/SGIMIPS/options-server.h SGIMIPS/server/options.h
	cp ports/SGIMIPS/ranlib SGIMIPS/

forSONYMIPS:
	$(MAKE) "CPU=SONYMIPS" forANY
	cp ports/SONYMIPS/mips.s SONYMIPS/scrt/
	cp ports/SONYMIPS/options.h SONYMIPS/scrt/
	cp ports/SONYMIPS/mips.s SONYMIPS/server/
	cp ports/SONYMIPS/options-server.h SONYMIPS/server/options.h

forVAX:
	$(MAKE) "CPU=VAX" forANY
	cp ports/VAX/vax.s VAX/scrt/
	cp ports/VAX/options.h VAX/scrt/
	cp ports/VAX/vax.s VAX/server/
	cp ports/VAX/options-server.h VAX/server/options.h

forFREEBSD:
	$(MAKE) "CPU=FREEBSD" forANY
	cp ports/FREEBSD/x86.s FREEBSD/scrt/
	cp ports/FREEBSD/options.h FREEBSD/scrt/
	cp ports/FREEBSD/x86.s FREEBSD/server/
	cp ports/FREEBSD/options-server.h FREEBSD/server/options.h


# Clean out working files.

clean:
	rm -f *.BAK *.CKP SC-TO-C*
	$(MAKE) -C doc   clean
	$(MAKE) -C scrt  clean
	$(MAKE) -C scsc  clean
	$(MAKE) -C test  clean
	$(MAKE) -C cdecl clean
	$(MAKE) -C xlib  clean

# Clean up C source files generated from Scheme source.

clean-sc-to-c:
	$(MAKE) -C scrt  clean-sc-to-c
	$(MAKE) -C scsc  clean-sc-to-c
	$(MAKE) -C test  clean-sc-to-c
	$(MAKE) -C cdecl clean-sc-to-c
	$(MAKE) -C xlib  clean-sc-to-c

# Delete programs and libraries.

noprogs:
	$(MAKE) -C scrt  noprogs
	$(MAKE) -C scsc  noprogs
	$(MAKE) -C test  noprogs
	$(MAKE) -C cdecl clean-sc-to-c
	$(MAKE) -C xlib  clean-sc-to-c
