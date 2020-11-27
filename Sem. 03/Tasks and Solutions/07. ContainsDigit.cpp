#include <iostream>
using namespace std;

int main()
{
	int n, searchedDigit;
	cin >> n >> searchedDigit;

	bool found = false;
	while (n != 0)
	{
		int lastDigit = n % 10;
		if (searchedDigit == lastDigit)
		{
			found = true;
			break;
		}
		n /= 10;
	}
}