#define _POSIX_SOURCE

#include <signal.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	int pid, rc;
	
	printf("Thanks for running  %s! forking...\n", argv[0]);
	
	pid = fork();
	if (pid == 0) {
		int i = 0;
		while(1){
			printf("Hi, I am the child (%d) and I shall run forever!!! i = %d\n", getpid(), i);
			i++;
			sleep(1);
		}
	}
	if (argc == 1) {
		printf("I am the parent, since no arg, I will exit!\n");
		return 0;
	}

	printf("I am parent, I shall sleep for a while...\n");
	sleep(5);
	printf("I am parent, just woke up, kill the child process...\n");

	rc = kill(pid, SIGTERM);
	printf("rc = %d\n", rc);

	return 0;
}
