#include <iostream>

using namespace std;

int main() {

	int a, b;

	// EOF(End Of File) : 입력에서 더이상 읽을 수 있는 데이터가 없는 경우.
	while (cin >> a >> b) { // 조건문 안에 있는 경우, 연산자 오버로딩으로 참/거짓 값을 반환함!

		cout << a + b << "\n";
	}

	return 0;
}