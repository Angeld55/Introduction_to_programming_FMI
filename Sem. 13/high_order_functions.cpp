#include <iostream>

int get_something_from_array(const int* arr, size_t size, int result, int (*func)(int,int) )
{
	if (size == 0)
		return result;
	return get_something_from_array(arr + 1, size - 1, func(result, *arr), func);
}

int max(int a, int b)
{
	return a > b ? a : b;
}
int getMaxFromArray(const int* arr, size_t size)
{
	return get_something_from_array(arr, size, INT_MIN, max);
}
int sum(int x, int y)
{
	return x + y;
}
int getSumOnArray(const int* arr, size_t size)
{
	return get_something_from_array(arr, size, 0, sum);
}



int main()
{
	const size_t SIZE = 4;
	int arr[SIZE] = { 1, 2, 3, 4 };

	std::cout << getSumOnArray(arr, SIZE) << std::endl << getMaxFromArray(arr, SIZE) << std::endl;
}
