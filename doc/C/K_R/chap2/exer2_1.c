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

	signed char sc = 0;
	// check upper bound
	signed char prev_sc = 0;
	while (1) {
		sc += 1;
		if (sc < prev_sc)
			break;
		else 
			prev_sc = sc;
	}
	printf("biggest sc is %d\n", prev_sc);
	while (1) {
		sc -= 1;
		if (sc > prev_sc) 
			break;
		else 
			prev_sc = sc;
	}
	printf("The smallest sc is %d\n", prev_sc);
	signed short ss = 0;
	signed int si = 0;
	signed long sl= 0l;
	unsigned char uc= 0;
	unsigned short us= 0;
	unsigned int ui= 0;
	unsigned long ul= 0ul;
	
	return 0;

}
