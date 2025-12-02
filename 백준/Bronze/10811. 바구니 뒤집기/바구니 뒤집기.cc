#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

	int basket[101] = { 0 };

	for (int i = 0; i < n; i++) {
		basket[i] = i + 1;
	}

	while (m--) {

		int begin, end;
		cin >> begin >> end;

		begin--, end--;

		for (int i = 0; i <= (end - begin) / 2; i++) {
			swap(basket[begin + i], basket[end - i]);
		}
	}

	for (int i = 0; i < n; i++) cout << basket[i] << " ";

	return 0;

}