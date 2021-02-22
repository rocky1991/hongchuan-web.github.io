#include "std_lib_facilities.h"
struct Date {
	int year;
	int month;
	int day;
//	Date(int y, int m, int d);
//	void add_day(int n);
};
int main() {
	Date today;
	cout << today.year << today.month << today.day << endl;
	Date tomorrow{1,2,3};
	cout << tomorrow.year << endl;
	return 0;
}
