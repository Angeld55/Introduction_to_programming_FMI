#include <iostream>
using namespace std;

bool validationOfANumber(int number, int n, int& countOfZeros) {
	while (number != 0) {
		int digit = number % 10;
		if (digit == 1) {
			n--;
			number = number / 10;
			continue;
		}
		else if (digit == 0) {
			n--;
			countOfZeros++;
			number = number / 10;
			continue;
		}

		return false;
	}

	countOfZeros += n;
	return (n >= 0);
}

bool validationOfTwoNumbers(int first, int second, int n) {
	int zerosInFirst = 0, zerosInSecond = 0;
	bool okFirst = validationOfANumber(first, n, zerosInFirst);
	bool okSecond = validationOfANumber(second, n, zerosInSecond);

	return okFirst && okSecond && (zerosInFirst == zerosInSecond);
}

int counterOfMissmatchedZeros(int first, int second, int n) {
	int result = 0;
	while (n != 0) {
		int lastDigitOfFirst = first % 10, lastDigitOfSecond = second % 10;

		if (!lastDigitOfFirst) {
			if (lastDigitOfFirst != lastDigitOfSecond)
				result++;
		}

		first = first / 10;
		second = second / 10;
		n--;
	}

	return result;
}

int countOfSwaps() {
	int n;
	cin >> n;
	int first, second;
	cin >> first >> second;

	bool okay = validationOfTwoNumbers(first, second, n);

	if (okay) {
		return counterOfMissmatchedZeros(first, second, n);
    }
	return -1;
}

int main() {

}