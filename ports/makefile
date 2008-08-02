#
# This file is used to make the Scheme->C system for a specific processor
# type.
#

# The Scheme->C system is initially compiled from the C sources by the
# following:

port:
	$(MAKE) -C scrt port
	$(MAKE) -C scsc port
	$(MAKE)	-C test autotest

# Install in system directories; use prefix=~ for private copy

install:
	$(MAKE) -C scrt install
	$(MAKE) -C scsc install

# Clean out working files.

clean:
	rm -f *.BAK *.CKP SC-TO-C*
	$(MAKE) -C scrt clean
	$(MAKE) -C scsc clean
	$(MAKE) -C test clean

# Clean up C source files generated from Scheme source.

clean-sc-to-c:
	$(MAKE) -C scrt clean-sc-to-c
	$(MAKE) -C scsc clean-sc-to-c
	$(MAKE) -C test clean-sc-to-c

# Delete programs and libraries.

noprogs:
	$(MAKE) -C scrt noprogs
	$(MAKE) -C scsc noprogs
	$(MAKE) -C test noprogs

# All files which must be constructed are made by the following command:

all:
	$(MAKE) -C scrt all
	$(MAKE) -C scsc all
