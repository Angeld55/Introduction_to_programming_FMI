#include <iostream>
using namespace std;

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void reverse(int arr[], unsigned size)
{
	for (unsigned i = 0; i < size / 2; i++)
		swap(arr[i], arr[size - 1 - i]);
}

int main()
{
	int arr[]  { 1, 2, 3, 4,5,6,7,8};
	reverse(arr, 8);
	print(arr, 8);
}

