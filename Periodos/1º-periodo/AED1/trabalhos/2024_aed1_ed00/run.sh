#! /bin/bash

echo "var start"

declare -i maxNumber=1
declare -i fileNumber=0

for ((; maxNumber > fileNumber ; maxNumber++)); do
    gcc exemplo$fileNumber.c
    sleep 3
    echo "/*" >> exemplo$fileNumber.c
    ./a.out >> exemplo$fileNumber.c
    echo "*/" >> exemplo$fileNumber.c
    echo "sucesso"
done
