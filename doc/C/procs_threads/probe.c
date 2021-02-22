#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern char **environ;

int globalv;
char cstring[100];

int main(int argc, char *argv[], char* envp[]){
	int localv, pid;
	void *stackaddr, *globaladdr, *argVaddr, *argaddr, *envVaddr, *envpaddr, *envaddr;
	void *heapaddr;

	pid = getpid();
	printf("\n Hi I'm process %d! Thanks for running me and giving me %d args :-)\n", pid, argc);
	if (4 == sizeof(stackaddr)) {
		printf("-> compiled as 32-bit program (-m32)\n");
	} else if (8 == sizeof(stackaddr)) {
		printf("-> compiled as 64-bit program\n");
	} else {
		printf("uh....what?\n");
		return -1;
	}

	sprintf(cstring, "pmap -X %d | tac\n", pid);
	printf("-> Running pmap...\n\n");
	system(cstring);
	
	stackaddr = (void *) &localv;
	globaladdr = (void *) &globalv;
	argVaddr = (void *) argv;
	argaddr = (void *) argv[0];
	envVaddr = (void *) environ;
	envpaddr = (void *) envp;
	envaddr = (void *) getenv("PWD");
	heapaddr = (void *) malloc(10);
	
	printf("\n*** Can you see where each item below 'lives' in the pmap output?!***\n\n");
	printf("-> the address of main = %p\n", &main);
	printf("-> the address of printf = %p\n", &printf);
	printf("-> the adress of getenv = %p\n", &getenv);
	
	printf("-> a stack address   = %p\n", stackaddr);
	printf("-> a global address = %p\n", globaladdr);
	printf("-> the argv address = %p\n", argVaddr);
	printf("-> argv[0] = %p\n", argaddr);
	if (argaddr)
		printf("      value is [%s]\n", (char *) argaddr);
	printf("-> the environ address = %p\n", envVaddr);
	printf("-v the envp address   = %p\n", envpaddr);
	printf("-> getenv(\"PWD\")  = %p\n", envaddr);
	if (envaddr) 
		printf("      value is [%s]\n", (char *) envaddr);
	printf("-> a heap address = %p\n", heapaddr);
	

	printf("\nNow I am going to loop forever...");
	fflush(stdout);
	
	while (1) {
		sleep(10);
		printf(",");
		fflush(stdout);
	}
	
	return 0;
}

