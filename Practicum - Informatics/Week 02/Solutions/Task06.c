#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if ((b > a && b > c || b < a && b < c) &&
        (c > b && c > d || c < b && c < d) &&
        (d > c && d > e || d < c && d < e)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}

