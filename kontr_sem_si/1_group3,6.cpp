#include <iostream>
using namespace std;

/////////////////START//////////////////code written in class

unsigned int reverse(unsigned int n)
{
	unsigned reversedNumber = 0;

	while (n != 0)
	{
		unsigned int lastDigit = n % 10;
		(reversedNumber *= 10) += lastDigit;
		n /= 10; //removes the last digit
	}
	return reversedNumber;

}

unsigned concatDigitAtBack(unsigned n, unsigned digit){ return n * 10 + digit; }
unsigned concat(unsigned a, unsigned b)
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

///END//////////////////

//Solution: 
unsigned concat(unsigned a, unsigned b, unsigned c, unsigned d)
{
    return concat(concat(concat(a, b), c),d); //we must be careful for the zeros!!!!!!!!!!!!!!
}

int main()
{
    unsigned res = concat(12, 46, 0, 5);
    
    cout << res;
}
