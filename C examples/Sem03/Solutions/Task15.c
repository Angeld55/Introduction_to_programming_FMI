#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    if (n == 0)
    {
        printf("Invalid number!\n");
        return 0;
    }
    if (k == 0 || k == 1)
    {
        printf("Invalid base!\n");
        return 0;
    }

    int log = 0;

    while (n >= k)
    {
        n /= k;
        log++;
    }

    printf("%d\n", log);

    return 0;
}
