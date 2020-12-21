#define _DEFAULT_SOURCE
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char *global_var = "abcdef";

#define JUMP (8192 << 2)
#define HEAPJUMP 0xF0000
#define STACKJUMP 0xF0000
#define MLOOPS 32

char cstring[100];
char pfstring[100];

void bigstack(void) {
	char big_array[STACKJUMP];
	printf("------inside the subroutine, an address on the stack is: 0x%08x\n", (int) &big_array[0]);
	printf("\n\n[2] running pmap....\n");
	system(cstring);
	printf("\n\n");
}

int main() {
	return 0;
}
