#include <iostream>
using namespace std;

int main(){
	int num = 5;
	switch(num){
		case 0: case 2: case 4: case 6:case 8:
			cout << "even number\n";
			break;
		case 1: case 3: case 5: case 7: case 9:
			cout << "odd number\n";
			break;
		default:
			cout << "wrong number";
	}
	return 0;
}
