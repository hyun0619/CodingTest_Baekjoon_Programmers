#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	string word;

	cin >> word >> n;
	cout << word[n - 1];

	return 0;
}