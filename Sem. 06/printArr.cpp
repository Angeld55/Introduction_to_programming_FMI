#include <iostream>
using namespace std;

const int GRADES_COUNT = 5;

void printArr(const int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void printArrReverse(const int arr[], size_t size)
{
	for (int i = size - 1; i >= 0; i--) //here should be signed
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void setData(int arr[], size_t size, int data)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = data;
	}
}

int main()
{
	constexpr size_t ARR_SIZE = 5;
	int arr[ARR_SIZE];
	setData(arr, 5, 3);
	printArr(arr, ARR_SIZE);


	int arr2[3] = { 1, 2, 3 };
	printArrReverse(arr2, 3);


}
