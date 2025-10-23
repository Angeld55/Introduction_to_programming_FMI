#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0;
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "Center";
    } else if (x > 0 && y > 0) {
        cout << "First";
    } else if (x < 0 && y > 0) {
        cout << "Second";
    } else if (x < 0 && y < 0) {
        cout << "Third";
    } else {
        cout << "Fourth";
    }
}