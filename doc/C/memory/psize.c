#include <stdio.h>

int main(void) {
	void *pointer;
	int bits;
	long int gigs, g2;
	int g3;

	bits = sizeof(pointer) << 3;
	gigs = ((long) 1) << (bits - 30);
	g2 = (      1) << (bits - 30);
	g3  = (      1) << (bits - 30);

	printf("An address has %d bits\n", bits);
	printf("That means the address space is %ld gigabytes\n", gigs);

	printf("How much RAM is in this computer? \n\n");
	printf("(but if I don't cast before dividing, I only get %ld)\n", g2);
	printf("(and if I use an int, I only get %d)\n", g3);
	return 0;
}
