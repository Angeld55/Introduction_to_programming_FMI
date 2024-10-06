#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);

    int expr1 = a + b;
    int expr2 = a - b;
    int res = expr1 * expr1 * expr1 * expr1 - expr2 * expr2;

    printf("%d\n", res);

    return 0;
}
