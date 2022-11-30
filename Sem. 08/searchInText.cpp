#include <iostream>
using namespace std;

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
	size_t textLen = strlen(text);
	size_t patternLen = strlen(pattern);
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