#include <iostream>
using namespace std;

void swapNums(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int* arr, size_t size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minElementIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minElementIndex])
				minElementIndex = j;
		}
		if (minElementIndex != i)
			swapNums(arr[i], arr[minElementIndex]);
	}
}

void printArr(const int* arr, size_t size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	constexpr size_t SIZE = 5;
	int arr[SIZE] = { 5,4,3,2,1 };

	selectionSort(arr, SIZE);
	printArr(arr, SIZE);
}
