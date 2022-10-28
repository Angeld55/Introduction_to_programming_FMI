#include <iostream>
using namespace std;

int main()
{
	do
	{
		unsigned number = 0, sumOfDigits = 0;
		cin >> number;
		unsigned copyOfNumber = number;
		
		while (copyOfNumber != 0)
		{
			sumOfDigits += (copyOfNumber % 10);
			copyOfNumber /= 10;
		}

		if ((number + sumOfDigits) % 10 == 0)
		{
			cout << "Number " << number << " is good!\n";
			break;
		}
		else
			cout << "Number " << number << " is bad!\n";

	} while (true);
}