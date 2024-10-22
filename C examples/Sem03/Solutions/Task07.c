#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (size_t i = 0; i < n; i++)
    {
        int start = (i * n) + 1;
        int end = (start + n) - 1;

        if (i % 2 == 0)
        {
            for (int j = start; j <= end; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
        else
        {
            for (int j = end; j >= start; j--)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}
