#include <iostream>

int main() {
    int num1, num2;

    // ?入??整?
    std::cout << "input 1: ";
    std::cin >> num1;

    std::cout << "input 2: ";
    std::cin >> num2;

    bool isDivisible = false;

    // ?查第一?整?是否能被第二?整?整除
    if (num2 != 0 && num1 % num2 == 0) {
        isDivisible = true;
    }

    // ?出?果
    if (isDivisible) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}

