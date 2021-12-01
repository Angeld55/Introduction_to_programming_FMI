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
	for (unsigned i = size - 1; i >= 0; i--)
	{
		arr[i] = number % 2;
		number /= 2;
	}
}

unsigned convertToDecimal(const unsigned* arr, unsigned length)
{
	int number = 0;
	for (unsigned i = 0; i < length; i++)
	{
		number += (arr[i] * (1 << (length - 1 - i)));
	}
	return number;
}

unsigned switchArray(unsigned* arr)
{
	unsigned size = getLength(arr);
	for (unsigned i = size-1; i >=0; i--)
	{
		if (arr[i] == 1)
		{
			arr[i] = 0;
			break;
		}
	}
	return convertToDecimal(arr, size);
}

int main()
{
	unsigned n;
	cout << "n = ";
	cin >> n;
	unsigned binaryN[32];
	convertToBinary(binaryN, n);
	cout << switchArray(binaryN);
}

