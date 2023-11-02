#include <iostream>
using namespace std;

void getMinAndMaxDigits(unsigned n, unsigned& maxDigit, unsigned& minDigit)
{
	maxDigit = 0;
	minDigit = 9;

	while (n != 0)
	{
		int lastDigit = n % 10;
		if (lastDigit > maxDigit)
			maxDigit = lastDigit;
		if (lastDigit < minDigit)
			minDigit = lastDigit;

		n /= 10;
	}
}



int main()
{
	unsigned max;
	unsigned min;
	getMinAndMaxDigits(1234, max, min);

	cout << max << " " << min;
}
