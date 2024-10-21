#include <stdio.h>
#include <math.h>

int main() {
    double r, x, y;
    scanf("%lf %lf %lf", &r, &x, &y);

    double distance = sqrt(x * x + y * y);

    if (distance < r) {
        printf("In the circle\n");
    }
    else if (fabs(distance - r) < 1e-9) {
        printf("On the circle\n");
    }
    else {
        printf("Out of the circle\n");
    }

    return 0;
}
