CC=gcc
FLAGS=-Wall -pedantic -c89

rally: src/main.c src/window.c
	${CC} $(pkg-config --cflags glfw3) -o bin/rally src/main.c src/window.c  $(pkg-config --static --libs glfw3)