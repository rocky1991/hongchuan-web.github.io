#include <stdio.h>
#include <string.h>
void squeeze(char s[], int c);
int main() {
	
	char s[] = "abcabc";
	squeeze(s, 'c');
	printf("%s\n", s);
	return 0;
}

void squeeze(char s[], int c){ 
	int i, j;
	for (i = j = 0; i < strlen(s); ++i) {
		if (s[i] != c) {
			s[j++] = s[i];
		}
		
	}
	s[j++] = '\0';
}
