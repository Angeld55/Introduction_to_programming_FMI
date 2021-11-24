#include <iostream>
using namespace std;

// strlen(const char* ) -> връща дължината
unsigned my_strlen(const char* str)
{
	unsigned length = 0;
	while (str[length] != '\0')
		length++;
	return length;
}

//strcat - конкатенира втория към първия
// Допускаме, че в dest има достатъчно място!!!
void my_strcat(char* dest, const char* source)
{
	unsigned destSize = my_strlen(dest);
	unsigned sourceSize = my_strlen(source);

	for (unsigned i = 0; i < sourceSize; i++)
		dest[destSize + i] = source[i];
	dest[destSize + sourceSize] = '\0';
}

// Допускаме, че в dest има достатъчно място!!!
void my_strcpy(char* dest, const char* source)
{
	unsigned iter = 0;
	while (source[iter] != '\0')
	{
		dest[iter] = source[iter];
		iter++;
	}
	dest[iter] = '\0';
}

int convertFromChar(char ch)
{
	if ('0' <= ch && ch <= '9')
		return ch - '0';
	return 0;
}

//strcmp(str1, str2) - сравнява два стринга лексикографски
// отрицателно ( str1 < str2)  , 0 (str1 == str2), положително (str1 > str2)

int min(int a, int b)
{
	return a < b ? a : b;
}

int my_strcmp(const char* str1, char* const str2)
{
	unsigned str1Len = my_strlen(str1);
	unsigned str2Len = my_strlen(str2);
	unsigned smallerLen = min(str1Len, str2Len);

	for (unsigned i = 0; i < smallerLen; i++)
	{		
		if (str1[i] - str2[i] != 0)
			return str1[i] - str2[i];
 	}
	return str1Len - str2Len;
}

//atoi стринг->цяло число. "12345" -> 12345
int convertStringToInt(const char* str)
{
	int result = 0;
	
	int i = 0;
	while (str[i] != '\0')
		(result *= 10) += convertFromChar(str[i++]);

	if (str[0] == '-')
		result *= -1;
	return result;
}


//търсене в текст
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

unsigned searchInText(const char* text, const char* pattern)
{
	unsigned textLen = my_strlen(text);
	unsigned patternLen = my_strlen(pattern);
	
	unsigned count = 0;

	for (unsigned i = 0; i <= textLen - patternLen; i++)
	{
		if (isPrefix(text + i, pattern))
			count++;
	}
	return count;
}

//функция, която приема стринг и връща броя на срещанията да даден символ;
unsigned getCharoOccurrencesCount(const char* str, char ch)
{
	unsigned count = 0;
	unsigned stringSize = my_strlen(str);
	for (unsigned i = 0; i < stringSize; i++)
	{
		if (str[i] == ch)
			count++;
	}
	return count;
}



int main()
{
	char str1[] = "abcd";
	char str2[] = "bcc";
	
	cout << my_strcmp(str1, str2) << endl;
}

