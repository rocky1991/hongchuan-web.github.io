#include <iostream>
#include <limits.h>
using namespace std;

int main(){
	
	char b3{48};

	double x{2.7};
	int y {x};
	int a1 {1000};
	char b1 {a1};

	double d = 0;
	int lowest_bit;
	int highest_bit;
	int next_highest_bit;	
	while (cin>> d){
		int i = d;
		char c = i;
		int i2 = c;
		cout << "d== " << d << " i == " << i \
			<< " i2 ==" << i2 << " char(" << c << ")\n";
		lowest_bit = c & 1;
		highest_bit = (c >> (CHAR_BIT-1)) & 1;
		
		next_highest_bit = (c >>(CHAR_BIT-2)) & 1; 
		cout << "lowest bit is " << lowest_bit << " && highest bit is "			<< highest_bit << "\nnext highest bit is " << next_highest_bit <<'\n'; 
		
	} 
	int a = 2000; 
	char c3 = a;
	int b = c3;
	if (a != b)
		cout << "oops!:" << a<< "!=" << b << '\n';
	else
		cout <<" Wow! we have large characters\n";


	char c = 'x';
	int i1 = c;
	int i2 = 'x';
	char c2 = i1;

	cout << c << ' ' << i1 << ' '<< c2 << '\n';

	double d1 = 2.3;
	double d2 = d1 + 2;
	if (d1 < 0)
		cout << "d1 is negative";
	return 0;

}

