CC = g++
EXECS =  first_cal


.PHONY:
	clean
ALL: $(EXECS)
	echo "All execs done!"
first_cal: first_cal.cpp
	-$(CC) -o $@ $^
clean:
	rm -f $(EXECS)
