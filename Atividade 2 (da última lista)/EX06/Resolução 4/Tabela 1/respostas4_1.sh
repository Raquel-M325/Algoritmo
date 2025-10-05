#!/bin/bash

>tabela_1_6.csv

for i in $(cat escrito6_tabela1.txt)
do
    echo "$i" | ./algoritmo4 >> tabela_1_6.csv
done