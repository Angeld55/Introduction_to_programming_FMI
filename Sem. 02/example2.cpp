#include <iostream>
using namespace std;

Задача: Въвежда се число между 1 и 10. Отпечатайте дали е просто.

int main()
{
	int number;
	cin >> number;
	
	if (number < 1 || number > 10)
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
