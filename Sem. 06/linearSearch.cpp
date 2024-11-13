#include <iostream>
using namespace std;

const int GRADES_COUNT = 5;

int linearSearch(const int arr[], int len, int element)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == element)
			return i;
	}
	return -1;
}

int main()
{
	constexpr int ARR_SIZE = 5;
	int arr[ARR_SIZE] = { 5, 4, 3, 2, 1 };

	bool containsTwo = linearSearch(arr, ARR_SIZE, 2) >= 0;

	cout << containsTwo;
	


}
