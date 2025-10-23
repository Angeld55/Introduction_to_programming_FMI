#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    bool isFirstBigger = (a > b);

    cout << (isFirstBigger * a) + (!isFirstBigger * b);
}
