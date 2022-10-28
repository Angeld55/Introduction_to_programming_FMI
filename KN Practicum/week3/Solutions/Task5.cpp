#include <iostream>
using namespace std;

int main()
{
	for (unsigned i = 100; i <= 999; ++i)
	{
		unsigned copyOfI = i;
		unsigned sumOfDigits = 0;

		for (unsigned j = 0; j < 3; ++j)
		{
			sumOfDigits += copyOfI % 10;
			copyOfI /= 10;
		}

		if (sumOfDigits < 10 || sumOfDigits>99)
			continue;

		bool isPrime = true;
		double sqrtFromNumberToCheck = sqrt(sumOfDigits);
		for (int k = 2; k <= sqrtFromNumberToCheck; k++)
		{
			if (sumOfDigits % k == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			cout << i << "   ";
	}
}