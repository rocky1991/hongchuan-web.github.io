#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <pthread.h>
#include <semaphore.h>

#define ALICE 1
#define BOB 0
#define PLAYERS 2
#define name(x) ( (x) ?  "Alice" : "Bob")

#define RPIPE 0
#define WPIPE 1

int *x_addresses[PLAYERS];
int alice_to_bob[2];
int bob_to_alice[2];
int global;
int size_of_int = sizeof(int);

void *alice() {
	int x, bytes, data = 42;
	x_addresses[ALICE] = &x;

	x = ALICE;
	printf("\n");
	printf("-----------Hi, I am thread Alice. \n");
	printf("-----------My &x = 0x%08x\n", (unsigned int) &x);
	printf("-----------My x = %d\n", x);
	printf("-----------Now I will kick Bob, and then wait for him to kick me\n");
	bytes = write(alice_to_bob[WPIPE], &data, size_of_int);
	if (bytes != size_of_int) {
		fprintf(stderr, "error\n");
		exit(3);
	}
	bytes = read(bob_to_alice[RPIPE], &data, size_of_int);
	if (bytes < size_of_int) {
		fprintf(stderr, "error\n");
		exit(-3);
	}
	printf("\n-------------Hi, I am Alice again\n");
	printf("----------My x = %d\n", x);
	return NULL;
}
void *bob() {
	int x, bytes, data;
	printf("\n============Hi, I am thread Bob, I'll wait for Alice to kick me.\n");
	bytes = read(alice_to_bob[RPIPE], &data, size_of_int);
	if (bytes < size_of_int) {
		fprintf(stderr, "error\n");
		exit(-3);
	}
	x_addresses[BOB] = &x;
	x = BOB;
	printf("\n=============Hi, I am Bob, here is an address:\n");
	printf("==============My &x = 0x%08x\n", (unsigned int) &x);
	printf("==============My x = %d\n", x);
	printf("==============Alice's x = %d\n", *x_addresses[ALICE]);
	printf("==============I'll change Alice's x to %d\n", BOB);
	*x_addresses[ALICE] = BOB;
	sleep(5);
	printf("-============Now I will kick Alice\n");
	bytes = write(bob_to_alice[WPIPE], &data, size_of_int);
	if (bytes != size_of_int) {
		fprintf(stderr, "error!\n");
		exit(3);
	}
	return NULL;
}
 	

int main(void) {
	pthread_t child1, child2;
	int rc;
	char* cp;
	printf("Initializing the pipes\n");

	if (pipe(alice_to_bob) < 0) {
		fprintf(stderr, "error!\n");
		exit(-1);
	}
	if (pipe(bob_to_alice) < 0) {
		fprintf(stderr, "error!\n");
		exit(-1);
	}

	cp = malloc(42);
	
	printf("Hi, I am main\n");
	printf("An address in the stack: 0x%08x\n", (unsigned int) &cp);
	printf("An address in the heap: 0x%08x\n", (unsigned int) cp);
	printf("An address in the data: 0x%08x\n", (unsigned int) &global);
	printf("An address in the text: 0x%08x\n", (unsigned int) &main);

	rc = pthread_create(&child1,
			    NULL,
			    alice,
			    NULL);
	if (rc) {
		printf("hey, child1 failed!\n");
		exit(-2);
	}
	
	rc = pthread_create(&child2,
			    NULL,
			    bob,
			    NULL);
	if (rc) {
		printf("hey, child1 failed!\n");
		exit(-2);
	}
	rc = pthread_join(child1, NULL);
	printf("\nAlice has exited now\n");
	rc = pthread_join(child2, NULL);
	printf("\nBob has exited now\n");
	
	return 0;
	
}
