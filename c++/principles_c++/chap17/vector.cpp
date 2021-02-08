//#include "std_lib_facilities.h"
#include <iostream>

using namespace std;
class vector {
private:
	int size;
	double *elem;
public:
	vector(int s)
		:size(s), elem(NULL){};
	int get_size() const {return size;}
};
int main() {
	double* p = new double[4];
	
		
	
	cout << "the size of char is " << sizeof(char) << endl;
	cout << "the size of int is " << sizeof(int) << endl;
	cout << "the size of int* is " << sizeof(int*) << endl;
	cout << "the size of double is " << sizeof(double) << endl;
	cout << "the size of bool is " << sizeof(bool) << endl;
	vector <int> v(1000);
	cout << "The size of vector is " << sizeof(v)/ sizeof(int) << endl;
	return 0;
}
