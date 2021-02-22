CC=g++
EXECS = vector

.PHONY:
	clean
ALL: $(EXECS)
	echo "$(EXECS) all done"
vector:vector.cpp
	-$(CC) -o $@ $^
clean:
	rm -f $(EXECS)
