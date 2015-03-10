############################################################
##
## Makefile for latex files
##
## Flavio Roberto Silva (flaviosilva@rocketmail.com)
##
############################################################

## Variables

## File name 
FILE_NAME = prova1

COMPILER = latex
REFERENCES_COMPILER = bibtex
DVI_COMPILER = dvips -t letter -P cmz


############################################################

#all: tex references tex tex ps # pdf -> só é usado explicitamente
all: tex tex tex ps # pdf -> só é usado explicitamente

clear:
	rm -rf ${FILE_NAME}.dvi 
	rm -rf *.aux 
	rm -rf *.log
	rm -rf ${FILE_NAME}.ps
	rm -rf ${FILE_NAME}.pdf
	rm -rf *.bbl
	rm -rf *.blg
	rm -rf *.lof
	rm -rf *.toc

tex: 
	${COMPILER} ${FILE_NAME}

references: 
	export BSTINPUTS=$PWD/styles
	${REFERENCES_COMPILER} ${FILE_NAME}

ps: 
	${DVI_COMPILER} ${FILE_NAME}.dvi -o ${FILE_NAME}.ps

pdf: 
#	dvipdf ${FILE_NAME}.dvi ${FILE_NAME}.pdf
	ps2pdf ${FILE_NAME}.ps ${FILE_NAME}.pdf

