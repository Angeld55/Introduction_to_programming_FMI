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

	int devider = 1;
	int result; 
	while (devider <= k)
	{
		if (n % devider == 0 && k % devider == 0)
		{
			result = devider;
		}
		devider++;
	}

	cout << result;
	

}