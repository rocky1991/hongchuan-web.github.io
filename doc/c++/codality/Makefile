CC=g++
EXECS=test_run

ALL:$(EXECS)
	@echo "all done! $(EXECS)"

test: test.cpp
	$(CC) -o $@ $^

test_run: test
	@./$^	
.PHONY:
	clean
clean:
	rm -r $(EXECS)
