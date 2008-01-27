# Makes the documentation files.

.SUFFIXES:
.SUFFIXES: .psf .mss

embedded.psf:	embedded.mss
	scribe embedded.mss

index.psf:	index.mss
	scribe index.mss

intro.psf:	intro.mss
	scribe intro.psf

smithnotes.psf:	smithnotes.mss
	scribe smithnotes.psf

clean:
	-rm -r *.BAK *.CKP

tarfiles:
	@echo " doc/README doc/*.mss doc/*.psf doc/*.l doc/makefile "
