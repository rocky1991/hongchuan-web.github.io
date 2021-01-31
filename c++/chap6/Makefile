CC = g++
EXECS =  calculator02buggy 


.PHONY:
	clean
ALL: $(EXECS)
	echo "All execs done!"
calculator: calculator.cpp
	-$(CC) -o $@ $^
calculator02buggy: calculator02buggy.cpp
	-$(CC) -o $@ $^
	
first_cal: first_cal.cpp
	-$(CC) -o $@ $^
clean:
	rm -f $(EXECS)
