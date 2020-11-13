#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> k >> n;

	int sum = 0;
	for (int i = k; i <= n; i++)
		sum += i;

	cout << sum << endl;

	//or use the formula

	cout << (n*(n + 1)) / 2 - ((k - 1)*k) / 2 << endl;
}