#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) { //줄 n개 생성하는 명령어
		// i < n인 경우, i번째 줄에서 " "을 n-i개 출력
		if (i < n) {
			for (int j = 1; j <= n - i; j++) cout << " "; 
		}
		// 이어서 "*"을 i개 출력 (i번째 줄엔 꼭 i개 있어야 하니 else로 하면 안됨)
		for (int k = 1; k <= i; k++) cout << "*";
		cout << endl; // i번째 줄에서 다음으로 줄 넘김
	}
	return 0;
}