#include <iostream>
using namespace std;


void assignValueToAllCells(bool arr[], int len, bool value)
{
	for (int i = 0; i < len; i++)
		arr[i] = value;
}
void markAsNotPrime(bool sieve[], int len, int current)
{
	int toMark = current + current;

	while (toMark < len)
	{
		sieve[toMark] = true;
		toMark += current;
	}
}
void sieveErathostenes(bool sieve[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (!sieve[i])
		{
			cout << i << endl;
			markAsNotPrime(sieve, len, i);
		}

	}
}


int main()
{
	int n;
	cin >> n;
	bool sieve[1024];
	assignValueToAllCells(sieve, n, false);


}  
