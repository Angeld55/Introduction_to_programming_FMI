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
		int div = n % k;
		n = k;
		k = div;
	}
	cout << n << endl;
}