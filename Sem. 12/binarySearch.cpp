#include <iostream>


bool binarySearch(const int* arr, unsigned size, int el)
{
	if (size == 0)
		return false;

	unsigned mid = size / 2;

	if (arr[mid] == el)
		return true;

	if (arr[mid] > el)
		return binarySearch(arr, mid, el);
	return binarySearch(arr + mid + 1, size - mid - 1, el);
}

int main()
{
}
