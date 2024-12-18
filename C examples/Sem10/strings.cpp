#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning (disable:4996)
unsigned getStrLen(const char* str)
{
	if (!str)
		return 0;

	unsigned count = 0;
	while (*str) //*str != '\0'
	{
		count++;
		str++;
	}
	return count;
}
 //!!!!




void myStrCpy(char* dest, const char* source)
{ //допускаме, че в дест има достатъчно място 

	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';

}

void myStrCat(char* source, const char* dest)
{ //1. source и dest са валидни стрингове.
  //2. source има достатъчно място
	myStrCpy(source + getStrLen(source), dest);
}


//int strncmp(const char* str1, const char* str2) -> 
  // <0    str1 < str2
 // 0  str1 == str2
// >0  str1 > str2
 
//Задача 1: Reverse на стринг

///// ABCDE
 //   EDCBA
void swap(char* ch1, char* ch2)
{
	char temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}
void myReverse(char* str) //Променяте подадения стринг
{
	size_t strLen = strlen(str);
	for (int i = 0; i < strLen / 2; i++)
		swap(&str[i], &str[strLen - i - 1]);
}
char* myReverseReturnNew(const char* str) //връща нов (динамично заделен)
{
	size_t len = strlen(str);
	char* result = malloc((len + 1) * sizeof(char));
	strcpy(result, str);
	myReverse(result);
	return result;
}

//задача 2: Функция, която приема низ и връща дали е палиндром

int isPalindromeNaive(const char* str) //OK, but allocates memory, which is not needed!
{
	char* temp = myReverseReturnNew(str);
	int result = strcmp(str, temp) == 0;
	free(temp);
	return result;
}

int isPalindrome(const char* str)
{
	size_t size = strlen(str);
	for (int i = 0; i < size / 2; i++)
	{
		if (str[i] != str[size - i - 1])
			return 0;
	}
	return 1;
}

//задача 3: Напишете функция, която приема низ и връща нов, за който е заделено точно количество памет
// и премахва всичките му цифри!

//"AB32GF3QQ1" -> "ABGFQQ"
int isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}

unsigned getDigitsCount(const char* str)
{
	if (!str)
		return 0;

	unsigned count = 0;
	while (*str)
	{
		if (isDigit(*str))
			count++;
		str++;
	}
	return count;
}
char* removeDigits(const char* str)
{
	char* result = malloc(strlen(str) - getDigitsCount(str) + 1);
	unsigned resultIndex = 0; //

	while (*str)
	{
		if (!isDigit(*str))
			result[resultIndex++] = *str;
		str++;
	}
	result[resultIndex] = '\0';
	return result;
}
//Търсене в текст -> дали някакъв шаблон го има в текста

//Hello, my name is Angel.   name -> 1
//name
 
int isPrefix(const char* text, const char* pattern)
{
	while (*pattern)
	{
		if (!*text)
			return 0; //text is shorter than pattern!! 

		if (*pattern != *text)
			return 0;
		text++;
		pattern++;
	}
	return 1;
}

int contains(const char* text, const char* pattern)
{
	if (!text || !pattern)
		return 0;
	size_t textLen = strlen(text);
	size_t patternLen = strlen(pattern);

	while (textLen >= patternLen)
	{
		if (isPrefix(text, pattern))
			return 1;
		text++;
		textLen--;
	}
	return 0;

}






int main()
{
	{
		char str[10] = "xy";
		char* result = myReverseReturnNew(str);

		printf("%s", result);

		free(result);
	}
	{
		char test[] = "ab3453543xy34234q";
		char* res = removeDigits(test);
		printf("%s", res);
		free(res);
	}

	{
	
		printf("%d", contains("Hello my friends!", "friends!"));
	}


}
