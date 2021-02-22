#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <double> vd;
	for (double d; cin >> d; ) 
		vd.push_back(d);
	for (int i = 0; i < vd.size(); i++) {
		cout << vd[i] << " \n";
	}
	vector <int> vi(5);
	cout << "vi size is " << vi.size();
	vi.resize(10);
	cout << "vi size after resize is " << vi.size();

	return 0;
}
