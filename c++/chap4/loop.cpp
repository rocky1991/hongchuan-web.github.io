#include <iostream>
using namespace std;

int main(){
	char ch = 'a';
	while (ch <= 'z'){
		
		cout << ch << '\t' << int(ch)<< '\n';
		ch++;
	}
	return 0;
}
