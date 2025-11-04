#include <iostream>
using namespace std;

int getDivision(int first, int second) {
    if (second == 0) {
        return 0;
    }

    int dividend = abs(first);
    int divisor = abs(second);

    int quotient = 0;
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    if (first < 0 || second < 0) {
        return -quotient;
    }

    return quotient;
}

int main() {
    int first = 0, second = 0;
    cin >> first >> second;

    cout << getDivision(first, second) << endl;
}