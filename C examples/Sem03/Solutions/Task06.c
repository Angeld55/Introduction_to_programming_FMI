#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int number = 0;
    for (size_t i = 0; i < n; i++)
    {
        int digit;
        scanf("%d", &digit);

        if (!(digit % 2))
        {
            (number *= 10) += digit;
        }
    }

    printf("%d", number * 2);
    return 0;
}
