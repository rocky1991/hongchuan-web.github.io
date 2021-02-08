CC = g++
EXECS =  struct class


.PHONY:
	clean
ALL: $(EXECS)
	echo "All execs done!"
class: class.cpp
	-$(CC) -o $@ $^
struct:struct.cpp
	-$(CC) -o $@ $^
clean:
	rm -f $(EXECS)
