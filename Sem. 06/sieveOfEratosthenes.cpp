#include <iostream>
using namespace std;

void init(bool arr[], unsigned size, bool value)
{
	for (unsigned i = 0; i < size; i++)
		arr[i] = value;
}

void sieveEratosthenes(bool arr[], unsigned size)
{
	arr[0] = arr[1] = false;

	for (unsigned i = 2; i < size; i++)
	{
		if (!arr[i]) //ако числото е задраскано
			continue;
		
		for (unsigned iter = i + i; iter < size; iter += i)
			arr[iter] = false; //задраскваме
	}
}

void printSieve(const bool arr[], unsigned size)
{
	for (unsigned i = 0; i < size; i++)
	{
		if (arr[i])
			cout << i << " ";
	}
}


int main()
{
	const unsigned MAX_SIZE = 1000;
	bool arr[MAX_SIZE];

	int n;
	cin >> n;

	init(arr, n, true);
	sieveEratosthenes(arr, n);
	printSieve(arr, n);
}

