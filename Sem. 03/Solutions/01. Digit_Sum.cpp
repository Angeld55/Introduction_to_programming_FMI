#include <iostream>

using namespace std;

int main()
{
	int n = 1, sum = 0;
	while (n != 0)
	{
		cin >> n;
		sum += n;
	}
	cout << sum << endl;
}
