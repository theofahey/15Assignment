all: argumentative.o
	gcc -o main argumentative.o
argumentative.o: argumentative.c
	gcc -c argumentative.c
run: 
	./main
