#include <iostream>
#include <vector>
using namespace std;

void g(const int& cr) {
	int x = cr;
	cout << cr << endl;
}
void print_vec(const vector <int>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	cout << endl;
};
void swap (double &d1, double &d2) {
	double temp = d1;
	d1 = d2;
	d2 = temp;
}
int main(){
	g(1);
	double a = 2;
	double b = 3;
	swap(a, b);
	cout << a << b << endl;
	vector <int> v1(10);
	int& var = v1[1];
	print_vec(v1);
	var = 5;
	print_vec(v1);	
	int i = 7;
	int& r = i;
	
	cout << r << ' ' << i << '\n';
	
	r = 9; 
	cout << r << ' ' << i << '\n';
	i = 10;	
	cout << r << ' ' << i << '\n';

	vector <int> vi(10);	
	print_vec(vi);
	return 0;
}
