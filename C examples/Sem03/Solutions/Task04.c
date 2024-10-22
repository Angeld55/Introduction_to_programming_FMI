#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int inputNumber = n;
    int reversed = 0;

    while (n > 0)
    {
        (reversed *= 10) += n % 10;
        n /= 10;
    }

    printf("%d", inputNumber == reversed);
    return 0;
}
