CC = g++

EXECS = insertion_sort

ALL: $(EXECS) 
	@echo "all done~ $(EXECS)"

insertion_sort: insertion_sort.cpp
	$(CC) -o $@ $^
.PHONY:
	clean

clean:
	@rm -f $(EXECS)
