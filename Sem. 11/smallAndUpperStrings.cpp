#include <iostream>
using namespace std;


bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}
bool isUpper(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}
void getLowerAndUpperCount(const char* str, unsigned& lowerCount, unsigned& upperCount)
{
	upperCount = lowerCount = 0;
	if (!str)
		return;

	while (*str)
	{
		if (isLower(*str))
			lowerCount++;
		else if (isUpper(*str))
			upperCount++;
		str++;
	}
}
void getLowerAndUpperStrings(const char* str, char*& lower, char*& upper)
{
	if (!str)
		return;
	unsigned lowerCount = 0, upperCount = 0;
	getLowerAndUpperCount(str, lowerCount, upperCount);
	lower = new char[lowerCount + 1];
	upper = new char[upperCount + 1];
	lower[lowerCount] = upper[upperCount] = '\0';

	unsigned lowerIndex = 0, upperIndex = 0;
	while (*str)
	{
		if (isLower(*str))
			lower[lowerIndex++] = *str;
		else if (isUpper(*str))
			upper[upperIndex++] = *str;
		str++;
	}
}


int main()
{
    char* lower = nullptr;
    char* upper = nullptr;
    getLowerAndUpperStrings("AAqew12423BBq", lower, upper);

    cout << lower << endl << upper << endl;
    delete[] lower;
    delete[] upper;
    return 0;
}
