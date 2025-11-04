#include <iostream>
using namespace std;

unsigned int getNumberLen(int number) {
    unsigned int length = 0;

    while (number) {
        length++;
        number /= 10;
    }

    return length;
}

int reverseNumber(int number) {
    int reversed = 0;
    while (number) {
        reversed *= 10;
        unsigned int currentDigit = number % 10;
        reversed += currentDigit;
        number /= 10;
    }

    return reversed;
}

unsigned int getDigitOnPosition(int number, unsigned int position) {
    unsigned int result = 0;
    unsigned int counter = 0;

    int reversed = reverseNumber(number);

    while (reversed) {
        if (counter == position) {
            return result;
        }
        counter++;
        result = reversed % 10;
        reversed /= 10;
    }

    return result;
}

bool validation(int number, unsigned int position) {
    unsigned int numberLength = getNumberLen(number);

    if (position > numberLength) {
        return false;
    }

    return true;
}

int main() {
    int input = 0;
    unsigned int position = 0;
    cin >> input >> position;

    if (!validation(input, position)) {
        return 0;
    }

    cout << getDigitOnPosition(input, position) << endl;
}