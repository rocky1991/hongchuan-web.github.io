#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void) {
	FILE *fp;
	fp = fopen("mystery.txt", "w");
	fprintf(fp, "yow \n");
	{
		if (0 == fork()) {
			exit(0);
		}
	}
	
}
