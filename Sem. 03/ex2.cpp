#include <iostream>

using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;

	if (n < k) //swap
	{
		int temp = n;
		n = k;
		k = temp;
	}
	
	while (k != 0)
	{
		int mod = n % k;
		n = k;
		k = mod;
	}

	cout << n << endl;
}
