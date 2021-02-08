CC = g++
EXECS =  vec test calculator02buggy use


.PHONY:
	clean
ALL: $(EXECS)
	echo "All execs done!"
use: my.h use.cpp  my.cpp
	-$(CC) -o $@ $^
	
calculator02buggy:calculator02buggy.cpp
	-$(CC) -o $@ $^
	
test: test.cpp
	-$(CC) -o $@ $^
vec: vec.cpp
	-$(CC) -o $@ $^
clean:
	rm -f $(EXECS)
