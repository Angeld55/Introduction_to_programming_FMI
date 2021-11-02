#include <iostream>

int main()
{
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	// finds the count of digits in our number
	int countDigits = 0;
	int copyNumber = number;
	while (copyNumber != 0)
	{
		copyNumber /= 10;
		countDigits++;
	}

	// how many digits we will have at each end
	int digitsAtEachEnd = (countDigits / 2) + (countDigits % 2 - 1);   // if we have 123456 -> digitsAtEachEnd = (6 / 2) + (6 % 2 - 1) = 3 + (0 - 1) = 2

	// how many digits we will remove
	int digitsToRemove = (countDigits % 2 == 0) ? 2 : 1;     // even number -> 2, odd number -> 1

	// zero value for product
	int toTakeTheFirstDigits = 1;
	while ((countDigits - digitsAtEachEnd) != 0)
	{
		toTakeTheFirstDigits *= 10;
		countDigits--;
	}

	int toTakeTheLastDigits = 1;
	while (digitsAtEachEnd != 0)
	{
		toTakeTheLastDigits *= 10;
		digitsAtEachEnd--;
	}

	int result = (number / toTakeTheFirstDigits) * toTakeTheLastDigits + number % toTakeTheLastDigits;   // result = (123456 / 10000) * 100 + 123456 % 100 =
																										 //        = 12*100 + 56 = 1200 + 54 = 1256
	std::cout << result << std::endl;     // 1256
	std::cout << ++result << std::endl;   // 1257

	return 0;
}