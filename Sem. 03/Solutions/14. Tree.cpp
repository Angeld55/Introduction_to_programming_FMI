#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	// Tree crown
	for (int row = 1; row <= n; row++)
	{
		for (int col = n - row; col > 0; col--)
			cout << " ";

		for (int col = -row + 1; col < row; col++)
			cout << row - ((col < 0) ? -col : col); // row - abs(col)

		cout << endl;
	}

	// Tree trunk
	for (int row = n - 1; row > 0; row--)
	{
		for (int col = n - 1; col > 0; col--)
			cout << " ";

		cout << row << endl;
	}
}
