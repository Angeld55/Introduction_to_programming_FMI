#include <iostream>
using namespace std;


const int MAX_LEN = 1024;


int contains(const char* str, const char* searched) 
{
	int len1 = strlen(str);
	int len2 = strlen(searched);
	for (int i = 0; i < len1 - len2 + 1; i++)
	{
		bool found = true;
		for (int j = 0; j < len2; j++)
		{
			if (searched[j] != str[i + j])
			{
				found = false;
				break;
			}
		}
		if (found)
			return i;
	}
	return -1;
}
bool containsOnlyWhiteSpaces(const char* str)
{
	while (*str != '\0')
	{
		if (*str != ' ')
			return false;
		str++;
	}
	return true;
}
void makeSpaces(char* str, int startIndex, int spacesCount)
{
	for (int i = startIndex; i < startIndex + spacesCount; i++)
		str[i] = ' ';
}
bool hasSameWords(const char* sentence1, const char* sentence2)
{
	int len1 = strlen(sentence1);
	int len2 = strlen(sentence2);

	char* s1 = new char[len1 + 1];
	char* s2 = new char[len2 + 1];
	
	char* s1Original = s1;// we change s1. So we could delete the whole array

	strcpy(s1, sentence1);
	strcpy(s2, sentence2);


	for (int i = 0; i <= len1; i++)
	{
		if  (s1[i] != ' ' &&s1[i] != '\0' )
			continue;
		//we are here if we found a space (or a \0 which means it's the last word).


		//if the space is at the begining, there is not a word before it. So we just remove it.
		if (i == 0)
		{
			s1 += 1;
			len1--;
			i = -1;
			continue;
		}

		char* currentWord = new char[i + 1];

		s1[i] = '\0';
		strcpy(currentWord, s1);

		if (i != len1) //if it's not the last word (because after the last word there is an '\0').
			s1[i] = ' ';
		
		int res = contains(s2, currentWord);
		if (res == -1)
			return false;

		//we make the matched word as whitespaces.
		makeSpaces(s1, 0, i);
		makeSpaces(s2, res, i);

		//we move the pointer to continue with the sentense.
		s1 += i;
		len1 -= i;

		i = -1;
		delete[] currentWord;
	}

	bool res = containsOnlyWhiteSpaces(s1Original) && containsOnlyWhiteSpaces(s2);
	delete[] s1Original, s2;
	return res;
}
int main()
{
	char sentence1[MAX_LEN];
	char sentence2[MAX_LEN];

	//cin.getline(sentence1, MAX_LEN);
	//cin.getline(sentence2, MAX_LEN);

	cout << hasSameWords("hello friends bye enemy", "bye friends  hello enemy");
}