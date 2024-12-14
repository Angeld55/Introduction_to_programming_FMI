#include <iostream>
using namespace std;

unsigned myStrlen(const char* str)
{
	if (!str)
		return 0;

	unsigned result = 0;
	while (*str) //is the same as (*str) != '\0'
	{
		result++;
		str++;
	}
	return result;
}

bool isPrefix(const char* pattern, const char* text)
{
	while (*text != '\0' && *pattern != '\0')
	{
		if (*text != *pattern)
			return false;
		text++;
		pattern++;
	}
	return *pattern == '\0';
}

bool searchInText(const char* text, const char* pattern)
{
	size_t textLen = myStrlen(text);
	size_t patternLen = myStrlen(pattern);
	while(patternLen <= textLen)
	{
		if (isPrefix(pattern, text))
			return true;
		text++; //подминаваме първия символ
		textLen--;
	}
	return false;
}

int main()
{
	char str[] = "hello guys!";
	char pattern[] = "guys";
	
	cout << searchInText(str, pattern);
	
}
