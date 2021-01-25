#include <iostream>
#include <string.h>
using namespace std;

int main(){
	cout << "Please enter two names\n";
	string first;
	string second;
	
	cin >> first >> second;
	if(first == second) cout << "same name twice\n";
	if (first < second) cout << first << " is alphabeticaly before "<< second << '\n';
	if (first > second) cout << first << " is alphabetically after " << second << '\n';
	return 0;
}
