#include <iostream>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int max(const int* arr, int len)
{
	if (len == 1)
		return arr[0];
	return max(arr[0], max(arr + 1, len - 1));
}

int main()
{
	int arr[] = { 1, 2, 2,-4,-6 };
	cout << max(arr, 5);
}