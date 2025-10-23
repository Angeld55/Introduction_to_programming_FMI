#include <iostream>
using namespace std;

int main() {
    int lhs = 0, rhs = 0, num = 0;
    cin >> lhs >> rhs >> num;

    if (num <= lhs && num <= rhs) {
        cout << "The number is within the given interval.";

        if (num == lhs || num == rhs) {
            cout << "The interval is closed.";
        } else {
            cout << "The interval is open.";
        }
    } else {
        cout << "The number is NOT within the given interval.";
    }
}