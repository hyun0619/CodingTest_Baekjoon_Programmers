#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) { //n번째 줄 생성
		for (int j = 1; j <= i; j++) { //n번째 줄에 n개의 별 찍기
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}