CC=gcc
CFLAGS=-I.
all: bufferoverflow.cpp 
	g++ -Wall -o buffyflo bufferoverflow.cpp 
clean:
	$(RM) buffyflo
test: buffyflo
	./buffyflo
