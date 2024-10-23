#include <iostream>
using namespace std;

int main() {
	int n, m;
    cin >> n >> m;

    int nMultByM = n * m;

    for (int i = 1; i <= nMultByM; i++) {
        if (i == (nMultByM / n) + 1) {
            cout << endl;
        }
        cout << i << " ";
    } 
}