CC = gcc
CFLAGS = -Wall -std=c11 -ggdb -pedantic
TARGET = sll
SRC = $(TARGET).c
OBJ = $(TARGET).o

$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $@
.PHONY: clean

clean:
	$(RM) $(TARGET) $(OBJS)
