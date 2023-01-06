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
void bubbleSort(int* arr, size_t size)
{
	for (int i = 0; i < size - 1; i++)
	{
		bool isSwapped = false;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				isSwapped = true;
			}
		}
		if (!isSwapped)
			return;
	}
}


int main()
{
	int arr[] = { 7,6,5,4,3,2 };
	bubbleSort(arr, 6);
	print(arr, 6);
}