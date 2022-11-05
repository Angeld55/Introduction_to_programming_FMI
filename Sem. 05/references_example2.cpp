#include <iostream>
using namespace std;

int& prefixPlusPlus(int& a)
{
	a = a + 1;
	return a;
}

int suffixPlusPlus(int& a)
{
	a = a + 1;
	return a - 1;
}

int main()
{
	int a = 1;

	prefixPlusPlus(a);
	suffixPlusPlus(a);
}
