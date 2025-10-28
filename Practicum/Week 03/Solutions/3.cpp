#include <iostream>

int main(){
   	unsigned n;
	std::cin >> n;
	if (n <= 1)
		std::cout << "Not prime";
	else {
		bool isPrime = true;
		double sqrtOfN = sqrt(n);
		for (size_t i = 2; i <= sqrtOfN; i++)
		{
			if (n % i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			std::cout << "Prime";
		else
			std::cout << "Not prime";
	}
}