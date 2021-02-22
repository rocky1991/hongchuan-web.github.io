#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#define KIDS 4

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cvar = PTHREAD_COND_INITIALIZER;

int condition = 1;

char *spaces(int kid) {
    switch (kid) {
    case 0:
        return ":";
    case 1:
        return "--";
    case 2:
        return "++++";
    case 3:
        return "======";
    }
    return "********";
}

void *critfun(void *vargp) {
	int me = (int) vargp;
	
	int rc;

	while(1){
		sleep(1);
		printf("%s Thread %d would like to mess with the data structure, but only if the condition is true\n", spaces(me), me);
		printf("%s Thread %d trying to acquire lock\n", spaces(me), me);
		rc = pthread_mutex_lock(&lock);
		
		printf("%s Thread %d acquired the lock!, now test the condition\n", spaces(me), me);
		while (!condition) {
			printf("%s Thread %d: condition is false, I'll wait release lock\n", spaces(me), me);
			pthread_cond_wait(&cvar, &lock);
			printf("%s Thread %d: I am back with the lock, I'll test again!\n", spaces(me), me);
			
		}
		printf("%s Thread %d, I have the lock and condition is true\n", spaces(me), me);
		sleep(1);
		printf("%s Thread %d I am making condition false, and releasing the lock\n", spaces(me),me);
		condition = 0;
		rc = pthread_mutex_unlock(&lock);
		sleep(3);
		printf("%s Thread %d: trying to acquire lock\n", spaces(me), me);
		
		rc = pthread_mutex_lock(&lock);
		printf("%s Thread %d acqure the lock, making the condition true\n", spaces(me), me);
		condition = 1;
		printf("%s Thread %d: I'll signal cvar, in case anyone waiting for that\n", spaces(me), me);
		pthread_cond_signal(&cvar);
		printf("%s Thread %d all done, release lock\n", spaces(me), me);
		rc = pthread_mutex_unlock(&lock);

	}

	return NULL;
}

int main(void) {
	int i, rc;

	pthread_t kids[KIDS];
	for (i = 0; i < KIDS; i++ ) {
		rc = pthread_create(&kids[i],
				    NULL,
				    critfun,
				    (void *) i);
	}

	for (i = 0; i < KIDS; i++ ) {
		rc = pthread_join(kids[i], NULL);
	}
	return 0;
}
