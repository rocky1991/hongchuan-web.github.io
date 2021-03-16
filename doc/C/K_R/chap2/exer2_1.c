#include <stdio.h>
#include <string.h>
int main() {
	long a = 12345l;
	unsigned char b = 256;
	printf("%d\n", b);
	char c = '\013';
	printf("%c\n", c);
	char d = '\a';
	printf("%c %c %c %c %c \n", d, '\\', '\?', '\'', '\"' );
	char la[3] = "ab";
	printf("the string is %s\n", la);
	printf("the string length is %ld\n", strlen(la));
	return 0;

}
