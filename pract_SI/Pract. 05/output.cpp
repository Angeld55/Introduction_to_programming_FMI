#include <iostream>

void output(const int *arr,const int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << std::endl;
}
