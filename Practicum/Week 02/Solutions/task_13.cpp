#include <iostream>
using namespace std;

int main() {
    int a = 0,
        b = 0,
        c = 0,
        d = 0,
        e = 0;

    cin >> a >> b >> c >> d >> e;

    bool isTrion = false;

    if ((b >= a && b >= c) || (b <= a && b <= c)) {
        if ((c >= b && c >= d) || (c <= b && c <= d)) {
            if ((d >= c && d >= e) || (d <= c && d <= e)) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        } else {
            cout << "no" << endl;
        }
    } else {
        cout << "no" << endl;
    }
}