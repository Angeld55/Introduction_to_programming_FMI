#include <iostream>
using namespace std;

int squareRootToLower(int number) {
    if (number < 0) {
        return -1;
    }

    int x = 0;
    while ((x + 1) * (x + 1) <= number) {
        x++;
    }

    return x;
}

int main() {
    int number = 0;
    cin >> number;

    cout << squareRootToLower(number) << endl;
}