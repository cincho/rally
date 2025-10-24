CC=gcc
FLAGS=-Wall -pedantic -c89

rally: src/main.c src/window.c
	${CC} -o bin/rally src/main.c src/window.c -lglfw -lGL

run:
	./bin/rally