#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	if ((a <= b && b >= c && c <= d && d >= e)
		|| (a >= b && b <= c && c >= d && d <= e))
	{
		cout << "Yes";
	}
	else
		cout << "No";
}
