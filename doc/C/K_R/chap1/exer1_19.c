#include <stdio.h>
#define MAX_LINE 1000
int my_getline(char line[], int limit);

void reverse(char s[], int len);

int main() {
	char cur_line[MAX_LINE];
	int len;
	while ( (len = my_getline(cur_line, MAX_LINE)) >= 1) {
		printf("%s", cur_line);
		reverse(cur_line, len);

		printf("Reverse the line\n%s", cur_line);
	}
		
	return 0;
}
void reverse(char s[], int len) {
	char temp;
	for (int i = 0; i < len / 2; ++i) {
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

int my_getline(char s[], int limit) {
	int c, i;
	for (i = 0; i < limit -1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}

	if (c = '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
	
