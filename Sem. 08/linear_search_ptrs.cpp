#include <iostream>
using namespace std;

int linearSearchWithPtrs(const int* arr, size_t size, int el)
{
	for (size_t i = 0; i < size; i++, arr++)
	{
		if ((*arr) == el)
			return i;
	}
	return -1;
}

int main()
{
	int arr[] = { 9,6,7,3 };
	cout << linearSearchWithPtrs(arr, 4, 7);
	return 0;
}
