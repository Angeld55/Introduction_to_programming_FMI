#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned long long number;
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << j;
		cout << endl;
	}

	return 0;
}
