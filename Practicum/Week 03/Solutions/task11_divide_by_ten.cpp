#include <iostream>

using namespace std;

int main() {
    while (true) {

        int n;
        cin >> n;

        int cpyOfN = n;
        int sumOfDigits = 0;

        while (cpyOfN > 0) {
            sumOfDigits += cpyOfN % 10;
            cpyOfN /= 10;
        }

        int sum = n + sumOfDigits;
        if (sum % 10 == 0) {
            cout << "The sum is: " << sum;
            break;
        }
    }
}