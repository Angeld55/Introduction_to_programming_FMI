#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (i + j == n) {
                cout << "x = " << i << ", y = " << j << endl;
            }
        }
    }
}