CC = gcc
EXECS = byte_rep pp2_8 conversion
ALL: $(EXECS)
	@echo "All done~ $(EXECS)"
byte_rep: byte_rep.c
	@$(CC) -o $@ $^
conversion: conversion.c
	@$(CC) -o $@ $^
pp2_8:pp2_8.c
	@$(CC) -o $@ $^
.PHONY:
	clean
clean: 
	@rm -f $(EXECS)
