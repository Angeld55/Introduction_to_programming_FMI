#include "pch.h"
#include <iostream>
#include <ctime>
#pragma warning( disable : 4996)
using namespace std;

bool isValid(char ch)
{
	return ch >= 'a' && ch <= 'z' ||
		ch >= 'A' && ch <= 'Z' ||
		ch >= '0' && ch <= '9';
}

unsigned int getWordsCount(const char* text)
{
	unsigned int  count = 0;
	while (*text)
	{
		if (!isValid(*text))
			count++;
		text++;
	}
	return count + 1;
}

size_t getFirstNotValidSymbolIndex(const char* text)
{
	size_t i = 0;
	while (*text && isValid(*text))
	{
		i++;
		text++;
	}
	return i;
}
void fillWordsToArrayOfWords(char** textArr, char* text)
{
	size_t wordIndex = 0;
	bool isLast = false;
	while (*text)
	{
		size_t wordEnd = getFirstNotValidSymbolIndex(text);
		
		if (text[wordEnd] == '\0')
			isLast = true;
		text[wordEnd] = '\0';
		textArr[wordIndex] = new char[wordEnd + 3];
		strcpy(textArr[wordIndex], text);
		text[wordEnd] = ' ';
		text += (wordEnd);
		wordIndex++;
		if (isLast)
			return;
		text++;
	}
}

void printTextFromArray(char** textArr, int wordsCount)
{
	for (int i = 0; i < wordsCount; i++)
	{
		cout << textArr[i] << " ";
	}
	cout << endl;
}

void free(char** words, int count)
{
	for (int i = 0; i < count; i++)
		delete[] words[i];
	delete[] words;
}


void censoreOrDiscensore(char** words, int ind)
{
	if (strcmp(words[ind], "*") == 0)
	{
		strcpy(words[ind], words[ind] + 2);
	}
	else
	{
		size_t wordLength = strlen(words[ind]);
		for (int i = wordLength; i >= 0; i--)
			words[ind][i + 2] = words[ind][i];
		words[ind][0] = '*';
		words[ind][1] = '\0';
	}
}

void changeWordByIndex(char** text, int ind, const char* word)
{
	delete[] text[ind];
	text[ind] = new char[strlen(word) + 3];
	strcpy(text[ind], word);
}

char* extractText(char** textMatrix, int wordsCount)
{
	size_t textLenght = 0;

	for (int i = 0; i < wordsCount; i++)
		textLenght += strlen(textMatrix[i]);
	textLenght += (wordsCount - 1); //for spaces

	char* resultText = new char[textLenght + 1];
	
	resultText[0] = '\0'; //for the first strcat to work
	for (int i = 0; i < wordsCount; i++)
	{
		strcat(resultText, textMatrix[i]);
		if(i != wordsCount - 1)
			strcat(resultText, " ");

	}

	return resultText;
}

int main()
{
	char buff[1024];
	cin.getline(buff, 1024);

	size_t wordsCount = getWordsCount(buff);
	char** textArr = new char*[wordsCount];

	fillWordsToArrayOfWords(textArr, buff);


	//tests
	printTextFromArray(textArr, wordsCount);

	cout << "Censore the first word" << endl;
	censoreOrDiscensore(textArr, 1);
	printTextFromArray(textArr, wordsCount);

	cout << "Censore the second word" << endl;
	censoreOrDiscensore(textArr, 2);
	printTextFromArray(textArr, wordsCount);

	cout << "Discensore the first word" << endl;
	censoreOrDiscensore(textArr, 1);
	printTextFromArray(textArr, wordsCount);

	cout << "Change word by index" << endl;

	changeWordByIndex(textArr, 1, "TESTCHANGE");
	printTextFromArray(textArr, wordsCount);

	cout << "Final constructed text:" << endl;
	char* finalText = extractText(textArr, wordsCount);
	cout << finalText << endl;
	
	
	
	//memory handling
	delete[] finalText;
	free(textArr, wordsCount);
}

