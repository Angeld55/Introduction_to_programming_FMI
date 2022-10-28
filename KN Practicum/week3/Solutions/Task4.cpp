#include <iostream>
using namespace std;

int main()
{
	unsigned n = 0, result = 1;
	cin >> n;

	for (unsigned i = 1; i <= n; ++i)
		result *= i;

	cout << result;
}