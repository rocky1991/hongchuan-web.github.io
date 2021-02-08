CC = g++
EXECS = operators str repeated_words bye_cruel \
	type_safe drill
.PHONY:
	clean
ALL: $(EXECS)
	echo "All execs done!"
repeated_words: repeated_words.cpp
	-$(CC) -o $@ $^
drill: drill.cpp
	-$(CC) -o $@ $^
singly_linked_list: singly_linked_list.cpp
	-$(CC) -o $@ $^
type_safe: type_safe.cpp
	-$(CC) -o $@ $^
operators: operators.cpp
	-$(CC) -o $@ $^
str: str.cpp
	-$(CC) -o $@ $^
bye_cruel: bye_cruel.cpp
	-$(CC) -o $@ $^
clean:
	rm -f $(EXECS)
