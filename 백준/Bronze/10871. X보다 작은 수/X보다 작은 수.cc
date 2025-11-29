#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, x;
	int array[10001];
	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	for (int j = 0; j < n; j++) {
		if (x > array[j]) {
			cout << array[j] << " ";
		}
	}
	return 0;
}