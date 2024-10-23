#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    if ((n < 0 || n > 255) || (m < 0 || m > 255) || (n > m)) {
        cout << "Inavlid codes!";
    }
    else {
        for (int i = n; i <= m; i++) {
            char current = i;
            cout << current << endl;
        }
    }
}