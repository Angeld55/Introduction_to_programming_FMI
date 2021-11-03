#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = ((n < k) ? n : k); i > 0; i--)
	{
		if (n % i == 0 && k % i == 0)
			cout << i << " ";
	}
	cout << endl;
}
