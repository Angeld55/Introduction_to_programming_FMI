#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int spacesCount = 2 * (n - 1) + n + 2 * (n - 1);
	int toGuess;
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << j << " ";

		for (int j = 0; j < spacesCount; j++)
			cout << " ";

		for (int j = i; j >= 1; j--)
			cout << " " << j;

		spacesCount -= 4;

		cout << endl;

	}

	//mid
	for (int i = 1; i <= n; i++)
		cout << i << " ";
	for (int i = 0; i < n; i++)
		cout << '-';
	for (int i = n; i >= 1; i--)
		cout << " " << i;
	cout << endl;


	//down
	spacesCount += 4;
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 1; j <= i; j++)
			cout << j << " ";

		for (int j = 0; j < spacesCount; j++)
			cout << " ";

		for (int j = i; j >= 1; j--)
			cout << " " << j;

		spacesCount += 4;

		cout << endl;

	}


} 
