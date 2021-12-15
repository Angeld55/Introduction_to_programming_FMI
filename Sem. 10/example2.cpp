#include <iostream>
using namespace std;


bool isLower(char ch)
{
	return 'a' <= ch && ch <= 'z';
}
bool isUpper(char ch)
{
	return 'A' <= ch && ch <= 'Z';
}
void countLowerAndCapitalLetters(const char* str, unsigned& lowerCount, unsigned& capitalCount)
{
	while (*str != '\0')
	{
		if (isLower(*str))
			lowerCount++;
		else if (isUpper(*str))
			capitalCount++;

		str++;
	}
}
void getTwoStrings(const char* str, char*& lowerStr, char*& upperStr)
{
	unsigned lowerCount = 0;
	unsigned upperCount = 0;
	countLowerAndCapitalLetters(str, lowerCount, upperCount);

	char* lowerSymbolsString = new char[lowerCount + 1];
	char* upperSymbolsString = new char[upperCount + 1];
	unsigned lowerIter = 0;
	unsigned upperIter = 0;

	while (*str != '\0')
	{
		if (isLower(*str))
			lowerSymbolsString[lowerIter++] = *str;
		else if (isUpper(*str))
			upperSymbolsString[upperIter++] = *str;
		str++;
	}
	lowerSymbolsString[lowerIter] = '\0';
	upperSymbolsString[upperIter] = '\0';

	lowerStr = lowerSymbolsString;
	upperStr = upperSymbolsString;
}


int main()
{
	char* lowerStr = nullptr;
	char* upperStr = nullptr;

	getTwoStrings("abc34345ABCDd", lowerStr, upperStr);

	cout << lowerStr << endl;
	cout << upperStr << endl;

	delete[] lowerStr, upperStr;

}
