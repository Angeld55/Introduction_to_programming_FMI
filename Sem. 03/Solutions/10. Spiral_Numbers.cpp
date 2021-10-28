#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int previous = i + 1;
		for(int j = 0; j < n; j++)
		{
			if (j == 0)
				cout << previous << " ";
			else if (j % 2 == 1)
				cout << (previous += (n-i-1) * 2 + 1) << " ";
			else
				cout << (previous += i*2 + 1) << " ";
		}
		cout << endl;
	}
}
