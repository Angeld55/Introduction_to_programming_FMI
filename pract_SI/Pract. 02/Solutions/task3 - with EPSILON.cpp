#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double num1, num2;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	if (fabs(num1 - num2) <= DBL_EPSILON * fabs(num1))
	{
		cout << "Numbers must be different!\n";
		return 1;
	}

	cout << (num1 > num2 ? "First"  : "Second") << " is the greater number!\n";

	return 0;
}