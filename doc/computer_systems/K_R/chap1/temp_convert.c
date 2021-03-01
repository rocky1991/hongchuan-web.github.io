#include <stdio.h>

int main() {
	int fahr;
	for (fahr = -300; fahr <= 300; fahr += 20) {
		printf("fah %3d; celsius %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
	return 0;
}
