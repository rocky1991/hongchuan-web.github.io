CC = g++
EXECS =  cerr


.PHONY:
	clean
ALL: $(EXECS)
	echo "All execs done!"
cerr: cerr.cpp
	-$(CC) -o $@ $^
clean:
	rm -f $(EXECS)
