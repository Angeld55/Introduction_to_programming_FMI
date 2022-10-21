#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	int n;
	cin >> n;

	int mostCommonDigit = -1;
	int occurences = 0;
	for (int i = 0; i <= 9; i++)
	{
		int copyOfN = n;
		int count = 0;
		while (copyOfN != 0)
		{
			int lastDigit = copyOfN % 10;
			if (lastDigit == i)
				count++;
			copyOfN /= 10; //removes the last digit;
		}

		if (count > occurences)
		{
			mostCommonDigit = i;
			occurences = count;
		}
	}

	cout << mostCommonDigit;
}
