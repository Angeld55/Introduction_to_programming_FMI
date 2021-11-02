#include <iostream>

int main()
{
	int number1, number2;
	std::cout << "Enter two numbers: ";
	std::cin >> number1 >> number2;

	int min = (number1 < number2) ? number1 : number2;

	std::cout << "All common divisors of " << number1 << " and " << number2 << " are: ";
	for (size_t i = min; i >= 1; --i)
	{
		if (number1 % i == 0 && number2 % i == 0)
		{
			std::cout << i << " ";
		}
	}

	return 0;
}