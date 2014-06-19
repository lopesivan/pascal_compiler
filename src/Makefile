CFLAGS = -std=c++0x
CC = g++
objects = main.o scan.o parse.o symtab_build.o
AST_header = node/*.hpp
AST_source = symtab/symtab_build.cpp


all:	pascal

pascal:	$(objects)
	$(CC) $(CFLAGS) $(objects) -o pascal

main.o: main.c pascal.tab.h globals.h $(AST_header)
	$(CC) $(CFLAGS) -c main.c -o main.o

symtab_build.o: symtab/symtab_build.cpp symtab/symboltable.h $(AST_header)
	$(CC) $(CFLAGS) -c symtab/symtab_build.cpp -o symtab_build.o

scan.c: flex/pascal.l pascal.tab.h
	flex -o scan.c --case-insensitive flex/pascal.l

parse.o: pascal.tab.c globals.h $(AST_header)
	$(CC) $(CFLAGS) -c pascal.tab.c -o parse.o 

pascal.tab.c pascal.tab.h: bison/pascal.y
	bison --debug -d -b pascal bison/pascal.y

clean: 
	rm *.o pascal.tab.c pascal.tab.h scan.c 
