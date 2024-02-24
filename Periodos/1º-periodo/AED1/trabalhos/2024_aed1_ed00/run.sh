#! /bin/bash

echo "começou"

declare -i maxNumber=1
declare -i fileNumber=0

for ((; maxNumber >= fileNumber ; fileNumber++)); do

    echo "iniciando processo" $fileNumber

    if [ $fileNumber -le 9 ]; then
    	gcc Exemplo000$fileNumber.c
    	sleep 3
    	echo "/*" >> Exemplo000$fileNumber.c
    	./a.out >> Exemplo000$fileNumber.c
    	echo "*/" >> Exemplo000$fileNumber.c
    	echo "sucesso" $filenumber
    fi

    if [ $fileNumber -gt 9 ]; then
	gcc Exemplo00$fileNumber.c
    	sleep 3
    	echo "/*" >> Exemplo00$fileNumber.c
    	./a.out >> Exemplo00$fileNumber.c
    	echo "*/" >> Exemplo00$fileNumber.c
    	echo "sucesso" $fileNumber
    fi
done
