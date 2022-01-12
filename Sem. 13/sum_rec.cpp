#include <iostream>


int sum(const int* arr, size_t size)
{
	if (size == 0)
		return 0;
	return *arr + sum(arr + 1, size - 1);
}

int sum_tail_rec(const int* arr, size_t size, int sum)
{
	if (size == 0)
		return sum;

	return sum_tail_rec(arr + 1, size - 1, sum + *arr);
}

int sum_tail_wrapper(const int* arr, size_t size)
{
	return sum_tail_rec(arr, size, 0);
}


int main()
{
	const size_t SIZE = 4;
	int arr[SIZE] = { 1, 2, 3, 4 };

	std::cout << sum_tail_wrapper(arr, SIZE);
}
