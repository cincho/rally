CC=gcc
FLAGS=-Wall -pedantic -c89

rally: src/main.c
	${CC} src/main.c -o bin/rally