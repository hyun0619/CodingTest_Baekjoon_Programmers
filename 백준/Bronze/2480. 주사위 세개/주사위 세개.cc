#include <iostream>

int main() {

	int A, B, C;
	int max;

	std::cin >> A >> B >> C;

	// 3개가 다 같은 눈이 나온 경우
	if (A == B && A == C) std::cout << 10000 + A * 1000 << std::endl;

	// 2개가 같은 눈이 나온 경우
	else if (A == B || A == C) std::cout << 1000 + A * 100 << std::endl;
	else if (B == C) std::cout << 1000 + B * 100 << std::endl;

	// 모두 다른 눈이 나온 경우
	else {
		max = A;
		if (A < B) {
			if (B < C) max = C;
			else max = B;
		}
		else if (A < C) max = C;
		std::cout << max * 100 << std::endl;
	}

	return 0;
}