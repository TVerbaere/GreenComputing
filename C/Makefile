CFLAGS = -Wall -std=c99

all: main

recherche.o: recherche.c
	gcc $(CFLAGS) -c recherche.c

main.o: main.c recherche.h
	gcc $(CFLAGS) -c main.c

main: main.o recherche.o
	gcc $(CFLAGS) -o main main.o recherche.o


clean:
	rm *.o main