#include "./std_lib_facilities.h"
void f(double x) {
	cout << x << endl;

}
void g(int y) {
	f(y);
	double x = y;
	cout << "y is " << y << ", and x is " << x << endl;
}
int main(){
	g(5);
	return 0;
}
