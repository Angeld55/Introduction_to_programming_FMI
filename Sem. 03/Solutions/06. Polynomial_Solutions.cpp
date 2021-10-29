#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	double fx;
	for (int x = -100; x <= 100; x++)
	{
		fx = a * x*x*x*x + b * x*x*x + c * x*x + d * x + e;
		if (fx >= 0)
			cout << x << " ";
	}
	cout << endl;
}
