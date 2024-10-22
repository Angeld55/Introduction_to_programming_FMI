#include <stdio.h>
#include <math.h>

int main()
{
    unsigned n;
    scanf("%u", &n);

    bool isPrime = 1;
    unsigned sqrtOfN = sqrt(n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    for (size_t divisorCandidate = 2; divisorCandidate <= sqrtOfN; divisorCandidate++)
    {
        if (n % divisorCandidate == 0)
        {
            isPrime = 0;
            break;
        }
    }
    printf("%u\n", isPrime);
    
    return 0;
}
