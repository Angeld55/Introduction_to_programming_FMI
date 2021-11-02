#include <iostream>

int main()
{
	// Input: 123  
	//				countDigits = 3
	//				digitsAtEachEnd = (3 / 2) + (3 % 2 - 1) = 1 + (1 - 1) = 1
	//				digitsToRemove = 1
	//				temp1 = 10 * 10 = 100
	//				temp2 = 10 = 10
	//				result = (123 / 100) * 10 + 123 % 10 =
	//					   = 1*10 + 3 = 13
	// Output: 13, 14

	// Input: 123456
	//				countDigits = 6
	//				digitsAtEachEnd = (6 / 2) + (6 % 2 - 1) = 3 + (0 - 1) = 2
	//				digitsToRemove = 2
	//				temp1 = 10*10*10*10 = 10000
	//				temp2 = 10 * 10 = 100
	//				result = (123456 / 10000) * 100 + 123456 % 100 =
	//					   = 12*100 + 56 = 1200 + 54 = 1256
	// Output: 1256, 1257

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
	int digitsAtEachEnd = (countDigits / 2) + (countDigits % 2 - 1);

	// how many digits we will remove
	// even number -> 2, odd number -> 1
	int digitsToRemove = (countDigits % 2 == 0) ? 2 : 1;

	// zero value for product
	int temp1 = 1;
	while ((countDigits - digitsAtEachEnd) != 0)
	{
		temp1 *= 10;
		countDigits--;
	}

	int temp2 = 1;
	while (digitsAtEachEnd != 0)
	{
		temp2 *= 10;
		digitsAtEachEnd--;
	}

	int result = (number / temp1) * temp2 + number % temp2;
	std::cout << result << std::endl;
	std::cout << ++result << std::endl;

	return 0;
}