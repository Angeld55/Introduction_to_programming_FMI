#include <iostream>
using namespace std;

void merge(int* arr1, unsigned size1, const int* arr2, unsigned size2)
{
	int* result = new int[size1 + size2];

	unsigned iter1 = 0;
	unsigned iter2 = 0;
	unsigned resultIter = 0;

	while (iter1 < size1 && iter2 < size2)
	{
		if (arr1[iter1] <= arr2[iter2])
			result[resultIter++] = arr1[iter1++];
		else
			result[resultIter++] = arr2[iter2++];
	}

	while (iter1 < size1)
		result[resultIter++] = arr1[iter1++];

	while (iter2 < size2)
		result[resultIter++] = arr2[iter2++];

	memcpy(arr1, result, sizeof(int) * (size1+ size2));
	delete[] result;
}

int main()
{

	int arr[9] = { 1, 3, 5, 10 };
	int arr2[] = { 2, 4, 6, 100, 9900 };
	merge(arr, 4, arr2, 5);

	for (int i = 0; i < 9; i++)
		cout << arr[i] << " ";
}
