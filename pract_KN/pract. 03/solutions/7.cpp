#include<iostream>

int main() {
	int number = 0;
	std::cin >> number;

	if (number % 2 == 0) {
		++number;
	}

	for (int i = 0; i <= number; i += 2) {
		for (int j = 0; j < i; j += 2) {
			std::cout << " ";
		}

		for (int j = 0; j < number - i; j++) {
			std::cout << "*";
		}
		//for (int j = 0; j < i; j++) {
			//std::cout << " ";
		//}
		//std::cout << "--Now I print " << i / 2 << " blank spaces and " << number - i << " * symbols. Now i keep printing...";
		std::cout << std::endl;
	}

	for (int i = number - 1; i >= 0; i -= 2) {
		for (int j = 0; j < i; j += 2) {
			std::cout << " ";
		}

		for (int j = 0; j < number - i; j++) {
			std::cout << "*";
		}
		//for (int j = 0; j < i; j++) {
			//std::cout << " ";
		//}
		//std::cout << "--Now I print " << i / 2 << " blank spaces and " << number - i << " * symbols. Now i keep printing...";
		std::cout << std::endl;
	}
}
	/*
		Задачата може да се сведе до две по - прости задачи. До принтиране на триъгълник и същия триъгълнк наобратно.
		Задачата за триъгълникът пък може да се сведе до просто принтиране на правилната последователност от 
		разстояния и звездички.
		ако входа е 15 имаме (разстояния-звездички)
		0-15
		1-13
		2-11
		...

		може да махнете коментарите което ще извежда колко празни пространства и звездички програмата извежда всяка стъпка
	*/
