#include <iostream>
#include <cmath>

using namespace std;

bool isPowerOfSomething(int n)
{
	double rootOfN = sqrt(n);
	for (int i = 2; i <= rootOfN; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
				n /= i;

			return n == 1;
		}
	}
	return false; // Obligatory default case
}

void powerNumbersBetween(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		if (isPowerOfSomething(i))
			cout << i << " ";
	}
	cout << endl;
}

int main()
{
	int a, b;
	cin >> a >> b;

	powerNumbersBetween(a, b);
}
