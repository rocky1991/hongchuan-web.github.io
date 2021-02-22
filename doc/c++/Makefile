CC = g++
EXECS = operators 
.PHONY:
	clean
ALL: $(EXECS)
	echo "All execs done!"
singly_linked_list: singly_linked_list.cpp
	-$(CC) -o $@ $^
operators: operators.cpp
	-$(CC) -o $@ $^
clean:
	rm -f $(EXECS)
