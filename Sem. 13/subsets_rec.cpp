#include <iostream>


void printSet(const int* set, const bool* bitString, size_t size)
{
	std::cout << "{ ";

	for (int i = 0; i < size; i++)
	{
		if (bitString[i])
			std::cout << set[i] << " " ;
	}
	std::cout << "}" << std::endl;
}
void genAllBitstringsAndPrintSubset(bool* bitString, size_t size, size_t currentPos, const int* set)
{
	if (currentPos == size)
	{
		printSet(set, bitString, size);
		return;
	}
	bitString[currentPos] = 0;
	genAllBitstringsAndPrintSubset(bitString, size, currentPos + 1, set);

	bitString[currentPos] = 1;
	genAllBitstringsAndPrintSubset(bitString, size, currentPos + 1, set);
}
void printSubsets(const int* set, size_t size)
{
	bool* bitString = new bool[size];
	genAllBitstringsAndPrintSubset(bitString, size, 0, set);
	delete[] bitString;
}


int main()
{
	const size_t SIZE = 4;
	int arr[SIZE] = { 1, 2, 3, 4 };

	printSubsets(arr, 4);
}
