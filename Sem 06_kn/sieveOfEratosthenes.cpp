#include <iostream>
using namespace std;


const int MAX_SIZE = 10000;

void init(bool arr[], size_t n, bool value)
{
	for (size_t i = 0; i < n; i++)
		arr[i] = value;
}

void destroyNumbers(bool arr[], size_t n, int i)
{
	//задраскваме напред
	int toDestroy = i + i;
	while (toDestroy <= n)
	{
		arr[toDestroy] = false;
		toDestroy += i;
	}
}
void sieveEratosthenes(bool sieve[], size_t n)
{
	for (size_t i = 2; i <= n; i++)
	{
		if (sieve[i]) //ако не е задраскано
			destroyNumbers(sieve, n, i);
	}
}

void printSolution(bool sieve[], int n)
{
	for (size_t i = 2; i <= n; i++)
	{
		if (sieve[i])
			cout << i << " ";
	}
}
int main()
{
	int n;
	cin >> n;
	bool sieve[MAX_SIZE]; /// ползваме част от масива.
	init(sieve, n, true);

	sieveEratosthenes(sieve, n);
	printSolution(sieve, n);
}
