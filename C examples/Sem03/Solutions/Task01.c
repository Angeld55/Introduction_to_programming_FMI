#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int countOfLeapYears = 0;

    for (size_t i = 0; i < n; i++)
    {
        int year;
        scanf("%d", &year);

        if ((!(year % 4) && (year % 100)) || !(year % 400))
        {
            countOfLeapYears++;
        }
    }

    printf("%d", countOfLeapYears);
    return 0;
}
