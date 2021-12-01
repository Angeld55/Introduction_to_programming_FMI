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
		number += (arr[i] * (1 << (length-1-i)));
	}
	return number;
}

unsigned decodeArray(const unsigned* n, unsigned k)
{
	unsigned nSize = getLength(n);
	unsigned minIndex = ((nSize - 1) - k);
	unsigned counter = k - 1;
	unsigned tempArray[32];
	for (unsigned i = nSize-1; i > minIndex; i--)
	{
		tempArray[counter--] = n[i];
	}
	return (convertToDecimal(tempArray, k));
}

int main()
{
	unsigned n;
	cout << "n = ";
	cin >> n;
	unsigned k;
	cout << "k = ";
	cin >> k;
	unsigned binaryN[32];
	convertToBinary(binaryN, n);
	cout << decodeArray(binaryN, k);
}

