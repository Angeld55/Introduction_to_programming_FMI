#include <iostream>
using namespace std;

int main() {
    int radius = 0, x = 0, y = 0;
    cin >> radius >> x >> y;

    int xSquare = x * x;
    int ySquare = y * y;
    int radiusSquare = radius * radius;

    int sum = xSquare + ySquare;

    if (sum == radius) {
        cout << "On the circle" << endl;
    } else if (sum < radius) {
        cout << "Inside the circle" << endl;
    } else {
        cout << "Outside the circle" << endl;
    }
}