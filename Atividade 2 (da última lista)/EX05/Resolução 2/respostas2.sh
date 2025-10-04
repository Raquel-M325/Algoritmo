#!/bin/bash

> tabela2.csv

for i in $(cat escrito.txt)
do
    echo "$i" | ./algoritmo2 >> tabela2.csv
done