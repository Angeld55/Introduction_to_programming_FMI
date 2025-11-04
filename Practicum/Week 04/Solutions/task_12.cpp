#include <iostream>
using namespace std;

int getCountOfDigit(int number, int digit) {
    int count = 0;
    while (number) {
        int current = number % 10;
        if (digit == current) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int addDigit(int number, int digit, int count) {
    while (count) {
        number *= 10;
        number += digit;
        count--;
    }
    return number;
}

int sortDigits(int number) {
    int result = 0;
    for (int i = 1; i <= 9; i++) {
        int currentCount = getCountOfDigit(number, i);
        result = addDigit(result, i, currentCount);
    }
    return result;
}

int main() {
    int input = 0;
    cin >> input;

    if (input < 0) {
        return 0;
    }

    cout << sortDigits(input);
}