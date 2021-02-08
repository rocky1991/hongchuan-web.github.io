#include "./std_lib_facilities.h"

class Token {
public:
	char kind;
	double value;
	Token (char ch, double val)
		:kind(ch), value(val) {};
	Token (char ch)
		:kind(ch), value(0){};
};

Token get_token(){
	char ch;
	cin >> ch;
	
	switch (ch) {
	case '.':
	case '0': case '1': case '2': case '3': case '4': case '5':
	case '6': case '7': case '8': case '9':
		cin.putback(ch);
		double val;
		cin >> val;
		return Token('8', val);
		break;
	case '(': case ')':
	case '+': case '-': case '*': case '/': case 'q': case ';':
		return Token(ch);
		break;
	default:
		error("you entered the wrong character");
		
	}
	return Token('\0');
}
double expression();
double term();
double primary();

double expression() {
	double val  = term();
	Token t = get_token();
	switch (t.kind) {
	case '+':
		return val += term();
		break;
	case '-':
		return val -= term();
		break;
	default:
		return val;
	}
	return 0;
}
double term() {
	double val = primary();
	Token t = get_token();
	switch (t.kind) {
	case '*':
		return val *= primary();
	case '/':
	{	double d  = primary();
		if (d == 0) error("divide by zero, error!");
		return val /= primary();
	}	
	default:
		return val;
	}
	return 0;
}
double primary(){
	Token t = get_token();
	switch (t.kind) {
	case '(':
	{	double d = expression();
		t = get_token();
		if (t.kind != ')') error("wrong token");
		return d;
	}	
	case '8':
		return t.value;
	default:
		error("wrong token");
	}
	return 0;
}
int main() {
	double expr = expression();
	while(cin) {
		cout << "= " << expr << endl;	
		expr = expression();
	}
	return 0;
}
