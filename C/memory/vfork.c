#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void die(void) {
	exit(-1);
}

int main(int argc, char *argv[]) {
	int value = 0;
	int do_vfork = -1;
	int pid;
	int i;

	for (i = 1; i < argc; i++ ){
		if (0 == strcmp(argv[i], "-v")) {
			do_vfork = 1;
		} else if (0 == strcmp(argv[i], "-f")) {
			do_vfork = 0;
		}
	}
	printf("do_vfork value is %d\n", do_vfork);
	
	if (do_vfork == -1) {
		printf("Requires -v or -f arguments\n");
		exit(-1);
	}
	printf("Hi I am the parent, and my local variable = %d\n", value);
	if (do_vfork) {
		printf("vforking a child...\n");
		pid = vfork();
	} else {
		printf("forking a child \n");
		pid = fork();
	}

	if (pid == 0) {
		printf("------------Hi I am the child, the local variable = %d\n", value);
		value++;
		printf("-------Hi I am the child, I changed it to %d\n", value);
		printf("---------Child now waits dramatically before dying...\n");
		sleep(6);
		printf("--------Child dying!\n");
		die();
	}
	printf("Hi I am the parent, I'll read the local variable, but only after the child dies\n");
	wait(NULL);
	printf("I am the parent again, the local variable = %d\n", value);
	return 0;

}
