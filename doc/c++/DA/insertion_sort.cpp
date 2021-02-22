#include <iostream>
#include <vector>
using namespace std;

void print_vec(const vector <int> &A) {
	for (int i = 0; i < A.size(); ++i) {
		cout << A[i] << ' ';
	}
	cout << endl;
}
vector <int> insertion_sort_reference(vector <int> &A) {
	for (int i = 1; i < A.size(); ++i) {
		int key = A[i];
		int j = i - 1;
		while (A[j+1] < A[j] && j >= 0) {
			A[j+1] = A[j];
			A[j] = key;
			--j;
		}
	}

	return A;
}

vector <int> insertion_sort_copy(vector <int> A) {



	for (int i = 1; i < A.size(); ++i) {
		int key = A[i];
		int j = i -1;	
		while (A[j + 1] < A[j] && j >= 0) {
			A[j + 1] = A[j];
			A[j] = key;
			j--;
		}
		
	}
	return A;
}
int main() {
	vector <int> a;
	a.push_back(5);
	a.push_back(6);
	a.push_back(23);
	a.push_back(2);
	a.push_back(10);
	a.push_back(1);
	vector <int> b = {8, 2, 3, 10, 1, 0, 4}; 
	a = insertion_sort_reference(a);
	b = insertion_sort_copy(b);
	print_vec(a);
	print_vec(b);
	return 0;
}
