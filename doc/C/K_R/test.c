#include <stdio.h>

int main() {
	struct point {
		int x;
		int y;
	};
	struct point a = {1, 0};
	typedef struct point1 {
		int x;
		int y;
	} point2;
	point2 b = {2, 3};
	return 0;
}
