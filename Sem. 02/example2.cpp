#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	if (number <= 0 || number > 10)
	{
		cout << "Invalid input!" << endl;
	}
	else
	{

		switch (number)
		{
		case 2:
		case 3:
		case 5:
		case 7: cout << "Prime!" << endl;
		default: cout << "Not a prime!" << endl;
			break;
		}
	}


}
