CC = g++
EXECS = const_expr switch loop vector temperature \
	dict drill1

.PHONY:
	clean
ALL: $(EXECS)
	echo "All execs done!"
drill1: drill1.cpp
	-$(CC) -o $@ $^
dict: dict.cpp
	-$(CC) -o $@ $^
temperature: temperature.cpp
	-$(CC) -o $@ $^
vector: vector.cpp
	-$(CC) -o $@ $^
loop: loop.cpp
	-$(CC) -o $@ $^
switch: switch.cpp
	-$(CC) -o $@ $^
const_expr: const_expr.cpp
	-$(CC) -o const_expr const_expr.cpp
clean:
	rm -f $(EXECS)
