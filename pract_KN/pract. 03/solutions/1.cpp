#include<iostream>

int main() {
	int number = 0;
	std::cin >> number;

	int rootOfNumber = sqrt(number);
	bool prime = true;

	for (int i = 2; i <= rootOfNumber; i++) {
		if (number % i == 0) {
			prime = false;
			break;
		}
	}

	if (prime) {
		std::cout << "The number is prime!";
	}
	else {
		std::cout << "The number is not prime!";
	}
}
	/*
	Число е просто тогава и само тогава когато е естествено число, по - голямо от единица, и се дели само на себе си и на единица.
	Лесен начин да проверим дали число е просто е да обходим всички числа от 2 до корена на числото включително и да проверим дали са делители.
	Ако намерим дори един делител, отбелязваме, че числото вече не е просто (в булевата променлива prime) и приклчваме цикъла.
	
	Също така изнасяме коренът на числото в отделна променлива. Защо?	
	*/
