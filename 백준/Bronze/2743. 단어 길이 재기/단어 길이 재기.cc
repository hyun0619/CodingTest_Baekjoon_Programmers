#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string w;
	int n=0;
	cin >> w;

	for (int i = 0; i < 100; i++) {
		if (w[i] != NULL) n += 1;
		else break;
	}

	cout << n;
	return 0;
}