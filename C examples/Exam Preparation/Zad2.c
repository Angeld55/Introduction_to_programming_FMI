#include <stdio.h>
#include <stdlib.h>

int isdelimiter(char symbol, const char* delimiters)
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

int getwordstartindex(const char* text, const char* delimiters, int startindex)
{
	int index = startindex;

	while (1)
	{
		if (text[index] == '\0')
		{
			break;
		}

		if (!isdelimiter(text[index], delimiters))
		{
			break;
		}

		index++;
	}

	return index;
}

int getwordendindex(const char* text, const char* delimiters, int startindex)
{
	int index = startindex;

	while (1)
	{
		if (text[index] == '\0')
		{
			break;
		}

		if (isdelimiter(text[index], delimiters))
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
		char leftsymbol = *left;
		char rightsymbol = *right;

		*left = rightsymbol;
		*right = leftsymbol;

		left++;
		right--;
	}
}

void reversonlywords(char* text, const char* delimiters)
{
	int index = 0;

	while (1)
	{
		int wordstartindex = getwordstartindex(text, delimiters, index);

		if (text[wordstartindex] == '\0')
		{
			return;
		}

		int wordendindex = getwordendindex(text, delimiters, wordstartindex + 1);

		reverse(text + wordstartindex, text + wordendindex);

		index = wordendindex + 1;
	}
}

int main()
{
	char text[1024];
	scanf_s("%s", text, 1024);

	char delimiters[64];
	scanf_s("%s", delimiters, 64);

	reversonlywords(text, delimiters);

	printf("%s", text);
}