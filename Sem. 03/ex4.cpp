#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int n;
	cin >> n;

	for (int i = n; i > 1; i--)
	{
    		//check if i is prime
		bool isPrime = true;
		double temp = sqrt(i);
		for (int k = 2; k <= temp; k++)
		{
			if (i % k == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (!isPrime)
			continue; //we don't need this number

		//check how many time i devides n
		int count = 0;
		while (n % i == 0)
		{
			count++;
			n /= i;
		}

		if (count >= 1)
		{	
			cout << i;
			if(count >= 2)
				cout << "^" << count << " ";
		}
	}


}
