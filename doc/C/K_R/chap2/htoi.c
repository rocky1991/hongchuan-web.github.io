#include <stdio.h>

int htoi(char digits[]);
int main() {
	
	char str[] = "0xf3";
	char str1[] = "F3";
	printf("str value in decimal is %d\n", htoi(str));
	printf("str1 value in decimal is %d\n", htoi(str1));
	return 0;
}

int htoi(char digits[]) {
	int results = 0;
	int i = 0;
	if (digits[0] == '0')
		i = 2;	
	while (digits[i] != '\0') {
		if (digits[i] >= '0' && digits[i] <= '9') 
			results = 16 * results + digits[i] - '0';
		else if (digits[i] >= 'A' && digits[i] <= 'F')
			results = 16 * results + digits[i] - 'A' + 10;
		else if (digits[i] >= 'a' && digits[i] <= 'f')
			results = 16 * results + digits[i] - 'a' + 10;
		++i;
	}
	return results;
}
