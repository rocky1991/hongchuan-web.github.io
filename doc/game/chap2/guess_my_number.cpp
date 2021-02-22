// Guess my number
// The classi number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(static_cast <unsigned int> (time(0)));
	
	int secret_number = rand() %100 + 1;
	int tries = 0;
	int guess;

	cout << "\tWelcome to Guess My Number \n\n";
	do {
		cout << "Enter a guess: ";
		cin >> guess;
		++ tries;

		if (guess > secret_number) {
			cout << "Too high !! \n";
		} else if (guess < secret_number) {
			cout << "Too low !! \n";
		} else {
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	}while(guess != secret_number);
	return 0;
}