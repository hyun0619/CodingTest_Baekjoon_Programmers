#include <iostream>

int main() {

	// 1번째 방법 : 숫자 나눠버리기
	int A, B;

	std::cin >> A >> B;
	std::cout << A * (B % 10) << std::endl;
	std::cout << A * ((B/10)%10) << std::endl;
	std::cout << A * (B / 100) << std::endl;
	std::cout << A * B << std::endl;

	return 0;
	
	//2번째 방법 : 배열 활용
	/* 
	int A;
	char B[4]; //배열의 Index는 0 ~ n-1 까지

	std::cin >> A >> B;
	//'0'의 아스키코드 값을 빼줘야 문자형 숫자를 정수형 숫자로 변환 가능
	std::cout << A * (B[2] - '0') << std::endl;
	std::cout << A * (B[1] - '0') << std::endl;
	std::cout << A * (B[0] - '0') << std::endl;
	std::cout << A * std::atoi(B) << std::endl; //atoi는 문자열을 숫자로 변환하는 함수

	return 0;
	*/
}