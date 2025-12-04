#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	for (char i = 'a'; i <= 'z'; i++) { //a~z까지 char로 불러올 수 있음
		
		//find_입력한 문자열이 최초로 등장하는 위치의 인덱스를 반환
		//없는 문자열은 string::npos가 반환, 자료형이 unsigned라 int로 캐스팅
		cout << (int)s.find(i) << endl;
	}

	return 0;


}