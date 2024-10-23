#include <iostream>
using namespace std;

int main() {
    int result = 0;
    for (int i = 100; i < 1000; i++) {

        int copyOfI = i;
        int sumOfDigits = 0;

        while (copyOfI > 0) {
            sumOfDigits += (copyOfI % 10);
            copyOfI /= 10;
        }

        if (sumOfDigits < 10 || sumOfDigits > 99) {
            continue;
        }

        bool isPrime = true;
        int sqrtOfSum = sqrt(sumOfDigits);

        for (int j = 2; j <= sqrtOfSum; j++) {
            if (sumOfDigits % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime == true) {
            result += i;
        }
    }
    cout << result;
}