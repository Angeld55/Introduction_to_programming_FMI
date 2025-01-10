#include <stdio.h>
#include <stdlib.h>

int isDelimiter(char symbol, const char* delimiters)
{
	for (int i = 0; delimiters[i]; i++)
	{
		if (symbol == delimiters[i])
		{
			return 1;
		}
	}

	return 0;
}

int getWordStartIndex(const char* text, const char* delimiters, int startIndex)
{
	int index = startIndex;

	while (1)
	{
		if (text[index] == '\0')
		{
			break;
		}

		if (!isDelimiter(text[index], delimiters))
		{
			break;
		}

		index++;
	}

	return index;
}

int getWordEndIndex(const char* text, const char* delimiters, int startIndex)
{
	int index = startIndex;

	while (1)
	{
		if (text[index] == '\0')
		{
			break;
		}

		if (isDelimiter(text[index], delimiters))
		{
			break;
		}

		index++;
	}

	return index - 1;
}

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char leftSymbol = *left;
		char rightSymbol = *right;

		*left = rightSymbol;
		*right = leftSymbol;

		left++;
		right--;
	}
}

void reversOnlyWords(char* text, const char* delimiters)
{
	int index = 0;

	while (1)
	{
		int wordStartIndex = getWordStartIndex(text, delimiters, index);

		if (text[wordStartIndex] == '\0')
		{
			return;
		}

		int wordEndIndex = getWordEndIndex(text, delimiters, wordStartIndex + 1);

		reverse(text + wordStartIndex, text + wordEndIndex);

		index = wordEndIndex + 1;
	}
}

int main()
{
	char text[1024];
	scanf_s("%s", text, 1024);

	char delimiters[64];
	scanf_s("%s", delimiters, 64);

	reversOnlyWords(text, delimiters);

	printf("%s", text);
}