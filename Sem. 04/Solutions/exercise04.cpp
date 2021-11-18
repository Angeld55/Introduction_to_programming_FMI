#include <iostream>
#include <cmath>

using namespace std;

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

int countOfUniqueSimpleDivisors(int n)
{
	int divisorsCount = 0;
	for (int i = 2; i <= n && n != 1; i++)
	{
		if (n % i == 0 && isPrime(i))
		{
			n /= i;
			divisorsCount++;

			if (n == 1)
				return divisorsCount;
		}
	}
	return -1; // Some divisors repeat themselves, so we can't have a proper count
}

void kCountOfSimpleDivisorsBetween(int a, int b, int k)
{
	for (int i = a; i <= b; i++)
	{
		if (countOfUniqueSimpleDivisors(i) == k)
			cout << i << " ";
	}
	cout << endl;
}

int main()
{
	int a, b, k;
	cin >> a >> b >> k;

	kCountOfSimpleDivisorsBetween(a, b, k);
}
