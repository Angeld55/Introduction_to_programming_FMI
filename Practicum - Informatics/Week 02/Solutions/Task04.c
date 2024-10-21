#include <stdio.h>

int main() {
    char figure;
    double a, b, result;
    double PI = 3.14;

    scanf(" %c", &figure);

    if (figure == 's') {
        scanf("%lf", &a);
        result = a * a;
    }
    else if (figure == 'r') {
        scanf("%lf %lf", &a, &b);
        result = a * b;
    }
    else if (figure == 'c') {
        scanf("%lf", &a);
        result = PI * a * a;
    }
    else if (figure == 't') {
        scanf("%lf %lf", &a, &b);
        result = (a * b) / 2;
    }

    printf("%.3lf\n", result);
    return 0;
}
