#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

char *indent = "------------";

int main(void) {
	int pid, rc, status, ppid;
	pid = getpid();
	printf("%s I am process %d, about to fork\n", indent ,pid); 

	rc = fork();
	if (rc == 0) {
		pid = getpid();
		ppid = getppid();
		printf("Hi, I am the child %d, my parent is %d\n", pid, ppid);
		//rc = execlp("bogus", "bogus", "hello world", NULL);
		rc = execlp("./hello", "anything", NULL);
		printf("Do you think this line will ever be printed? rc = %d\n", rc);
		exit(-1);
	}

	pid = rc;
	printf("%s my child has pid %d\n", indent, pid);
	printf("%s i'll wait for it to be done\n\n", indent);
	
	rc = waitpid(pid, &status, 0);
	printf("%s back from waitpid, rc = %d and status = %d\n", indent, rc, status);

	if (WIFEXITED(status)) {
		printf("WIFEXITED(%d) is true\n", status);
		printf("WEXITSTATUS(%d) = %d\n", status, WEXITSTATUS(status));
	} else {
		printf("WIFEXITED(%d) is FALSE.\n", status);
	}
}
