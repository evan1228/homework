#include <iostream>

int main() {
    int number;

    // ?入整?
    std::cout << "input 1: ";
    std::cin >> number;

    // 判?整?是奇??是偶?
    if (number % 2 == 0) {
        std::cout << number << " is even。" << std::endl;
    } else {
        std::cout << number << " is odd。" << std::endl;
    }

    return 0;
}

