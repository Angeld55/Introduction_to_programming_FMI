#include <iostream>
using namespace std;

size_t myStrlen(const char* str)
{
	if (str == nullptr)
		return 0;
    
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int myStrcmp(const char* first, const char* second)
{
	if (first == nullptr || second == nullptr)
		return 0; //error

	while (*first != '\0' && *second != '\0')
	{
		if (*first < *second)
			return -1;
		if(*first > *second)
			return 1;
		first++;
		second++;
	}

	if (*first == '\0' && *second == '\0')
		return 0;

	return *first == '\0' ? -1 : 1;
}

// we assume that dest is big enough 
void myStrCopy(const char* source, char* dest)
{
	if (source == nullptr || dest == nullptr)
		return;

	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}


// we assume that dest is big enough 
void myStrCat(char* dest, const char* source)
{
	size_t destLen = myStrlen(dest);
	dest += destLen;
	myStrCopy(source, dest);
}

int main()
{
	char str[20] = "ABC";
	char str2[] = "XY";
	myStrCat(str, str2);

	cout << str;
}
