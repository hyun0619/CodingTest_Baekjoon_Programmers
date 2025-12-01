#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int basketamount, inputnumber;
	int begin, end, num;
	int basket[101] = {0, };

	cin >> basketamount >> inputnumber;

	for (int i = 0; i < inputnumber; i++) {
		cin >> begin >> end >> num;
		for (begin; begin <= end; begin++) {
			basket[begin-1] = num;
		}
	}

	for (int i = 0; i < basketamount; i++) {
		cout << basket[i] << " ";
	}

	return 0;
}