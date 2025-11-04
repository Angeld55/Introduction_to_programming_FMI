#include <iostream>
using namespace std;

int getRemainder(int first, int second) {
    if (second == 0) {
        return 0;
    }

    int quotient = first / second;
    int remainder = first - quotient * second;

    return remainder;
}

int main() {
    int first = 0, second = 0;
    cin >> first >> second;

    cout << getRemainder(first, second);
}