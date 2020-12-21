#include <stdio.h>
#include <unistd.h>
char *indent = "===============";

int main(void) {
	int pid, rc;

	pid = getpid();
	printf("%s I'm process %d, and I am about to fork\n", indent, pid);
	printf("%s Process before fork, ppid is %d\n", indent ,getppid());	
	rc = fork();
	if (rc == 0) {
		pid = getppid();
		printf("Child : The ppid before sleep is %d\n",getppid());
		sleep(5);
		printf("Child after sleep: I am the child, my parent is %d\n", pid);
		printf("Child after sleep: now the ppid is %d\n", getppid());
		//_exit(21);	
	}
	//sleep(2);
	pid = rc;
	printf("Parent: %s my child has pid %d\n", indent, pid);
	return 0;
}
