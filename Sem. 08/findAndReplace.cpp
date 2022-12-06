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

const size_t MAX_SIZE = 10000;
void findAndReplace(char* text, const char* pattern, const char* replace)
{
	size_t replaceSize = strlen(replace);
	size_t patternSize = strlen(pattern);
	char* textBegin = text;
	char tempResult[MAX_SIZE];
	size_t tempResultInd = 0;

	while (*text != '\0')
	{
		if (isPrefix(pattern, text))
		{
			tempResult[tempResultInd] = '\0';
			strcat(tempResult, replace);
			tempResultInd += replaceSize;
			text += patternSize;
		}
		else
		{
			tempResult[tempResultInd++] = *text;
			text++;
		}
	}
	tempResult[tempResultInd] = '\0';
	strcpy(textBegin, tempResult);
}


int main()
{
	char str[1024] = "Hello my friend. Are you my friend?";
	char pattern[] = "friend";
	char replace[] = "enemy";

	findAndReplace(str, pattern, replace);

	cout << str;
}
