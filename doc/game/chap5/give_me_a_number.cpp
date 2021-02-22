// Give Me a Number
// Demonstrates default functions arguments

#include <iostream>
#include <string>

using namespace std;

int ask_number(int high, int low = 1);
int main() {
	int number = ask_number(5);

	cout << "Thanks for enter: " << number << "\n\n";
	number = ask_number(10, 5);
	cout << "Thanks for entering: " << number << "\n\n";

	return 0;
}

int ask_number(int high, int low) {
	int num;
	do {
		cout << "Please enter a number" << "(" << low << "-" << high << "): ";
		cin >> num;
	} while (num > high || num < low);
	return num;
}
