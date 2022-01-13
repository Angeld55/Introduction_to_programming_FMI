#include<iostream>

size_t factRec(size_t number) {
	if (number == 0)
		return 1;
	return number * factRec(number - 1);
}

size_t powerRec(size_t number, size_t power) {
	if (power == 0)
		return 1;
	return number * powerRec(number, power - 1);
}

size_t sumOfDigitsRec(size_t number) {
	if (number == 0)
		return 0;
	return number % 10 + sumOfDigitsRec(number / 10);
}

size_t multRec(size_t firstNumber, size_t secondNumber) {
	if (secondNumber == 0)
		return 0;
	return firstNumber + multRec(firstNumber, secondNumber - 1);
}

size_t countDigits(size_t number) {
	if (number < 10)
		return 1;
	return 1 + countDigits(number / 10);
}

size_t flipNumber(size_t number) {
	if (number < 10)
		return number;
	
	int numberOfDigits = countDigits(number);

	return (number % 10) * powerRec(10, numberOfDigits - 1) + flipNumber(number / 10);
}

// flipNumber(123)
// 123 > 10 -> return (123 % 10) * 10 ^ 2 + flipNumber(12)

// flipNumber(12)
// 12 > 10 -> return (12 % 10) * 10 ^ 1 + flipNumber(1)

// flipNumber(1)
// 1 < 10 -> return 1;

// flipNumber(1) returned 1 => flipNumber(12) returns (2 * 20 + 1 = 21)
// flipNumber 12 returned 21 => flipNumber(123) returns (3 * 100 + 21 = 321)

bool primeRec(int number, int border = 2) {
	if (border * border > number)
		return true;
	return number % border && primeRec(number, border + 1);
}

size_t toBinary(size_t number) {
	if (number == 0)
		return number;
	return number % 2 + 10 * toBinary(number / 2);
}

// More about binary systems: https://github.com/Angeld55/Introduction_to_programming_FMI/tree/main/Sem.%2007

void printBooleanVectorsRec(int n, int* temp, const int length) {
	if (n == 0) {
		for (int i = 0; i < length; i++)
			std::cout << temp[i];
		std::cout << std::endl;
		return;
	}

	temp[n - 1] = 0;
	printBooleanVectorsRec(n - 1, temp, length);
	temp[n - 1] = 1;
	printBooleanVectorsRec(n - 1, temp, length);
}

void printBooleanVectors(int n) {
	int* temp = new int[n];
	printBooleanVectorsRec(n, temp, n);
	delete[] temp;
}

int main() {

}