#include <iostream>
using namespace std;

int main() {
    int day = 0, month = 0;
    cin >> day >> month;

    if (day >= 1 && day <= 31) {
        if (month >= 1 && month <= 12) {
            day = day - 1;

            if (day <= 0) {
                month = month - 1;
                if (month == 1 || month == 3 ||
                    month == 5 || month == 7 ||
                    month == 8 || month == 10 ||
                    month == 12) {
                        day = 31;
                } else {
                    day = 30;
                }

                if (month <= 0) {
                    month = 12;
                }
            }

            cout << day << " " << month;
        } else {
            cout << "Invalid month." << endl;
        }
    } else {
        cout << "Invalid day." << endl;
    }
}