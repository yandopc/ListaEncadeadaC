#!/bin/bash

gcc -c imp.c -lm #Implementação das Funções (Cabeçalho)
gcc -c main.c -lm #Arquivo com função principal
gcc -o teste imp.o main.o -lm #Cria o Ligador/executável
clear
//rm -r *.o
./teste
