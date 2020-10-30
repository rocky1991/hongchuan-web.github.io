// Referencing
// Demonstrates using references


#include <iostream>

using namespace std;

int main() {
	int my_score = 1000;
	int& mike_score = my_score;

	cout << "my_score is " << my_score << endl;
	cout << "mike_score is " << mike_score << endl;

	cout << "Adding 500 to my_score \n";
	my_score += 500;

	cout << "my_score is: " << my_score << "\n";
	cout << "mike_score is :" << mike_score << "\n\n";

	cout << "Adding 500 to mike_score \n";
	mike_score += 500;
	cout << "my_score is: " << my_score << "\n";
        cout << "mike_score is :" << mike_score << "\n\n";
	return 0;
}
