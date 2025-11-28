#include <iostream>

using namespace std;

int main() {

	int totalmoney = 0, totalamount = 0, price = 0, num = 0;
	int countprice = 0;

	cin >> totalmoney;
	cin >> totalamount;

	for (int i = 1; i <= totalamount; i++) {
		cin >> price >> num;
		countprice += price * num;
	}

	if (countprice == totalmoney) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}