#include <iostream>
using namespace std;

int main()
{
	double firstOperand = 0, secondOperand = 0;
	char operation = '\0';

	cin >> firstOperand >> operation >> secondOperand;

	switch (operation)
	{
	case '+':
		cout << firstOperand + secondOperand;
		break;

	case '-':
		cout << firstOperand - secondOperand;
		break;

	case '*':
		cout << firstOperand * secondOperand;
		break;

	case '/':
		if (secondOperand == 0)
		{
			cout << "Cannot divide by 0";
			break;
		}

		cout << firstOperand / secondOperand;
		break;
	}
}