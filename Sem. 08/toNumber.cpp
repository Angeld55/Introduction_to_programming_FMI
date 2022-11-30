#include <iostream>
using namespace std;

unsigned int convertFromChar(char ch)
{
	if (ch < '0' || ch > '9')
		return 10;
	return ch - '0';
}
unsigned int toNumber(const char* str)
{
	unsigned int result = 0;
	while (*str != '\0')
	{
		int currentDigit = convertFromChar(*str);
		(result *= 10) += currentDigit;
		str++;
	}
	return result;
}


int main()
{
	char str[] = "1234";
	unsigned int n = toNumber(str);
	cout << n;
}
