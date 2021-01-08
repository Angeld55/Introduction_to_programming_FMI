#include <iostream>
using namespace std;

int sum(const int* arr, int len)
{
	if (len == 0)
		return 0;

	return arr[0] + sum(arr+1, len - 1);
}

int main()
{
	int arr[] = { 1, 2, 2, 6 };
	cout << sum(arr,4);
}