#include <iostream>
using namespace std;

bool binarySearch(const int arr[], unsigned size, int searched)
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

	int arr[]  { 1, 2, 3, 4,5,6,7,8};
	cout << binarySearch(arr, 8);

}

