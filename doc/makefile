# Makes the documentation files.

all: embedded.pdf index.pdf intro.pdf smithnotes.pdf

.SUFFIXES:

.SUFFIXES: .tex .dvi .ps .pdf
TEX=latex
%.ps:  %.dvi; dvips -K -Ppdf -G0 -R0 -q -tletter -o $@ $<
%.pdf: %.ps; ps2pdf $< $@

clean:
	-rm -r *.pdf *.dvi *.aux *.log *.BAK *.CKP

tarfiles:
	@echo " doc/README doc/*.tex doc/*.psf doc/*.l doc/makefile "
