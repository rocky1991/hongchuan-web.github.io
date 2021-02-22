// Hangman
// The classic game of hangman

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main() {
	// setup
	const int MAX_WRONG = 8;
	
	vector <string> words;

	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");

	srand(static_cast <unsigned int> (time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0];
	int wrong = 0;
	string so_far(THE_WORD.size(), '-');
	string used = "";

	cout << "Welcome to Hangman. Good luck!\n";

	while (( wrong < MAX_WRONG) && (so_far != THE_WORD)) {
		cout << "\n\n You have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left.\n";
		cout << "\nYou've used the following letters:\n" << used << endl;
		cout << "\nSo far, the word is: \n" << so_far << endl;
		char guess;
		cout << "\n\n Enter your guess: ";
		cin >> guess;
		guess = toupper(guess);
		while (used.find(guess) != string::npos) {
			cout << "\n You ve already guessed " << guess << endl;
			cout << "Enter your guess: ";
			cin >> guess;
			guess = toupper(guess);
		}
		used += guess;
		if (THE_WORD.find(guess) != string::npos){
			cout << "That's right!" << guess << " is in the word.\n";
			for (int i = 0; i < THE_WORD.length(); i++){
				if (THE_WORD[i] == guess) {
					so_far[i] = guess;
				}
			}
		} else {
			cout << "Sorry. " << guess << "isn't in the word.\n";
			wrong++;
		}
	}
	if (wrong == MAX_WRONG) {
		cout << "\nYou've been hanged!";
	} else {
		cout << "\nYou've guessed it!";
	}
	cout << "\nThe word was " << THE_WORD << endl;
	return 0;

}
