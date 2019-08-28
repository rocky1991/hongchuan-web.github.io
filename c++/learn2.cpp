#include <iostream>
using namespace:: std;

class Car {
	public:
		string model;
		int year;

		int getAge(){
			return year +1;
		}
		Car(string m, int y) {
			model = m;
			year = y;
		}
		// int getAge();
};

// int Car::getAge() {
// 	return (year+1);
// }
int main() {
	// Car newC;
	// newC.model = "bmw";
	// newC.year = 1;

	// cout << newC.model << endl;
	// cout << newC.year << endl;
	// cout << newC.getAge() << endl;

	Car c1("benz",23);
	cout << c1.model<<endl;
	cout << c1.year << endl;
	return 0;
}