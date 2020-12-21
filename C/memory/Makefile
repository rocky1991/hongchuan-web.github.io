CC = gcc
CFLAGS = -ggdb -Wall -Wextra -std=gnu11 -m32
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

EXECS = fault psize32 psize64 vfork vfork-heap \
	vfork-abuse brkfun

.PHONY: all clean

all: $(EXECS)
	@echo "\nDone! ~~~~> $(EXECS)"

fault: fault.c
	$(CC) $(CFLAGS) -o $@ $^
vfork: vfork.c
	$(CC) $(CFLAGS) -o $@ $^
vfork-heap: vfork-heap.c
	$(CC) $(CFLAGS) -o $@ $^
vfork-abuse: vfork-abuse.c
	$(CC) $(CFLAGS) -o $@ $^
brkfun: brkfun.c
	$(CC) $(CFLAGS) -o $@ $^

psize32: psize.c
	$(CC) -ggdb -Wall -Wextra -std=c11 -m32 -o $@ $^
psize64: psize.c
	$(CC) -ggdb -Wall -Wextra -std=c11 -m64 -o $@ $^
clean:
	rm -f $(EXECS) *.o *.i *.s *~

