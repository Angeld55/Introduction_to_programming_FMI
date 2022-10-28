#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	
	for (int i = 6; i < n; i += 6)
	{
		int firstToCheck = i - 1;
		int secondToCheck = i + 1;

		//prime check
		bool isFirstPrime = true;
		double temp = sqrt(firstToCheck);
		for (int j = 2; j <= temp; j++)
		{
			if (firstToCheck % j == 0)
				isFirstPrime = false;
		}

		if (!isFirstPrime)
			continue;

		//prime check
		bool isSecondPrime = true;
		double temp2 = sqrt(secondToCheck);
		for (int j = 2; j <= temp2; j++)
		{
			if (secondToCheck % j == 0)
				isSecondPrime = false;
		}

		if (isSecondPrime)
			cout << firstToCheck << " " << secondToCheck << endl;
	}
}
