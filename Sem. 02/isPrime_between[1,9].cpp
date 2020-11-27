
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	switch (num)
	{
	case 2:
	case 3:
	case 5:
	case 7:cout << "Prime" << endl; break;

	case 1:
	case 4:
	case 6:
	case 8:
	case 9:cout << "Not a prime" << endl; break;

	default: cout << "The number is not between 1 and 10" << endl; break;
	}

}