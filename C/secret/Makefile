CC     = gcc
CFLAGS = -Wall -std=c11 -ggdb
TARGET = secret
SRC = $(TARGET).c
OBJ = $(TARGET).o

.PHONY: clean

$(TARGET): $(OBJS)

clean:
	$(RM) $(TARGET) $OBJS out.txt
