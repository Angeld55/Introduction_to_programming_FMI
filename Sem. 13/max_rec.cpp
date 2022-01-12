#include <iostream>


//рекурсивна функция, която намира най-големия елемент в масив

int max(int a, int b)
{
	return a > b ? a : b;
}

int getMaxRec(const int* arr, size_t size)
{
	if (size == 0)
		return INT_MIN;

	return max(*arr, getMaxRec(arr + 1, size - 1));
}

int get_max_rec_tail(const int* arr, size_t size, int currentMax)
{
	if (size == 0)
		return currentMax;

	return get_max_rec_tail(arr + 1, size - 1, max(currentMax, *arr));
}

int get_max_rec_wrapper(const int* arr, size_t size)
{
	return get_max_rec_tail(arr, size, INT_MIN);
}


int main()
{
	const size_t SIZE = 4;
	int arr[SIZE] = { 1, 2, 3, 4 };

	std::cout << get_max_rec_wrapper(arr, SIZE);
}
