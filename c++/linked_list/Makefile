CC=g++

EXECS = singly_with_class singly_with_struct test	

ALL: $(EXECS)
	@echo "All done $(EXECS)"

test:test.cpp
	-$(CC) -o $@ $^
singly_with_class: singly_with_class.cpp
	-$(CC) -o $@ $^
singly_with_struct:singly_with_struct.cpp
	-$(CC) -o $@ $^
.PHONY:
	clean
clean:
	rm -f $(EXECS)
