#include <stdio.h>
#include <math.h>


int isPrime(unsigned n)
{
	double sqrtOfN = sqrtf(n);
	for (int i = 2; i <= sqrtOfN; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


unsigned reverse(unsigned n) 
{
	int res = 0;

	while (n != 0)
	{
		int lastDigit = n % 10;
		res *= 10;
		res += lastDigit;
		n /= 10;
	}
	return res;
}

int isPalindrome(unsigned n)
{
	return n == reverse(n);
}

int isSuffix(unsigned n, unsigned k)
{
	if (k > n)
		return 0;

	if (k == 0 && n % 10 != 0)
		return 0;

	while (k != 0)
	{
		if (n % 10 != k % 10)
			return 0;
		n /= 10;
		k /= 10;
	}
	return 1;
}

int isPrefix(unsigned n, unsigned k)
{
	if (k > n)
		return 0;
	return isSuffix(reverse(n), reverse(k));
}


unsigned power(unsigned n, unsigned p)
{
	unsigned result = 1;
	for (unsigned i = 0; i < p; i++)
		result *= n;
	return result;
}

unsigned logarithm(unsigned n, unsigned base)
{
	unsigned current = 1;
	unsigned currentPower = 0;
	while (current <= n)
	{
		current *= base;
		currentPower += 1;
	}
	return currentPower - 1;
}

void testIsPrefix(unsigned n, unsigned k, int expected) {
	int result = isPrefix(n, k);
	if (result == expected) {
		printf("Test passed for isPrefix(%u, %u): expected %d, got %d\n", n, k, expected, result);
	}
	else {
		printf("Test failed for isPrefix(%u, %u): expected %d, got %d\n", n, k, expected, result);
	}
}

int main() {

}
