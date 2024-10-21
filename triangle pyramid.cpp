#include <iostream>
void printTrianglePyramid(int height) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int height;

    std::cout << "Enter the height of the triangle pyramid: ";
    std::cin >> height;

    printTrianglePyramid(height);

    return 0;
}

