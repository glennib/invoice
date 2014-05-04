# MACROS

SRCPATH		= ./src
INCPATH		= ./include
OBJPATH		= ./obj
INSTPATH	= ./bin
CC		= g++
CFLAGS		= -g -Wall -I$(INCPATH)


# TARGETS

all: getobj app putobj

app: main.o Invoice.o
		$(CC) $(CFLAGS) -o $(INSTPATH)/app main.o Invoice.o

main.o: $(SRCPATH)/main.cpp $(INCPATH)/Invoice.h
	$(CC) $(CFLAGS) -c $(SRCPATH)/main.cpp

Invoice.o: $(SRCPATH)/Invoice.cpp $(INCPATH)/Invoice.h
	$(CC) $(CFLAGS) -c $(SRCPATH)/Invoice.cpp

getobj:
	-mv $(OBJPATH)/*.o .

putobj:
	-mv *.o $(OBJPATH)

clean:
	-rm -f app
	-rm -f $(OBJPATH)/*.o
	-rm -f $(INSTPATH)/*
