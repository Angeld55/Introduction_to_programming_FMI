#include <iostream>
using namespace std;


void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int* arr, unsigned size)
{
	for (unsigned j = 0; j < size - 1; j++)
	{
		bool isSwapped = false;

		for (unsigned i = 0; i < size - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				isSwapped = true;
			}
		}

		if (!isSwapped)
			return;
	}
}

int main()
{
	int arr[] = { 1,2,2,1, 1 };
	selectionSort(arr, 5);

	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
}
