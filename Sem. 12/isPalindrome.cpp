#include <iostream>

bool isPalindrome(const int* arr, unsigned size)
{
	if (size <= 1)
		return true;

	return arr[0] == arr[size - 1] && isPalindrome(arr + 1, size - 2);
}

int main()
{
   
}
