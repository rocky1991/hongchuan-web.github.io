#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define DELTA 17

int main(int argc, char *argv[]) {
	int rc;
	char c;
	int pid;
	char cstring[100];
	char *old, *new;

	pid = getpid();
	sprintf(cstring, "more /proc/%d/maps \n", pid);
	printf("\n\nRunning %s, \n\n, Looking at the map...\n", argv[0]);
	system(cstring);
	printf("\n\n");
	
	old = sbrk(0);
	printf("My break is 0x%08x\n", (unsigned int) old);
	printf("Does that make sense with memory map?\n");
	sleep(4);


	return 0;
}
