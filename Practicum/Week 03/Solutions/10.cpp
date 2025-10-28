#include <iostream>

int main(){
    int n;
std::cin >> n;
if (n % 2 == 0 || n <= 0) {
	std::cout << "Моля, въведете нечетно естествено число";
}
else {
	int half = n / 2;
	for (int i = 0; i <= half; i++)
	{
		for (int j = 0; j < i; j++)		
			std::cout << " ";		
		for (int k = i; k < n - i; k++)
			std::cout << "*";

		std::cout << std::endl;
	}
	for (int i = half - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++)
			std::cout << " ";
		for (int k = i; k < n - i; k++)
			std::cout << "*";
		std::cout << std::endl;
	}
	
}
}