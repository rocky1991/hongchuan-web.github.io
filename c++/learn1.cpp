#include <iostream>
using namespace::std;

void aFunc(string* anAddr);
int plusF(int a, int b);
double plusF(double a, double b);
int main() {
	
	cout << "a try" <<endl;
	string food = "aKind of Food";
	string *foodRef = &food;
	aFunc(foodRef);
	int a = plusF(3,2);
	double b = plusF(3.2,2.3);
	return 0;
}

void aFunc(string* anAddr) {
	cout << "function " << *anAddr<<"\n";
	cout << "The address is " << anAddr<<endl;
}

int plusF(int a, int b) {
	cout << (a+b) <<endl;
	return (a+b);
}
double plusF(double a, double b) {
	cout << (a+b) <<endl;
	return (a+b);
}