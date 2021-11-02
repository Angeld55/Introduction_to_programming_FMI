#include <iostream>

bool isEven(const int num) {
    return !(num % 2);
}

bool isZero(const int num) {
    return num == 0;
}

int main() {
    int num;
    std::cin >> num;
    if (isZero(num)) {
        std::cout << "The number is not ever or odd!";
    }
    else {
        if (isEven(num)) {
            std::cout << "Even";
            return 0;
        }
        std::cout << "Odd";
    }
    return 0;
}