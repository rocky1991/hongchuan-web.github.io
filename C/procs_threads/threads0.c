#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define ALICE 1
#define BOB 0
#define LOOPS 10
#define name(x) ((x) ? "    Alice" : "     Bob")


void *childfun(void* vargp) {
	int me = (int)vargp;
	for (int i = 0; i < LOOPS; i++) {
		printf("%s: hello %d\n", name(me), i);
		sleep(1);
	}

	return NULL;
}


int main(void) {
	pthread_t child1, child2;
	int rc;

	rc = pthread_create(&child1,
			    NULL,
			    childfun,
			    (void *) ALICE);
	if (rc) {
		printf("hey creating ALICE failed\n");
		exit(-1);
	}

	rc = pthread_create(&child2,
			    NULL,
			    childfun,
			    (void *) BOB);
	if (rc) {
		printf("hey, creating BOB failed!\n");
		exit(-2);
	}

	printf("parent: hello!\n");
	sleep(3);
	exit(0);
	rc = pthread_join(child1,
			  NULL);
	rc = pthread_join(child2,
			  NULL);
	
	
	return 0;
}
