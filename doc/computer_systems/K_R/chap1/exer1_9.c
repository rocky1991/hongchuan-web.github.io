#include <stdio.h>
int main() {
	int c;
	int prev_c = NULL;
	while ( (c = getchar()) != EOF) {
		if (prev_c == ' ' && c == ' ') 
			continue;
		putchar(c);
		prev_c = c;
		
	}
	return 0;
}
