#include "std_lib_facilities.h"
/*
class Date {
	int year, month, day;
public:
	Date(int year, int month, int day)
		:year(year), month(month), day(day) {};

	int month() { return month;}

	int day() {return day; }
	int year() { return year; }
};
*/
enum class Month {
	jan = 1, feb, mar
};
Month operator++(Month& m) {
	m = (m == Month::mar) ? Month::jan: Month((int)m + 1);
	return m;
}
int main(){
	Month my_m = Month::jan;
	cout << (int)my_m<< endl;
	++my_m;

	cout << (int)my_m << endl;
	++my_m;
	
	cout << (int)my_m << endl;
	++my_m;
	
	cout << (int)my_m << endl;
	return 0;
}
