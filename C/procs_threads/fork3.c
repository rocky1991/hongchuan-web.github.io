#include <stdlib.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>

char *indent = "============";
int main(void) {
	int pid, rc, status;
	pid = getpid();
	printf("%s I'm process %d, about to fork\n", indent, pid);
	rc = fork();
	
	if (rc == 0) {
		pid = getppid();
		printf("I am the child , my parent is %d\n", pid);
		printf("I am the child, sleep for 5 seconds\n");
		sleep(5);
		printf("I am the child, done sleep, now exit\n");
		exit(258);
	}

	pid = rc;
	printf("%s my child has pid %d\n", indent, pid);
	printf("%s I'll wait for it to be done\n",indent);
	rc = waitpid(pid, &status, 0);
	printf("%s back from pid, rc = %d adn status = %d\n", indent, rc, status);
	
	//return 0;
	if (WIFEXITED(status)) {
		printf("WIFEXITED(%d) is true\n", status);
		printf("WEXITSTATUS(%d) == %d\n", status, WEXITSTATUS(status));
	} else {
		printf("WIFEXITED(%d) is FALSE.\n", status);
	}
	return 0;
}
