#include <stdio.h>

int main()
{
    unsigned n, m;
    scanf("%u %u", &n, &m);

    unsigned minNum = n < m ? n : m;
    unsigned gcd = 1;

    while (minNum >= 1)
    {
        if (n % minNum == 0 && m % minNum == 0)
        {
            gcd = minNum;
            break;
        }
        minNum--;
    }

    printf("%u", gcd);
    
    return 0;
}
