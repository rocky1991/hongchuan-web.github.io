//# "all" is the name of the default target, running "make" without params would use it
//all: executable1
//
//# for C++, replace CC (c compiler) with CXX (c++ compiler) which is used as default linker
//CC=$(CXX)
//
//# tell which files should be used, .cpp -> .o make would do automatically
//executable1: file1.o file2.o

#include "./my.h"
int foo;
int main() {
	foo = 7;
	print_foo();
	print(99);
	return 0;
}
