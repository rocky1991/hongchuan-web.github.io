#include <stdlib.h>
#include <stdio.h>
int main() {
	/* second version */
	int c;
	while ( (c = getchar()) != EOF) {
		putchar(c);
		printf("\ninside loop, test\n");
		printf("%d\n", getchar() != EOF);
	}
	printf("outside loop, test\n");
	printf("%d\n", getchar() != EOF);
	printf("The value of EOF is %d\n", EOF);
	/* first version 

	int c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	} */
	return 0;
}
