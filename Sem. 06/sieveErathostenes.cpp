#include <iostream>
using namespace std;

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
	for (int i = 2; i <= len; i++)
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
	constexpr int MAX_SIZE = 1024;
	int n;
	cin >> n;
	bool sieve[MAX_SIZE]{0};
	sieveErathostenes(sieve, n);
}  
