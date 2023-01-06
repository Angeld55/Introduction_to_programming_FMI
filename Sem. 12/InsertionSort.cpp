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


void insert(int* arr, size_t size) //сортиран, но без последния елемент
{
	int el = arr[size - 1];
	int iter = size - 2;

	while (iter >= 0 && el < arr[iter])
	{
		arr[iter + 1] = arr[iter];
		iter--;
	}
	arr[iter + 1] = el;

	/*int elIndex = size - 1;

	while (elIndex > 0 && arr[elIndex] < arr[elIndex - 1])
	{
		swap(arr[elIndex - 1], arr[elIndex]);
		elIndex--;
	}*/
}
void insertionSort(int* arr, size_t size)
{
	for (int i = 1; i < size; i++)
		insert(arr, i + 1);
}

int main()
{
	int arr[] = { 7,6,5,4,3,2 };
	insertionSort(arr, 6);
	print(arr, 6);
}