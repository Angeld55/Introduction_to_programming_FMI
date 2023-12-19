#include <iostream>
using namespace std;

int convertCharToDigit(char ch)
{
	if(ch >= '0' && ch <= '9')
		return ch - '0';
	return -1;
}
unsigned convertStrToUnsigned(const char* str)
{
	if (!str)
		return 0;

	unsigned result = 0;
	while (*str)
	{
		int digit = convertCharToDigit(*str);
		if (digit == -1)
			return 0;
		(result *= 10) += digit;
		str++;
	}
	return result;
}
int convertStrToSigned(const char* str)
{
	if (!str)
		return 0;

	if (*str == '-')
		return -1 * convertStrToUnsigned(str + 1);
	else
		return convertStrToUnsigned(str);
}

int main()
{
	unsigned int n = convertStrToUnsigned("123");
	cout << n;
}
