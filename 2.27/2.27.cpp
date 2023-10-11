#include <iostream>

int main() {
    int height = 5;

    for (int i = 1; i <= height; i++) {
        // 打印空格，以使星?居中
        for (int j = 1; j <= height - i; j++) {
            std::cout << " ";
        }

        // 打印星?
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        // ?行
        std::cout << std::endl;
    }

    return 0;
}

