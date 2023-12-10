#include <iostream>
using namespace std;

unsigned myStrlen(const char* str)
{
	if (!str)
		return 0;

	unsigned result = 0;
	while (*str) //is the same as (*str) != '\0'
	{
		result++;
		str++;
	}
	return result;
}

//copy the source to destination.
//We assume that in dest the are enough cells.
void myStrcpy(const char* source, char* dest)
{
	if (!source || !dest)
		return;
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

// - first < second
// 0 first == second
// + first > second
int myStrcmp(const char* first, const char* second)
{
	if (!first || !second)
		return 0; //some error value

	//we skip the common prefix, but not the terminating zero!
	while ((*first) && (*second) && ((*first) == (*second)))
	{
		first++;
		second++;
	}

	return (*first - *second);

}
int main()
{
	char str[] = "ABCY";
	char str2[10];
	cout << myStrlen(str) << endl;
	myStrcpy(str, str2);
	cout << str2 << endl;
	cout << myStrcmp(str, str2) << endl;
}
