#!/bin/bash
FILES=../entrada/*
prefix="${in%/*/*}"      # coloca "foo/bar/baz" em prefix

for f in $FILES
do
  #echo "Processing $f file..."
  #echo "${f#*/*/}"    # feliz.html
  ./ouro < $f > ../saida/${f#*/*/}
done
