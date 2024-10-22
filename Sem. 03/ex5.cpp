#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{

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
