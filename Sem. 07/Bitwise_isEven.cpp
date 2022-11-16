#include <iostream>
using namespace std;

bool isEven(int n)
{
	return !(n & 1);
}
int main()
{
	cout << isEven(30) << endl;
}
