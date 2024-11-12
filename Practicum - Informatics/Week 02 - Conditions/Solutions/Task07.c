#include <stdio.h>

int main() {
    double r, x, y;
    scanf_s("%lf %lf %lf", &r, &x, &y);

    double distanceSquared = x * x + y * y;
    double radiusSquared = r * r;

    if (distanceSquared < radiusSquared) {
        printf("In the circle\n");
    } else if (distanceSquared == radiusSquared) {
        printf("On the circle\n");
    } else {
        printf("Out of the circle\n");
    }

    return 0;
}

