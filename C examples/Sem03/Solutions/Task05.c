#include <stdio.h>

int main()
{
    int sum = 0;
    int number;

    do
    {
        scanf("%d", &number);
        sum += number;
    } while (number);

    printf("%d", sum);
    return 0;
}
