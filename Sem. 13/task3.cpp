#include <iostream>
using namespace std;

unsigned power(unsigned n, unsigned k)
{
	if (k == 0)
		return 1;
	return n * power(n, k - 1);
}

int main()
{
	cout << power(2,7);
}