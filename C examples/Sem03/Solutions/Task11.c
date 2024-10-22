#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int p = 1;
        for (int j = 1; j <= i; j++)
            printf("%d ", p++);

        for (int j = i; j <= n; j++)
            printf("  ");

        for (int j = 1; j <= n; j++)
        {
            if (i == n)
                printf("- ");
            else
                printf("  ");
        }

        for (int j = i; j <= n; j++)
            printf("  ");

        for (int j = 1; j <= i; j++)
            printf("%d ", --p);

        printf("\n");
    }

    for (int i = 1; i < n; i++)
    {
        int p = 1;
        for (int j = i; j < n; j++)
            printf("%d ", p++);

        for (int j = 1; j <= i; j++)
            printf("  ");

        for (int j = 1; j <= n + 2; j++)
            printf("  ");

        for (int j = 1; j <= i; j++)
            printf("  ");

        for (int j = i; j < n; j++)
            printf("%d ", --p);

        printf("\n");
    }

    return 0;
}
