CC = gcc
CFLAGS = -ggdb -Wall -Wextra -std=gnu11 -m32
SRCS = $(wildcard *.c)
OBJS = $(SRCS: .c=.o)

EXECS = foo1 foo2 fpr fr fw bytes\
	reader writer fspy

.PHONY: all clean


all: $(EXECS)
	@echo "\nDonw! --> $(EXECS)"
writer: writer.c
	$(CC) $(CFLAGS) -o $@ $^
fspy: fspy.c
	$(CC) $(CFLAGS) -o $@ $^

fw: fw.c
	$(CC) $(CFLAGS) -o $@ $^

reader: reader.c
	$(CC) $(CFLAGS) -o $@ $^
bytes: bytes.c
	$(CC) $(CFLAGS) -o $@ $^
foo1: foo1.c
	$(CC) $(CFLAGS) -o $@ $^
foo2: foo2.c
	$(CC) $(CFLAGS) -o $@ $^
fpr: fpr.c
	$(CC) $(CFLAGS) -o $@ $^

fr: fr.c
	$(CC) $(CFLAGS) -o $@ $^
clean:
	@rm -f $(EXECS) *.o *.i *.s *~ mystery.txt
	
