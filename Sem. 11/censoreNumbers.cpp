#include <iostream>
using namespace std;

unsigned myStrlen(const char* str)
{
	if (!str)
		return 0;

	unsigned result = 0;
	while (*str) 
	{
		result++;
		str++;
	}
	return result;
}

bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}
unsigned getDigitsCount(const char* str)
{
	if (!str)
		return 0;
	unsigned count = 0;

	while (*str)
	{
		if (isDigit(*str))
			count++;
		str++;
	}
	return count;
}

unsigned getNumbersCount(const char* str)
{
	if (!str)
		return 0;
	unsigned count = 0;
	while (*str)
	{
		if (isDigit(*str) && !isDigit(*(str + 1))) //we count the end of the numbers. Str + 1 is allowed, because we have a terminating zero (which is not a digit) at the end (we won't go out of bounds)
			count++;
		str++;
	}
	return count;
}

char* censoreNumbers(const char* str)
{
	if (!str)
		return nullptr;

	size_t resultSize = myStrlen(str)
			   - getDigitsCount(str)
	                   + getNumbersCount(str);

	char* result = new char[resultSize + 1]; //!!!!! '\0'
	unsigned resultIndex = 0;
	
	while (*str)
	{
		if (!isDigit(*str))
			result[resultIndex++] = *str;
		else if(!isDigit(*(str + 1)))
			result[resultIndex++] = '*';
		str++;
	}

	result[resultSize] = '\0';
	return result;
}
int main ()
{
	char* str = censoreNumbers("abc1234dgg4fsdg5");
	cout << str;

	delete[] str;//!!!!!
}
