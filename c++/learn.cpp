#include <iostream>
using namespace std;

int main() {

	string greeting = "no need to include string library";
	cout << greeting << endl;

	double d1 = 15e3;
	cout << d1 << endl;

	char aCh = 'B';
	cout << aCh << endl;

	int x;
	cout << "Type a number";
	// cin >> x;
	cout << "Your number is " << x << endl;

	// this is comment
	cout << "hello world!\n" << endl;
	cout << "another hello" << endl;
	/*
	* this is block comment
	*/
	int a = 15;
	cout << a << endl;
	const int a1 = 10;
	cout << a1 << endl;
	int age1 = 234;
	cout << "my age is " << age1 << " years old\n";
	return 0;
}