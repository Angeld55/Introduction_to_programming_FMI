#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int originalN = n;
	int originalK = k;

	bool changed = false;

	while (k > 0)
	{
		if (n == 0 && k > 0)
		{
			cout << "k is NOT infix of n";
			return 0;
		}

		if (n % 10 == k % 10)
		{
			n /= 10;
			k /= 10;
			changed = true;
			continue;
		}

		if (changed && (n % 10 != k % 10))
		{
			k = originalK;
			changed = false;
			continue;
		}

		n /= 10;
	}

	cout << "k is infix of n";
}