#include <iostream>
using namespace std;

bool isEven(int n)
{
	return !(n & 1);
}

unsigned powerOfTwo(unsigned n)
{
	return (1 << n);
}
int main()
{
	cout << powerOfTwo(8); // 2^8
}
