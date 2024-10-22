#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Upper part of the hourglass
    int numOfStars = 2 * n + 1;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (size_t j = 0; j < numOfStars; j++)
        {
            printf("*");
        }
        for (size_t j = 0; j < i; j++)
        {
            printf(" ");
        }

        numOfStars -= 2;
        printf("\n");
    } // numOfStars = 1;

    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }

    printf("*"); // middle star

    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
    printf("\n");

    // Lower part of the hourglass
    for (size_t i = 0; i < n; i++)
    {
        numOfStars += 2;

        for (size_t j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (size_t j = 0; j < numOfStars; j++)
        {
            printf("*");
        }
        for (size_t j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}
