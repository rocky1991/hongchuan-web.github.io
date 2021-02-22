#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


int main(void) {
	

	int pid, rc;
	printf("Zombie demo, open another window!\n");
	pid = getpid();

	printf("I am process %d, check ps -a in other window\n",pid);

	sleep(10);
	printf("I am about to fork\n");
	
	rc = fork();
	if (rc == 0) {
		pid = getppid();
		printf("I am child, my parent is %d\n", pid);
		printf("Check ps -a in other window\n");
		sleep(5);
		printf("Child says: goodbye!\n");
		printf("Check ps -a in other window.\n");
		exit(-1);
	}
	pid = rc;
	printf("my child has pid %d\n", pid);
	printf("I'll delay collecting its error code \n");
	sleep(10);
	rc = waitpid(pid, NULL, 0);
	printf("Parent collected error code , check ps -a now\n");
	sleep(10);
	return 0;
}
