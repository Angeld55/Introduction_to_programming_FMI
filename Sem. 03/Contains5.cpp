#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	bool foundFive = false;
	while (n != 0)
	{
		int lastDigit = n % 10;
		if (lastDigit == 5)
		{
			foundFive = true;
			break;
		}
		n /= 10;
	}
	
	if (foundFive)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
	

}