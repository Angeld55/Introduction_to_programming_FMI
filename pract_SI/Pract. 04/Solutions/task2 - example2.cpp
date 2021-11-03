#include <iostream>

bool isEven(int num) {
    return !(num % 2);
}

int main() 
{
    int num;
    std::cin >> num;
	
	if (isEven(num))
		std::cout << "Even";
	else
		std::cout << "Odd";
    return 0;
}