#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned int n;
	cin >> n;


	for (unsigned int i = n; i > 1; i--)
	{
		//check if i is prime

		bool isPrime = true;
		double sqrtFromNumberToCheck = sqrt(i);
		for (int divCandidate = 2; divCandidate <= sqrtFromNumberToCheck; divCandidate++)
		{
			if (i % divCandidate == 0)
			{
				isPrime = false;
				break; //спира вътрешния цикъл
			}
		}

		if (!isPrime)
			continue;

		int count = 0;
		while (n % i == 0)
		{
			count++;
			n /= i;
		}

		if (count != 0)
			cout << i << "^" << count << " ";
		
		if(n == 1)
			break;

	}
	return 0;
}
