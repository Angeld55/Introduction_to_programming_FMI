#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int rowWidth = 3 * n - 2;

	for (int row = 0; row < n; row++)
	{
		if (row == 0 || row == n - 1)
		{
			for (int col = 0; col < rowWidth; col++)
				cout << ((col >= n && col <= rowWidth - n - 1) ? " " : "."); // Print spaces in the middle
		}
		else
		{
			for (int col = 0; col < rowWidth; col++)
			{
				bool inLeftHole = (col >= 1 && col <= n - 2);
				bool inRightHole = (col >= rowWidth - n + 1 && col <= rowWidth - 2);
				cout << ((inLeftHole || inRightHole) ? " " : ".");
			}
		}
		cout << endl;
	}
}
