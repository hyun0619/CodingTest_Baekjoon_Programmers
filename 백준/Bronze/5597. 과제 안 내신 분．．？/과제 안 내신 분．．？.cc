#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int ok;
	int num[30] = {0, }; //num[30]은 칸이 30개, 인덱스는 0~29까지라는 의미

	for (int i = 0; i < 28; i++) {
		cin >> ok;
		num[ok-1] = 1;
	}

	for (int i = 0; i < 30; i++) {
		if (1 != num[i]) {
			cout << i+1 << "\n";
		}
	}
	return 0;
}