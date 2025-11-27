#include <iostream>

int main() {
	//long long 자료형은 int형 연산에서 초과되는 범위를 다룰 때 사용
	long long A, B, C;

	std::cin >> A >> B >> C;
	std::cout << A + B + C << std::endl;
	return 0;

}
