#include <iostream>
       
bool getIsOne(size_t number, size_t index)
{
	return ((1 << index) & number) != 0;
}

void printSubsetsIter(const int* set, size_t size, size_t bitString)
{
	std::cout << "{ ";

	for (unsigned i = 0; i < size; i++)
	{
		if (getIsOne(bitString, size - 1 - i))
			std::cout << set[i] << " ";
	}

	std::cout << " }" << std::endl;

}

void genAllSubsets(const int* set, size_t size)
{
	size_t count = 1 << size; /// 2^size

	for (size_t i = 0; i < count; i++)
	{
		printSubsetsIter(set, size, i);
	}
}


int main()
{
	const size_t SIZE = 4;
	int arr[SIZE] = { 1, 2, 3, 4 };

	genAllSubsets(arr, 4);
}
