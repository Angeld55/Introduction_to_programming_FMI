#include <iostream>


//функция, която обръща число рекурсивно.

size_t reverse(size_t n, size_t mult)
{
	if (n <= 9)
		return n;

	int lastDigit = n % 10;
	return mult * lastDigit + reverse(n / 10, mult/10);
}

size_t reverse_wrapper(size_t n)
{
	int mult = 1;
	int copyN = n;
	while (copyN != 0)
	{
		mult *= 10;
		copyN /= 10;
	}

	return reverse(n, mult / 10);
}
int main()
{
	std::cout << reverse_wrapper(1234);
}
