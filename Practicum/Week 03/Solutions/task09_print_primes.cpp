#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int sum = 0;

    for (int i = n; i <= m; i++) {

        int sqrtOfI = sqrt(i);
        bool isPrime = true;
        for (int j = 2; j <= sqrtOfI; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true) {
            sum += i;
        }
    }
    cout << sum;   
}