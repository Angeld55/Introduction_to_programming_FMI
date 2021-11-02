#include <iostream>
using namespace std;

int mod(int n)
{
	return n < 0 ? -n : n;
}
int main()
{
	cout << mod(-4) << endl;
}
