#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int basketamount, changecount;
	cin >> basketamount >> changecount;
	int basket[101] = {0, };
	int num1, num2, num3;

	for (int i = 0; i < basketamount; i++) { //바구니 순서와 번호 동일
		basket[i] = i+1;
	}

	for (int i = 0; i < changecount; i++) {
		cin >> num1 >> num2;

		num3 = basket[num1 - 1]; //임시로 만든 변수에 basket[num1 - 1] 값 보관
		basket[num1 - 1] = basket[num2 - 1]; //basket[num1 - 1] 값 갱신
		basket[num2 - 1] = num3; //basket[num1 - 2] 갱신
	}

	for (int i = 0; i < basketamount; i++) {
		cout << basket[i] << " ";
	}

	return 0;
}