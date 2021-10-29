#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int row = -n + 1; row < n; row++)
	{
		int absRow = ((row > 0) ? row : -row);

		for (int col = absRow; col > 0; col--)
			cout << " ";

		int numberOnLine = 0;

		for (int col = n - absRow; col > 0; col--)
			(numberOnLine *= 10) += col;

		cout << numberOnLine << endl;
	}
}
