#include <iostream>
using namespace std;

const int SIZE = 30;
int countOccurrences(int arr[SIZE], int n, int el)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == el)
			count++;
	}
	return count;
}

int getLonlyNumber(int arr[SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (countOccurrences(arr, n, arr[i]) == 1)
			return arr[i];
	}
	return -1;

}

int getLonlyNumberBetter(int arr[SIZE], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
		res ^= arr[i];
	return res;
}

int main()
{
	int arr[SIZE];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << getLonlyNumberBetter(arr, n);
}
