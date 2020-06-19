// Lost Fortune
// A personalized adventure

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	const int GLOD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	// get the information
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	//tell the story

	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << " - in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue. " << leader << ".\n";


}