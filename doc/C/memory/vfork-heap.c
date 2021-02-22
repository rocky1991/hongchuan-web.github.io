#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define DELTA 4096

void die(void) {
	exit(-1);
}

int main(void) {
	int pid;

	printf("Hi, I am the parent, and my break is %p\n", sbrk(0));
	pid = vfork();
	if (0 == pid) {
		printf("----------Hi, I am the child, I am going to try to increase my break by 0x%x\n", DELTA);
		printf("------------I am the child, my break is %p\n", sbrk(0));
		printf("--------- Child pauses dramatically....\n");
		sbrk(16);
		printf("----------Child: my break is now %p\n", sbrk(0));
		printf("----------Child: increase break by 1\n");
		sbrk(16);
		printf("----------Child: my break is now %p\n", sbrk(0));
		printf("---------Child says goodbye!\n");
		die();
	}
	wait(NULL);
	printf("Parent pauses dramatically...\n");
	printf("Hi I am parent, my break is %p\n", sbrk(0));
	return 0;
}
