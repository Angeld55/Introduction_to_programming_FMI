#include <iostream>
#include <cmath>

using namespace std;

//Function to check whether a number is prime
bool isPrime(int number)
{
	int size = sqrt(number);
	                         

	for (int i = 2; i <= size; i++)
	{
		if (number % i == 0)
			return false;
	}

	return true;
}

//Print all prime numbers that are smaller than N
void printAllPrimeToNumber(int number) //Interval [1 ; N]
{
	std::cout << "1" << ", 2";

	for (int i = 3; i <= number; i += 2)
	{
		if (isPrime(i))
			std::cout << ", " << i;
	}

	std::cout << "." << std::endl;
}

//PrimeFactorization 
void PrimeFactor(int number)
{
	for (int i = 2; i <= number; i++)
	{
		if (isPrime(i) && number % i == 0)
		{
			if (i == number) //last step, no space
				std::cout << i;
			else
				std::cout << i << " ";

			number /= i;
			i--;
		}
	}
	std::cout << std::endl;
}

//Function whether the number N can be expressed as a sum of two prime numbers
bool checkSumOfTwoPrimes(int number,int &primeOfNumber)
{
	int size = number / 2; //36 = 7 + 29, 16 = 3 + 13 , 36 = 5 + 31
	for (int i = 2;i <= size; i++)
	{
		//16 = 3 + x , x = 16 - 3 , x = 13 PRIME
		if (isPrime(i) && isPrime(number - i))
		{
			primeOfNumber = i;
			return true; 
		}
	}
	return false;
}

int main()
{
	int number;
	std::cin >> number;

	if (isPrime(number))
		std::cout << number << " is prime!" << std::endl;
	else
		std::cout << number << " is composite number!" << std::endl;

	std::cout << std::endl << "Prime numbers up to " << number << " are: ";
	printAllPrimeToNumber(number);

	std::cout << "Factoring of: " << number << " is: ";
	PrimeFactor(number);

	int primeOfNumber;
	if (checkSumOfTwoPrimes(number, primeOfNumber))
		std::cout << primeOfNumber << " + " << number - primeOfNumber << std::endl;
	else
		std::cout << "Error!" << std::endl;

  


	return 0;
}
