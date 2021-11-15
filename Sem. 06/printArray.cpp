#include <iostream>
using namespace std;


void print(const int arr[], unsigned int len)
{
	cout << "[ ";
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
	cout << "]" << endl;
}

int main()
{
	int arr[]  { 1, 2, 3, 4, 5, 6, 7, 8};
	print(arr, 8);
}

