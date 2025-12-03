#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	string w;

	for (int i = 0; i < n; i++) {
		cin >> w;
		cout << w[0] << w[w.length() - 1] <<"\n"; //문자열의 실제 길이 구하는 함수
	}

	return 0;
}