#include <iostream>

using namespace std;

int main()
{
	int n, k;

	cin >> n >> k;

	if (n < k) //swap
	{
		int temp = n;
		n = k;
		k = temp;
		
	}
	int devider = k;
	bool foundSolution = false;


	while (!foundSolution)
	{
		if (n % devider == 0 && k % devider == 0)
			foundSolution = true;
		else
			devider--;
		
		
	}
	cout << devider;

	

}