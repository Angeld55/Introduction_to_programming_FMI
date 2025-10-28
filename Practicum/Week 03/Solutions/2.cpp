#include <iostream>

int main(){
   	int a, b;
	std::cin >> a >> b;
	if (b > a) {
		int temp = a;
		a = b;
		b = temp;
	}
	while (b != 0) {
		int mod = a % b;
		a = b;
		b = mod;
	}
	std::cout << a << std::endl;
}