#include <iostream>
using namespace std;

int main() {
    int year = 0;
    cin >> year;
    if ((year % 400) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "Leap year";
    } else {
        cout << "Not a leap year";
    }
}