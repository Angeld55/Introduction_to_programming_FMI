#include <iostream>
using namespace std;


int main()
{
	unsigned int n;
	cin >> n;

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
	cout << isPrime << endl;
}
