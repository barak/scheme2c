# Makes the documentation files.

all: embedded.pdf index.pdf intro.pdf smithnotes.pdf r4rs.pdf

.SUFFIXES:

.SUFFIXES: .tex .dvi .ps .pdf
TEX=latex
%.ps:  %.dvi; dvips -K -Ppdf -G0 -R0 -q -tletter -o $@ $<
%.pdf: %.ps; ps2pdf $< $@

export TEXINPUTS
r4rs.dvi: TEXINPUTS=r4rs:
r4rs.dvi: TEX=latex209
r4rs.dvi: r4rs/r4rs.tex
	$(TEX) -output-directory=. $<

clean:
	-rm -rf *.pdf *.dvi *.aux *.log *.BAK *.CKP

tarfiles:
	@echo " doc/README doc/*.tex doc/*.l doc/makefile "
	@echo " doc/r4rs/*.tex doc/r4rs/algol60.sty doc/r4rs/index.sch "
	@echo " doc/r4rs/r4rs.aux doc/r4rs/r4rs.idx doc/r4rs/r4rs.toc "
	@echo " doc/r4rs/NOTES "
