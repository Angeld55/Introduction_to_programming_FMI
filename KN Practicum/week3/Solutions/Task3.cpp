#include <iostream>
using namespace std;

int main()
{
	unsigned n = 0;
	cin >> n;

	for (unsigned i = 1; i <= n; ++i)
	{
		if (n % i == 0)
			cout << i << "   ";
	}
}