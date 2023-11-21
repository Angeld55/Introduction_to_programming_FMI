#include <iostream>
using namespace std;

unsigned int concatDigitOnBack(unsigned int a, unsigned int digit)
{
    if(digit > 9)
        return 0;
    return a * 10 + digit;   
}
unsigned int reverse(unsigned int n)
{
    unsigned reversed = 0;
    
    while(n != 0)
    {
        (reversed *= 10) += (n % 10);
        n/=10;
    }
    return reversed;
}


unsigned int concatNumbers(unsigned int a, unsigned int b)
{
 	if (a == 0)
		return 0;

	if (b == 0)
		return concatDigitAtBack(a, 0);

	unsigned result = a;
	unsigned reversedB = reverse(b);

	while (reversedB != 0)
	{
		int lastDigit = reversedB % 10;
		result = concatDigitAtBack(result, lastDigit);
		reversedB /= 10;
	}
	while (b % 10 == 0)
	{
		result = concatDigitAtBack(result, 0);
		b /= 10;
	}
	return result;
}

int main()
{
    cout<<concatNumbers(123, 456);

    return 0;
}
