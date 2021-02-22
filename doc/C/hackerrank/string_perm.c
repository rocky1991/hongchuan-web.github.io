#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	char **s = malloc(3 * sizeof(char*));	
	for (int i = 0; i < 3; i++) {
		*(s + i) = (char *) malloc(5 * sizeof(char));
		scanf(" %s", *(s + i));
	}

	for (int i = 0; i < 3; i ++){
		printf("%s ", *(s + i));
	}
	printf("\n");
	
	printf("%d\n", strcmp(*(s + 0), *(s + 1)));
	printf("%ld\n", *(s + 0) - *(s + 1));
	if (*(s + 0) > *(s + 1)) {
		printf("the 0th\n");
	} else
		printf("the 1st");

	return 0;
}
