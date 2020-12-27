#include <iostream>
using namespace std;

bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}
int countDigits(const char* str)
{
	//int len = strlen(str);
	//int count = 0;
	//for (int i = 0; i < len; i++)
	//{
	//	if (isDigit(str[i]))
	//		count++;
	//}

	int count = 0;
	while (*str != '\0')
	{
		if (isDigit(*str))
			count++;
		str++;
	}
	return count;
}

void removeDigits(const char* str, char* resultStr)
{
	while (*str != '\0')
	{
		if (!isDigit(*str))
		{
			*resultStr = *str;
			resultStr++;
		}
		str++;
	}
	*resultStr = '\0';
}
int main()
{
	const char* str = "hello friends 123 , how are you? 343. Fine!";

	int len = strlen(str) - countDigits(str);

	char* resultStr = new char[len + 1];

	removeDigits(str, resultStr);

	cout << resultStr << endl;

	delete[] resultStr;
}