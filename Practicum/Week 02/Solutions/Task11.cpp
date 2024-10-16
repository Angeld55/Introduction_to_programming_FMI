#include <iostream>
using namespace std;

int main()
{
	unsigned int num = 0;
	cin >> num;

	unsigned int firstNumber = num / 1000 % 10 * 10 + num % 10;
	unsigned int secondSumber = num / 100 % 10 * 10 + num / 10 % 10;

	cout << firstNumber;

	if (firstNumber < secondSumber)
	{
		cout << " < ";
	}
	else if (firstNumber > secondSumber)
	{
		cout << " > ";
	}
	else
	{
		cout << " = ";
	}

	cout << secondSumber;

}