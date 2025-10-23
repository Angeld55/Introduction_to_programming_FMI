#include <iostream>
using namespace std;

int main() {
    double a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    double aSquared = a * a,
            bSquared = b * b,
            cSquared = c * c;

    if (a == b && b == c) {
        cout << "Equilateral triangle";
    } else if (a == b || b == c || a == c) {
        cout << "Isosceles triangle";
    } else if ((aSquared + bSquared == cSquared) ||
                (bSquared + cSquared == aSquared) ||
                (aSquared + cSquared == bSquared)) {
        cout << "Right-angled triangle";
    } else {
        cout << "Neither";
    }
}