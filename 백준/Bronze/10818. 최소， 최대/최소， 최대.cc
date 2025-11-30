#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int num;
	cin >> n;

	int minvalue = 1000000;
	int maxvalue = -1000000;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num > maxvalue) {
			maxvalue = num;
		}
		if (num < minvalue) {
			minvalue = num;
		}
	}

	cout << minvalue << " " << maxvalue;

	return 0;


}