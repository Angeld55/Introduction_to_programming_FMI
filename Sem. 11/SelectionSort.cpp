#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int* arr, unsigned size)
{
	for (unsigned i = 0; i < size - 1; i++)
	{
		//findMin
		int minElementIndex = i;
		for (unsigned j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minElementIndex])
				minElementIndex = j;
		}
		if (minElementIndex != i)
			swap(arr[i], arr[minElementIndex]);
	}
}

int main()
{
	int arr[] = { 1,2,2,1, 1 };
	selectionSort(arr, 5);

	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
}
