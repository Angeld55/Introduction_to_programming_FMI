#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 6; i <= n; i+=6)
	{
		int firstNumToCheck = i - 1, secondNumToCheck = i + 1;

		double temp = sqrt(firstNumToCheck);
		bool isFirstNumPrime = true;
		for (int j = 2; j <= temp; j++)
		{
			if (firstNumToCheck % j == 0)
			{
				isFirstNumPrime = false;
				break;
			}
		}

		if (!isFirstNumPrime)
			continue;
		double temp2 = sqrt(secondNumToCheck);
		bool isSecondNumPrime = true;
		for (int j = 2; j <= temp2; j++)
		{
			if (secondNumToCheck % j == 0)
			{
				isSecondNumPrime = false;
				break;
			}
		}
		if (isSecondNumPrime)
			cout << firstNumToCheck << " " << secondNumToCheck << endl;
	}

}