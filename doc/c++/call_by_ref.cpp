#include <iostream>
using namespace std;
void swap(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap2(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int x = 3;
	int y = 4;
	swap(x, y);
	cout << x << " " << y << endl;
	int x1 = 3;
	int y1 = 4;
	swap2(&x1, &y1);
	cout << x1 << " " << y1 << endl;
	return 0;
}
