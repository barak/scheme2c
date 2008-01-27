#
# This file is used to make the Scheme->C system for a specific processor
# type.
#

# The Scheme->C system is initially compiled from the C sources by the
# following:

port:
	cd scrt; make port
	cd scsc; make port

# A "private" working copy of the current compiler, libary, and interpreter
# is installed in a directory by the following command:

install-private:
	cd scrt; make "DESTDIR = ${DESTDIR}" install-private
	cd scsc; make "DESTDIR = ${DESTDIR}" install-private

# Clean out working files.

clean:
	rm -f *.BAK *.CKP SC-TO-C*
	cd scrt; make clean
	cd scsc; make clean
	cd test; make clean

# Clean up C source files generated from Scheme source.

clean-sc-to-c:
	cd scrt; make clean-sc-to-c
	cd scsc; make clean-sc-to-c
	cd test; make clean-sc-to-c

# Delete programs and libraries.

noprogs:
	cd scrt; make noprogs
	cd scsc; make noprogs
	cd test; make noprogs

# All files which must be constructed are made by the following command:

all:
	cd scrt; make all
	cd scsc; make all

tarfiles:
	@echo " ports/makefile ports/*/README ports/*/[S-z]* "

