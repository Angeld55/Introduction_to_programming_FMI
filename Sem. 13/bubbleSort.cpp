#include <iostream>
using namespace std;

void swapNums(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int* arr, size_t size)
{
	unsigned lastSwapedIndex = size - 1;
	for (int i = 0; i < size - 1; i++)
	{
		int currentIterLastSwapped = 0;
		for (int j = 0; j < lastSwapedIndex; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swapNums(arr[j], arr[j + 1]);
				currentIterLastSwapped = j;
			}
		}
		if (currentIterLastSwapped == 0)
			return;
		lastSwapedIndex = currentIterLastSwapped;
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
	int arr[SIZE] = { 5, 4, 3, 2, 1 };

	bubbleSort(arr, SIZE);
	printArr(arr, SIZE);
}
