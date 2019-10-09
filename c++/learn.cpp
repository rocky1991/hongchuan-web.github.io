#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string food = "Pizza";
	string &meal = food;
	cout << &food << "\n";
	cout << &meal << "\n";
	string * pt = &food;
	cout << "pointer value: " << pt << "\n";
	cout << "pointer: " << *pt << "\n";
	cout << meal << "\n";
	*pt = "ham";
	cout << "now the food is: " << food << "\n";

	string students[3];
	string cars[3] = {"an","en","bn"};

	bool isFun = true;
	cout << isFun << endl;

	cout << (5>3) << endl;
	cout << max(5,10) << endl;  // not working for more than 2 numbers;
	cout << sqrt(64) << endl;
	cout << log(2) << endl;
	int a = 5;

	if (a>3 ) {
		cout << "condition 1" << endl;
	} else if (a <5) {
		cout << "condition 2" << endl;
	} else {
		cout << "last condition" << endl;
	}
	string result = (a <6) ? "haha" : "no haha";
	cout << result << endl;

	switch(a) {
		case 5:
		cout << "a five";
		break;
		default:
		cout << "not a five";
	}
	cout <<"\n";
	/*

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
	cout << "another hello" << endl; */
	/*
	* this is block comment
	*/

	/*
	int a = 15;
	cout << a << endl;
	const int a1 = 10;
	cout << a1 << endl;
	int age1 = 234;
	cout << "my age is " << age1 << " years old\n"; */

	return 0;

}