#include <stdio.h>

int main() {
    char figure;
    double a, b, result;
    double PI = 3.14;

    scanf_s(" %c", &figure, 1);

    if (figure == 's') {
        scanf_s("%lf", &a);
        result = a * a;
    }
    else if (figure == 'r') {
        scanf_s("%lf %lf", &a, &b);
        result = a * b;
    }
    else if (figure == 'c') {
        scanf_s("%lf", &a);
        result = PI * a * a;
    }
    else if (figure == 't') {
        scanf_s("%lf %lf", &a, &b);
        result = (a * b) / 2;
    }

    printf("%.3lf\n", result);
    return 0;
}
