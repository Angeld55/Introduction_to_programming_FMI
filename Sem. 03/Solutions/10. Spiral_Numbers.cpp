#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int row = 0; row < n; row++)
	{
		int previous = row + 1;

		for (int col = 0; col < n; col++)
		{
			if (col == 0)
				cout << previous << " ";
			else if (col % 2 == 0)
				cout << (previous += row * 2 + 1) << " ";
			else
				cout << (previous += (n - row - 1) * 2 + 1) << " ";
		}

		cout << endl;
	}
}
