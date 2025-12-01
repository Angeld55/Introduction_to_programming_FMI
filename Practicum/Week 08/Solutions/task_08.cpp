#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n) {
        reversed *= 10;

        int lastDig = n % 10;
        reversed += lastDig;

        n /= 10;
    }
    return reversed;
}

bool isPalindrom(int n) {
    return (n == reverseNumber(n));
}

int checkIfSpecial(int n, int k) {
    while (k) {
        int reversed = reverseNumber(n);
        int result = reversed + n;

        if (isPalindrom(result)) {
            return k;
        }

        k--;
    }

    return -1;
}


int main() {    
    int n = 0, k = 0;
    cin >> n >> k;

    cout << checkIfSpecial(n, k) << endl;
}