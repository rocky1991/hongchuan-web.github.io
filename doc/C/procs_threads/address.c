#include <stdio.h>

int main() {
	int len = sizeof(&len);

	int int_len = 0;
	long int lint_len = 0;
	printf("An int has %lu bytes\n", sizeof(int_len));
	printf("An long int has %lu bytes\n", sizeof(lint_len));
	printf("An address has %ld bytes\n", sizeof(&len));
}
