#include <iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    int toReverse = n * n;
    int reversed = 0;
    while (toReverse != 0) {
        reversed *= 10;
        int lastDigit = toReverse % 10;
        reversed += lastDigit;
        toReverse /= 10;
    }
    cout << reversed;
}