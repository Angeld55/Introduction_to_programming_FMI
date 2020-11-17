#include <iostream>
using namespace std;


//Task 2
unsigned int reverse(unsigned int number)
{
	int result = 0;

	while (number != 0)
	{
		int lastDigit = number % 10;
		(result *= 10) += lastDigit;
		number /= 10;
	}

	return result;
}

//Task 3
bool isPalindrome(unsigned int n)
{
	return n == reverse(n);
}

//Task 4
bool isSuffix(unsigned int n, unsigned int k)
{
	if (n < k)
		return false;
	while (k != 0)
	{
		int lastDigitFromN = n % 10;
		int lastDigitFromK = k % 10;
		if (lastDigitFromN != lastDigitFromK)
			return false;
		n /= 10;
		k /= 10;
	}
	return true;
}

// Task 5
bool isPrefix(unsigned int n, unsigned int k)
{
	return isSuffix(reverse(n), reverse(k));
}

// Task 6
bool isInfix(unsigned int n, unsigned int k)
{
	if (k > n)
		return false;
	while (n >= k)
	{
		if (isSuffix(n, k))
			return true;
		n /= 10;
	}
	return false;
}

// Task 7
bool hasConsecutiveFourDigits(unsigned int n)
{
	for (int i = 1111; i <= 9999; i+=1111) 
	{
		if (isInfix(n, i))
			return true;
	}
	for (int i = 10000; i <= 90000; i += 10000)
	{
		if (isInfix(n, i))
			return true;
	}
	return false;
}

// Task 8
bool areDigitsSortedIncreasing(unsigned int n)
{
	while (n >= 10)
	{
		int lastDigit = n % 10;
		int lastLastDigit = (n / 10) % 10;

		if (lastLastDigit > lastDigit)
			return false;
		n /= 10; // 
	}
	return true;
}

// Task 9
bool areDigitsSortedDecreasing(unsigned int n)
{
	return areDigitsSortedIncreasing(reverse(n));
}

// Task 10
bool areAllDigitsTheSame(unsigned int n)
{
	return areDigitsSortedIncreasing(n) && areDigitsSortedDecreasing(n);
}
int main()
{
	cout << areAllDigitsTheSame(777);
}
