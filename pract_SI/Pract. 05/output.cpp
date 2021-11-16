#include <iostream>

void output(int *arr,const int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << std::endl;
}