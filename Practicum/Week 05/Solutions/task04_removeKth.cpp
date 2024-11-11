#include <iostream>
using namespace std;

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

int power(int base, unsigned int exponent) {
	int result = 1;
	if (!base) {
		return base;
    }
	if (!exponent) {
		return exponent;
    }
	for (unsigned i = 0; i < exponent; i++) {
		result = result * base;
    }
	return result;
}

unsigned int reverse(unsigned int n) {
	unsigned reversedNumber = 0;
	while (n != 0) {
		unsigned int lastDigit = n % 10;
		(reversedNumber *= 10) += lastDigit;
		n /= 10; //removes the last digit
	}
	return reversedNumber;
}


void removeAtIndex(int& n, int k) {
	int len = getLength(n);
	if (len < k) {
		return;
    }
	int whereTo = len - k;
	int remainder = 0;
	for (unsigned i = 0; i < whereTo; i++) {
		remainder = ((remainder * 10) + (n % 10));
		n = n / 10;
	}

	remainder = reverse(remainder);
	n = n / 10;
	n = (n * power(10, whereTo)) + remainder;
}

int main() {
    
}