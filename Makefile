
#Makefile for "Atv_1" C++ application
#Created by Hand 22/02/2017

PROG = Atv_1
CC = g++
cppflags = -O0 -g -W -Wall -pedantic
OBJS = main.o milionario.o vetor.o calcceds.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

milionario.o: 
	$(CC) $(CPPFLAGS) -c milionario.cpp

vetor.o:
	$(CC) $(CPPFLAGS) -c vetor.cpp

calcceds.o:
	$(CC) $(CPPFLAGS) -c calcceds.cpp

clean:
	rm -f *.o