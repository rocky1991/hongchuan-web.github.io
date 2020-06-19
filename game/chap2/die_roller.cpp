// Die Roller
// Demonstrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(static_cast <unsigned int> (time(0)));

	int random_number = rand();
	int die = (random_number % 6) + 1;
	cout << "You rolled a " << die << endl;
	cout << "The max is " << RAND_MAX << endl;
	cout << "time(0) is " << time(0) << endl;
	return 0;
}