#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	int n;
	cin >> n;

	int mostCommonDigit = -1;
	int mostCommonDigitOccurences = 0;
	
	for (int currentDigit = 0; currentDigit <= 9; currentDigit++)
	{
		int copyOfN = n;
		int currentDigitOccurences = 0;
		while (copyOfN != 0)
		{
			int lastDigit = copyOfN % 10;
			if (lastDigit == currentDigit)
				currentDigitOccurences++;
			copyOfN /= 10; //removes the last digit;
		}

		if (currentDigitOccurences > mostCommonDigitOccurences)
		{
			mostCommonDigit = currentDigit;
			mostCommonDigitOccurences = currentDigitOccurences;
		}
	}

	cout << mostCommonDigit;
}
