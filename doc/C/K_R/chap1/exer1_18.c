#include <stdio.h>
#define MAX_LINE 1000
int my_getline(char line[], int limit);
int main() {
	char cur_line[MAX_LINE];
	int len;
	while( (len = my_getline(cur_line, MAX_LINE)) >= 1) {
		if (len == 1) continue;	
		printf("%s\n", cur_line);
		printf("len is %d\n", len);
	}
}

int my_getline(char s[], int limit) {
	int c, i, flag, index;
	flag = 0;
	index = 0;
	
	for(i = 0; i < limit -1 && (c = getchar()) != EOF && c != '\n'; ++i){ 
		s[i] = c;	
		
		if (c == ' ' || c == '\t'){
			if (flag == 0){
				flag = 1;
				index = i;
			}
				
		} else {
			flag = 0;
		}
	}
	printf("i is %d\n", i+1);
	// check current character if its a tab or blank
	// if yes, flip flag, save index
	// else change flag to false

	if (c == '\n'){
		if (flag == 0){
			s[i] = c; 
			++i;
		}else {
			s[index] = c;
			i = index + 1;
		}
	}
	s[i] = '\0';
	return i;
}
