#include <iostream>
using namespace std;

bool isDigit(char ch)
{
	return '0' <= ch && ch <= '9';
}

void countNumbersAndDigits(const char* str, unsigned& numbersCount, unsigned& digitsCount )
{
	unsigned stringSize = strlen(str);
	for (unsigned i = 0; i < stringSize; i++)
	{
		if (isDigit(str[i]))
		{
			digitsCount++;
			if (i == 0 || !isDigit(str[i - 1]))
				numbersCount++;
		}
	}
}

char* censoreNumbers(const char* str)
{
	unsigned digitsCount = 0;
	unsigned numbersCount = 0; 
	countNumbersAndDigits(str, numbersCount, digitsCount);

	char* result = new char[strlen(str) - digitsCount + numbersCount + 1];
	unsigned resultIter = 0;

	unsigned strIter = 0;

	while (str[strIter] != '\0')
	{
		if (isDigit(str[strIter]))
		{
			if (resultIter == 0 || result[resultIter - 1] != '*')
				result[resultIter++] = '*';
		}
		else
			result[resultIter++] = str[strIter];
		strIter++;
	}
	result[resultIter] = '\0';
	return result;
}


int main()
{
	char text[] = "abdg1236gdfgfd445fdg4";

	char* result = censoreNumbers(text);

	cout << result << endl;

	delete[] result;
}
