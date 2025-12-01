#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int num, count=10;
	int array[10] = {0, };

	for (int i = 0; i < 10; i++) {
		cin >> num;
		array[i] = num % 42;

		for (int j = 0; j < i; j++) { // j 범위를 0~9까지 해서 헤맸다.. i로 했어야함!
			if (array[i] == array[j] ) {
				count -= 1;
				break;
			}
		}
	}

	cout << count;

	return 0;
}
