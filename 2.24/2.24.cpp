#include <iostream>

int main() {
    int number;

    // ?�J��?
    std::cout << "input 1: ";
    std::cin >> number;

    // �P?��?�O�_??�O��?
    if (number % 2 == 0) {
        std::cout << number << " is even�C" << std::endl;
    } else {
        std::cout << number << " is odd�C" << std::endl;
    }

    return 0;
}

