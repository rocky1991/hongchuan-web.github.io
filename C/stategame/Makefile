CC = gcc
CFLAGS = -Wall -pedantic -std=c11 -ggdb
PROG = stategame
OBJS = $(PROG).o readline.o
LIBS = -lm

.PNONY: play clean

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $^ $(LIBS) -O $@

stategame.o: readline.h
readline.o: readline.h

play:
	@echo "_________________________________________"
	@echo "*****State game !!!********"
	@echo "_________________________________________"
	@./$(PROG) > guess
	@cat guess

clean:
	rm -f *~
	rm -f *.o
	rm -f $(PROG)
	rm -f guess*
