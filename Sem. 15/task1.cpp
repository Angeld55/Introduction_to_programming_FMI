#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int countWords(const char* text)
{
	bool wasLastCharSpace = true;
	int wordCount = 0;
	int len = strlen(text);

	for (int i = 0; i < len; i++)
	{
		if (wasLastCharSpace && text[i] != ' ' )
		{
			wordCount++;
			wasLastCharSpace = false;
		}
		else if (text[i] == ' ')
			wasLastCharSpace = true;
	}
	return wordCount;

}
int getWordLength(const char* text, int start)
{
	int len = 0;
	int index = start;

	while (text[index] != ' ' && text[index] != '\0')
	{
		index++;
		len++;
	}
	return len;
}

void copyChars(char* dest, const char* text, int start, int len)
{

	for (int i = start, index = 0; index < len; i++, index++)
		dest[index] = text[i];
	
	dest[len] = '\0';
}
void fillWords(char** words, const char* text)
{
	int len = strlen(text);
	int currentWordIndex = 0;

	for (int i = 0; i < len; i++)
	{
		if (text[i] == ' ')
			continue;

		int currentWordLen = getWordLength(text, i);

		words[currentWordIndex] = new char[currentWordLen + 1]; //(**)

		copyChars(words[currentWordIndex], text, i, currentWordLen);

		currentWordIndex++;
		i += currentWordLen;
	}
}

void swap(char** arr, int i, int j)
{
	char* wordPtr = arr[i];
	arr[i] = arr[j];
	arr[j] = wordPtr;
}
void selectionSort(char** arr, int len)
{
	for (int pos = 0; pos < len - 1; pos++)
	{
		int minIndex = pos;
		for (int i = pos; i < len; i++)
		{
			if (strcmp(arr[i], arr[minIndex]) < 0)  
				minIndex = i;
		}
		if (pos != minIndex)
			swap(arr, pos, minIndex);
	}
}

void free(char** words, int wordsCount)
{
	for (int i = 0; i < wordsCount; i++)
		delete[] words[i]; // (**)
	delete[] words; // (*)
}
void task1(const char* text)
{

	int wordsCount = countWords(text);

	char** words = new char*[wordsCount]; // (*)

	fillWords(words, text);

	cout << "Before sort:" << endl;
	for (int i = 0; i < wordsCount; i++)
		cout << words[i] << endl;

	selectionSort(words, wordsCount);

	cout << "After sort:" << endl;
	for (int i = 0; i < wordsCount; i++)
		cout << words[i] << endl;

	free(words);
}

int main()
{
	const char* text = "    hello friends.    how    are you friends. ";

	task1(text);

}
