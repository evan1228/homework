#include <iostream>

int main() {
    std::cout << "Number\tSquare\tCube" << std::endl;

    for (int i = 0; i <= 10; ++i) {
        std::cout << i << "\t" << i * i << "\t" << i * i * i << std::endl;
    }

    return 0;
}

