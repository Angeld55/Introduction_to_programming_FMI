#include <iostream>

using namespace std;

int main()
{
	unsigned long long number;
	cin >> number;

	for (unsigned long long x = 1, y = number; x < number; x++)
	{
		cout << "x = " << x << " "
			 << "y = " << --y << endl;
	}

	return 0;
}
