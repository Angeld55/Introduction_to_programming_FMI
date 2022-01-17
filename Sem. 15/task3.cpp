#include <iostream>


bool isLowerChar(char ch)
{
	return ch >= 'a' && ch <= 'z';
}
char* sortLowerChars(const char* str)
{
	const int ALPHABET_SIZE = 26;
	int hist[ALPHABET_SIZE] = { 0 };
	int newSize = 0;

	while (*str != '\0')
	{
		if (isLowerChar(*str))
		{
			newSize++;
			hist[*str - 'a']++;
		}
			
		str++;
	}

	char* result = new char[newSize + 1];
	result[newSize] = '\0';
	int resultIndex = 0;

	for (int i = 0; i < ALPHABET_SIZE; i++)
	{
		while (hist[i] > 0)
		{
			result[resultIndex++] = 'a' + i;
			hist[i]--;
		}
	}
	return result;

}

int main()
{
	char* result = sortLowerChars("bbzzAaaTYb");

	std::cout << result << std::endl;

	delete[] result;
}