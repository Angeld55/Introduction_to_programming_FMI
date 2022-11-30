#include <iostream>
using namespace std;

unsigned int convertFromChar(char ch)
{
	if (ch < '0' || ch > '9')
		return 10;
	return ch - '0';
}
//благодарности на https://github.com/hrisge и https://github.com/stoychoX за откритите сериозни нередности в името на функцията.

unsigned int fromString(const char* str)
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
	unsigned int n = fromString(str);
	cout << n;
}
