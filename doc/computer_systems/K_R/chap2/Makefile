CC = gcc
EXECS = byte_rep
ALL: $(EXECS)
	@echo "All done~ $(EXECS)"
byte_rep: byte_rep.c
	@$(CC) -o $@ $^
.PHONY:
	clean
clean: 
	@rm -f $(EXECS)
