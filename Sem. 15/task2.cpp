#include <iostream>


bool isValidSymbol(char ch)
{
	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}
//true word1 < word2
bool isLexLess(const char* word1, const char* word2)
{
	while (isValidSymbol(*word1) && isValidSymbol(*word2))
	{
		if (*word1 < *word2)
			return true;
		else if (*word1 > *word2)
			return false;
		word1++;
		word2++;
	}
	return !isValidSymbol(*word1);
}


const char* minWord(const char* str)
{
	size_t len = strlen(str);
	const char* currentMin = nullptr;
	const char* iter = str;
	while (*iter != '\0')
	{
		if (isValidSymbol(*iter) && ((iter == str) || !isValidSymbol(*(iter - 1))))
		{
			if (currentMin == nullptr)
			{
				currentMin = iter;
			}
			else
			{
				if (isLexLess(iter, currentMin))
					currentMin = iter;
			}
		}
		iter++;
	}
	return currentMin;
}
int main()
{
	std::cout << minWord("me? why always me");// 1 -> 3 -> 6 -> 18 -> 19
}