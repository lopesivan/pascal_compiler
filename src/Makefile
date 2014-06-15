CFLAGS = -std=c++0x
CC = g++
objects = main.o scan.o parse.o util.o
AST_header = node/*.hpp

all:	pascal

pascal:	$(objects)
	$(CC) $(CFLAGS) $(objects) -o pascal

main.o: main.c globals.h util.h scan.h pascal.tab.h
	$(CC) $(CFLAGS) -c main.c -o main.o

scan.o:	scan.c $(AST_header)
	$(CC) $(CFLAGS) -c scan.c -o scan.o

scan.c: flex/pascal.l pascal.tab.h
	flex -o scan.c --case-insensitive flex/pascal.l

parse.o: pascal.tab.c
	$(CC) $(CFLAGS) -c pascal.tab.c -o parse.o 

pascal.tab.c pascal.tab.h: bison/pascal.y
	bison --debug -d -b pascal bison/pascal.y

util.o: util.c
	$(CC) $(CFLAGS) -c util.c -o util.o

clean: 
	rm *.o pascal.tab.c pascal.tab.h scan.c 
