#include <iostream>
using namespace std;

int extractLastKDigits(int a, int k) {
    int power = 1;
    for (int i = 0; i < k; i++) {
        power *= 10;
    }
    return a % power;
}

int removeLastKDigits(int a, int k) {
    int power = 1;
    for (int i = 0; i < k; i++) {
        power *= 10;
    }
    int result = a / power;
    return result;
}

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int mergeNumbers(int lastKDigits, int b) {
    int bDigitsCount = countDigits(b);
    int power = 1;

    for (int i = 0; i < bDigitsCount; i++) {
        power *= 10;
    }
    int result = lastKDigits * power + b;
    return result;
}

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int lastKDigits = extractLastKDigits(a, k);

    int newA = removeLastKDigits(a, k);

    int result = mergeNumbers(lastKDigits, b);

    cout << newA << endl;
    cout << result << endl;

    return 0;
}
