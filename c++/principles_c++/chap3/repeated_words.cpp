#include <iostream>
using namespace std;

int main(){
	int num_of_words = 0;
	string previous = " ";
	string current;
	
	while(cin >> current) {
		++num_of_words;
		if (previous == current)
			cout << "word number " << num_of_words << "repeated word: " << current << '\n';
		previous = current;
	}
	return 0;
}
