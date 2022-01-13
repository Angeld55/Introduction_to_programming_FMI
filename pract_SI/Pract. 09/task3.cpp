#include <iostream>

void reversedNumber(int n)
{
	if(n == 0)
		return;
	
	std::cout << n % 10;
    return reversedNumber(n / 10);
}
