#include <stdio.h>

void squeeze(char s1[], char s2[]);
int main() {
	char s1 [] = "abcdfe";
	char s2 [] = "qbuobde";
	printf("s1 is %s\n s2 is %s\n", s1, s2);
	squeeze(s1, s2);
	printf("s1 after squeeze is %s\n", s1);
	return 0;
}
void squeeze( char s1[], char s2[]) {
	// use i to iterate through the char in s2
	int i, j, k;
	for (i = 0; s2[i] != '\0'; ++i) {
		for (j = 0, k = 0; s1[j] != '\0'; ++j) {
			//printf("s2[%d] = %c; s1[%d] = %c\n", i, s2[i], j, s1[j]); 
			if (s1[j] != s2[i]) {
			//	printf("not equal\n");
				s1[k++] = s1[j];	
			}
		}
		s1[k] = '\0';
	}
}


