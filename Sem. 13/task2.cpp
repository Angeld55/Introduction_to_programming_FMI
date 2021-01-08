#include <iostream>
using namespace std;

unsigned fibb(unsigned n)
{
	if (n == 0 || n == 1)
		return 1;
	return fibb(n - 1) + fibb(n - 2);
}

int main()
{
	cout << fibb(5);
}