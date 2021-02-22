#include <iostream>
using namespace std;

int main(){
	double temp1, temp2;
	double largest , smallest;
	while (cin >> temp1 >> temp2){
		cout << "temp1 is " <<  temp1 << ", and temp2 is " << temp2 << '\n';
		if (temp1 - temp2 > 1.0 /1000){
			cout << "temp1 is larger\n";
			if (temp1 > largest)
				largest = temp1;
			if (temp2 < smallest)
				smallest = temp2;
		}
		else if (temp2 - temp1 > 1.0 / 1000){
			cout << "temp2 is larger\n";
			if (temp2 > largest)
				largest = temp2;
			if (temp1 < smallest)
				smallest = temp1;
		}
		else
			cout << "temp1 and temp2 are almost equal\n";
	
		cout << "largest so far is " << largest << '\n';
		cout << "smallest so far is " << smallest << '\n';
	}
	


	return 0;
}
