#include <iostream>

int main() {
    int height = 5;

    for (int i = 1; i <= height; i++) {
        // ���L�Ů�A�H�ϬP?�~��
        for (int j = 1; j <= height - i; j++) {
            std::cout << " ";
        }

        // ���L�P?
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        // ?��
        std::cout << std::endl;
    }

    return 0;
}

