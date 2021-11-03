#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int row = 0; row < n; row++)
	{
		bool onFirstOrLastLine = (row == 0 || row == n - 1);

		cout << ((onFirstOrLastLine) ? "+ " : "| ");

		for (int col = 0; col < n - 2; col++)
			cout << "- ";

		cout << ((onFirstOrLastLine) ? "+" : "|") << endl;
	}
}
