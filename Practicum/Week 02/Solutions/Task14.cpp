#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	cin >> a >> b >> c >> d >> e;

	if (((a <= b && b >= c) || (a >= b && b <= c)) &&
		((b <= c && c >= d) || (b >= c && c <= d)) &&
		((c <= d && d >= e) || (c >= d && d <= e))
		)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}