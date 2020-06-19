// Menu Chooser
// Demonstrates the switch statement

#include <iostream>
using namespace std;

int main() {
	cout << "Difficulty Levels\n\n";
	cout << "1- Easy\n";
	cout << "2- Normal\n";
	cout << "3-Hard\n\n";

	enum difficulty {EASY, NORMAL, HARD};
	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch(choice-1){
		case EASY:
			cout << "You picked easy\n";
			break;
		case NORMAL:
			cout << "You picked normal\n";
			break;
		case HARD:
			cout << "You picked Hard.\n";
			break;
		default:
			cout << "You made an illegal choice. \n";
	}
	return 0;
}