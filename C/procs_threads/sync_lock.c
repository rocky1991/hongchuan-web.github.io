#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>

#define KIDS 4

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

char *spaces(int kid){
	switch(kid){
		case 0:
			return ":";
		case 1:
			return "--";
		case 2: 
			return "++++";
		case 3: 
			return "======";
		
	}
	return "*************";
}
void * lockfun(void *vargp) {
	int me = (int) vargp;
	int rc;

	printf("%s Thread %d wants to work on the complex data structure.\n", spaces(me), me);
	printf("%s Thread %d trying to acquire lock...\n", spaces(me), me);

	rc = pthread_mutex_lock(&lock);
	if (rc){
		printf("Thread %d acquire failed\n", me);
		exit(-1);
	}

	printf("%s Thread %d: acquired the lock\n", spaces(me), me);
	printf("%s Thread %d: In critical section\n", spaces(me), me);
	
	sleep(1);
	printf("%s Thread %d: All done, about to release lock\n", spaces(me), me);
	rc = pthread_mutex_unlock(&lock);
	
	printf("%s Thread %d: exiting\n", spaces(me), me);
	return NULL;
}
int main(void) {
	int rc; 
	int i;
	pthread_t kids[KIDS];
	for (i = 0; i < KIDS; i++ ){
		rc = pthread_create(&kids[i],
				    NULL,
				    lockfun,
				    (void *) i);
		if (rc) {
			printf("pthread_create failed\n");
			exit(-1);
		}
	}
	for (i = 0; i < KIDS; i++ ){
		rc = pthread_join(kids[i], NULL);
	}
	return 0;
}
