CC=gcc
CFLAGS=-I.
all: HW11partA_overflow.cpp HW11partA_secure.cpp
	g++ -Wall -o HW11partA_overflow.out HW11partA_overflow.cpp
	g++ -Wall -o HW11partA_secure.out HW11partA_secure.cpp
clean:
	$(RM) *.out
test: HW11partA_overflow.out HW11partA_secure.out
	./HW11partA_overflow.out
	./HW11partA_secure.out
	
