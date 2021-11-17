#include <iostream>
using namespace std;

bool isEven(unsigned n) // какво ще трябва се промени ако искаме да е signed?
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
