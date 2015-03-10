#!/bin/bash

SOURCE=$1
CC="gcc"
EXEC=$(basename $SOURCE '.c')
TC=$2;

INPUT="./entrada"
EXPOUT="./saida"

echo "Compilando..."
$CC $SOURCE -o $EXEC

echo "Gerando..."
for (( i=1; i<=$TC; i++ )); do
	cat $INPUT'/'$i'in.txt' | ./$EXEC > $EXPOUT'/'$i'out.txt'
done 

