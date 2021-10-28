#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;

	for (int i = 1; i <= count; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 1 + ((i - 1) * count); j <= i * count; j++)
			{
				cout << j << " ";
			}
		}
		else
		{
			for (int j = i * count; j > (i - 1) * count; j--)
			{
				cout << j << " ";
			}
		}
		cout << endl;
	}
}
