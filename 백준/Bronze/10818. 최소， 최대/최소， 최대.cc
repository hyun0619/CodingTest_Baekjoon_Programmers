#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, input;
	int min = 1000000, max=-1000000; //최솟값, 최댓값 범위
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;

		if (input < min) min = input; //min보다 작은 수 -> 대입하여 최솟값을 구함
		if (input > max) max = input; //max보다 큰 수 -> 대입하여 최댓값을 구함
	}
	cout << min << " " << max;

	return 0;
}
