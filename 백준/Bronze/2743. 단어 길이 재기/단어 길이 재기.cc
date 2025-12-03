#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string w;
	cin >> w;

	int s = 0;

	for (int i = 0; i < 100; i++) {
		if (w[i] != 0) { //문자열의 빈 공간은 0이니까!
			s += 1;
		}
		else break; //문자가 끝날 경우 for문에서 벗어나는 기능
	}

	cout << s;

	return 0;
}
