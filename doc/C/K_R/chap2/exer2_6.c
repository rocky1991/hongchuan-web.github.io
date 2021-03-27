#include <stdio.h>

void printbits(unsigned x, int n) {
	
}
//unsigned setbits(x, p, n, y) {
//	
//}
unsigned getbits(unsigned x, int p, int n) {
	// the part (x >> (p + 1 -n)) shift x so that the needed bits are right adjusted
	// second part, ~0 returns all 1s regardless of word lenghth
	// then ~0 <<n shift by n bits, n bits are filled with 0s
	// take the complement of it will make right most n bits to be 1
	return (x >> (p+1-n) & ~(~0 << n));
}

int main() {

	printf("%d\n", getbits(5, 2, 2));
	printf("%d\n",~(~0 << 2));
	return 0;
}
