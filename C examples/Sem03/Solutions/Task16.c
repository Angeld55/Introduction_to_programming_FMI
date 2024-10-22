#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int originalN = n;
    int originalK = k;

    int changed = 0;

    while (k > 0)
    {
        if (n == 0 && k > 0)
        {
            printf("k is NOT infix of n\n");
            return 0;
        }

        if (n % 10 == k % 10)
        {
            n /= 10;
            k /= 10;
            changed = 1;
            continue;
        }

        if (changed && (n % 10 != k % 10))
        {
            k = originalK;
            changed = 0;
            continue;
        }

        n /= 10;
    }

    printf("k is infix of n\n");

    return 0;
}
