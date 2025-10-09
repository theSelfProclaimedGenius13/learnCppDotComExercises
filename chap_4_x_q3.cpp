#include <iostream>

double towHeight() {
	double towHeight;
	std::cin >> towHeight;
	return towHeight;
}

double distance_fallen(int seconds) {
	const double gravity{9.8};
	return  (gravity * seconds * seconds / 2);
}

void result_message_chap_4_x_q3() {
	std::cout << "Enter the height of the tower in meters: \n";
	double tow_height{towHeight()};
	std::cout << "Ball Will Start to Fall:\n";
	int a{ 0 };
	while (true) {
		if (distance_fallen(a) >= tow_height) {
			std::cout << "At "<<a<<" seconds, the ball is on the ground.\n";
			break;
		}
		std::cout << "At "<<a<<" seconds, the ball is at height "<<tow_height-distance_fallen(a)<<"\n";
		a++;
	}


}