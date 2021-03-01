#include <iostream>

int main() {
	int v1[10] = {0, 1, 2, 3, 4};
	for (auto x: v1) {
		std::cout << x << std::endl;
	}
	std::cout << std::endl;
	for (auto& x: v1) {
		std::cout << x << std::endl;
	//	++x;
	}
	return 0;
}
