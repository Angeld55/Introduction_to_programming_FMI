#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);

    int isFirstBigger = a > b;
    printf("%d\n", a * isFirstBigger + b * !isFirstBigger);

    return 0;
}
