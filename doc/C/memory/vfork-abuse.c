#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int global = 0;

void vforker(void) {
	int value = 0;
	int pid;

	printf("Hi I am the parent %d, local = %d, global = %d\n", getpid(), value, global);
	printf("vforking a child...\n");
	
	pid = vfork();
	if (pid == 0) {
		printf("Hi I am the child %d, I am chaning both variables\n", getpid());
		value++;
		global++;
		printf("child pauses dramatically..\n");
		sleep(3);
		printf("Child returns from vforker to sub...\n");
		return;
	}
	printf("Hi I am the parent, local = %d, global = %d\n", value, global);
	printf("Parent pauses dramatically...\n");
	sleep(3);
	printf("Parent now returns from vforker to sum!\n");
	return;
}

void stacktrasher(void) {
	int array[512];
	int i;
	printf("process %d trashing the stack\n", getpid());
	for (i = 0; i < 512; i++ ) {
		array[i] = 0;
	}
	return;
}

void sub(void) {
	printf("yahoo----- process %d calling vforker\n", getpid());
	vforker();
	printf("yahoo---- process %d calling from vforker\n", getpid());
	return;
}

int main(void) {
	sub();
	printf("yahoo---process %d back from sub, calling stacktrasher\n", getpid());
	stacktrasher();
	printf("yahoo---process %d back from stacktrasher\n", getpid());
	printf("process %d says goodbye!\n", getpid());
	return 0;
}
