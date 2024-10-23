#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sumOfN = n * (n + 1) / 2;

    int currentSum = 0;
    for (int i = 0; i < n - 1; i++) {
        int current;
        cin >> current;
        currentSum += current;
    }

    cout << sumOfN - currentSum;
}