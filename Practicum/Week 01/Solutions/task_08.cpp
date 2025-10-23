#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;
    cin >> a >> b;

    int sum = a + b;
    int diff = a - b;

    int result = sum * sum * sum * sum - diff * diff;
}