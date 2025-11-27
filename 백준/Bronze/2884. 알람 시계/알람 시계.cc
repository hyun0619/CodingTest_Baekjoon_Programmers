#include <iostream>

int main() {

	int hour, min;
	std::cin >> hour >> min;

	min = min - 45;

	if (min < 0) {
		hour = hour - 1;
		if (hour < 0) {
			hour = 24 + hour;
			std::cout << hour << " " << 60 + min << std::endl;
		}
		else std::cout << hour << " " << 60 + min << std::endl;
	
	}
	else std::cout << hour << " " << min << std::endl;

	return 0;
}