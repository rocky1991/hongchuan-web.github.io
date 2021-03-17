CC = gcc
EXECS = exer2_1 exer2_2 atoi htoi squeeze exer2_4\
	exer2_5
ALL: $(EXECS)
	@echo "all done ~ $(EXECS)"

exer2_1: exer2_1.c
	$(CC) -o $@ $^
exer2_5:exer2_5.c
	$(CC) -o $@ $^
exer2_4:exer2_4.c
	$(CC) -o $@ $^
squeeze:squeeze.c
	$(CC) -o $@ $^
htoi:htoi.c
	$(CC) -o $@ $^
atoi:atoi.c
	$(CC) -o $@ $^
exer2_2:exer2_2.c
	$(CC) -o $@ $^
.PHOHY:
	clean
clean:
	@rm -f $(EXECS)
