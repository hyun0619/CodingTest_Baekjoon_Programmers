#include <iostream>

int main() {
	int hour = 0, min = 0, time = 0, endtime = 0;
	std::cin >> hour >> min;
	std::cin >> time;
	endtime = min + time;

	if (endtime >= 60) {
		hour = hour + (endtime / 60);
		endtime = endtime % 60;

		if (hour >= 24) hour = hour - 24;
		std::cout << hour << " " << endtime << std::endl;
	}
	else std::cout << hour << " " << endtime << std::endl;
	return 0;
}