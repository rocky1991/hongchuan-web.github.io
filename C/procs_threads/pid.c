#include <unistd.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
	int pid;
	pid = getpid();
	printf("I am process %d\n", pid);
	printf("first argument is %s\n", argv[0]);
	return 0;
}
