#include <iostream>
using namespace std;

unsigned gcd(int n, int k) {
	if (n < k) {
		int temp = n;
		n = k;
		k = temp;
	}
	while (k != 0) {
		int mod = n % k;
		n = k;
		k = mod;
	}
	return n;
}

void simplify(int& numerator, int& denominator) {
	unsigned toSimplifyWith = gcd(numerator, denominator);
	if (toSimplifyWith == 1) {
		return;
    }
	numerator = numerator / toSimplifyWith;
	denominator = denominator / toSimplifyWith;
}

unsigned absN(int n) {
	if (n < 0) {
		return -n;
    }
	return n;
}

unsigned lcm(int n, int k) {
	if (n < 0) {
		n = absN(n);
    }
	if (k < 0) {
		k = absN(k);
    }
	return ((n * k) / gcd(n, k));
}

void sum(int firstNumerator, int firstDenominator, int secondNumerator, int secondDenominator, int& resultNumerator, int& resultDenominator) {
	resultNumerator = 0;
	resultDenominator = 1;
	simplify(firstNumerator, firstDenominator);
	simplify(secondNumerator, secondDenominator);

	resultDenominator = lcm(firstDenominator, secondDenominator);
	resultNumerator = (firstNumerator * (firstDenominator / resultDenominator)) + (secondNumerator * (secondDenominator / resultDenominator));
}

int main() {
    int numerator, denominator;
    cin >> numerator >> denominator;
    simplify(numerator, denominator);
    cout << numerator << "/" << denominator << endl;


    int num1_numerator, num1_denominator, num2_numerator, num2_denominator;
    cout << "Number 1: ";
    cin >> num1_numerator >> num1_denominator;
    cout << endl;
    cout << "Number 2: ";
    cin >> num2_numerator >> num2_denominator;

    int result_numerator, result_denominator;

    sum(num1_numerator, num1_denominator, num2_numerator, num2_denominator, result_numerator, result_denominator);

    cout << endl << "Result from plus operation: " << result_numerator << "/" << result_denominator;
}