#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int row = 0, previous = 0; row < n; row++)
	{
		int modifier = 1;

		// When going from right to left, previous = number at the end of the line + 1, and make further number operations decrement
		if (row % 2 == 1)
		{
			previous += n + 1;
			modifier = -1;
		}

		for (int col = 0; col < n; col++)
			cout << (previous += modifier) << " ";

		cout << endl;

		// Account for decrementing when gong from right to left
		if (row % 2 == 1)
			previous += n - 1;
	}
}
