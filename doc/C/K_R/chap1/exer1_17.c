#include <stdio.h>

#define MAX_LINE 1000

int my_getline(char line[], int maxline);


int main() {
	int len;
	char line[MAX_LINE];

	while ((len = my_getline(line, MAX_LINE)) > 1) {
		if (len >= 80)
			printf("%s\n", line);
	}

	return 0;
}

int my_getline(char s[], int limit) {
	int c, i;
	for (i = 0; i < limit -1 && (c = getchar()) != EOF && c != '\n'; ++i) 
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;	
}
