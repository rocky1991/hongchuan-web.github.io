#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void) {
	int rc;

	printf("parent ");
	rc = fork();
	if (0 == rc) {
		printf("child ");
		exit(42);
	}
	wait(NULL);
	sleep(5);
	printf("\n");
	return 0;
}
