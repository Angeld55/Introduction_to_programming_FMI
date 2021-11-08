#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;


	//up
	for (int i = 0; i < n + 2; i++)
		cout << '#';
	cout << endl;


	for (int i = 0; i < n; i++)
	{
		cout << '#';

		for (int j = i + 1; j <= n + i; j++)
		{
			if (j > n)
				cout << j % n;
			else
				cout << j;

		}
		cout << '#' << endl;
	}
	//mid

	cout << "#";

	for (int i = 0; i < n; i++)
	{
		if (n % 2 == 1 && n / 2 == i)
			cout << "x";
		else if (n % 2 == 0 && ((n / 2 == i) || (n / 2 - 1 == i)))
			cout << "x";
		else
			cout << ' ';
	}

	cout << '#' << endl;


	//down
	for (int i = n - 1; i >= 0; i--)
	{
		cout << '#';

		for (int j = i + 1; j <= n + i; j++)
		{
			if (j > n)
				cout << j % n;
			else
				cout << j;

		}
		cout << '#' << endl;
	}

	for (int i = 0; i < n + 2; i++)
		cout << '#';
	cout << endl;
}

