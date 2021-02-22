#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define ALICE 1
#define BOB 0
#define PLAYERS 2
#define name(x) ( (x) ? "ALICE:   ": "Bob")

typedef struct {
	int balance;
	int wallets[PLAYERS];
} state_t;


typedef struct {
	int who;
	state_t *sp;
	int amount;
	int coid;
}childarg;


int flip_coin(void) {
	static int fd;
	static int initialized = 0;
	static int bits_left = 0;
	static unsigned char random_byte;
	int random_bit;

	if (!initialized) {
		fd = open("/dev/urandom", O_RDONLY);
		if (fd < 0) {
			fprintf(stderr, "oen failed\n");
			exit(-1);
		}
		initialized = 1;
	}
	if (0 == bits_left) {
		if (sizeof(random_byte) != read(fd, &random_byte, sizeof(random_byte))) {
			fprintf(stderr, "read failed\n");
			exit(-1);
		}
		bits_left = 0;
	}
	random_bit = random_byte & 0x01;
	random_byte >>= 1;
	bits_left--;
	return random_bit;
}

void consider_interleaving(void) {
	if (flip_coin()) {
		sleep(1);
	}
}

void *withdraw(void *vargp) {
	childarg *argp = (childarg *) vargp;
	int amount = argp->amount;
	state_t *sp = argp->sp;
	int me = argp->who;

	consider_interleaving();
	printf("%s tries to withdraw $%d\n", name(me), amount);
	fflush(stdout);

	if (sp->balance >= amount) {
		consider_interleaving();
		sp->balance -= amount;
		sp->wallets[me] += amount;
		printf("%s's withdraw succeeds\n", name(me));
		fflush(stdout);
	} else {
		printf("%s's withdraw fails\n", name(me));
		fflush(stdout);
	}
	return NULL;
}
void print_state(state_t *sp) {
	if(NULL == sp) {
		fprintf(stderr, "carefull with that NULL pointer Eugene\n");
		exit(-1);
	}
	printf("balance = %d, alice has %d, bob has %d\n", sp->balance, sp->wallets[ALICE], sp->wallets[BOB]);
	fflush(stdout);
}

int main(void) {
	pthread_t child1, child2;
	int rc;
	state_t state;
	childarg alice_arg, bob_arg;
	state.balance = 100;
	state.wallets[ALICE] = 0;
	state.wallets[BOB] = 0;
	flip_coin();

	alice_arg.who = ALICE;
	alice_arg.sp = &state;
	alice_arg.amount = 90;

	bob_arg.who = BOB;
	bob_arg.sp = &state;
	bob_arg.amount = 80;

	print_state(&state);
	
	rc = pthread_create(&child1,
			    NULL,
			    withdraw,
			    (void *) &alice_arg);
	if (rc) {
		printf("child1 failed\n");
		exit(-1);
	}
	rc = pthread_create(&child2,
			    NULL,
			    withdraw,
			    (void *) &bob_arg);
	if (rc) {
		printf("child2 failed\n");
		exit(-1);
	}
	
	rc = pthread_join(child1, NULL);
	rc = pthread_join(child2, NULL);
	
	print_state(&state);


	return 0;
}






















