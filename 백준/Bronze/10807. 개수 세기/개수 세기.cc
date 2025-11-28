#include <iostream>

using namespace std;

int main() {

	int n, v, amount=0; //각각 정수 개수, 찾으려는 정수, 주어진 정수 갯수
	int array[101]; //1 ≤ N ≤ 100 인 배열 갯수

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> array[i]; //배열의 각 자리에 정수 입력
	}

	cin >> v;

	for (int k = 0; k < n; k++) {
		if (v == array[k]) {
			amount += 1;
		}
	}
	cout << amount << endl;
	return 0;
}