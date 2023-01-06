#include <iostream>
using namespace std;

int binarySearch(const int* arr, size_t size, int el)
{
	int left = 0, right = size - 1;

	while (left <= right)
	{
		unsigned mid = left + (right - left) / 2;
		if (arr[mid] == el)
			return mid;
		else if (arr[mid] > el)
			right = mid - 1;
		else //arr[mid] < el
			left = mid + 1;
	}
	return -1;
}


int main()
{
	int arr[] = { 1, 2, 5, 9, 13, 17};
	cout << binarySearch(arr, 6, 30);
}
