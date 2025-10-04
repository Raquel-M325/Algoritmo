#!/bin/bash

> tabela3.csv

for i in $(cat escrito.txt)
do
    echo "$i" | ./algoritmo3 >> tabela3.csv
done