#include <iostream>

int main() {

	int year=0;
	std::cin >> year;

	if (year >= 1000 && year <= 3000) {
		std::cout << year - 543 << std::endl;

	}
	else {
		std::cout << "다시 입력하세요" << std::endl;
	}

	return 0;
}