#define _DEFAULT_SOURCE
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char *global_var = "abcdef";

#define JUMP (8192 << 2)
#define HEAPJUMP 0xF0000
#define STACKJUMP 0xF0000
#define MLOOPS 32

char cstring[100];
char pfstring[100];

void bigstack(void) {
	char big_array[STACKJUMP];
	printf("------inside the subroutine, an address on the stack is: 0x%08x\n", (int) &big_array[0]);
	printf("\n\n[2] running pmap....\n");
	system(cstring);
	printf("\n\n");
}

int main(int argc, char *argv[]) {
	char c;
	void *text, *data, *heap, *nowhere, *stack, *belowstack;
	void *nullpointer = NULL;
	void *brk_value;
	void *p1, *p2;
	int i, j;
	int pid;
	void *mvals[MLOOPS];
	int demo = 0;

	if (argc >= 2) {
		if (( '-' == argv[1][0]) && (c = argv[1][1]) && (isdigit(c)) ) {
			demo = c - '0';
		}
	}
	if (argc < 2) {
		exit(0);
	}
	if ((demo > 7)) {
		printf("requires an arguments: -0,... -7\n");
		exit(-1);
	}
	text = main;
	data = &global_var;
	stack = &text;
	heap = malloc(256);
	if (NULL == heap)
		exit(-1);
	nowhere = heap + HEAPJUMP;
	belowstack = stack - STACKJUMP;
	pid = getpid();
	sprintf(cstring, "pmap -X %d | tac\n", pid);
	printf("\n\n[1] Running pmap...\n");
	system(cstring);
	printf("\n\n");

	brk_value = sbrk(0);
	int pagesize = sysconf(_SC_PAGESIZE);
	printf("page size : 0x%08x (%d) \n", pagesize, pagesize);
	printf("an address on teh stack : 0x%08x\n", (int) stack);
	printf("an address below the stack: 0x%08x\n", (int) belowstack);
	printf("an address out in nowhere : 0x%08x\n", (int) nowhere);
	printf("the brk : 0x%08x\n", (int) brk_value);
	printf("An address in the heap : 0x%08x\n", (int) heap);
	printf("An address in the data seg: 0x%08x\n", (int) data);
	printf("An address in teh text seg: 0x%08x\n", (int) text);

	printf("\n\n");

	switch (demo) {
		case 0:
			printf("Trying to read from a null pointer...");
			fflush(stdout);
			sleep(2);
			c = *(char * ) nullpointer;
			printf("ok\n");
			printf("trying to write to a null pointer...");
			fflush(stdout);
			sleep(2);
			*(char *) nullpointer = 'A';
			printf("ok\n");
			break;
		case 1:
			printf("tryign to write to the nowhere address...");
			fflush(stdout);
			sleep(2);
			*((char *) nowhere) = 'a';
			printf("ok\n");

			printf("trying to read from the nowhere address...");
			fflush(stdout);
			sleep(2);
			c = *(char * ) nowhere;
			printf("ok\n");
			break;
		case 2:
			printf("trying to read from the text address...");
			fflush(stdout);
			sleep(2);
			c = *(char *) text;
			printf("ok\n");
			printf("trying to write to the text address...");
			fflush(stdout);
			sleep(2);
			*(char*) text = 'A';
			printf("ok\n");
			break;
		case 3: 
			p2 = sbrk(0);
			p1 = p2 -1;
			printf("The break is 0x%08x\n", (int) p2);
			printf("trying to read from 0x%08x( just before brk)...", (int) p1);
			fflush(stdout);
			sleep(2);
			c = *(char*) p1;
			printf("ok\n");
			printf("trying to read from 0x%08x (the brk it self)...",(int) p2);
			fflush(stdout);
			sleep(2);
			c = *(char*) p2;
			printf("ok\n");
			break;
		case 4:
			printf("the break is now 0x%08x\n", (int) sbrk(0));
			for (i = 0; i < MLOOPS; i++) {
				printf("malloc'ing 0x%x bytes...", JUMP);
				fflush(stdout);
				sleep(1);
				mvals[i] = malloc(JUMP);
				if (NULL == mvals[i])
					exit(-1);
				printf("Got 0x%08x, ", (int) mvals[i]);
				printf("The break is now 0x%08x\n", (int) sbrk(0));
			
			}
			printf("The break has grown!\n");
			printf("pause\n");
			sleep(3);
			for (j = i - 1; j >= 0; j--) {
				printf("freeing 0x%08x...", (int) mvals[j]);
				fflush(stdout);
				sleep(1);
				free(mvals[j]);
				printf("The break is now 0x%08x\n", (int) sbrk(0));
			}
			break;
		case 5:
			sprintf(pfstring, "ps -o min_flt,maj_flt %d\n", pid);
			for (i = 0; i < 32; i++) {
				system(pfstring);
				printf("trying to read from below the stack...0x%08x\n", (int) belowstack);
				printf("(0x%08x bytes below the address of the local variable 'stack')\n", STACKJUMP*(i+1));
				fflush(stdout);
				sleep(2);
				c = *(char*) belowstack;
				printf("ok\n");
				printf("trying to write below the stack...0x%08x\n", (int) belowstack);
				sleep(2);
				*((char*) belowstack) = 'a';
				printf("ok\n");
				belowstack = belowstack- STACKJUMP;

			}
			break;
		case 6:
			printf("Calling a subroutine with a big local array\n");
			fflush(stdout);
			sleep(2);
			bigstack();
			break;
		case 7:
			printf("CAlling a subroutine with a big local array\n");
			fflush(stdout);
			sleep(2);
			bigstack();
			printf("back from the subroutine...\n");
			printf("tyring to read from below the stack...0x%08x\n", (int) belowstack);
			printf("(0x%08x bytes below the address of the local variable 'stack')\n", STACKJUMP);
			fflush(stdout);
			sleep(2);
			c = *(char *) belowstack;
			printf("ok\n");
			break;
	}

	

	
	return 0;
}
