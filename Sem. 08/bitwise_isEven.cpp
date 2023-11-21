#include <iostream>
using namespace std;

bool isEven(int n)
{
	int mask = 1;
	return !(n & mask);
}
int main()
{
	cout << isEven(30) << endl;
}
