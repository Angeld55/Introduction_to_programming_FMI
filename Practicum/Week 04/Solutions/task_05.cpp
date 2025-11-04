
#include <iostream>
using namespace std;

int power(int base, unsigned int exponent)
{
    int result = 1;
    while(exponent > 0)
    {
        result *= base;
        exponent--;
    }
    return result;
}