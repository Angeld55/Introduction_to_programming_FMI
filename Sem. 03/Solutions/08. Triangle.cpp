#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int row = 1; row <= n; row++)
	{
		for (int col = 0; col < row; col++)
			cout << "$ ";

		cout << endl;
	}
}
