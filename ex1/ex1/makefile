
all: ex1

lista.o: lista.c lista.h
	gcc -c lista.c -Wall -Wextra
	
main.o: lista.c lista.h main.c
	gcc -c main.c -Wall -Wextra

ex1: lista.o main.o
	gcc -o ex1 lista.o main.o -Wall -Wextra