CC = g++
EXECS = constexpr arr pointer

ALL: $(EXECS)
	@echo "all done~ $(EXECS)"
constexpr:constexpr.cpp
	-$(CC) -o $@ $^
pointer: pointer.cpp
	-$(CC) -o $@ $^
arr: arr.cpp
	-$(CC) -o $@ $^
.PHONY:
	clean
clean:
	@rm -f $(EXECS)

