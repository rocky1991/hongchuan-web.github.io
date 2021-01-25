#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> vi(5);
	int i;
	for (i = 0; i < vi.size(); i++){

		cout << vi[i] << endl;
	}	
	cout << endl;
	for (int x: vi)
		cout << vi[i] << endl;
	return 0;
}
