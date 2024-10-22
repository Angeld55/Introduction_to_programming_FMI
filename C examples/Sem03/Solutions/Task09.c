#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    double fx;
    for (size_t x = -100; x <= 100; x++)
    {
        fx = a * x*x*x*x + b * x*x*x + c * x*x + d * x + e;
        if (fx >= 0)
        {
            printf("%d ", x);
        }
    }

    printf("\n");
    return 0;
}
