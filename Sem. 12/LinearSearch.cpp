#include <iostream>
using namespace std;

int linearSearch(const int* arr, size_t size, int el)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == el)
			return i;
	}
	return -1;
}

int main()
{
	int arr[] = { 7,6,5,4,3,2 };
	cout << linearSearch(arr, 6, 1);
}