CC = gcc

EXECS = hello temp_convert io count_char count_lines count_blanks \
	exer1_9 1_10 wc exer1_12 count_w_arr exer1_13 exer1_14 power \
	get_maxline exer1_17 exer1_18 exer1_19

ALL: $(EXECS)
	@echo "All done ~ $(EXECS)"

hello: hello.c
	$(CC) -o $@ $^
exer1_19:exer1_19.c
	$(CC) -o $@ $^
exer1_18:exer1_18.c
	$(CC) -o $@ $^
exer1_17:exer1_17.c
	$(CC) -o $@ $^
get_maxline:get_maxline.c
	$(CC) -o $@ $^
pwoer: power.c
	$(CC) -o $@ $^
exer1_14: exer1_14.c
	$(CC) -o $@ $^
exer1_13: exer1_13.c
	$(CC) -o $@ $^

count_w_arr: count_w_arr.c
	$(CC) -o $@ $^
exer1_12: exer1_12.c
	$(CC) -o $@ $^
wc: wc.c
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
