#include <iostream>
using namespace std;

int foundFirstOccurenceIndex(const int arr[], size_t size, unsigned beginIndex, int element)
{
	for (unsigned i = beginIndex; i < size; i++)
		if (arr[i] == element)
			return i;
	return -1;
}
bool canFirstBeFromSecondByDeletion(const int arr1[], size_t size1, const int arr2[], size_t size2)
{
	if (size1 <= size2)
		return false;

	unsigned arr1Iter = 0;
	for (unsigned arr2iter = 0; arr2iter < size2; arr2iter++)
	{
		int firstIndexInFirstArr = foundFirstOccurenceIndex(arr1, size1, arr1Iter, arr2[arr2iter]);
		if (firstIndexInFirstArr == -1)
			return false;
		arr1Iter = firstIndexInFirstArr + 1; //start from the next
	}
	return true;
}
int main()
{
	{
		constexpr int size1 = 5, size2 = 3;
		int arr1[size1] = { 1, 2, 4, 5, 2 };
		int arr2[size2] = { 1, 5, 2 };
		cout << canFirstBeFromSecondByDeletion(arr1, size1, arr2, size2) << endl;
	}
	{
		constexpr int size1 = 5, size2 = 3;
		int arr1[size1] = { 1, 2, 4, 2, 3 };
		int arr2[size2] = { 2, 2, 4 };
		cout << canFirstBeFromSecondByDeletion(arr1, size1, arr2, size2) << endl;
	}
}   
