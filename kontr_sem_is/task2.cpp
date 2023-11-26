#include <iostream>
using namespace std;

unsigned countDigitOccurences(unsigned n, unsigned digit)
{
	if (digit == 0 && n == 0)
		return 1;

	unsigned count = 0;
	while (n != 0)
	{
		int lastDigit = n % 10;
		if (lastDigit == digit)
			count++;
		n /= 10;
	}
	return count;
}

unsigned concatCountTimesDigit(unsigned a, unsigned digit, unsigned count)
{
	unsigned result = a;
	for (int i = 0; i < count; i++)
		result = result * 10 + digit;
	return result;
}

unsigned task2(unsigned n1, unsigned n2)
{
	unsigned result = 0;
	for (int i = 9; i >= 0; i--)
	{
		unsigned countFirst = countDigitOccurences(n1, i);
		unsigned countSecond = countDigitOccurences(n2, i);

		result = concatCountTimesDigit(result, i, countFirst + countSecond);
	}
	return result;
}
int main()
{
    cout << task2(1234,56122);
}
