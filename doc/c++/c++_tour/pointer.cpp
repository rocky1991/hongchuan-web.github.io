#include <iostream>

int count_x(const char* p) {
	if (p == nullptr){ 
		std::cout << "null pointer\n";
		return 0;
	}
	int count = 0;
	return count;
}
int main() {
	char* a;
	count_x(a);
	return 0;
}
