#include <iostream>
using namespace std;

bool validateIndexes(int i, int j, int len) {
    if (i < 0 || j < 0 || i > j
        || j > len) {
        return false;
    }
    return true;
}

int reverseNumber(int n) {
    int result = 0;
    while (n) {
        result *= 10;
        result += (n % 10);
        n /= 10;
    }
    return result;
}

int findNumLen(int n) {
    int len = 0;
    while (n) {
        len++;
        n /= 10;
    }
    return len;
}

int powOfTen(int pow) {
    int result = 1;
    for (int i = 0; i < pow; i++) {
        result *= 10;
    }
    return result;
}

void extract(int& n, int i, int j) {
    int len = findNumLen(n);
    if (!validateIndexes(i, j, len)) {
        return;
    }

    int rightCut = n / powOfTen(len - j);
    n = rightCut % powOfTen(j - i + 1);
}

int main() {
    int n = 1234567;
    extract(n, 2, 5);
    cout << n;
}
