#include "./std_lib_facilities.h"

/*
	The grammar is:
	Expression= Term | Expression '+' Term | Expression  '-' Term
	Term = Primary | Term '*' Primary | Term '-' Primary
	Primary = Number | '('  Expression  ')' 
*/	
double expression(); // This functions reads inputs from istream as expressions

double expression() {
	Token t = get_token();
	double val = t.value;
	t = get_token();
	switch (t.kind){
	case '
	}
}
int main(){
	// keep calling expression
	// if reading a char q, break out of the loop;
	// if reading a char ;, print the expression
	char ch = '\0';
	double val = 0;
	while (true){
		cin >> ch;
		if (ch == 'q') break;
		else{
			cin.putback(ch);
			val = expression();
			cout << val << endl;	
		}
	}
	return 0;
}
