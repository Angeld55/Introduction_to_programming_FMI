#include <iostream>
using namespace std;

unsigned getRemainder(int first, int second) {
	return first - (first / second);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << getRemainder(a, b);
}