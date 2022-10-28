#include <iostream>

using namespace std;

int main()
{
	unsigned n = 0;
	cin >> n;

	unsigned first = 0, second = 1;
	for (unsigned i = 0; i < n; ++i)
	{
		unsigned buff = second;
		second += first;
		first = buff;
	}

	cout << first;
}