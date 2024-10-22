#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int match = 0;
    int cnt = 0;

    for (size_t i = a; i <= b; i++)
    {
        int sum = 0;
        int prod = 1;

        int temp = i;
        while (temp)
        {
            int reminder = temp % 10;

            if (reminder == 0)
            {
                prod = 1;
            }

            sum += reminder;
            prod *= reminder;

            temp /= 10;
        }

        if (sum == prod)
        {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
