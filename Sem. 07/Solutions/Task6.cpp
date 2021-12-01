#include <iostream>

using namespace std;

unsigned getLength(unsigned number)
{
	unsigned counter = 0;
	while(number != 0)
	{
		number /= 2;
		counter++;
	}
	return counter;
}

unsigned getLength(const unsigned* arr)
{
	unsigned counter = 0;
	while (arr[counter] == 0 || arr[counter]==1)
	{
		counter++;
	}
	return counter;
}

void convertToBinary(unsigned* arr, unsigned number)
{
	unsigned size = getLength(number);
	for (unsigned i = size-1; i >= 0; i--)
	{
		arr[i] = number % 2;
		number /= 2;
	}
}

bool compareNumbers(const unsigned* n, const unsigned* k)
{
	unsigned nSize = getLength(n);
	unsigned kSize = getLength(k);
	for (unsigned i = 1; i <= kSize; i++)
	{
		if (n[nSize - i] != k[kSize - i])
		{
			return false;
		}
	}
	return true;
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

	unsigned binaryK[32];
	convertToBinary(binaryK, k);

	cout << boolalpha << compareNumbers(binaryN, binaryK);
}

