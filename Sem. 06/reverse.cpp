#include <iostream>
using namespace std;

void printArr(const int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void reverseArr(int arr[], size_t size)
{
	for (size_t i = 0; i < size / 2; i++)
		swap(arr[i], arr[size - 1 - i]);
}

int main()
{
	const size_t ARR_SIZE = 5;
	int arr[ARR_SIZE] = { 1, 2, 3, 4, 5 };

	printArr(arr, ARR_SIZE);
	reverseArr(arr, ARR_SIZE);
	printArr(arr, ARR_SIZE);
}
