#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int basketamount, changenum;
	cin >> basketamount >> changenum;

	int basket[101] = { 0 };

	//바구니 번호 지정
	for (int i = 0; i < basketamount; i++) {
		basket[i] = i + 1;
	}

	while (changenum--) { //횟수가 0(false)가 될 때까지
		int begin, end;
		cin >> begin >> end;
		
		//배열은 [0]부터 시작하기 때문에 계산을 위해 1을 빼주는 작업
		begin--;
		end--;

		//begin과 end가 같다면 변화x, 달라야 역순 작업 진행 가능
		if (begin != end) {
			for (int i = 0; i <= (end - begin) / 2; i++) { //양끝 한쌍씩 바꾸니까 나누기 2
				swap(basket[begin + i], basket[end - i]); // 각 끝에서부터 한쌍씩 자리 바꾸기
			}
		}
	}

	for (int i = 0; i < basketamount; i++) cout << basket[i] << " ";
	return 0;
}
