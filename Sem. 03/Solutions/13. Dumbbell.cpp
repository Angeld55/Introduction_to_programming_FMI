#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int rowWidth = 5 * n / 2;
	int evenness = 1 - n % 2;
	for(int i = 0; i < n; i++)
	{
		if (i == 0 || i == n - 1)
		{
			for(int j = 0; j < rowWidth; j++)
				cout << ((j == n || j == n + evenness) ? " " : ".");
		}
		else
		{
			for(int j = 0; j < rowWidth; j++)
				cout << ((j == 1 || j == 1 + evenness || j == rowWidth - 2 || j == rowWidth - 2 - evenness) ? " " : ".");
		}
		cout << endl;
	}
}
