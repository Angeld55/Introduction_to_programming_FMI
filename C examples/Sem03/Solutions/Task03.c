#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (size_t i = a; i <= b; i++)
    {
        int keepI = i;
        int unique = 1;

        while (keepI != 0)
        {
            int quotient = keepI / 10;
            int remainder = keepI % 10;

            while (quotient != 0)
            {
                if (remainder == quotient % 10)
                {
                    unique = 0;
                    break;
                }
                quotient /= 10;
            }

            if (!unique)
            {
                break;
            }

            keepI /= 10;
        }

        if (unique)
        {
            printf("%d    ", i);
        }
    }
    return 0;
}
