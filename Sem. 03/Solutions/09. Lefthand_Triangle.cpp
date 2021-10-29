#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = -n + 1; i < n; i++)
	{
		int absI = ((i > 0) ? i : -i), number = 0;

		for (int j = n - absI; j > 0; j--)
			(number *= 10) += j;

		for (int j = absI; j > 0; j--)
			cout << " ";

		cout << number << endl;
	}
}
