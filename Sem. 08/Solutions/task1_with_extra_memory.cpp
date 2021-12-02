#include <iostream>
#include <cstring>

#pragma warning (disable:4996)

using namespace std;

const unsigned CAPACITY = 1024;

bool isPrefix(const char* text, const char* prefix)
{
	int i = 0;
	while (prefix[i] != '\0')
	{
		if (text[i] == '\0' || text[i] != prefix[i])
			return false;
		i++;
	}
	return true;
}

//допускаме, че в text има достатъчно място.
void stringReplace(char* text, const char* pattern, char* replace)
{
	char newText[CAPACITY]; //extra space
	unsigned newTextIter = 0;

	char* textIter = text;

	unsigned replacedSize = strlen(replace);
	unsigned patternSize = strlen(pattern);

	while (*textIter != '\0')
	{
		if (isPrefix(textIter, pattern))
		{
			newText[newTextIter] = '\0'; //so strcat would work
			strcat(newText, replace);

			newTextIter += replacedSize;
			textIter += patternSize;
		}
		else
		{
			newText[newTextIter++] = *textIter;
			textIter++;
		}

	}
	newText[newTextIter] = '\0';
	strcpy(text, newText);
}


int main()
{
    char text[CAPACITY] = "I am the best of the best!";
    char pattern[] = "best";
    char replace[] = "worst";
  
    stringReplace(text, pattern, replace);
    
    cout << text << endl;
}
