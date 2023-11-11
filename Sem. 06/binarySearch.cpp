#include <iostream>
using namespace std;

int binarySearch(const int arr[], int len, int el)
{
	int left = 0;
	int right = len - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
				//left + right) / 2;
		if (el > arr[mid])
			left = mid + 1;
		else if (el < arr[mid])
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}


int main()
{
	constexpr int size = 5;
	int sortedArr[size] = { 1,5,12,15,20 };
	cout << binarySearch(sortedArr, size, 15);
}  
