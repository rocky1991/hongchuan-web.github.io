#include <stdio.h>
#include <string.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
	int i;
	for (int i = 0; i < len; i++) {
		printf(" %.2x", start[i]);
	}
	printf("\n");
}
void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}
void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}
void show_pointer(void *x) {
	show_bytes((byte_pointer) &x, sizeof(void *));
}

int main() {
	const char *s = "abcdef";
	show_bytes((byte_pointer)s, strlen(s));
	show_int(5);
	show_float(1.0);
	int *a;
	show_pointer(a);
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer) &val;
	show_bytes(valp, 1);
	show_bytes(valp,2);
	show_bytes(valp, 5);
	char str[6] = "12345";
	show_bytes(str, 6);
	for (int i = 0; i < 5; i++) 
		printf("%x\n", '1'+ i);
	return 0;
}
