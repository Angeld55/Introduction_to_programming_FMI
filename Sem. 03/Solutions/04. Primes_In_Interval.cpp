#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a < 2) a = 2;

	for (int i = a; i <= b; i++)
	{
		bool isPrime = true;
		int rootOfI = sqrt(i);
		for (int j = 2; j <= rootOfI; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			cout << i << " ";
	}
	cout << endl;
}
