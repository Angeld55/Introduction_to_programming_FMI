#include <iostream>
using namespace std;

//Задача: Въвежда се число между 1 и 10. Отпечатайте дали е просто.

int main()
{
	int number;
	cin >> number;
	
	switch (number)
	{
		case 2:
		case 3:
		case 5:
		case 7: cout << "Prime!" << endl; break;
		case 1:
		case 4:
		case 6:
		case 8:
		case 9: cout << "Not prime" << endl; break;
		default: cout << "Invalid input!" << endl; break;
	}
	
}
