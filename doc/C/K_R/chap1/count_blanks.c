#include <stdio.h>

int main() {
	int c;
	int b = 0, t = 0, nl = 0;
	while ((c = getchar()) != EOF) {
		if ( c == ' ') 
			b += 1;
		else if (c == '\t') 
			t += 1;
		else if (c == '\n')
			nl += 1;

	}
	printf("%d blanks, %d tabs, %d new lines", b, t, nl);
}
