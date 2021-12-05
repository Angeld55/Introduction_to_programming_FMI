#include <iostream>
using namespace std;

//////// Sem 4, task 6

unsigned reverse(unsigned int n)
{
	unsigned int result = 0;

	while (n != 0)
	{
		int lastDigit = n % 10;
		(result *= 10) += lastDigit;
		n /= 10;
	}

	return result;
}

bool isSuffix(unsigned int n, unsigned int k)
{
	if (k == 0 && (n % 10 != 0))
		return false;

	while (k != 0)
	{
		int lastDigitOfN = n % 10;
		int lastDigitOfK = k % 10;

		if (lastDigitOfN != lastDigitOfK)
			return false;

		n /= 10;
		k /= 10;
	}

	return true;
}

bool isPrefix(unsigned int n, unsigned  int k)
{
	return isSuffix(reverse(n), reverse(k));
}

bool isInfix(unsigned int n, unsigned int k)
{
	if (n == 0 && k == 0)
		return true;

	while (n > 0)
	{
		if (isSuffix(n, k))
			return true;
		n /= 10;
	}
	return false;
}

////// end sem4 task6

//Solution

bool task1(unsigned n, unsigned k)
{
    n = reverse(reverse(n/10) / 10); //remove the first and the last digit of n.
    return isInfix(n,k); //call the function from the already solved task
}


int main()
{
    cout << task1(1234,12);
}
