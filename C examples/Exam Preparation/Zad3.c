#include <stdio.h>
#include <stdlib.h>

int myStrLen(const char* text)
{
	int index = 0;

	while (text[index++]) {}

	return index;
}

int isSymbolToRemove(char symbol, const char* symbolsToRemove)
{
	for (int i = 0; symbolsToRemove[i]; i++)
	{
		if (symbol == symbolsToRemove[i])
		{
			return 1;
		}
	}

	return 0;
}

int getSymbolsToRemoveCount(const char* text, const char* symbolsToRemove)
{
	int count = 0;

	for (int i = 0; text[i]; i++)
	{
		count += isSymbolToRemove(text[i], symbolsToRemove);
	}

	return count;
}

void removeSymbols(const char* text, const char* symbolsToRemove, char* sanitizedText)
{
	int sanitizedTextIndex = 0;

	for (int i = 0; text[i]; i++)
	{
		if (!isSymbolToRemove(text[i], symbolsToRemove))
		{
			sanitizedText[sanitizedTextIndex] = text[i];
			sanitizedTextIndex++;
		}
	}

	sanitizedText[sanitizedTextIndex] = '\0';
}

char* sanitizeText(const char* text, const char* symbolsToRemove)
{
	int textLength = myStrLen(text);
	int symbolsToRemoveCount = getSymbolsToRemoveCount(text, symbolsToRemove);

	char* sanitizedText = malloc(textLength - symbolsToRemoveCount + 1);

	removeSymbols(text, symbolsToRemove, sanitizedText);

	return sanitizedText;
}

int main()
{
	char text[1024];
	scanf_s("%s", text, 1024);

	char symbolsToRemove[64];
	scanf_s("%s", symbolsToRemove, 64);

	char* sanitizedText = sanitizeText(text, symbolsToRemove);

	printf("%s", sanitizedText);

	free(sanitizedText);
}

// Hello123World321INF321
// 123

