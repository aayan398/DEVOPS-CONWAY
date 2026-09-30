
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
PREFIX = $(HOME)/conway-install

.PHONY:all clean install 

all:conway 

conway:main.o conway.o
	$(CC) -o conway main.o conway.o

main.o: main.c conway.h
	$(CC) $(CFLAGS) -c main.c

conway.o:conway.c conway.h
	$(CC) $(CFLAGS) -c conway.c

clean: 
	rm -f conway main.o conway.o

install:conway
	install -d "$(PREFIX)/bin"
	install -m 755 conway "$(PREFIX)/bin/conway"
