#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	char middleSpacer = ' ';
	for (int i = -n + 1; i < n; i++)
	{
		int absI = (i < 0) ? -i : i, diff = n - absI;

		/* Numbers on the left */
		for (int j = 1; j <= diff; j++)
			cout << j << " ";

		/* Spaces/Line in the middle */
		if (i == 0) 
			middleSpacer = '-';

		for (int j = 5 * n - 4 * diff; j > 0; j--)
			cout << middleSpacer;

		if (i == 0)
			middleSpacer = ' ';

		/* Number on the right */
		for (int j = diff; j > 0; j--)
			cout << " " << j;

		cout << endl;
	}
}
