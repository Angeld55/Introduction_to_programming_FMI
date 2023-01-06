#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void print(const int* arr, size_t size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int getMinElementIndex(const int* arr, size_t size)
{
	int minInd = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < arr[minInd])
			minInd = i;
	}
	return minInd;
}

void selectionSort(int* arr, size_t size)
{
	for(int i = 0; i < size - 1; i++)
	{
		int minElIndex = i + getMinElementIndex(arr + i, size - i);

		if (minElIndex != i)
			swap(arr[minElIndex], arr[i]);
	}
}

int main()
{
	int arr[] = { 7,6,5,4,3,2 };
	selectionSort(arr, 6);
	print(arr, 6);
}