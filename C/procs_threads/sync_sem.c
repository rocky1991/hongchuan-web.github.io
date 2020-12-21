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
sem_t sem;
int count;

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

void *upfun(void *vargp) {
	int me = (int) vargp;
	
	int rc;

	while(1){
		sleep(1);
		printf("%s Thread %d trying to acquire lock\n", spaces(me), me);
		rc = pthread_mutex_lock(&lock);
		
		printf("%s Thread %d acquired the lock!, add an object to our queue\n", spaces(me), me);
		count++;
		sleep(2);
		printf("%s Thread %d done, about to release lock\n", spaces(me), me);
		printf("%s %d %s now on queue\n", spaces(me),count, count == 1? "object" : "objects");

		rc = pthread_mutex_unlock(&lock);
		printf("%s Thread %d: upping the semaphore, in case anyone needs that object\n", spaces(me), me);
		rc = sem_post(&sem);

	}

	return NULL;
}

void *downfun(void *vargp) {
	int me = (int) vargp;
	int rc;
	while (1) {
		sleep(2);
		printf("%s Thread %d I'd like to take an object, I'll sem down\n", spaces(me), me);
		sem_wait(&sem);
		printf("%s Thread %d got the semaphore, trying to acquire lock...\n", spaces(me), me);
		
		rc = pthread_mutex_lock(&lock);
		printf("%s Thread %d acquired the lock\n", spaces(me), me);
		printf("%s %d %s now on queue\n", spaces(me),count, count == 1 ? "object": "objects");
		printf("%s Thread %d takes and object\n", spaces(me), me);
		sleep(2);
		count--;
		printf("%s %d %s now on queue\n", spaces(me),count, count == 1? "object": "objects");
		printf("%s Thread %d all done, release lock\n", spaces(me), me);
		rc = pthread_mutex_unlock(&lock);
	}
	return NULL;
}

int main(void) {
	int i, rc;
	
	pthread_t kids[KIDS];
	
	rc = sem_init(&sem,
			0,
			0);

	for (i = 0; i < KIDS; i++ ) {
		if (i % 2) {
			
			rc = pthread_create(&kids[i],
				 	   NULL,
				    	upfun,
				    	(void *) i);
		} else{
			rc = pthread_create(&kids[i],
					    NULL,
					    downfun,
					    (void *) i);
		}
	}

	for (i = 0; i < KIDS; i++ ) {
		rc = pthread_join(kids[i], NULL);
	}
	return 0;
}
