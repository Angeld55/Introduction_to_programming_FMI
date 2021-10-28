#include <iostream>

using namespace std;

int main()
{
	unsigned long long money; //assign money's interval
	cin >> money; //enter number of money

	cout << "Initial price: " << money << " = "; //Initial price output

	cout << money / 100 << "*100 + "; //output for 100
	money %= 100; //reduce the 100's

	cout << money / 50 << "*50 + "; //output for 50
	money %= 50; //reduce the 50's

	cout << money / 20 << "*20 + "; //output for 20
	money %= 20; //reduce the 20's

	cout << money / 10 << "*10 + "; //output for 10
	money %= 10; //reduce the 10's

	cout << money / 5 << "*5 + "; //output for 5
	money %= 5; //reduce the 5's

	cout << money / 2 << "*2 + "; //output for 2
	money %= 2; //reduce the 2's

	cout << money / 1 << "*1" << endl; //output for 1
	money %= 1; //reduce the 1's

	cout << "End of program" << endl; //end program
	return 0; //end program
}