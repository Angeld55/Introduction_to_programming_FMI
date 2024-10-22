#include <stdio.h>

int main()
{
    unsigned n, m;
    scanf("%u %u", &n, &m);

    if (n < m)
    {
        unsigned temp = n;
        n = m;
        m = temp;
    }

    while (m != 0)
    {
        unsigned mod = n % m;
        n = m;
        m = mod;
    }
    printf("%u", n);
    
    return 0;
}
