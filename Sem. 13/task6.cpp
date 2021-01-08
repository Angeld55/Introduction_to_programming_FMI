#include <iostream>
using namespace std;

bool LinearSearch(const int* arr, int len, int searched)
{
	if (len == 0)
		return false;
	return arr[0] == searched || LinearSearch(arr + 1, len - 1, searched);
}

int main()
{
	int arr[] = { 17, 1, 2, 2, 6 };
	cout << LinearSearch(arr, 5, 17);
}