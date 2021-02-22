#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

#define LEN0 30
#define LEN1 (2<<20)

char dest[LEN0];

int main() {
	char *src = "There is no dark side of the moon, really";
	void *ptr;

	strncpy(dest, src, LEN0);
	
	printf("Mallocing 0x%0x bytes...\n", LEN0);
	ptr = malloc(LEN0);
	if (ptr == NULL) {
		exit(-1);
	}

	printf("return %p\n", ptr);

	printf("mallocing 0x%0x bytes ...\n", LEN1);

	ptr = malloc(LEN1);
	if (ptr == NULL) {
		exit(-1);
	}
	printf("return %p\n", ptr);
	return 0;
}
