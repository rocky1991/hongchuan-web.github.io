#include <stdio.h>

int main() {
	int c, word_len = 0;
	while ( (c = getchar()) != EOF) {
		if (c == '\t' || c == ' '|| c == '\n') {

			for (int i = 0; i < word_len; ++i) 
				printf("-");
			printf("\n");
			word_len = 0;
		} else 
			++word_len;
	}
	return 0;
}
