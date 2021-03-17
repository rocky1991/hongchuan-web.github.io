#include <stdio.h>
int my_atoi(char s[]);
int lower(int c) {
	if (c >= 'A' && c <= 'Z') {
		return c + 'a' - 'A';
	} else {
		return c;
	}
}
int main() {
	printf("result of 12343 is %d\n", my_atoi("12343"));
	printf("result of %c is %c\n", 'A', lower('A'));
	return 0;
}
int my_atoi(char s[]) {
	int result = 0;
	// the end of string check is not needed, when non-numeric character
	// is encountered, loop stops
	for (int i = 0; s[i] != '\0'&& s[i] >= '0' && s[i] <= '9'; ++i) {
		result = result * 10 + (s[i] - '0');	 	
	}
	return result;
}
