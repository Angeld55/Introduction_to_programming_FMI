#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf(".");
            }
            else
            {
                printf(" ");
            }
        }

        if (n % 2 == 0)
        {
            for (int j = 1; j < n - 1; j++)
            {
                if (i == n / 2 || i == n / 2 + 1)
                {
                    printf(".");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            for (int j = 1; j < n - 1; j++)
            {
                if (i == n / 2 + 1)
                {
                    printf(".");
                }
                else
                {
                    printf(" ");
                }
            }
        }

        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf(".");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
