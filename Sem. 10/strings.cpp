#include <iostream>
using namespace std;

// Низове (символни низове) стрингове

// за да запазим текст с дължина k, ще ми трябват k+1 клетки
// k за текста и една клетка за \0;


const int LEN = 300;
// Функцията ще променя ли масива?
// Ако не - const!!!

int stringLength(const char* str)
{
	int len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}

int convertCharToDigit(char ch)
{
	return ch - '0';
}

//Фунцкия, която приема низ и го конверира в число, ако е възможно
// "345" ->345
// "3456" -> 3456
int convertFromString(const char* str)
{
	int len = stringLength(str);
	int multiPl = 1;

	int result = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		result += multiPl * convertCharToDigit(str[i]);
		multiPl *= 10;
	}
	return result;
}

int min(int a, int b)
{
	return a < b ? a : b;
}
// Функция, която сравнява лексикографски 2 низа:
// - ако str1<str2
//  0 ако str1 = str2
// + ако str1>str2
int stringCompare(const char* str1,const char* str2) 
{
	int len1 = stringLength(str1);
	int len2 = stringLength(str2);
	int minLen = min(len1, len2);

	for (int i = 0; i < minLen; i++)
	{
		int diff = str1[i] - str2[i];
		if (diff != 0)
			return diff; //Двата символа са различни. Връщаме кой е "по-малък".
	}
	//Ако е свършил цикълът, никъде няма разлика в символите.
	if (len1 != len2)
		return len1 - len2;
	//Няма разлика в символите и няма разлика в дължините.
	return 0;
}

// Конкатенация на два низа.
void stringConcat(char* dest, const char* source)
{
	int destLength = stringLength(dest);
	int sourceLength = stringLength(source);

	for (int i = 0; i <= sourceLength; i++)
		dest[destLength + i] = source[i];
}

int main()
{

	char str[LEN] = "Test1";
	char str2[LEN] = "Test2";
	
	stringConcat(str, str2);
	cout << str2 << endl;
  
}
