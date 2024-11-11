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

unsigned absN(int n) {
	if (n < 0) {
		return -n;
    }
	return n;
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

int getDigitOnPosition(int number, unsigned position) {
	unsigned len = getLength(number);
	if (position > len) {
		return -1;
    }
	//We convert the number to possitive because if we have (-123, 1) the program will return -1
	number = absN(number);

	unsigned whereTo = len - position;
	for (unsigned i = 0; i < whereTo; i++)
		number = number / 10;

	return number % 10;
}

//This solution could be optimised by not using getDigitOnPosition
void swapDigitsOnPos(int& n, int& m, int index) {
	unsigned lenN = getLength(n), lenM = getLength(m);
	if (index >= lenN || index >= lenM)
		return;

	unsigned digitN = getDigitOnPosition(n, index), digitM = getDigitOnPosition(m, index);
	unsigned cutterN = power(10, lenN - index), cutterM = power(10, lenM - index);
	unsigned remainderN = n % cutterN, remainderM = m % cutterM;

	n = n / (cutterN * 10);
	m = m / (cutterM * 10);

	n = n * 10 + digitM;
	m = m * 10 + digitN;

	n = n * cutterN + remainderN;
	m = m * cutterM + remainderM;
}

int main() {

}