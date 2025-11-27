#include <iostream>

int main() {
	//float는 소수점 이하 6자리, double은 15자리까지
	double A = 0;
	double B = 0;
	std::cin >> A >> B;

	//소수점 고정 필요
	std::cout << std::fixed; //소수점 아래부터 유효숫자 셀 것이라는 명령어
	std::cout.precision(9); // 유효숫자 표기 명령어

	std::cout << A/B << std::endl;

	return 0;
}