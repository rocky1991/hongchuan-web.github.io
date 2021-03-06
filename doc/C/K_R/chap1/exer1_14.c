#include <stdio.h>
int main() {
	int c = 0;
	int ndigits[26];
	for (int i = 0; i < 26; ++i) 
		ndigits[i] = 0;
	while ( (c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z')
			ndigits[c -'a'] += 1;

	}
	for (int i = 0; i < 26; ++i) {
		printf("%d\n", ndigits[i]);
		//for (int j = 0;j < ndigits[i]; ++j) 
		//jprintf("-");
		//printf("\n");
	}
	return 0;
}
