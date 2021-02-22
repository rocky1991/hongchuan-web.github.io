#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector <string> test(10, "nothing");
	for (int i = 0; i < test.size(); i++) {
	
		cout << "vector test is: " << test[i] << endl;
	
	}
	vector <string> second_vec(test);
	for (int i = 0; i < second_vec.size(); i++) {
		cout << "second vec is: " << second_vec[i] << endl;
	}
}
