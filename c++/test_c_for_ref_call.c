#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x, y;
	x = 3;
	y = 4;
	swap(&x, &y);
	printf("%d %d\n", x, y);	
	return 0;
}
