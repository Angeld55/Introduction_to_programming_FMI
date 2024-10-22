#include <stdio.h>

int main()
{
    int leavesLevel;
    scanf("%d", &leavesLevel);

    int cols = 2 * leavesLevel - 1;
    int middle = cols / 2;
    int height = leavesLevel + (leavesLevel / 2);

    for (size_t i = 0; i < height; i++)
    {
        if (i < leavesLevel)
        {
            for (size_t j = 0; j < cols; j++)
            {
                if (j < middle - i || j > middle + i)
                {
                    printf("  ");
                    continue;
                }

                printf("* ");
            }
        }
        else
        {
            for (size_t j = 0; j < cols; j++)
            {
                if (j == middle)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
