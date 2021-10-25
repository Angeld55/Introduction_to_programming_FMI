#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;

	bool isPrime = true;
	double temp = sqrt(n);
	for (int i = 2; i <= temp; i++)
	{
		if (n % i == 0)
		{
			isPrime = false; 
			break;
		}
	}
	cout << isPrime << endl;;
}
	













}
