#include <iostream>
int hw1_p1() {
	int sideLength = 9;

	for (int i = 0; i < sideLength; i++) {
		for (int j = 0; j < sideLength; j++) {
			// 只在最外一圈输出星号
			if (i == 0 || i == sideLength - 1 || j == 0 || j == sideLength - 1) {
				std::cout << "*";
			}
			else {
				std::cout << " "; // 在内部位置输出两个空格
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
int hw1_p2() {
	int height = 9;
	int width = 9;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == height - 1) {
				if (j == 3 || j == 4 || j == 5) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			if (i == 1 || i == height - 2) {
				if (j == 1 || j == 7) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6) {
				if (j == 0 || j == 8) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
int hw1_p3() {
	int height = 9;
	int width = 9;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == 3 || i == 4  || i == 5 || i == 6 || i == 7 || i == 8 ) {
				if (j == 4 ) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			if (i == 1 ) {
				if (j == 3 || j == 5 || j == 4) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			if (i == 2 ) {
				if (j == 2 || j == 3 || j == 4 || j == 6 || j == 5) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
int hw1_p4() {
	int height = 9;
	int width = 9;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == height - 1) {
				if ( j == 4 ) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			if (i == 1 || i == height - 2) {
				if (j == 3 || j == 5) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			if (i == 2 || i == height - 3) {
				if (j == 2 || j == 6) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			if (i == 3 || i == height - 4) {
				if (j == 1 || j == 7) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			if (i == 4 ) {
				if (j == 0 || j == 8) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
		}
		std::cout << std::endl;
	}

	return 0;
}