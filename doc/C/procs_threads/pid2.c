#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *indent = "=================";

int main(void) {
	int pid, rc;
	
	pid = getpid();
	printf("%s I am process %d and about to fork\n", indent ,pid);
	rc = fork();
	
	if (rc == 0) {
		pid = getpid();
		printf("I am the child and my pid is %d\n", pid);
		printf("Now I will exec and print my pid via the exec'd programm..\n");
		rc = execlp("./pid", "anything", NULL);
		printf("Do you think this will ever get printed rc = %d\n", rc);
		exit(-1);
	}

	return 0;
}
