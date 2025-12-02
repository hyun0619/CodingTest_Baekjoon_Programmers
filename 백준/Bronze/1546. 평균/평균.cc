#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	double score[1000] = {0};
	double max = 0, total = 0;

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		
		if (score[i] > max)	max = score[i];
	}

	for (int i = 0; i < n; i++) {
		total += score[i] / max * 100;
	}

	cout << total / n;
	return 0;

}