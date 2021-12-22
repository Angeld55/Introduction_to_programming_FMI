#include <iostream>
#include <vector>
using namespace std;


bool linearSearch(const int arr[], unsigned size, int el)
{
	for (unsigned i = 0; i < size; i++)
	{
		if (arr[i] == el)
			return true;
	}
	return false;
}

bool binarySearch(const int* arr, unsigned size, int searched)
{
	unsigned fromIndex = 0;
	unsigned toIndex = size - 1;

	while (fromIndex <= toIndex)
	{
		unsigned midIndex = fromIndex + (toIndex - fromIndex) / 2;

		if (arr[midIndex] == searched)
			return true;

		if (arr[midIndex] < searched)
			fromIndex = midIndex + 1;
		else
			toIndex = midIndex - 1;
	}

	return false;
}



int main()
{
	const unsigned SIZE = 8;
	int arr[]  { 1, 12, 33, 14,35,4,17,38};
	cout << linearSearch(arr, SIZE, 14);
}
