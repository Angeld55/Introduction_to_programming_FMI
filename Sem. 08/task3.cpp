#include <iostream>
using namespace std;

const int SIZE = 30;
bool isSubarrayPalindrome(int arr[SIZE], int startIndex, int endIndex)
{
	while (startIndex < endIndex)
	{
		if (arr[startIndex] != arr[endIndex])
			return false;
		startIndex++;
		endIndex--;
	}
	return true;
}
void print(int arr[SIZE])
{
	for (int i = 0; i < SIZE; i++)
		cout << arr[i];
	cout << endl;
}

int LongestPalindromicSubarray(int arr[SIZE], int n)
{
	int currentSize = n;

	int startIndex = 0;
	int endIndex = startIndex + currentSize-1;
	while (true)
	{
		if (isSubarrayPalindrome(arr, startIndex, endIndex))
			return endIndex - startIndex + 1;
		startIndex++;
		endIndex++;
		if (endIndex == n)//last iteration
		{
			currentSize--;
			startIndex = 0;
			endIndex = startIndex + currentSize - 1;
		}
	}
}
int main() 
{	

	int arr[SIZE] = {1,4,3,2,3};
	cout << LongestPalindromicSubarray(arr, 5);

}
