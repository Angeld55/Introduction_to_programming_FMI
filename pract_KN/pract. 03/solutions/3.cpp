#include<iostream>

int main() {
	int numberOfDigits = 0;
	std::cin >> numberOfDigits;

	int digit = 0;
	int result = 0;
	for (int i = 0; i < numberOfDigits; i++) {
		int powerOfTen = 1;
		for (int j = i; j < numberOfDigits - 1; j++) {
			powerOfTen = powerOfTen * 10;
		}
		std::cin >> digit;
		result = result + digit * powerOfTen;
	}
	std::cout << result;
}
	/*
	  Имаме вход: 3
	  1 2 3
	  Реално числото 123 е 100 + 20 + 3, което може да се представи като:
	  1*10^2 + 2*10^1 + 3*10^0 (десет на нулева е единица)

	  for (int j = i; j < numberOfDigits - 1; j++) {
			powerOfTen = powerOfTen * 10;
	  } 
	  --> този цикъл вдига числото powerOfTen на желаната от нас степен на десет. Без проблем бихме могли да използваме и функцията pow(10, _);
	  След това, въвеждаме числото и го умножаваме по намерената вече степен на десятката.

	  12345 = 1*10000 + 2*1000 + 3*100 + 4*10 + 5*1 = 1*10^4 + 2*10^3 + 3*10^2 + 4*10^1 + 5*10^0

	*/
