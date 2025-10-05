#!/bin/bash

>tabela_2_6.csv

for i in $(cat escrito6_tabela2.txt)
do
    echo "$i" | ./algoritmo3 >> tabela_2_6.csv
done