all: main.o nodes.o
	gcc -o program main.c nodes.c
main.o: main.c nodes.h
	gcc -c main.c
nodes.o: nodes.c nodes.h
	gcc -c nodes.c
run:
	./program	
clean:
	rm -rf main.o nodes.o program
