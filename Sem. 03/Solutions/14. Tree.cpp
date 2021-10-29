#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i = 1; i <= n; i++)
	{
		for(int j = n - i; j > 0; j--)
			cout << " ";
		for(int j = -i + 1; j < i; j++)
			cout << i - ((j < 0) ? -j : j);

		cout << endl;
	}
	for(int i = n - 1; i > 0; i--)
	{
		for (int j = n - 1; j > 0; j--)
			cout << " ";
		cout << i << endl;
	}
}
