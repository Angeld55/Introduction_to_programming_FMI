#include <iostream>
using namespace std;

int numLen(int n) {
    int len = 0;
    while (n) {
        len++;
        n /= 10;
    }
    return len;
}

bool isValidK(int k, int len) {
    if (k < 0 || k > len) {
        return false;
    }
    return true;
}

int powOfTen(int pow) {
    int result = 1;
    for (int i = 0; i < pow; i++) {
        result *= 10;
    }
    return result;
}

void reverseNumber(int& n) {
    int copyOfN = n;
    n = 0;
    while (copyOfN) {
        n *= 10;
        n += (copyOfN % 10);
        copyOfN /= 10;
    }
}

void transformNumber(int& a, int& b, int k) {
    int lenOfA = numLen(a);
    if (!isValidK(k, lenOfA)) {
        return;
    }

    int toExtract = powOfTen(k);
    int toAdd = a % toExtract;
    a /= powOfTen(k);

    reverseNumber(b);

    while(k) {
        b *= 10;
        b += toAdd % 10;
        toAdd /= 10;
        k--;
    }

    reverseNumber(b);
}

int main() {
    int a = 1233;
    int b = 1;

    transformNumber(a, b, 2);
    cout << a << " " << b;
}