#include <iostream>
using namespace std;

int gcd(int x, int y)
{
	while (x != y)
		if (x > y)
			x -= y;
		else
			y -= x;
	return x;
}

int main()
{
	int a, b, c, d;

	cout << "a, b, c, d= ";
	cin >> a >> b >> c >> d;
	if (!cin || a < 1 || b < 1 || c < 1 || d < 1)
	{
		cout << "Error! \n";
		return 1;
	}

	int r = gcd(a, b);
	cout << "gcd{" << a << ", " << b << "}= " << r << "\n";

	int s = gcd(c, d);
	cout << "gcd{" << c << ", " << d << "}= " << s << "\n";

	cout << "gcd{" << a << ", " << b << ", " << c << ", " << d << "}= " << gcd(r, s) << "\n";

	return 0;
}
