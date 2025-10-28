#include <iostream>

int main(){
   	int a, b;
	std::cin >> a >> b;
	int min = a > b ? b : a;
	for (int i = min; i > 0; i--)
	{
		if (b%i == 0 && a%i ==0)
			std::cout << i << " ";
	}
}