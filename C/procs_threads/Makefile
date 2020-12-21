CC = gcc
CFLAGS = -ggdb -Wall -pedantic -std=c11 -m32
SRCS = $(wildcard *.c)
OBJS =$(SRC:.c=.o)

EXECS = fork1 fork2 fork3 forkbomb  \
	exec1 exec2\
	pid pid2 killer defunct pipe\
	exec_convert exec_display \
	threads0 threads1 thread_atm thread_spy\
	hello hello-static\
	uid rand_test mystery1\
	address32 address64 sf probe malloc_mystery \
	sync_lock sync_lock_tests sync_cvar sync_sem #sync_grand_demo

.PHONY:all clean

all: $(EXECS)
	@echo "\nDone! ~~> $(EXECS)"

sync_cvar: sync_cvar.c
	$(CC) $(CFLAGS) -pthread -o $@ $^
sync_sem: sync_sem.c
	$(CC) $(CFLAGS) -pthread -o $@ $^
# skipped grand demo
#sync_grand_demo: sync_grand_demo.c
#	$(CC) $(CFLAGS) -pthread -o $@ $^

sync_lock: sync_lock.c
	$(CC) $(CFLAGS) -pthread -o $@ $^
sync_lock_tests: sync_lock_tests.c
	$(CC) $(CFLAGS) -pthread -o $@ $^
sf: sf.c
	$(CC) $(CFLAGS) -o $@ $^

address32: address.c
	$(CC) $(CFLAGS) -o $@ $^
address64: address.c
	$(CC) -ggdb -Wall -std=c11 -o $@ $^
probe: probe.c
	$(CC) $(CFLAGS) -o $@ $^

hello-static: hello-static.c
	$(CC) $(CFLAGS) -static -L/usr/lib/debug/usr/lib64 -o $@ $^

uid: uid.c
	$(CC) $(CFLAGS) -o $@ $^
rand_test: rand_test.c
	$(CC) $(CFLAGS) -o $@ $^
mystery1: mystery1.c
	$(CC) $(CFLAGS) -o $@ $^

malloc_mystery: malloc_mystery.c
	$(CC) $(CFLAGS) -o $@ $^
threads0: threads0.c
	$(CC) $(CFLAGS) -pthread -o $@ $^
threads1: threads1.c
	$(CC) $(CFLAGS) -pthread -o $@ $^
thread_atm: thread_atm.c
	$(CC) $(CFLAGS) -pthread -o $@ $^
thread_spy: thread_spy.c
	$(CC) $(CFLAGS) -pthread -o $@ $^

fork1: fork1.c
	$(CC) $(CFLAGS) -o $@ $^

fork2: fork2.c
	$(CC) $(CFLAGS) -o $@ $^

fork3: fork3.c
	$(CC) $(CFLAGS) -o $@ $^

forkbomb: forkbomb.c
	$(CC) $(CFLAGS) -o $@ $^	
exec1: exec1.c
	$(CC) $(CFLAGS) -o $@ $^

exec2: exec2.c
	$(CC) $(CFLAGS) -o $@ $^

pid: pid.c
	$(CC) $(CFLAGS) -o $@ $^
pid2: pid2.c
	$(CC) $(CFLAGS) -o $@ $^

killer: killer.c
	$(CC) $(CFLAGS) -o $@ $^
defunct: defunct.c
	$(CC) $(CFLAGS) -o $@ $^

pipe: pipe.c
	$(CC) $(CFLAGS) -o $@ $^

#ignored write_html.file
exec_convert:exec_convert.c
	$(CC) $(CFLAGS) -o $@ $^

exec_display: exec_display.c
	$(CC) $(CFLAGS) -o $@ $^

hello: hello.c
	$(CC) $(CFLAGS) -o $@ $^
clean:
	@rm -f $(EXECS) *.o *.i *.s *~
	@rm -f index.html



