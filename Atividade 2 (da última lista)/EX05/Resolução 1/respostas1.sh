#!/bin/bash

> tabela1.csv  # cria ou limpa o arquivo antes

for i in $(cat escrito.txt)
do
    echo "$i" | ./algoritmo1 >> tabela1.csv
done
