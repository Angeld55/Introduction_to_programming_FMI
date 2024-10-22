#include <stdio.h>

int main()
{
    unsigned n;
    scanf("%u", &n);
    
    for (size_t i = 2; i <= n; i++)
    {
        // check how many times i divides n
        unsigned count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        if (count >= 1)
        {
            printf("%u^%u ", i, count);
        }
    }
    return 0;
}
