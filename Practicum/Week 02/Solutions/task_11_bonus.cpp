#include <iostream>
using namespace std;

int main() {
    int day = 0, month = 0, year = 0;
    cin >> day >> month;

    bool isValidDay = (day >= 1 && day <= 31);
    bool isValidMonth = (month >= 1 && month <= 12);
    bool isValidYear = (year >= 1 && year <= 2025);

    if (isValidDay && isValidMonth && isValidYear) {
        bool isLeapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    
        day--;
        if (day <= 0) { // invalid day
            month--;
            if (month <= 0) { // invalid month
                month = 12;
                year--;
                if (year <= 0) { // invalid year
                    cout << "Invalid date!" << endl;
                }
            } else { // check count of days in month
                if (month == 1 || month == 3 ||
                    month == 5 || month == 7 ||
                    month == 8 || month == 10 ||
                    month == 12) {
                        day = 31;
                } else {
                    if (month == 2 && isLeapYear == true) {
                        day = 29;
                    } else if (month == 2 && isLeapYear == false) {
                        day = 28;
                    } else {
                        day = 30;
                    }
                }
            }
        }

    } else {
        cout << "Invalid input!" << endl;
    }
}