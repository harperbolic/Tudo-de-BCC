#! /bin/bash

echo "começou"

declare -i maxNumber=10
declare -i fileNumber=10

for ((; maxNumber >= fileNumber ; fileNumber++)); do

    echo "iniciando processo" $fileNumber

    if [ $fileNumber -le 9 ]; then
    	gcc exemplo000$fileNumber.c
    	sleep 3
    	echo "/*" >> exemplo000$fileNumber.c
    	./a.out >> exemplo000$fileNumber.c
    	echo "*/" >> exemplo000$fileNumber.c
    	echo "sucesso" $filenumber
    fi

    if [ $fileNumber -gt 9 ]; then
	gcc exemplo00$fileNumber.c
    	sleep 3
    	echo "/*" >> exemplo00$fileNumber.c
    	./a.out >> exemplo00$fileNumber.c
    	echo "*/" >> exemplo00$fileNumber.c
    	echo "sucesso" $fileNumber
    fi
done
