#include <iostream>
using namespace std;

int main()
{
	unsigned int number = 0;
	cin >> number;

	switch (number)
	{
	case 1: cout << 1 << ' ';
	case 3: cout << 3 << ' ';
	case 5: cout << 5 << ' ';
	case 7: cout << 7 << ' ';
	case 9: cout << 9 << ' ';
	case 11: 
		cout << 11 << ' '; 
		break;

	case 0: cout << 0 << ' ';
	case 2: cout << 2 << ' ';
	case 4: cout << 4 << ' ';
	case 6: cout << 6 << ' ';
	case 8: cout << 8 << ' ';
	case 10: cout << 10 << ' ';
	case 12:
		cout << 12 << ' ';
		break;

	default:
		cout << "Invalid number";
		break;
	}
}