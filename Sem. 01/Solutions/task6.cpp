#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int expr1 = a + b;
	int expr2 = a - b;

	int res = expr1 * expr1 * expr1 * expr1 - expr2 * expr2;

	cout << res;

}
