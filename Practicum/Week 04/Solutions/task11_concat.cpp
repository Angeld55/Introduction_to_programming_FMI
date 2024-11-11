#include <iostream>
using namespace std;

int power(int base, unsigned int exponent) {
	int result = 1;

	if (!base)
		return base;

	if (!exponent)
		return exponent;

	for (unsigned i = 0; i < exponent; i++)
		result = result * base;

	return result;
}

unsigned getLength(int number) {
	unsigned result = 0;
	if (!number) {
		return ++result;
    }
	while (number != 0) {
		++result;
		number = number / 10;
	}
	return result;
}

unsigned concat(unsigned first, unsigned second) {
	//Here we take advantage of the fact that the function takes 2 unsigned numbers and we don't need to look after corner cases
	first = first * power(10, getLength(second));
	return first + second;
}

int main() {

}