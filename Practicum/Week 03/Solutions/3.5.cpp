#include <iostream>

int main(){
   	int a, b;
	std::cin >> a >> b;
	if (b < a) {
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a; i < b; i++)
	{
		bool isPrime = true;
		double sqrtOfI = sqrt(i);
		for (int j = 2; j <= sqrtOfI; j++)
		{
			if (i % j == 0) {
				isPrime = false;
				break;
			}

		}
		if (isPrime)
			std::cout << i << " ";
	}
}