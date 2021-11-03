#include <iostream>
#include <cmath>

using namespace std;

// Taken from exercise04.cpp
bool isPrime(int n)
{
	double rootOfN = sqrt(n);
	for (int i = 2; i <= rootOfN; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

void printPrimeNumberPairs(int n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if (isPrime(i) && isPrime(n - i))
			cout << i << ", " << n - i << endl;
	}
}

int main()
{
	int n;
	cin >> n;

	printPrimeNumberPairs(n);
}
