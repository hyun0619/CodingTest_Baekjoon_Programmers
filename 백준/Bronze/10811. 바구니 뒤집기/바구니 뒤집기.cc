#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int basketamount, changenumber;
	int basket[101] = { 0 };

	cin >> basketamount >> changenumber;

	for (int i = 0; i < basketamount; i++) {
		basket[i] = i + 1;
	}

	while (changenumber--) {

		int begin, end;
		cin >> begin >> end;

		begin--, end--;

		if (begin != end) {
			for (int i = 0; i <= (end - begin) / 2; i++) {
				swap(basket[begin + i], basket[end - i]);
			}
		}
	}
	for (int i = 0; i < basketamount; i++) {
		cout << basket[i] << " ";
	}
	return 0;
}