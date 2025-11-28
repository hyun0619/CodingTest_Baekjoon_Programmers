#include <iostream>

using namespace std;

int main() {

	//성능관리1. 입력(cin)과 출력(cout) 연결을 끊어줌
	cin.tie(NULL);
	//성능관리2. C의 stdio와 C++의 iostream의 동기화를 비활성화
	ios_base::sync_with_stdio(false);

	int t, a, b, total=0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		total = a + b;
		cout << total << "\n"; //성능관리3. endl 대신 \n
	}
	return 0;
}