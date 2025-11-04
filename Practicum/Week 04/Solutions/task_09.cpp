#include <iostream>
using namespace std;

int reverseNumber(int number) {
    int result = 0;
    while (number) {
        result *= 10;
        result += number % 10;
        number /= 10;
    }

    return result;
}

long concat(int first, int second) {
    long result = 0;

    int firstReversed = reverseNumber(first);
    int secondReversed = reverseNumber(second);

    while (firstReversed) {
        result *= 10;
        result += firstReversed % 10;
        firstReversed /= 10;
    }

    while (secondReversed) {
        result *= 10;
        result += secondReversed % 10;
        secondReversed /= 10;
    } 

    return result;
}

bool validation(int first, int second) {
    if (first <= 0 || second <= 0) {
        return false;
    }

    return true;
}

int main() {
    int first = 0, second = 0;
    cin >> first >> second;

    if (!validation(first, second)) {
        return 0;
    }

    cout << concat(first, second);
}