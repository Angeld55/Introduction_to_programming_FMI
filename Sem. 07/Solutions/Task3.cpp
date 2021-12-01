#include <iostream>

using namespace std;

unsigned getLength(unsigned number)
{
	unsigned counter = 0;
	while (number != 0)
	{
		number /= 2;
		counter++;
	}
	return counter;
}

unsigned getLength(const unsigned* arr)
{
	unsigned counter = 0;
	while (arr[counter] == 0 || arr[counter] == 1)
	{
		counter++;
	}
	return counter;
}

void convertToBinary(unsigned* arr, unsigned number)
{
	unsigned size = getLength(number);
	for (int i = size - 1; i >= 0; i--)
	{
		arr[i] = number % 2;
		number /= 2;
	}
}

unsigned countOnesInArray(const unsigned* arr)
{
	unsigned size = getLength(arr);
	int counter = 0;
	for (unsigned i = 0; i < size; i++)
	{
		if (arr[i] == 1)
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	unsigned n;
	cout << "n = ";
	cin >> n;
	unsigned binaryN[32];
	convertToBinary(binaryN, n);
	cout << countOnesInArray(binaryN);
}

