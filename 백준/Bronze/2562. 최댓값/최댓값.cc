#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int max=0, index=0;


	for (int i = 0; i < 9; i++) {
		cin >> n;

		//n[i]가 max 보다 크다면 max 갱신, index 확보
		if (max < n) {
			max = n;
			index = i+1;
		}
	}

	cout << max << "\n" << index;
	return 0;
}