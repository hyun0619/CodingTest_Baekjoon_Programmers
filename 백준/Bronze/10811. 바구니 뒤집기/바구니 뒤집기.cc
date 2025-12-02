#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

	int basket[101] = { 0 };

	for (int i = 0; i < n; i++) {
		basket[i] = i + 1;
	}

	while (m--) {

		int begin, end;
		cin >> begin >> end;

		begin--, end--; //배열 인덱스가 0부터 시작, 계산 용이하기 위해 1 빼주기
		
		//if (begin != end) 하지 않아도 괜찮음!
		for (int i = 0; i <= (end - begin) / 2; i++) { //양끝에서 한쌍씩 교체하기 때문에 나누기 2
			swap(basket[begin + i], basket[end - i]);
		}
	}

	for (int i = 0; i < n; i++) cout << basket[i] << " ";

	return 0;

}
