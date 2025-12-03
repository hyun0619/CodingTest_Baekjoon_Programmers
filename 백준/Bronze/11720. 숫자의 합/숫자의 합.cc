#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);


	int n, total=0;
	string nums;

	cin >> n;
	cin >> nums;

	for (int i = 0; i < n; i++) {
		//string 배열에서 '0'을 빼줘야 숫자 전환 가능, 안하면 아스키 코드값
		total += (nums[i]-'0');
	}

	cout << total;

	return 0;
}