#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < 2)
    {
        a = 2;
    }

    int number = 0;
    for (size_t i = a; i <= b; i++)
    {
        bool prime = 1;
        double sqrtI = sqrt(i);
        
        for (int j = 2; j <= sqrtI; j++) // N.B.!! checks for divisors ONLY IN THE RANGE [2..sqrt(i)]. If there aren't any divisors in this interval, then there are NO DIVISORS AT ALL!
        {
            if (!(i % j))
            {
                prime = 0;
            }
        }
        
        if (prime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
