CC = gcc

EXECS = hello temp_convert io count_char count_lines count_blanks \
	exer1_9 1_10

ALL: $(EXECS)
	@echo "All done ~ $(EXECS)"

hello: hello.c
	$(CC) -o $@ $^

1_10: 1_10.c
	$(CC) -o $@ $^
exer1_9: exer1_9.c
	$(CC) -o $@ $^
count_blanks: count_blanks.c
	$(CC) -o $@ $^
count_lines: count_lines.c
	$(CC) -o $@ $^
count_char: count_char.c
	$(CC) -o $@ $^
temp_convert: temp_convert.c
	$(CC) -o $@ $^
io:io.c	
	$(CC) -o $@ $^
.PHONY:
	clean
clean:
	@rm -f $(EXECS)
