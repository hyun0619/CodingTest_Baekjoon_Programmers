#include <iostream>

using namespace std;

int main() {

	int a, b, count, total;

	cin >> total;

	for (count = 1; count <= total; count++) {
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;

}