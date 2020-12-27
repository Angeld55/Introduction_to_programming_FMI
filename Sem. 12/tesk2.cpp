#include <iostream>
using namespace std;

bool isSymbol(char ch)
{
	return  ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z');
}
bool isVowel(char ch)
{
	switch (ch)
	{
	case 'A':
	case 'O':
	case 'I':
	case 'U':
	case 'E':
	case 'a':
	case 'o':
	case 'i':
	case 'u':
	case 'e':return true;
	}
	return false;
}
void countVowelAndCons(const char* str, int& vowelCount, int& consCount) 
{
	while (*str != '\0')
	{
		if (isSymbol(*str))
		{
			if (isVowel(*str))
				vowelCount++;
			else
				consCount++;
		}
		str++;
	}
}

bool isBalanced(const char* str)
{
	int vowelCount = 0, consCount = 0;

	countVowelAndCons(str, vowelCount, consCount);

	return vowelCount == consCount;
}

int main()
{
	const char* str = "TestMeau";
	
	cout << isBalanced(str) << endl;


}
