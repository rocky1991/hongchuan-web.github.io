#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	int seed = 11;

	int mod_num = 5;

	srand(seed);
	for (;;) {
		printf("%d \n", rand() % mod_num);
		sleep(1);
	}
	return 0;
}
