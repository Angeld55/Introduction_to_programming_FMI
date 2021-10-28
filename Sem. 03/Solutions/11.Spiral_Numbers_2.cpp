#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i = 0, previous = 0; i < n; i++)
	{
		int modifier = 1;
		if (i % 2 == 1)
		{
			previous += n + 1;
			modifier = -1;
		}
			
		for(int j = 0; j < n; j++)
			cout << (previous += modifier) << " ";

		cout << endl;
		if (i % 2 == 1)
			previous += n - 1;
	}
}
