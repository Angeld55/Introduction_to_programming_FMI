#include <iostream>
using namespace std;

bool isLeapYear(unsigned int year) {
    if (year % 400 == 0) {
        return true;
    }
    if (year % 100 == 0) {
        return false;
    }
    if (year % 4 == 0) {
        return true;
    }
    return false;
}

unsigned int getDaysInMonth(unsigned month, unsigned year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; // невалиден месец
    }
}

bool isValidDate(unsigned int day, unsigned int month, unsigned int year) {
    if (month < 1 || month > 12) {
        return false;
    }
    if (day == 0) {
        return false;
    }

    unsigned int daysInMonth = getDaysInMonth(month, year);
    return day <= daysInMonth;
}

void nextDay(unsigned int& day, unsigned int& month, unsigned int& year) {
    if (!isValidDate(day, month, year)) {
        cout << "Invalid date" << endl;
        return;
    }


    unsigned int daysInMonth = getDaysInMonth(month, year);

    if (day < daysInMonth) {
        day++;
    }
    else {
        day = 1;
        if (month == 12) {
            month = 1;
            year++;
        }
        else {
            month++;
        }
    }
}

int main() {
    unsigned int d, m, y;

    cin >> d >> m >> y;
    nextDay(d, m, y);

    cout << d << "." << m << "." << y;
    return 0;
}