#include <stdio.h>

int main() {
    int hours, minutes;
    scanf("%d %d", &hours, &minutes);

    minutes += 15;

    if (minutes >= 60) {
        minutes -= 60;
        hours++;
    }

    if (hours >= 24) {
        hours = 0;
    }

    printf("%02d:%02d\n", hours, minutes);
    return 0;
}
