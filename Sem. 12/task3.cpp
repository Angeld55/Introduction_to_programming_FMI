#include <iostream>
using namespace std;

int search(const char* string, const char* searched);

void replace(const char* string, const char* x, const char* y, char* result)
{
	int yLen = strlen(y);
	int xLen = strlen(x);
	while (true)
	{
		int indX = search(string, x);  //14
		if (indX == -1)
			break;
	

		for (int i = 0; i < indX; i++)
			result[i] = string[i];
		result += indX;
		string += indX + xLen;

		for (int i = 0; i < yLen; i++)
			result[i] = y[i];
		result += yLen;
	}

	//the rest symbols
	while (*string != '\0')
	{
		*result = *string;
		result++;
		string++;
	}
	*result = '\0';

}

//return the first index of searched in str.
int search(const char* str, const char* searched) 
{
	int len1 = strlen(str);
	int len2 = strlen(searched);
	for (int i = 0; i < len1 - len2+1; i++)
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
int countOccurrences(const char* str, const char* searched)
{
	int count = 0;

	int searchLen = strlen(searched);
	int ind = search(str, searched);
	while (ind != -1)
	{
		count++;
		str += (ind + searchLen);
		ind = search(str, searched);
	}
	return count;
}
int main()
{
	const char* str = "hello friends! You are my best friends. I have no other friends";
	const char* x = "friend";
	const char* y = "enemy";

	int len = strlen(str);
	int xOccurrences = countOccurrences(str, x);

	char* result = new char[len - xOccurrences*strlen(x) + xOccurrences*strlen(y) + 1];

	replace(str, x, y, result);

	cout << result << endl;
	
	delete[] result;
}