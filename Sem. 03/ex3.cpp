#include <iostream>
using namespace std;


int main()
{
	unsigned int n;
	cin >> n;
	
	if(n <= 1)
	{
		cout << "Not prime" << endl;
		return 0;
	}

	bool isPrime = true;
	double sqrtFromNumberToCheck = sqrt(n);
	for (int i = 2; i <= sqrtFromNumberToCheck; i++)
	{
		if (n % i == 0)
		{
			isPrime = false; 
			break;
		}
	}
	if(isPrime)
		cout << "Prime";
	else
		cout << "Not prime";
}
