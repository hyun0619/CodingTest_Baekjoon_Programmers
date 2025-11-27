#include <iostream>

int main() {
	int i, num;
	std::cin >> num;

	for (i = 1; i <= 9; i++) {
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}
	return 0;
}