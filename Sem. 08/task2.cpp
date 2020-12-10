#include <iostream>
using namespace std;

const int SIZE = 30;
int CountOccurrences(int arr[SIZE], int n, int el)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == el)
			count++;
	}
	return count;
}

int GetLonlyNumber(int arr[SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (CountOccurrences(arr, n, arr[i]) == 1)
			return arr[i];
	}
	return -1;

}

int GetLonlyNumberBetter(int arr[SIZE], int n)
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
	cout << GetLonlyNumberBetter(arr, n);
}
