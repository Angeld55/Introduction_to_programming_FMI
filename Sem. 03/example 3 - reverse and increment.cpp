#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int reversed = 0;

	while (n != 0)
	{
		int lastDigit = n % 10;
		(reversed *= 10) += lastDigit;

		n /= 10;
	}

	reversed++;
	cout << reversed << endl;
}