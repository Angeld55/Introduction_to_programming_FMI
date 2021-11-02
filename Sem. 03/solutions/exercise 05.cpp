#include <iostream>

int main()
{
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	if (number <= 0)
	{
		std::cout << "The number isn't a power of two!" << std::endl;
	}

	//    100        1000
	// &  011	  &  0111
	//    000		 0000
	if ((number & (number - 1)) == 0)
	{
		std::cout << "The number is a power of two!" << std::endl;
	}
	else
	{
		std::cout << "The number isn't a power of two!" << std::endl;
	}

	return 0;
}