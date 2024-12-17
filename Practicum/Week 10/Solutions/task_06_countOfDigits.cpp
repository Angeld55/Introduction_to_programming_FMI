#include <iostream>
using namespace std;

const int DIGITS = 10;

void fillIntegerWithZeros(int* array, int size) {
	for (int i = 0; i < size; i++)
		array[i] = 0;
}

int convertCharToInt(char ch) {
	return  ch - '0';
}

char convertIntToChar(int num) {
	return num + '0';
}

int reverseNumber(int number) {
	int res = 0;
	while (number != 0) {
		res = 10 * res + (number % 10);
		number = number / 10;
	}
	return res;
}

void digitOccurrences(const char* str, char* result) {
	if (!str || !result) {
		return;
    }

	int digitsCount[DIGITS];
	fillIntegerWithZeros(digitsCount, DIGITS);

	while (*str) {
		digitsCount[convertCharToInt(*str)]++;
		str++;
	}

	int indexToFill = 0;
	for (int i = 0; i < DIGITS; i++) {
		int reversedNum = reverseNumber(digitsCount[i]);

		do {
			result[indexToFill] = convertIntToChar(reversedNum % 10);
			reversedNum = reversedNum / 10;
			indexToFill++;
		} while (reversedNum != 0);

		result[indexToFill++] = 'x';
		result[indexToFill++] = convertIntToChar(i);
		result[indexToFill++] = ',';
	}
    
	result[indexToFill] = '\0';
}

int main() {

}
