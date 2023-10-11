#include <iostream>

int main() {
	int num1, num2, num3;

	// 输入三个整数
	std::cout << "three integers input: ";
	std::cin >> num1 >> num2 >> num3;

	int max, min;

	// 假定第一个数是最大和最小的，然后逐个比较
	max = min = num1;

	if (num2 > max) {
		max = num2;
	}
	if (num2 < min) {
		min = num2;
	}

	if (num3 > max) {
		max = num3;
	}
	if (num3 < min) {
		min = num3;
	}

	// 输出结果
	std::cout << "最大值是: " << max << std::endl;
	std::cout << "最小值是: " << min << std::endl;

	return 0;
}
