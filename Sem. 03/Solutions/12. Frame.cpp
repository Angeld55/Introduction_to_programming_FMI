#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		bool onFirstOrLastLine = (i == 0 || i == n-1);

		cout << ((onFirstOrLastLine) ? "+" : "|");

		for (int j = 0; j < n - 2; j++)
			cout << "-";

		cout << ((onFirstOrLastLine) ? "+" : "|") << endl;
	}
}
