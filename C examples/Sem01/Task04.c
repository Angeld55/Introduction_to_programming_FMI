#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    short thirdDigit = n % 10; // get the last digit
    n /= 10; // remove the last digit

    short secondDigit = n % 10; // get the second digit
    n /= 10; // remove the second digit

    short firstDigit = n % 10; // get the first digit

    int reversed = thirdDigit * 100 + secondDigit * 10 + firstDigit;
    reversed++;

    printf("%d\n", reversed);

    return 0;
}
