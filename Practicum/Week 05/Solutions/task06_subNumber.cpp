#include <iostream>

using namespace std;

unsigned getLength(int number) {
	unsigned result = 0;
	if (!number)
		return ++result;

	while (number != 0) {
		++result;
		number = number / 10;
	}
	return result;
}

int power(int base, unsigned power) {
	int result = 1;
	for (unsigned i = 0; i < power; ++i) {
		result *= base;
	}
	return result;
}

void subNumber(int& n, unsigned i, unsigned j) {
	unsigned len = getLength(n);

	if (j > len)
		return;

	unsigned iterations = len - i + 1, whenToStartSaving = len - j;
	unsigned sub = 0;
	for (int i = 1; i <= iterations; ++i) {
		if (i > whenToStartSaving) {
			int removedNum = n % 10;
			n /= 10;

			//Could be optimised easily by not calling the Power function, but to save the power of 10
			removedNum *= power(10, i - whenToStartSaving - 1);
			sub += removedNum;
		}
		else
			n /= 10;
	}
	n = sub;
}

void subNumberOptimized(int& n, unsigned i, unsigned j) {
	unsigned len = getLength(n);

	if (j > len)
		return;

	unsigned iterations = len - i + 1, whenToStartSaving = len - j, power = 1;
	unsigned sub = 0;
	for (int i = 1; i <= iterations; ++i) {
		if (i > whenToStartSaving) {
			int removedNum = n % 10;
			n /= 10;

			removedNum *= power;
			power *= 10;
			sub += removedNum;
		}
		else
			n /= 10;
	}
	n = sub;
}


int main() {
	int n = 1234567;
	subNumberOptimized(n, 2, 5);
	cout << n;
}