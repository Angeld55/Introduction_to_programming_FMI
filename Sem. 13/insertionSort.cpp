#include <iostream>
using namespace std;

void insertionSort(int* arr, size_t size)
{
	for (int i = 1; i < size; i++)
	{
		int currentElement = arr[i];
		int currentIndex = i - 1;
		while (currentIndex >= 0 && arr[currentIndex] > currentElement)
		{
			arr[currentIndex + 1] = arr[currentIndex];
			currentIndex--;
		}
		arr[currentIndex + 1] = currentElement;
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

	insertionSort(arr, SIZE);
	printArr(arr, SIZE);
}
