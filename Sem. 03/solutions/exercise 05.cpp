#include <iostream>

int main()
{
	unsigned number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	
	while (number % 2 == 0)
	{
		number /= 2;
	}

	if (number == 1)
	{
		std::cout << "The number is power of 2!" << std::endl;
	}
	else
	{
		std::cout << "The number is not power of 2!" << std::endl;
	}

	return 0;
}