#include <iostream>
using namespace std;


void merge(const int* arr1, size_t size1,
		   const int* arr2, size_t size2,
	       int* result)
{
	unsigned arr1Index = 0, arr2Index = 0, resultIndex = 0;

	while (arr1Index < size1 && arr2Index < size2)
	{
		if (arr1[arr1Index] <= arr2[arr2Index])
			result[resultIndex++] = arr1[arr1Index++];
		else
			result[resultIndex++] = arr2[arr2Index++];
	}
	while(arr1Index < size1)
		result[resultIndex++] = arr1[arr1Index++];

	while (arr2Index < size2)
		result[resultIndex++] = arr2[arr2Index++];
}

int getBound(const int* arr, size_t size)
{
	if (!arr)
		return -1;
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1])
			return i + 1;
	}
	return -1;
}

void sortArrayConcatOfTwoSortedArrays(int* arr, size_t size)
{
	if (!arr)
		return;

	int secondArrayStartIndex = getBound(arr, size);
	if (secondArrayStartIndex == -1) //the array is sorted
		return;

	int* temp = new int[size];
    merge(arr, secondArrayStartIndex,
          arr + secondArrayStartIndex, size - secondArrayStartIndex,
          temp);

	for (int i = 0; i < size; i++)
		arr[i] = temp[i];
	delete[] temp;
}

int main()
{
    constexpr size_t size = 6;
    int arr[size] = {1,5,9, 12, 4, 7};
    
    sortArrayConcatOfTwoSortedArrays(arr, size);
    
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
