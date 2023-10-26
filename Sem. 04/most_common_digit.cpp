#include <iostream>
using namespace std;


//задачата от предни семинар- решена с помощта на функции.
int countDigitOccurences(int n, int digit)
{
	if (digit > 9 || digit < 0)
		return -1; ///invalid input

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

int main()
{
 int n;
 cin >> n;
 cout << mostCommonDigit(n);
}
