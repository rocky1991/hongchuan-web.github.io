#include <stdlib.h>
#include <stdio.h>

int main() {
	long nc = 0;
//	while (getchar() != EOF) 
//		++nc;
	printf("nc is %ld\n", nc);
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%ld\n", nc);
}
