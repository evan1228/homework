#include <iostream>

int main() {
    int num1, num2;

    // ?�J??��?
    std::cout << "input 1: ";
    std::cin >> num1;

    std::cout << "input 2: ";
    std::cin >> num2;

    bool isDivisible = false;

    // ?�d�Ĥ@?��?�O�_��Q�ĤG?��?�㰣
    if (num2 != 0 && num1 % num2 == 0) {
        isDivisible = true;
    }

    // ?�X?�G
    if (isDivisible) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}

