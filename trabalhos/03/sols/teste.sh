#!/bin/bash

#Este script pode ser utilizado para testar 

SOURCE=$1
CC="gcc"
EXEC=$(basename $SOURCE '.c')
TC=$2;

INPUT="./entrada"
EXPOUT="./saida"

echo "Compilando..."
$CC $SOURCE -o $EXEC

echo "Testando..."
for (( i=1; i<=$TC; i++ )); do
	cat $INPUT'/'$i'in.txt' | ./$EXEC > './'$i'.txt'
done 

for (( i=1; i<=$TC; i++ )); do

	DIFF=$(diff './'$i'.txt' $EXPOUT'/'$i'out.txt')
	
	if [ "$DIFF" != "" ] ;	then		
		echo -e "\e[31m***********Teste '$i' ***********"
		diff -y './'$i'.txt' $EXPOUT'/'$i'out.txt'
		echo -e "******************************** \e[39m"				
	else 	
		echo -e "\e[32m***********Teste '$i' ***********"
		echo -e "OK "
		echo -e "******************************** \e[39m"		
	fi
	
done 
