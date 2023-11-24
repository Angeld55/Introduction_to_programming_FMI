#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int gcd(int a, int b, int c, int d)
{
	return gcd(gcd(a, b), gcd(c, d));
}

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << gcd(a, b, c, d);
}  
