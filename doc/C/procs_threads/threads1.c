#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 20

//static int target = 1000;
static int target = 10000000;

static volatile int counter = 0;

void *mythread(void *arg) {
	printf("%d: begin\n", (int) arg);
	for (int i = 0; i < target; i++) {
		counter += 1;
	}
	printf("%d: done\n", (int) arg);
	pthread_exit(NULL);
}

int main(void) {
	printf("main: begin(counter = %d\n", counter);

	pthread_t threads[NUM_THREADS];
	int rc;
	int t;

	for (t = 0; t < NUM_THREADS; t++) {
		rc = pthread_create(&threads[t],
				    NULL,
				    mythread,
				    (void *) t);
		if (rc) {
			printf("pthread create error, code %d\n", rc);
			exit(-1);
		}
	}

	for (t = 0; t < NUM_THREADS; t++) {
		rc = pthread_join(threads[t], NULL);

		if (rc) {
			fprintf(stderr, "error, return code from join is %d\n", rc);
			exit(-2);
		}
	}
	printf("main: done (counter = %d)\n",counter);
	pthread_exit(NULL);
	return 0;
}
