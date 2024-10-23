#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int factoriel = 1;

    while (n > 0) {
        factoriel *= n;
        n--;
    }

    cout << factoriel;
}