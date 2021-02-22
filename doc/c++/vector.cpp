#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> a_vec;
	for (int i = 0; i < 10; i++){
		a_vec.push_back(i);	
	}
	printf("%d\n", a_vec.back());	
	for (int i = 0; i < 10; i++){
		printf("%d ", a_vec[i]);	
	}
	return 0;
}
