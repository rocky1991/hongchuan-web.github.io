#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print_vec(vector <double> temps){
	for (int i = 0; i < temps.size(); i++){
		cout << temps[i] << ' ';
	}
	cout << endl;
}
int main(){
	vector <double> temps;
	for (double temp; cin >> temp;){
		temps.push_back(temp);
		print_vec(temps);
	}
	sort(temps.begin(), temps.end());
	cout << "Median temperature:" << temps[temps.size()/2] << '\n';
	return 0;
}
