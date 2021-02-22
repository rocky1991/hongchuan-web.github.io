#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

int main(void) {
	int pid;

	pid = fork();
	if (pid < 0) {
		printf("fork has failed");
		exit(0);
	}
	if (pid == 0) {
		printf("Hi I am the child\n");
		_exit(0);
	}
	sleep(1);	
	printf("I am the parent, my child has pid %d\n", pid);
	
	return 0;
}
