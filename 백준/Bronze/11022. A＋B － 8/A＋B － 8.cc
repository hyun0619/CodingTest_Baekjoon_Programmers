#include <iostream>

using namespace std;

int main() {

	int t, a, b,c ;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> a >> b;
		c = a + b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << c << endl;
	}

	return 0;

}