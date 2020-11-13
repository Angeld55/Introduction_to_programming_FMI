#include <iostream>
using namespace std;

int main()
{
	bool found0, found1, found2, found3, found4, found5, found6, found7, found8, found9;
	found0 = found1 = found2 = found3 = found4 = found5 = found6 = found7 = found8 = found9 = false;
	
	int n;
	cin >> n;

	bool foundDuplicate = false;
	while (!foundDuplicate && n != 0)
	{
		int lastDigit = n % 10;
		switch (lastDigit)
		{
		case 0: 
			if (found0)
			{
				foundDuplicate = true;

			}
			found0 = true;
			break;
		case 1:
			if (found1)
			{
				foundDuplicate = true;
			}
			found1 = true;
			break;
		case 2: 
			if (found2)
			{
				foundDuplicate = true;
			}
			found2 = true;
			break;
		case 3: 
			if (found3)
			{
				foundDuplicate = true;
			}
			found3 = true;
			break;
		case 4: 
			if (found4)
			{
				foundDuplicate = true;
			}
			found4 = true;
			break;
		case 5: 
			if (found5)
			{
				foundDuplicate = true;
			}
			found5 = true;
			break;
		case 6: 
			if (found6)
			{
				foundDuplicate = true;
			}
			found6 = true;
			break;
		case 7: 
			if (found7)
			{
				foundDuplicate = true;
			}
			found7 = true;
			break;
		case 8: 
			if (found8)
			{
				foundDuplicate = true;
			}
			found8 = true;
		case 9: 
			if (found9)
			{
				foundDuplicate = true;
			}
			found9 = true;
			break;
		}
		n /= 10;
	}

	cout << foundDuplicate;
}