#include <stdio.h>

int main() {
    int day, month;
    scanf_s("%d %d", &day, &month);

    int daysInMonth = 31;

    if (month == 2) {
        daysInMonth = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    }

    day++;

    if (day > daysInMonth) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
        }
    }

    printf("%d %d\n", day, month);

    return 0;
}
