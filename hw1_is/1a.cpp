#include <iostream>
using namespace std;

bool oneDiff(unsigned n, unsigned k)
{
	if (k == 0 && n >= 100) //corner case for k == 0
		return false;
	bool foundDiff = false;
	while (n != 0)
	{
		if (n % 10 != k % 10)
		{
			if (foundDiff)
				return false;
			foundDiff = true;
			n /= 10;
		}
		else
		{
			n /= 10;
			k /= 10;
		}
	}
	return foundDiff && k == 0;
}
int main()
{
	unsigned n, k;
	cin >> n >> k;
	cout << oneDiff(n, k) ? "Yes" : "No";
}   
