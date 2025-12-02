#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int m;
	cin >> m;

	double score[1000] = { 0 };
	double max=0, average=0;

	for (int i = 0; i < m; i++) {
		cin >> score[i];

		if (score[i] > max) max = score[i];
	}

	for (int i = 0; i < m; i++) {
		average += score[i] / max * 100;
	}

	cout << average/m;
}