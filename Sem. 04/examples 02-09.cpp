#include <iostream>
using namespace std;

bool isPrime(unsigned int n)
{
	if (n <= 1)
		return false;

	double sqrtOfN = sqrt(n);

	for (unsigned int i = 2; i <= sqrtOfN; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

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

bool isPalindrome(unsigned int n)
{
	return n == reverse(n);
}

bool isSuffix(unsigned int n, unsigned int k)
{
	while (k != 0)
	{
		unsigned int lastDigitOfK = k % 10;
		unsigned int lastDigitOnN = n % 10;

		if (lastDigitOfK != lastDigitOnN)
			return false;
		n /= 10;
		k /= 10; //remove the last digits
	}
	return true;
}

bool isPrefix(unsigned int n, unsigned k)
{
	//return isSuffix(reverse(n), reverse(k)); //ако имаме уговорката, че не завършват на 0

	while (n >= k)
	{
		if (n == k)
			return true;
		n /= 10;
	}
	return false;
}

bool isInfix(unsigned int n, unsigned int k)
{
	while (n >= k)
	{
		if (isSuffix(n, k))
			return true;
		n /= 10;
	}
	return false;
}

int countDigitOccurences(int n, int digit)
{
	if (digit > 9 || digit < 0)
		return -1; ///invalid input
	
	if(n == 0 && digit == 0)
		return 1;
	
	int count = 0;
	while (n != 0)
	{
		if (n % 10 == digit)
			count++;
		n /= 10;
	}
	return count;
}

int mostCommonDigit(int n)
{
	int mostCommonDigit = -1;
	int mostCommonDigitOccurences = 0;

	for (int currentDigit = 0; currentDigit <= 9; currentDigit++)
	{
		int currentDigitOccurences = countDigitOccurences(n, currentDigit);

		if (currentDigitOccurences > mostCommonDigitOccurences)
		{
			mostCommonDigit = currentDigit;
			mostCommonDigitOccurences = currentDigitOccurences;
		}
	}

	return mostCommonDigit;
}

unsigned int power(unsigned int n, unsigned int k)
{
	unsigned result = 1;

	for (int i = 0; i < k; i++)
		result *= n;
	return result;
}

unsigned int log(unsigned int n, unsigned int k)
{
	unsigned int powerOfK = 1;
	unsigned int count = 0;
	while (powerOfK <= n)
	{
		powerOfK *= k;
		count++;
	}
	return count - 1;
}

double distBetweenTwoPoints(int p1x, int p1y, int p2x, int p2y)
{
	int dx = p1x - p2x;
	int dy = p1y - p2y;

	return sqrt(dx * dx + dy * dy);
}

bool absoluteValue(int n)
{
	if (n < 0)
		return -n;
	return n;
}
bool areOnOneCircle(int p1x, int p1y, int p2x, int p2y)
{
	return absoluteValue(distBetweenTwoPoints(p1x, p1y, 0, 0) - distBetweenTwoPoints(p2x, p2y, 0, 0)) <= 0.00001;
}
bool areOnOneCircle2(int p1x, int p1y, int p2x, int p2y)
{
	return p1x * p1x + p1y * p1y == p2x * p2x + p2y * p2y;
}

int main()
{
	int n;
	cin >> n;

	cout << isPalindrome(n);

}
