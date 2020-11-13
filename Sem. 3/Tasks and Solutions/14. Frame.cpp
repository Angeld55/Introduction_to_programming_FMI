#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	//Горна рамка
	cout << '+';
	for (int i = 0; i < n - 2; i++)
		cout << '-';
	cout << '+' << endl;


	//Среда
	for (int j = 0; j < n - 2; j++)
	{
		cout << '|';
		for (int i = 0; i < n - 2; i++)
			cout << '-';
		cout << '|' << endl;
	}

	//Долна рамка
	cout << '+';
	for (int i = 0; i < n - 2; i++)
		cout << '-';
	cout << '+' << endl;
}