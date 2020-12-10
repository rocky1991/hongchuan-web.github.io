CC=gcc
target=basic_c
src=$(target).c
dependencies=say_hi.c


compile:
	$(CC) $(src) $(dependencies) -o $(target)

.PHONY:
	clean
clean:
	rm $(target)
