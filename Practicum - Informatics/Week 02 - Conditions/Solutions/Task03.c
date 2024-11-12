#include <stdio.h>

int main() {
    double speed;
    scanf_s("%lf", &speed);

    if (speed <= 10) {
        printf("slow\n");
    }
    else if (speed <= 50) {
        printf("average\n");
    }
    else if (speed <= 150) {
        printf("fast\n");
    }
    else if (speed <= 1000) {
        printf("ultra fast\n");
    }
    else {
        printf("extremely fast\n");
    }

    return 0;
}
