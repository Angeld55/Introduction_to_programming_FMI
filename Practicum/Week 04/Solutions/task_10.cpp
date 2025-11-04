#include <iostream>
using namespace std;

long sumInInterval(int m, int n) {
    long sum = 0;
    for (int i = m; i <= n; i++) {
        sum += i;
    }

    return sum;
}

bool validation(int m, int n) {
    if (m > n) {
        return false;
    }
    return true;
}

int main() {
    int m = 0, n = 0;
    cin >> m >> n;

    if (!validation(m, n)) {
        return 0;
    }

    cout << sumInInterval(m, n);
}