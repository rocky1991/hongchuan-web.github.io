#include <iostream>
using namespace std;

int main() {
	string input;
	string input1;
	// cout << "Type full name:";
	// cin >> input;
	// cout << "The full name is " << input << endl;
	cout <<" Type full name again: ";
	getline (cin, input1);
	cout << "The full name is: " << input1 << endl;


	string greeting = "no need to include string library";
	cout << greeting << endl;
	cout << "the length is " << greeting.length() <<endl;
	cout << "index at 0: " << greeting[0]<< endl;
	greeting[0] = '3';
	cout << "change at index 0: " << greeting<<endl;

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