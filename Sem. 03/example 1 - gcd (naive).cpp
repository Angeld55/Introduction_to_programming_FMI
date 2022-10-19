#include <iostream>

using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;

	int min = n < k ? n : k;
	int gcd = 1;
	while (min >= 1)
	{
		if (n % min == 0 && k % min == 0)
		{
			gcd = min;
		}
		min--;
	}

	cout << gcd << endl;
}