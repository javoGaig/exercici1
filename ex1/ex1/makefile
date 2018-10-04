
all: ex1

lista.o: lista.c lista.h
	gcc -c lista.c
	
main.o: lista.c lista.h main.c
	gcc -c main.c

exercici1: lista.o main.o
	gcc -o ex1 lista.o main.o