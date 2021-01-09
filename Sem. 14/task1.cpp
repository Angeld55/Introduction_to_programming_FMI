#include <iostream>
using namespace std;

unsigned binom(unsigned n, unsigned k)
{
	if (n < k)
		return 0;
	if (n == k || k == 0)
		return 1;
	return binom(n - 1, k) + binom(n - 1, k - 1);
}

int main()
{
	
}