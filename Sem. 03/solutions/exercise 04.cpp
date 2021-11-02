#include <iostream>

int main()
{
	int a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;

	std::cout << "All prime number in [" << a << "," << b << "] are: ";
	for (size_t i = a; i <= b; i++)
	{
		bool isPrime = true;
		double temp = sqrt(i);
		for (size_t j = 2; j < temp; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			std::cout << i << " ";
		}
	}

	return 0;
}