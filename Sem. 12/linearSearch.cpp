#include <iostream>


bool linearSearch(const int* arr, unsigned size, int el)
{
	if (size == 0)
		return false;
	return *arr == el || linearSearch(arr + 1, size - 1, el);
}

int main()
{

}
